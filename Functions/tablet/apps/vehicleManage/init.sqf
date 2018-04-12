#include "..\..\BCS_idc_defines.hpp"

params ["_display"];

[_display, IDC_header1, "Sholef"] call itc_land_tablet_utils_fnc_setText;
[_display, IDC_header2, "Vehicle Systems"] call itc_land_tablet_utils_fnc_setText;

[_display, IDC_sidebar_button1, "CFCS"] call itc_land_tablet_utils_fnc_setText;
[_display, IDC_sidebar_button2, "Status"] call itc_land_tablet_utils_fnc_setText;
[_display, IDC_sidebar_button3, 1] call itc_land_tablet_utils_fnc_setFade;
[_display, IDC_sidebar_button4, 1] call itc_land_tablet_utils_fnc_setFade;

_vehicle = (vehicle player);
if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
};
if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions_index"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];
};

"fcs"
