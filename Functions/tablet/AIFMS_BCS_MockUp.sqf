#include "defines.hpp"
#include "defines_idc.hpp"
_display = _this select 0;
_CT_LISTBOX = _display displayctrl IDC_Sidebar_ListBox1;
{
	_ctrl = _x;
	_fing = 0;
	for "_i" from 1 to 3 do {
		_fing = _fing + 1;
		_ctrl lbAdd format ["FM000%1",_fing];
		//_ctrl lbAdd gettext (_x >> "displayName");
		//_ctrl lbSetPicture [_foreachindex,gettext (_x >> "texture")];
		//_ctrl lbSetTooltip [_foreachindex,gettext (_x >> "displayName")];
	};
	//_ctrl lbsetcursel 0;
} foreach [
	_CT_LISTBOX
];

_CT_COMBO = _display displayctrl IDC_BCSsettings_ComboBox;
{
	_ctrl = _x;
		_ctrl lbAdd "Enabled";
		_ctrl lbAdd "Disabled";
		//_ctrl lbAdd gettext (_x >> "displayName");
		//_ctrl lbSetPicture [_foreachindex,gettext (_x >> "texture")];
		//_ctrl lbSetTooltip [_foreachindex,gettext (_x >> "displayName")];
		//lbCurSel _ctrl;

		_ctrl lbsetcursel 0;
} foreach [
	_CT_COMBO
];

/*{
 ctrlShow [_x,!(ctrlVisible _x)];
} forEach [15212,15222,15213,15214,15215,15216,15217,15218,15219,15220,15221];*/