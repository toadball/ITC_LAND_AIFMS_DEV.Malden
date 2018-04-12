params ["_display","_vehicle", "_tabletClass"];

//if(!(_vehicle isKindOf "Man")) then {
  //_tabletClass = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "itc_land_tablet")  call BIS_fnc_getCfgData;
//};
//_vehicle setVariable ["apps", (configFile >> _tabletClass >> "apps")  call BIS_fnc_getCfgData];
_vehicle = vehicle player;
_vehicle setVariable ["apps", ["vehicle"]];
_vehicle setVariable ["app", (_vehicle getVariable "apps") # 0];

//_display = createDialog "itc_land_tablet";

[{
  _this select 0 params ["_display","_vehicle", "_app", "_page"];
  if(!dialog || !alive player) then { //ensure player is alive and dialog is open
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };

  //[_display] call itc_land_tablet_fnc_render;

  if(_vehicle getVariable "app" != _app) then { //check if app switched
    _app = _vehicle getVariable "app"; //switch the app variable
    _newPage = [_display] call call compile format["itc_land_tablet_fnc_%1_init", _app]; //initialize the new app
    _vehicle setVariable ["page", _newPage];
  };
  [_display] call call compile format["itc_land_tablet_fnc_%1_render", _app]; //render the app

  if(_vehicle getVariable "page" != _page) then { //check if page switched
    _page = _vehicle getVariable "page"; //switch the app variable
    [_display] call call compile format["itc_land_tablet_fnc_%1_clear", _app]; //clear app pages
    [_display] call call compile format["itc_land_tablet_fnc_%1_%2_init", _app, _page]; //initialise the new page
  };
  [_display] call call compile format["itc_land_tablet_fnc_%1_%2_render", _app, _page]; //render the page

  (_this select 0) set [2, _app];
  (_this select 0) set [3, _page];
}, 0, [_display, _vehicle, "", ""]] call CBA_fnc_addPerFrameHandler;
