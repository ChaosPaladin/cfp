//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 180.143751 on Stable branch
// Generated with ALiVE version 1.5.2.1712071
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class O_recon_F;
    class O_recon_F_OCimport_01 : O_recon_F { scope = 0; class EventHandlers; };
    class O_recon_F_OCimport_02 : O_recon_F_OCimport_01 { class EventHandlers; };

    class CUP_O_DSHKM_TK_INS;
    class CUP_O_DSHKM_TK_INS_OCimport_01 : CUP_O_DSHKM_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHKM_TK_INS_OCimport_02 : CUP_O_DSHKM_TK_INS_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_DSHkM_MiniTriPod_TK_INS;
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 : CUP_O_DSHkM_MiniTriPod_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_02 : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_B_TOW_TriPod_US;
    class CUP_B_TOW_TriPod_US_OCimport_01 : CUP_B_TOW_TriPod_US { scope = 0; class EventHandlers; class Turrets; };
    class CUP_B_TOW_TriPod_US_OCimport_02 : CUP_B_TOW_TriPod_US_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CUP_O_SPG9_TK_INS;
    class CUP_O_SPG9_TK_INS_OCimport_01 : CUP_O_SPG9_TK_INS { scope = 0; class EventHandlers; class Turrets; };
    class CUP_O_SPG9_TK_INS_OCimport_02 : CUP_O_SPG9_TK_INS_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class MainTurret;
        };
    };

    class CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Rifleman]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Tan",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{},"SP_PatrolCap_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Squad_Leader_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Squad Leader]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Green",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{},"SP_PatrolCap_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Rifleman_AT_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Rifleman AT]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Tan",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"SP_PASGTHelmet_Black1","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Medic_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Medic]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Black",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"SP_PatrolCap_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Grenadier_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Grenadier]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"SP_Modular1_Tan",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1},{"CUP_1Rnd_SMOKE_GP25_M",3,1}}},{},"SP_PatrolCap_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Machine_Gunner_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Machine Gunner]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_lmg_PKM","","","",{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",100},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{}},{"SP_Modular1_Green",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",1,100}}},{"B_AssaultPack_rgr",{{"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M",2,100}}},"SP_PASGTHelmet_Black2","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Explosive_Specialist_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Explosive Specialist]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"SP_Modular1_Tan",{{"CUP_30Rnd_762x39_AK47_M",6,30}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"APERSTripMine_Wire_Mag",1,1},{"ATMine_Range_Mag",1,1},{"CUP_PipeBomb_M",1,1}}},"SP_PatrolCap_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Paramilitary_Sniper_01 : CFP_O_HEZBOLLAH_Paramilitary_Rifleman_01 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Paramilitary [Sniper]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_marpat_w";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_FieldUniform_marpat_w",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"SP_Modular1_Black",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"SP_PatrolCap_Tan","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Militia_Rifleman_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia [Rifleman]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_BattleDressUniform_M81";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_BeanieHat_Green","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

    	// Militia Uniforms
        uniformList[] = {
           "CFP_U_BattleDressUniform_M81", 0.5,
           "CFP_U_BattleDressUniform_edrl", 0.5
        };

        // Militia Headgear
        headgearList[] = {
            "", 0.15,
            "SP_BeanieHat_Green", 0.15,
            "SP_PatrolCap_Green", 0.15,
            "SP_BaseballCap_Green", 0.15,
            "SP_BeanieHat_Black", 0.15,
            "H_Bandanna_khk", 0.15
        };

        // Militia Facewear
        facewearList[] = {
            "G_Bandanna_aviator", 0.15,
            "G_Bandanna_beast", 0.15,
            "G_Bandanna_blk", 0.15,
            "G_Bandanna_oli", 0.15,
            "G_Bandanna_khk", 0.15,
            "CUP_TK_NeckScarf", 0.15,
            "CUP_FR_NeckScarf", 0.15,
            "CUP_FR_NeckScarf2", 0.15
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Militia_Squad_Leader_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Militia [Squad Leader]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{},"SP_PatrolCap_Green","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Militia_Rifleman_AT_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Militia [Rifleman AT]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG7V","","","",{"CUP_PG7V_M",1},{},""},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_RPGPack_Khaki",{{"CUP_PG7V_M",3,1}}},"CFP_Headband_wdl","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Militia_Grenadier_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Militia [Grenadier]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74_GL","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_AK_VEST",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",6,1}}},{},"SP_BaseballCap_Green","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Militia_Medic_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Militia [Medic]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"CFP_AK_VEST_LOlive",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr",{{"Medikit",1},{"FirstAidKit",10}}},"SP_BeanieHat_Green","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Militia [Machine Gunner]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_BattleDressUniform_edrl";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74","","","",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,45}}},{"CFP_AK_VEST_LOlive",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",4,45}}},{"B_AssaultPack_rgr",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",6,45}}},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

    	// Militia Uniforms
        uniformList[] = {
           "CFP_U_BattleDressUniform_M81", 0.5,
           "CFP_U_BattleDressUniform_edrl", 0.5
        };

    	// Militia Facewear
        facewearList[] = {
           "G_Balaclava_oli", 0.33,
           "SP_Balaclava_Black", 0.33,
           "SP_Balaclava_USWoodland", 0.33,
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Militia_Explosive_Specialist_01 : CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01 {

        displayName = "Militia [Explosive Specialist]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74","","","",{"CUP_30Rnd_545x39_AK_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"CFP_AK_VEST_Tan",{{"CUP_30Rnd_545x39_AK_M",5,30}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"APERSTripMine_Wire_Mag",1,1},{"ATMine_Range_Mag",1,1},{"CUP_PipeBomb_M",1,1}}},"","SP_Balaclava_Black",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Militia_Sniper_01 : CFP_O_HEZBOLLAH_Militia_Machine_Gunner_01 {

        displayName = "Militia [Sniper]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_3",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"CFP_AK_VEST_EDRL",{{"CUP_10Rnd_762x54_SVD_M",6,10}}},{},"","G_Balaclava_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Rifleman_SF_01 : O_recon_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [SF]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";

        identityTypes[] = {"Head_TK","LanguagePER_F","G_IRAN_default"};
        uniformClass = "CFP_U_FieldUniform_edrl";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","CUP_optic_Kobra",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_BeanieHat_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

        randomGearProbability = 100;

    	// Hezbollah Uniforms
        uniformList[] = {
            "CFP_U_FieldUniform_edrl", 0.5,
            "CFP_U_FieldUniform_M81", 0.5
    };

    	// Hezbollah Headgear
        headgearList[] = {
           "SP_BeanieHat_Green", 0.15,
           "SP_BaseballCap_Green", 0.15,
           "SP_BeanieHat_Black", 0.15,
           "SP_PatrolCap_Green", 0.15,
           "H_Bandanna_khk", 0.15,
           "SP_BaseballCap_Black", 0.15,
           "H_Bandanna_camo", 0.15
        };

    	// Hezbollah Facewear
        facewearList[] = {
           "CUP_TK_NeckScarf", 0.33,
           "CUP_FR_NeckScarf", 0.33,
           "CUP_FR_NeckScarf2", 0.33
        };

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_Squad_Leader_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Squad Leader [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","CUP_optic_Kobra",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{},"SP_BaseballCap_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Rifleman_AT_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Rifleman AT [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","CUP_optic_Kobra",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{"CUP_launch_RPG18","","","",{"CUP_RPG18_M",1},{},""},{},{"CFP_U_FieldUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr",{{"CUP_RPG18_M",2,1}}},"SP_BeanieHat_Black","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Medic_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Medic [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","CUP_optic_Kobra",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_AssaultPack_rgr",{{"FirstAidKit",10},{"Medikit",1}}},"SP_Bandana_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Grenadier_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Grenadier [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AK74M_GL","","","CUP_optic_Kobra",{"CUP_30Rnd_545x39_AK_M",30},{"CUP_1Rnd_HE_GP25_M",1},""},{},{},{"CFP_U_FieldUniform_edrl",{{"CUP_30Rnd_545x39_AK_M",3,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_545x39_AK_M",5,30},{"CUP_1Rnd_HE_GP25_M",5,1}}},{},"SP_BeanieHat_Black","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Machine_Gunner_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Machine Gunner [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_RPK74_45","","","CUP_optic_Kobra",{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",45},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",1,45}}},{"V_I_G_resistanceLeader_F",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",4,45}}},{"B_AssaultPack_rgr",{{"CUP_45Rnd_TE4_LRT4_Green_Tracer_545x39_RPK_M",5,45}}},"SP_BeanieHat_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Explosive_Specialist_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Explosive Specialist [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKS","","","CUP_optic_Kobra",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_FieldUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",2,30}}},{"V_I_G_resistanceLeader_F",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"B_Kitbag_rgr",{{"MineDetector",1},{"DemoCharge_Remote_Mag",5,1},{"APERSTripMine_Wire_Mag",1,1},{"ATMine_Range_Mag",1,1},{"CUP_PipeBomb_M",1,1}}},"SP_PatrolCap_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Sniper_SF_01 : CFP_O_HEZBOLLAH_Rifleman_SF_01 {

        displayName = "Sniper [SF]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_srifle_SVD","","","CUP_optic_PSO_1",{"CUP_10Rnd_762x54_SVD_M",10},{},""},{},{},{"CFP_U_FieldUniform_M81",{{"CUP_10Rnd_762x54_SVD_M",3,10}}},{"V_I_G_resistanceLeader_F",{{"CUP_10Rnd_762x54_SVD_M",5,10}}},{},"SP_BeanieHat_Green","",{"Binocular","","","",{},{},""},{"ItemMap","ItemGPS","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_DShKM_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [DShKM]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodHigh_Bag",{}},"SP_BaseballCap_Green","G_Bandanna_beast",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_DShKM_Low_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [DShKM Low]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_TripodLow_Bag",{}},"SP_BeanieHat_Black","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Asst_Gunner_DShKM_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Asst. Gunner [DShKM]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_DShkM_Gun_Bag",{}},"SP_BeanieHat_Green","G_Bandanna_aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_TOW_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [TOW]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_TOW_Tripod_Bag",{}},"SP_BaseballCap_Green","CUP_TK_NeckScarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Asst_Gunner_TOW_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Asst. Gunner [TOW]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Tow_Gun_Bag",{}},"SP_BaseballCap_Green","CUP_FR_NeckScarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_Metis_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [Metis]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Tripod_Bag",{}},"SP_BeanieHat_Black","CUP_TK_NeckScarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Asst_Gunner_Metis_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Asst. Gunner [Metis]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Metis_Gun_Bag",{}},"","G_Bandanna_beast",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_Mortar_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [Mortar]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Bipod_Bag",{}},"","CUP_FR_NeckScarf2",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Asst_Gunner_Mortar_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Asst. Gunner [Mortar]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_Podnos_Gun_Bag",{}},"SP_BeanieHat_Green","CUP_FR_NeckScarf",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Gunner_SPG_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Gunner [SPG-9]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_M81",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Tripod_Bag",{}},"SP_BeanieHat_Black","G_Bandanna_aviator",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_Asst_Gunner_SPG_01 : CFP_O_HEZBOLLAH_Militia_Rifleman_01 {

        displayName = "Asst. Gunner [SPG-9]";

        ALiVE_orbatCreator_loadout[] = {{"CUP_arifle_AKM","","","",{"CUP_30Rnd_762x39_AK47_M",30},{},""},{},{},{"CFP_U_BattleDressUniform_edrl",{{"CUP_30Rnd_762x39_AK47_M",3,30}}},{"CFP_AK_VEST_EDRL",{{"CUP_30Rnd_762x39_AK47_M",5,30}}},{"CUP_B_SPG9_Gun_Bag",{}},"H_Bandanna_khk","G_Bandanna_oli",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_O_HEZBOLLAH_DShKM_01 : CUP_O_DSHKM_TK_INS_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";
        crew = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_DShKM_Low_01 : CUP_O_DSHkM_MiniTriPod_TK_INS_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "DShKM [Low]";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";
        crew = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_TOW_AT_01 : CUP_B_TOW_TriPod_US_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "TOW AT";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";
        crew = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_O_HEZBOLLAH_SPG_9_01 : CUP_O_SPG9_TK_INS_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SPG-9";
        side = 0;
        faction = "CFP_O_HEZBOLLAH";
        crew = "CFP_O_HEZBOLLAH_Militia_Rifleman_01";

        class Turrets : Turrets {
            class MainTurret : MainTurret { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};