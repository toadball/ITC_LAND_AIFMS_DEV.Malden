#include "tables\btab.sqf";


itc_land_tablet_fnc_open = compile preprocessFileLineNumbers "Functions\tablet\open.sqf";
itc_land_tablet_fnc_interact = compile preprocessFileLineNumbers "Functions\tablet\interact.sqf";

itc_land_tablet_fnc_vehicle_init = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\init.sqf";
itc_land_tablet_fnc_vehicle_clear = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\clear.sqf";
itc_land_tablet_fnc_vehicle_render = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\render.sqf";
itc_land_tablet_fnc_vehicle_interact = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\interact.sqf";

itc_land_tablet_fnc_vehicle_fcs_init = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\fcs\init.sqf";
itc_land_tablet_fnc_vehicle_fcs_render = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\fcs\render.sqf";
itc_land_tablet_fnc_vehicle_fcs_interact = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\fcs\interact.sqf";

itc_land_tablet_fnc_vehicle_status_init = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\status\init.sqf";
itc_land_tablet_fnc_vehicle_status_render = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\status\render.sqf";
itc_land_tablet_fnc_vehicle_status_interact = compile preprocessFileLineNumbers "Functions\tablet\apps\vehicleManage\status\interact.sqf";

itc_land_tablet_utils_fnc_setText = compile preprocessFileLineNumbers "Functions\tablet\util\setText.sqf";
itc_land_tablet_utils_fnc_setFade = compile preprocessFileLineNumbers "Functions\tablet\util\setFade.sqf";

_vehicle = (vehicle player);

_vehicle setVariable ["itc_land_bcs_stores",[]];
_vehicle setVariable ["itc_land_bcs_settings",[]];

_vehicle setVariable ["itc_land_bty_info",["Archer", "mortar_155mm_AMOS"]];
_vehicle setVariable ["itc_land_bty_guns",[]];
_vehicle setVariable ["itc_land_bty_ammo",[]];

_vehicle setVariable ["itc_land_bty_firemissions",[]];

itc_land_bcs_fnc_getAllSolutions = {
  params ["_gun", "_targetGrid", "_targetEl"];
  _pos = [_targetGrid, true] call ace_common_fnc_getMapPosFromGrid;
  _distance = [getPos _gun # 0, getPos _gun # 1] distance [_pos # 0, _pos # 1];
  _elevDiff = _targetEl - ((getPosASL _gun) # 2);

  _dir = getDir _gun / 360 * 6400;
  _relDir = (_gun getDir _pos) / 360 * 6400;
  _df = 3200 - (_relDir - _dir);


  _solutions = [];
  for "_i" from 0 to 4 step 1 do {
    _table = format["tables\%1_%2_LA.sqf", currentWeapon _gun, _i];
    _btab = []  call compile preProcessFile _table;
    _solution = [_btab, _distance, _elevDiff] call itc_land_fcs_fnc_atab;
    if(count _solution > 0) then {
      _solutions = _solutions + [[_i, _df] + _solution];
    };
    _table = format["tables\%1_%2_HA.sqf", currentWeapon _gun, _i];
    _btab = []  call compile preProcessFile _table;
    _solution = [_btab, _distance, _elevDiff] call itc_land_fcs_fnc_atab;
    if(count _solution > 0) then {
      _solutions = _solutions + [[_i, _df] + _solution];
    };
  };
  _solutions
};
