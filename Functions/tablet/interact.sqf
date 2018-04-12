params ["_action"];
_vehicle = (vehicle player);

_app = _vehicle getVariable "app"; //switch the app variable
_page = [_action] call call compile format["itc_land_tablet_fnc_%1_interact", _app]; //initialize the new app
