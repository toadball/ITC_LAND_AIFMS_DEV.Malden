////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Toadball, v1.063, #Wogoxe)
////////////////////////////////////////////////////////

class sidebar_background: RscText
{
	idc = 1000;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.506 * safezoneH;
	colorBackground[] = {0.1,0.1,0.1,0.9};
	colorActive[] = {0.1,0.1,0.1,0.9};
};
class workspace_background: RscText
{
	idc = 1001;
	x = 0.396875 * safezoneW + safezoneX;
	y = 0.247 * safezoneH + safezoneY;
	w = 0.299062 * safezoneW;
	h = 0.506 * safezoneH;
	colorBackground[] = {0.2,0.2,0.2,0.9};
	colorActive[] = {0.2,0.2,0.2,0.9};
};
class header2: RscText
{
	idc = 1002;
	text = "AIFMS"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.28 * safezoneH + safezoneY;
	w = 0.04125 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {1,1,1,1};
	sizeEx = 1.25 * GUI_GRID_H;
};
class header1: RscText
{
	idc = 1003;
	text = "FDC SUITE"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.258 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorText[] = {1,1,1,1};
	sizeEx = 1.75 * GUI_GRID_H;
};
class bcs_settings_button: RscButton
{
	idc = 1600;
	text = "BCS Settings"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.313 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class bty_setup_button: RscButton
{
	idc = 1601;
	text = "BTY Setup"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.335 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class location_stores_button: RscButton
{
	idc = 1602;
	text = "Location Stores"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.357 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class ammo_stores_button: RscButton
{
	idc = 1603;
	text = "Ammo Stores"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.379 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class direct_fire_button: RscButton
{
	idc = 1604;
	text = "Direct Fire"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.401 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.022 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class new_fire_mission_button: RscButton
{
	idc = 1605;
	text = "New Fire Mission"; //--- ToDo: Localize;
	x = 0.304062 * safezoneW + safezoneX;
	y = 0.445 * safezoneH + safezoneY;
	w = 0.0928125 * safezoneW;
	h = 0.044 * safezoneH;
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
class fire_mission_list: RscListbox
{
	idc = 1500;
	x = 1 * GUI_GRID_W + GUI_GRID_X;
	y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 9 * GUI_GRID_W;
	h = 7 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,0.9};
	colorActive[] = {0,0,0,0.9};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
