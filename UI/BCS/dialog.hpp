#define POSXADJUST -0.04675
#define POSYADJUST -0.065
#define WSHADJUST 0.04
#define WSWADJUST 0.125
#include "BCS_idc_defines.hpp"

class ITC_ARTY_BCSDialog {
	idd = 32562;
	
	/*controlsBackground[] = {
		sidebar_background,
		workspace_background,
		header2,
		header1
	};
	controls[] = {
		bcs_settings_button,
		bty_setup_button,
		location_stores_button,
		ammo_stores_button,
		direct_fire_button,
		new_fire_mission_button,
		fire_mission_list
	};*/
	objects[] = {};
	//onLoad = "[_this] spawn SA_fnc_onGunnersDialogOpen";
	//onUnload = "SA_GunnersDialogOpen = false";
	class Controls {
		//Main Workspace	
		class sidebar_background: ITC_ARTY_RscText {
			idc = 15101;
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.247+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = (0.506 + WSHADJUST) * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {0.1,0.1,0.1,1};
			
		};
		class workspace_background: ITC_ARTY_RscText {
			idc = 15102;
			x = (0.396875+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.247+ POSYADJUST) * safezoneH + safezoneY;
			w = (0.299062 + WSWADJUST) * safezoneW;
			h = (0.506 + WSHADJUST) * safezoneH;
			colorBackground[] = {0.125,0.125,0.125,1};
			colorActive[] = {0.125,0.125,0.125,1};
			
		};
		class workspace_header_bar: ITC_ARTY_RscText {
			idc = 15103;
			x = (0.396875 + POSXADJUST) * safezoneW + safezoneX;
			y = (0.247 + POSYADJUST) * safezoneH + safezoneY;
			w = (0.299062 + WSWADJUST) * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {0.1,0.1,0.1,1};
			
		};	
		class workspace_header: ITC_ARTY_RscText
		{
			idc = 15104;
			text = "Workspace Header"; 
			x = (0.402031 + POSXADJUST) * safezoneW + safezoneX;
			y = 0.1825 * safezoneH + safezoneY;
			w = (0.299062 + WSWADJUST) * safezoneW;
			h = 0.044 * safezoneH;

			sizeEx = 1.5 * GUI_GRID_H;
		};		
		class header2: ITC_ARTY_RscText {
			idc = 15105;
			text = "ILS - AIFMS";
			x = (0.31+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.285+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;

			sizeEx = 1.25 * GUI_GRID_H;
			
		};
		class header1: ITC_ARTY_RscText {
			idc = 15106;
			text = "FDC SUITE";
			x = (0.31+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.26+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;

			sizeEx = 1.75 * GUI_GRID_H;
			
		};
		class bcs_settings_button: ITC_ARTY_RscButton {
			idc = 15108;
			text = "BCS Settings";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.313+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class bty_setup_button: ITC_ARTY_RscButton {
			idc = 15109;
			text = "BTY Setup";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.335+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class location_stores_button: ITC_ARTY_RscButton {
			idc = 15110;
			text = "Location Stores";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.357+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class ammo_stores_button: ITC_ARTY_RscButton {
			idc = 15111;
			text = "Ammo Stores";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.379+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class direct_fire_button: ITC_ARTY_RscButton {
			idc = 15112;
			text = "Direct Fire";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.401+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class new_fire_mission_button: ITC_ARTY_RscButton {
			idc = 15113;
			text = "New Fire Mission";
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.445+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.044 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0.1,0.1,0.1,0.9};

		};
		class fire_mission_list: ITC_ARTY_RscListbox {
			idc = 15114;
			x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
			y = (0.5+ POSYADJUST) * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.154 * safezoneH;
			colorBackground[] = {0,0,0,0.9};
			colorActive[] = {0,0,0,0.9};

		};		
		//BCS Settings Workspace
		//#include "BCSSettings_Workspace.hpp"
		//BTY Setup Workspace
		//#include "BTYSetup_Workspace.hpp"
		//LOC Stores Workspace
		#include "LOCStores_Workspace.hpp"		
		class screen_image: ITC_ARTY_RscPicture {
			idc = 15107;
			text = "seconddraft.paa";
			//text = "screen-night2.paa";
			h = 0.86*SafeZoneW;
			w = 0.64*SafeZoneW;
			x = 0.5-((0.64*SafeZoneW)/2);
			y = 0.5-((1.03*SafeZoneW)/2);
			style = ST_PICTURE;
		};		
		
	
	};
	
};