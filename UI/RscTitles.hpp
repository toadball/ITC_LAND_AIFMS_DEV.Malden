class RscText;
class RscTitles {
    class ITC_ARTY_ALIGNMENT {
		idd = 19989;
		duration = 9999999;		
		movingEnable = 0;
		fadein = 0;
        fadeout = 0;
		onLoad = "[_this,1] spawn 'fnc_onSightLoad.sqf"; //add PFH to  display current alignment values
		onUnload = "[_this,0] spawn 'fnc_onSightLoad.sqf"; // remove alignment PFH
		controls[] = {
			background,
			ITC_CurQuad,
			ITC_CurDef,
			ITC_CurDir,
			ITC_CurQuadText,
			ITC_CurDefText,
			ITC_CurDirText
		};
		class background: RscText {
			idc = 14100;
			x = 0.412343 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.121 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,0.25};
		};
		class ITC_CurQuad: RscText {
			idc = 14101;
			text = "CE: "; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class ITC_CurDef: RscText {
			idc = 14102;
			text = "CD: "; //--- ToDo: Localize;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class ITC_CurDir: RscText {
			idc = 14103;
			text = "DIR: "; //--- ToDo: Localize;
			x = 0.412344 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,1,1,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class ITC_CurQuadText: RscText {
			idc = 14104;
			text = "6400"; //--- ToDo: Localize;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.687 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,0,0,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class ITC_CurDefText: RscText {
			idc = 14105;
			text = "6400"; //--- ToDo: Localize;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,0,0,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};
		class ITC_CurDirText: RscText {
			idc = 14106;
			text = "6400"; //--- ToDo: Localize;
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.753 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.055 * safezoneH;
			colorText[] = {1,0,0,1};
			sizeEx = 1.5 * GUI_GRID_H;
		};		
	};
};