#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3_Characters_F_Civil
	{
		addonRootClass="A3_Characters_F";
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Data_F",
			"A3_Weapons_F",
			"A3_UI_F",
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"asdg_jointrails",
			"hlcweapons_core",
			"hlcweapons_ar15"			
		};
		requiredVersion=0.1;
		units[]={
			"C_man_polo_2_Subway",
			"C_man_polo_2_Socceroos",
			"C_man_polo_2_Dkfc",
			"C_man_polo_2_F_Subby",
			"B_AOR2_F_AL"
		};
		weapons[]={};
	};	
	class A3_Weapons_F
	{
		weapons[]=
		{
			"RH_fn57_t_murk",
			"RH_fn57_t_iceman",
			"NovusCopHorn",
			"srifle_EBR_F_CITY",
			"U_C_Poloshirt_Socceroos",
			"U_C_Poloshirt_Dkfc",
			"U_C_Poloshirt_Subway",
			"hlc_rifle_auga1_tl",
			"hlc_rifle_auga1_eagle",
			"hlc_rifle_auga1_genji",
			"hlc_rifle_auga1_headshot",
			"TRYK_U_B_ARO2_CombatUniform_AL",
			"hlc_rifle_bcmblackjack",
			"hlc_rifle_bcmblackjack_paisley",
			"hlc_rifle_bcmblackjack_goldprint",
			"hlc_rifle_bcmblackjack_goldstripe",
			"hlc_rifle_bcmblackjack_skull",
			"hlc_rifle_CQBR_paisley",
			"hlc_rifle_CQBR_goldprint",
			"hlc_rifle_CQBR_goldstripe",
			"hlc_rifle_CQBR_skull",
			"hlc_rifle_honeybase_goldprint",
			"hlc_rifle_honeybase_paisley",
			"hlc_rifle_honeybase_skull"
		};
            	requiredAddons[]=
		{
			"A3_Anims_F",
			"A3_Anims_F_Config_Sdr",
			"A3_Data_F",
			"A3_Ui_F"
		};
		requiredVersion=0.1;
		units[]=
		{};			
	};	
};
class cfgVehicles
{
	class A3L_Charger_base;
	class A3L_PuntoBlue: A3L_Charger_base
	{
	};
	class Land;
	class Man: Land {};
	class CAManBase: Man {};
	class Civilian: CAManBase {};
	class Civilian_F: Civilian {};
	class C_man_1: Civilian_F {};	
	class C_man_polo_2_Subway: C_man_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F.jpg";
		_generalMacro="C_man_polo_2_Subway";
		uniformClass="U_C_Poloshirt_Subway";
		displayName="Subway Worker";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\esmith.paa"
		};
	};
	class C_man_polo_2_F_Subby: C_man_polo_2_Subway
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_2_F_afro.jpg";
		_generalMacro="C_man_polo_2_F_afro";
		vehicleClass="Afroamerican";
		editorSubcategory="EdSubcat_Personnel_African";
		identityTypes[]=
		{
			"Head_African",
			"G_CIVIL_male"
		};
		genericNames="AfroMen";
	};	
	class C_man_polo_2_Dkfc: C_man_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F.jpg";
		_generalMacro="C_man_polo_2_Dkfc";
		uniformClass="U_C_Poloshirt_Dkfc";
		displayName="DKFC Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\dkfc.paa"
		};
	};
	class C_man_polo_2_Socceroos: C_man_1
	{
		author="$STR_A3_Bohemia_Interactive";
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\C_man_polo_1_F.jpg";
		_generalMacro="C_man_polo_2_Socceroos";
		uniformClass="U_C_Poloshirt_Socceroos";
		displayName="Socceroos Uniform";
		hiddenSelections[]=
		{
			"camo",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\aufc.paa"
		};
	};		
    class B_Soldier_base_F;	
	class B_AOR2_F_AL: B_Soldier_base_F
	{
		scope = 1;
		model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
		hiddenSelections[] = {"camo","insignia"};
		hiddenSelectionsTextures[] = {"\UB_SND_TEX\textures\skins\AOR2_AL.paa",""};
		hiddenSelectionsMaterials[] = {"tryk_unit\data\clothing1.rvmat",""};
	};		
};
class cfgWeapons
{
	class Pistol;	
	class Pistol_Base_F: Pistol {};	
	class RH_Pistol_Base_F: Pistol_Base_F {};	
	class RH_fnp45: RH_Pistol_Base_F {};	
    class RH_fn57: RH_fnp45	{};
	class RH_fn57_t_iceman: RH_fn57
	{
		author="RobertHammer";
		displayName="FN Five-seven Iceman";
		hiddenSelections[]=
		{
			"frame"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\fiveseven_g_co_iceman.paa"
		};
	};
	class RH_fn57_t_murk: RH_fn57
	{
		author="RobertHammer";
		displayName="FN Five-seven Murk";
		hiddenSelections[]=
		{
			"frame"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\fiveseven_g_co_murk.paa"
		};
	};
	class hlc_rifle_bcmblackjack;
	class hlc_rifle_bcmblackjack_paisley: hlc_rifle_bcmblackjack
	{
		author="Sephiris, Agent95, Toadie, Stiglitz";	
		model="hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_jack_ca";
		displayName="BCM 'Black-Jack' Paisley";
		descriptionShort="Assault rifle<br/>Caliber: .300 Blackout"; 
		hiddenSelections[]=
		{
			"Upper",
			"Lower",
			"Foregrip",
			"foregrip_rail",
			"Sights",
			"Stock"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\paisley_black\upper_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\paisley_black\lower2_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\paisley_black\smr_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\paisley_black\smr_toprail_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\paisley_black\b5sopmod_co.paa"
		};
	};

	class hlc_rifle_bcmblackjack_goldprint: hlc_rifle_bcmblackjack
	{
		author="Sephiris, Agent95, Toadie, Stiglitz";	
		model="hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_jack_ca";
		displayName="BCM 'Black-Jack' Gold Print";
		descriptionShort="Assault rifle<br/>Caliber: .300 Blackout"; 
		hiddenSelections[]=
		{
			"Upper",
			"Lower",
			"Foregrip",
			"foregrip_rail",
			"Sights",
			"Stock"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_print\upper_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_print\lower2_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_print\smr_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_print\smr_toprail_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_print\b5sopmod_co.paa"
		};
	};
	
	class hlc_rifle_bcmblackjack_goldstripe: hlc_rifle_bcmblackjack
	{
		author="Sephiris, Agent95, Toadie, Stiglitz";	
		model="hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_jack_ca";
		displayName="BCM 'Black-Jack' Gold Stripe";
		descriptionShort="Assault rifle<br/>Caliber: .300 Blackout"; 
		hiddenSelections[]=
		{
			"Upper",
			"Lower",
			"Foregrip",
			"foregrip_rail",
			"Sights",
			"Stock"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_stripe\upper_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_stripe\lower2_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_stripe\smr_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_stripe\smr_toprail_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\gold_stripe\b5sopmod_co.paa"
		};
	};
	
	class hlc_rifle_bcmblackjack_skull: hlc_rifle_bcmblackjack
	{
		author="Sephiris, Agent95, Toadie, Stiglitz";	
		model="hlc_wp_ar15\mesh\JackCarbine\samr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_jack_ca";
		displayName="BCM 'Black-Jack' Skull";
		descriptionShort="Assault rifle<br/>Caliber: .300 Blackout"; 
		hiddenSelections[]=
		{
			"Upper",
			"Lower",
			"Foregrip",
			"foregrip_rail",
			"Sights",
			"Stock"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\skull\upper_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\skull\lower2_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\skull\smr_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\skull\smr_toprail_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\blackjack\skull\b5sopmod_co.paa"
		};
	};
	class hlc_rifle_CQBR;
	class hlc_rifle_CQBR_paisley: hlc_rifle_CQBR
	{
		dlc="Niarms_AR15";
		author="Tenoyl, OhNoMelon, Tigg, Toadie, Stiglitz";
		reloadAction="HLC_GestureReloadAR15_catch_WS";
		scope=2;
		model="hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
		displayName="Colt M4 CQB-R Paisley";
		descriptionShort="Short-Barreled Rifle<br/>Caliber: 5.56mm";
		hiddenSelections[]=
		{
			"Main",
			"Rails",
			"Panels",
			"VFG",
			"Sights",
			"FSB",
			"Stock",
			"GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\paisley_black\main_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\paisley_black\risfore1_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tigg\rails_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vgrip_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vltor_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\m203_co.paa"
		};	
	};
	class hlc_rifle_CQBR_goldprint: hlc_rifle_CQBR
	{
		dlc="Niarms_AR15";
		author="Tenoyl, OhNoMelon, Tigg, Toadie, Stiglitz";
		reloadAction="HLC_GestureReloadAR15_catch_WS";
		scope=2;
		model="hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
		displayName="Colt M4 CQB-R Gold Print";
		descriptionShort="Short-Barreled Rifle<br/>Caliber: 5.56mm";
		hiddenSelections[]=
		{
			"Main",
			"Rails",
			"Panels",
			"VFG",
			"Sights",
			"FSB",
			"Stock",
			"GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\gold_print\main_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\gold_print\risfore1_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tigg\rails_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vgrip_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vltor_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\m203_co.paa"
		};	
	};
	class hlc_rifle_CQBR_goldstripe: hlc_rifle_CQBR
	{
		dlc="Niarms_AR15";
		author="Tenoyl, OhNoMelon, Tigg, Toadie, Stiglitz";
		reloadAction="HLC_GestureReloadAR15_catch_WS";
		scope=2;
		model="hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
		displayName="Colt M4 CQB-R Gold Stripe";
		descriptionShort="Short-Barreled Rifle<br/>Caliber: 5.56mm";
		hiddenSelections[]=
		{
			"Main",
			"Rails",
			"Panels",
			"VFG",
			"Sights",
			"FSB",
			"Stock",
			"GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\gold_stripe\main_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\gold_stripe\risfore1_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tigg\rails_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vgrip_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vltor_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\m203_co.paa"
		};	
	};
	class hlc_rifle_CQBR_skull: hlc_rifle_CQBR
	{
		dlc="Niarms_AR15";
		author="Tenoyl, OhNoMelon, Tigg, Toadie, Stiglitz";
		reloadAction="HLC_GestureReloadAR15_catch_WS";
		scope=2;
		model="hlc_wp_ar15\mesh\cqbr\cqbr.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_cqbr_ca";
		displayName="Colt M4 CQB-R Skull";
		descriptionShort="Short-Barreled Rifle<br/>Caliber: 5.56mm";
		hiddenSelections[]=
		{
			"Main",
			"Rails",
			"Panels",
			"VFG",
			"Sights",
			"FSB",
			"Stock",
			"GL"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\skull\main_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\skull\risfore1_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tigg\rails_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vgrip_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\tenoyl_tbs\tbs_co.paa",
			"",
			"\UB_SND_TEX\textures\skins\AR15R\cqb-r\vltor_co.paa",
			"\UB_SND_TEX\textures\skins\AR15R\m203_co.paa"
		};	
	};
	class hlc_rifle_honeybase;
	class hlc_rifle_honeybase_paisley: hlc_rifle_honeybase
	{
		dlc="Niarms_AR15";
		deployedPivot="deploypivot";
		scope=2;
		author="Hypermetal, Toadie, Stiglitz";
		model="hlc_wp_ar15\mesh\honeybadger\car15.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_badger_ca";
		displayName="AAC 'Honey-Badger Paisley'";
		descriptionShort="Suppressed Carbine<br/>Caliber: .300 Blackout";
		hiddenSelections[]=
		{
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\badger\paisley\hb_co.paa"
		};
	};	
	class hlc_rifle_honeybase_goldprint: hlc_rifle_honeybase
	{
		dlc="Niarms_AR15";
		deployedPivot="deploypivot";
		scope=2;
		author="Hypermetal, Toadie, Stiglitz";
		model="hlc_wp_ar15\mesh\honeybadger\car15.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_badger_ca";
		displayName="AAC 'Honey-Badger Gold Print'";
		descriptionShort="Suppressed Carbine<br/>Caliber: .300 Blackout";
		hiddenSelections[]=
		{
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\badger\goldprint\hb_co.paa"
		};
	};	
	class hlc_rifle_honeybase_skull: hlc_rifle_honeybase
	{
		dlc="Niarms_AR15";
		deployedPivot="deploypivot";
		scope=2;
		author="Hypermetal, Toadie, Stiglitz";
		model="hlc_wp_ar15\mesh\honeybadger\car15.p3d";
		picture="\hlc_wp_ar15\tex\ui\gear_badger_ca";
		displayName="AAC 'Honey-Badger Skull'";
		descriptionShort="Suppressed Carbine<br/>Caliber: .300 Blackout";
		hiddenSelections[]=
		{
			"Main"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\AR15R\badger\skull\hb_co.paa"
		};
	};	
	class InventoryItem_Base_F;
	class ItemCore;
	class UniformItem: InventoryItem_Base_F
	{
	};
	class Uniform_Base: ItemCore
	{
	};	
	class U_C_Poloshirt_Socceroos: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Socceroos Uniform";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_burgundy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\aufc.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_polo_2_Socceroos";
			containerClass="Supply20";
			mass=40;
		};
	};	
	class U_C_Poloshirt_Dkfc: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="DKFC Uniform";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_burgundy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\dkfc.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_polo_2_Dkfc";
			containerClass="Supply20";
			mass=40;
		};
	};
	class U_C_Poloshirt_Subway: Uniform_Base
	{
		author="$STR_A3_Bohemia_Interactive";
		scope=2;
		displayName="Subway Worker";
		picture="\A3\characters_f\data\ui\icon_U_C_Poloshirt_burgundy_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\esmith.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="C_man_polo_2_Subway";
			containerClass="Supply20";
			mass=40;
		};
	};
	class TRYK_U_B_ARO2_CombatUniform_AL: Uniform_Base
	{
		scope = 2;
		displayName = "Aladeens Uniform";
		picture = "\TRYK_Uniforms\data\ui\UI_AOR2_BDU.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "B_AOR2_F_AL";
			containerClass = "Supply40";
			mass = 40;
		};
	};	
	class Rifle_Base_F;
	class Rifle_Long_Base_F: Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class EBR_base_F: Rifle_Long_Base_F	{};
	class srifle_EBR_F_CITY: EBR_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="srifle_EBR_F_CITY";
		scope=2;
		model="\A3\weapons_F\LongRangeRifles\EBR\EBR_F.p3d";
		displayName="mk18 UB CITY";
		picture="\A3\weapons_F\LongRangeRifles\EBR\Data\UI\gear_EBR_X_CA.paa";
		UiPicture="\A3\weapons_f\data\UI\icon_regular_CA.paa";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\m14_ebr01_co_CITY.paa",
			"\UB_SND_TEX\textures\skins\m14_ebr02_co_CITY.paa"
		};
		class Library
		{
			libTextDesc="$STR_A3_CfgWeapons_srifle_ABR_Library0";
		};
		descriptionShort="$STR_A3_CfgWeapons_srifle_ABR1";
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass=180;
		};
		inertia=0.69999999;
		aimTransitionSpeed=0.80000001;
		dexterity=1.3;
		class ItemInfo
		{
			priority=1;
		};
	};	
	class Default;
	class LauncherCore;
	class RocketPods: LauncherCore
	{
	};
	class CarHorn: Default
	{
		cursor="";
		cursorAim="";
		scope=1;
		displayName="$STR_A3_cfgWeapons_CarHorn0";
		reloadTime=0;
		drySound[]=
		{
			"A3\Sounds_F\weapons\horns\MRAP_02_horn_2",
			1,
			1,
			300
		};
		canLock=0;
		optics=0;
		enableAttack=0;
	};
	class NovusCopHorn: CarHorn
	{
		drySound[]=
		{
			"",
			1,
			1,
			200
		};
	};
	class Rifle;
	class hlc_aug_base: Rifle_Base_F {};
	class hlc_rifle_aug: hlc_aug_base {};
	class hlc_rifle_auga1_tl: hlc_rifle_aug
	{
		author="Sarv, Tenoyl, Toadie";
		displayName="Steyr AUGA1[Thug Life]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\steyr_aug_BLACK_tl.paa"
		};
		picture="\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		HLC_CompatibleBarrels_Classes[]=
		{
			"hlc_rifle_auga1_b",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_augpara_b"
		};
		HLC_CurrentBarrel="hlc_barrel_standard";
	};
	class hlc_rifle_auga1_eagle: hlc_rifle_aug
	{
		author="Sarv, Tenoyl, Toadie";
		displayName="Steyr AUGA1[Eagle]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\steyr_aug_black_co_eagle.paa"
		};
		picture="\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		HLC_CompatibleBarrels_Classes[]=
		{
			"hlc_rifle_auga1_b",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_augpara_b"
		};
		HLC_CurrentBarrel="hlc_barrel_standard";
	};
	class hlc_rifle_auga1_genji: hlc_rifle_aug
	{
		author="Sarv, Tenoyl, Toadie";
		displayName="Steyr AUGA1[Genji]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\steyr_aug_black_co_genji.paa"
		};
		picture="\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		HLC_CompatibleBarrels_Classes[]=
		{
			"hlc_rifle_auga1_b",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_augpara_b"
		};
		HLC_CurrentBarrel="hlc_barrel_standard";
	};
	class hlc_rifle_auga1_headshot: hlc_rifle_aug
	{
		author="Sarv, Tenoyl, Toadie";
		displayName="Steyr AUGA1[Headshot]";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\UB_SND_TEX\textures\skins\steyr_aug_black_co_headshot.paa"
		};
		picture="\hlc_wp_aug\tex\ui\gear_auga1carbineblack_x_ca";
		HLC_CompatibleBarrels_Classes[]=
		{
			"hlc_rifle_auga1_b",
			"hlc_rifle_auga1carb_b",
			"hlc_rifle_aughbar_b",
			"hlc_rifle_augpara_b"
		};
		HLC_CurrentBarrel="hlc_barrel_standard";
	};	
	class Vest_NoCamo_Base: ItemCore {};
	class V_PlateCarrierIA1_dgtl: Vest_NoCamo_Base {};
	class V_PlateCarrierIA2_dgtl: V_PlateCarrierIA1_dgtl {};
	class VestItem: InventoryItem_Base_F {};
	class V_PlateCarrierIAGL_dgtl_aladeen: V_PlateCarrierIA2_dgtl
	{
		author = "$STR_A3_Bohemia_Interactive";
		_generalMacro = "V_PlateCarrierIAGL_dgtl";
		scope = 2;
		displayName = "Aladeens Vest";
		picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
		model = "\A3\Characters_F_Beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
		DLC = "Mark";
		descriptionShort = "$STR_A3_SP_ER";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\UB_SND_TEX\textures\skins\first.paa","\UB_SND_TEX\textures\skins\second.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
			containerClass = "Supply120";
			mass = 80;
			hiddenSelections[] = {"camo1","camo2"};
			class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName = "HitNeck";
					armor = 8;
					passThrough = 0.5;
				};
				class Arms
				{
					hitpointName = "HitArms";
					armor = 8;
					passThrough = 0.5;
				};
				class Chest
				{
					hitpointName = "HitChest";
					armor = 78;
					passThrough = 0.6;
				};
				class Diaphragm
				{
					hitpointName = "HitDiaphragm";
					armor = 78;
					passThrough = 0.6;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 16;
					passThrough = 0.3;
				};
				class Pelvis
				{
					hitpointName = "HitPelvis";
					armor = 16;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.6;
				};
			};
		};
	};
};

class cfgMods
{
	author="76561198116014678";
	timepacked="1465825539";
};

class CfgAmmo {
	class GrenadeHand;
	class UBmini_Grenade: GrenadeHand
	{
		hit=6;
		indirectHit=6;
		indirectHitRange=1;
		dangerRadiusHit=50;
		suppressionRadiusHit=18;
		typicalspeed=26;
		model="\A3\Weapons_f\ammo\mini_frag";
		whistleDist=12;
		explosionEffectsRadius=1.5;
		deflecting=30;
		class CamShakeExplode
		{
			power=3.2;
			duration=0.80000001;
			frequency=20;
			distance=56;
		};
		soundHit1[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_01",
			3.1622777,
			1,
			1300
		};
		soundHit2[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_02",
			3.1622777,
			1,
			1300
		};
		soundHit3[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_03",
			3.1622777,
			1,
			1300
		};
		soundHit4[]=
		{
			"A3\Sounds_F\arsenal\explosives\grenades\Explosion_mini_grenade_04",
			3.1622777,
			1,
			1300
		};
		multiSoundHit[]=
		{
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
	};
};
