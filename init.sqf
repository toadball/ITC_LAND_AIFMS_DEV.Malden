#include "btab.sqf";

_vehicle = (vehicle player);

_vehicle setVariable ["itc_land_bcs_stores",[]];
_vehicle setVariable ["itc_land_bcs_settings",[]];

_vehicle setVariable ["itc_land_bty_info",["Archer", "mortar_155mm_AMOS"]];
_vehicle setVariable ["itc_land_bty_guns",[]];
_vehicle setVariable ["itc_land_bty_ammo",[]];

_vehicle setVariable ["itc_land_bty_firemissions",[]];
