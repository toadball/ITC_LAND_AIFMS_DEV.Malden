//fill UI combobox with current AIFMS IDs
private _units = _this select 0; //array of units to check for IDs

{
	lbAdd [1006,_x];
} forEach  _units;