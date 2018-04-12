//makeid.sqf
//Toadball 2016
//Creates a unique 4 character hex ID for use in AIFMS

private _hexArr = ["0","1","2","3","4","5","6","7","8","9","a","b","c","d","e","f"];
private _uniqueID = false;
private _newID = "";
while {!_uniqueID} do {
		_newID = "";
		for "_i" from 1 to 4 do {
		//wherein we create a 4 character hexadecimal string to serve as our ID
			private _charSel = _hexArr select ( floor( random (count _hexArr) ) );		
			 _newID = _newID + _charSel;
		};
		//check created ID against an array of currently used IDs to ensure it is unique.
		if (!( _newID in AIFMS_allCurrentIDs)) then {		
			AIFMS_allCurrentIDs pushBack _newID;
			_uniqueID = true;
		};
};
_newID;