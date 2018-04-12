class ITC_ARTY_GunnersDialog {
	idd = 32562;
	
	controlsBackground[] = {};
	objects[] = {};
	onLoad = "[_this] spawn SA_fnc_onGunnersDialogOpen";
	onUnload = "SA_GunnersDialogOpen = false";
	
	class Controls {
		class background: SA_DialogTxt {
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.198 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};
		};
		class available_ammo_list: SA_RscListBox {
			idc = 12145;
			text = ""; 
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.198 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};
			onLBSelChanged = "_this call compile preprocessFileLineNumbers 'fnc_onSelectRound.sqf'";				
		};			
		class round_name: SA_DialogTxt {
			idc = 12146;
			text = "ROUND NAME"; 
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};				
		};
		class charge_number: SA_DialogTxt {
			idc = 12147;
			text = "CHARGE NUMBER"; 
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0};								
		};
		
		class chargebutton_label: SA_DialogTxt {
			text = "CHARGE"; 
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class ammoChargeDown: SA_RscButton {
			text = "-"; 
			x = 0.603125 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[-1]  call compile preprocessFileLineNumbers 'fnc_changeCharge.sqf'";					
		};
		class ammoChargeUp: SA_RscButton {
			text = "+"; 
			x = 0.659844 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[1]  call compile preprocessFileLineNumbers 'fnc_changeCharge.sqf'";				
		};
		class fuze_type: SA_DialogTxt {
			text = "Fuze: "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class ammoFuzeSelect: SA_RscComboBox {
			idc = 12148;
			text = "POINT DETONATE"; 
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			onLBSelChanged = "_this  call compile preprocessFileLineNumbers 'fnc_onSelectFuze.sqf'";				
		};
		class fuzeTime: SA_DialogTxt {
			idc = 12149;
			text = "Time: "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class fuzeTimeBox: SA_RscTextBox {
			idc = 12150;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorActive[] = {0,0,0,1};
		};
		class laserCode: SA_DialogTxt {
			idc = 12154;
			text = "Code:  "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class laserCodeBox: SA_RscTextBox {
			idc = 12055;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,1};
			colorActive[] = {0,0,0,1};
		};
		class loadButton: SA_RscButton {
			idc = 12153;
			text = "LOAD"; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {0.1,0.1,0.1,1};
			colorBackgroundDisabled[] = {0.1,0.1,0.1,0.25};
			
			action = "[] call compile preprocessFileLineNumbers 'fnc_load.sqf'";				
		};
		class fireButton: SA_RscButton {
			idc = 12152;
			text = "FIRE"; 
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
				colorText[] = {1,1,1,1};
				colorBackground[] = {0.7,0.1,0.1,0.25};
				colorBackgroundDisabled[] = {0.1,0.1,0.1,0.25};
				colorBackgroundActive[] = {0.5,0.1,0.1,0.25};

			action = "[] call compile preprocessFileLineNumbers 'fnc_fire.sqf'";				
		};
		class status: SA_DialogTxt {
			text = "Status: "; 
			x = 0.556719 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
		class statusText: SA_DialogTxt {
			idc = 12151;
			x = 0.582812 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.079 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
		};
	};
	
};



////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT START (by Toadball, v1.063, #Sabiqu)
////////////////////////////////////////////////////////

class background: SA_DialogTxt
{
	idc = 1000;
	x = 13.5 * GUI_GRID_W + GUI_GRID_X;
	y = 16 * GUI_GRID_H + GUI_GRID_Y;
	w = 24.5 * GUI_GRID_W;
	h = 9 * GUI_GRID_H;
	colorBackground[] = {0.1,0.1,0.1,0.5};
	colorActive[] = {0.1,0.1,0.1,0.5};
};
class round_name: SA_DialogTxt
{
	idc = 12146;

	text = "ROUND NAME"; //--- ToDo: Localize;
	x = 13.5 * GUI_GRID_W + GUI_GRID_X;
	y = 16 * GUI_GRID_H + GUI_GRID_Y;
	w = 17 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class charge_number: SA_DialogTxt
{
	idc = 12147;

	text = "CHARGE NUMBER"; //--- ToDo: Localize;
	x = 0.432969 * safezoneW + safezoneX;
	y = 0.599 * safezoneH + safezoneY;
	w = 0.175313 * safezoneW;
	h = 0.022 * safezoneH;
};
class chargebutton_label: SA_DialogTxt
{
	idc = 1004;
	text = "CHARGE"; //--- ToDo: Localize;
	x = 32.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class ammoChargeDown: SA_RscButton
{
	action = "[-1]	call compile preprocessFileLineNumbers 'fnc_changeCharge.sqf'";

	idc = 1005;
	text = "-"; //--- ToDo: Localize;
	x = 31 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 1 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class ammoChargeUp: SA_RscButton
{
	action = "[1]	call compile preprocessFileLineNumbers 'fnc_changeCharge.sqf'";

	idc = 1006;
	text = "+"; //--- ToDo: Localize;
	x = 36.5 * GUI_GRID_W + GUI_GRID_X;
	y = 17 * GUI_GRID_H + GUI_GRID_Y;
	w = 1 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class fuze_type: SA_DialogTxt
{
	idc = 1007;
	text = "Fuze: "; //--- ToDo: Localize;
	x = 14.5 * GUI_GRID_W + GUI_GRID_X;
	y = 19 * GUI_GRID_H + GUI_GRID_Y;
	w = 2.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class fuzeTime: SA_DialogTxt
{
	idc = 12149;

	text = "Time: "; //--- ToDo: Localize;
	x = 14.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 2.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class laserCode: SA_DialogTxt
{
	idc = 12154;

	text = "Code:  "; //--- ToDo: Localize;
	x = 14.5 * GUI_GRID_W + GUI_GRID_X;
	y = 22 * GUI_GRID_H + GUI_GRID_Y;
	w = 2.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class loadButton: SA_RscButton
{
	idc = 12153;
	colorBackgroundDisabled[] = {0.1,0.1,0.1,0.25};
	action = "[] call compile preprocessFileLineNumbers 'fnc_load.sqf'";

	text = "PREP AND LOAD"; //--- ToDo: Localize;
	x = 26.5 * GUI_GRID_W + GUI_GRID_X;
	y = 22 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0.1,0.1,0.1,1};
	colorActive[] = {0.1,0.1,0.1,1};
};
class fireButton: SA_RscButton
{
	idc = 12152;
	colorBackgroundDisabled[] = {0.1,0.1,0.1,0.25};
	colorBackgroundActive[] = {0.5,0.1,0.1,0.25};
	action = "[] call compile preprocessFileLineNumbers 'fnc_fire.sqf'";

	text = "FIRE"; //--- ToDo: Localize;
	x = 26.5 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorBackground[] = {0.7,0.1,0.1,0.25};
};
class status: SA_DialogTxt
{
	idc = 1015;
	text = "Status: "; //--- ToDo: Localize;
	x = 26.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20 * GUI_GRID_H + GUI_GRID_Y;
	w = 3.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class statusText: SA_DialogTxt
{
	idc = 12151;

	x = 29.5 * GUI_GRID_W + GUI_GRID_X;
	y = 20 * GUI_GRID_H + GUI_GRID_Y;
	w = 7.66061 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscListbox_1500: RscListbox
{
	idc = 1500;
	x = 0.314374 * safezoneW + safezoneX;
	y = 0.577 * safezoneH + safezoneY;
	w = 0.118594 * safezoneW;
	h = 0.198 * safezoneH;
	colorBackground[] = {0.1,0.1,0.1,0.5};
	colorActive[] = {0.1,0.1,0.1,0.5};
};
class RscCombo_2100: RscCombo
{
	idc = 2100;
	x = 0.469062 * safezoneW + safezoneX;
	y = 0.643 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class RscText_1001: RscText
{
	idc = 12154;

	text = "Count:  "; //--- ToDo: Localize;
	x = 14 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 3 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class fuzeTimeBox: RscEdit
{
	idc = 1400;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 20.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorActive[] = {1,1,1,1};
};
class RscEdit_1401: RscEdit
{
	idc = 1401;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 22 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorActive[] = {1,1,1,1};
};
class RscEdit_1402: RscEdit
{
	idc = 1402;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 23.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
	colorText[] = {1,1,1,1};
	colorBackground[] = {0,0,0,1};
	colorActive[] = {1,1,1,1};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
