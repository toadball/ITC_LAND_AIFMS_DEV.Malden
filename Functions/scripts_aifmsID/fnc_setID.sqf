private ["_unit","_assignedID"];
_unit = _this select 0;

_newID = [_unit] call compile preprocessFileLineNumbers "scripts_aifmsID\fnc_makeID.sqf";

//if unit already has an ID remove it from the current ID list.
AIFMS_allCurrentIDs = AIFMS_allCurrentIDs - [_unit getVariable "AIFMS_ID"];
_unit setVariable ["AIFMS_ID",_newID,true];

_assignedID = [_newID,_unit];
_assignedID;