private ["_id","_return"];
_id = _this select 0;

{ 
	if((_x getVariable ["AIFMS_ID",""]) == _id) then { _return = _x;} else {}; 
} forEach vehicles;

_return;