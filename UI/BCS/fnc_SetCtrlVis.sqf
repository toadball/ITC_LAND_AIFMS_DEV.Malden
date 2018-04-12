//fnc_SetCtrlVis - Hide a set of controls used in the UI
#include "BCS_idc_defines.hpp"

params [	
	["_mode", -1, [1]],
	["_idcArray", [], [[]]]
];

diag_log str _mode;

diag_log str _idcArray;


switch (_mode) do {
	case 0: {
		//hide  _idcArray contents
		{			
			ctrlShow [_x, false];
		} forEach _idcArray;		
	case 1: {
		//reveal  _idcArray contents
		{			
			ctrlShow [_x, true];
		} forEach _idcArray;		
	};
	default {
		//switch _idcArray contents from current state to oposite state
		{
			private _showState = ctrlVisible _x;
			ctrlShow [_x, !_showState];		
		} forEach _idcArray;
	};
};