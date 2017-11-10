//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.4.1.1710311
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };


    class CFP_B_AFGPolice_Rifleman_AK74_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AK74]";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then { _onSpawn = { private _unit = _this select 0; sleep 0.2; private _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _unit) >> 'backpack'); waituntil {sleep 0.2; backpack _unit == _backpack}; _unit setunitloadout [ ['CUP_arifle_AK74','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[], ['SP_0000_Standard_FieldUniform_BlueFrost',[['CUP_30Rnd_545x39_AK_M',3,30]]], ['SP_Modular1_Black',[['CUP_30Rnd_545x39_AK_M',5,30]]],[], 'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']]; [_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _unit; };_this spawn _onSpawn; (_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Grenadier_AK74_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier [AK74]";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost_SS";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AK74_GL','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['SP_0000_Standard_FieldUniform_BlueFrost_SS',[['CUP_30Rnd_545x39_AK_M',3,30]]],['SP_Modular1_Black',[['CUP_1Rnd_HE_GP25_M',5,1],['CUP_1Rnd_SMOKE_GP25_M',3,1],['CUP_30Rnd_545x39_AK_M',5,30]]],[],'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Rifleman_AK74M_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman [AK74M]";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost_SS";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AK74M','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['SP_0000_Standard_FieldUniform_BlueFrost_SS',[['CUP_30Rnd_545x39_AK_M',3,30]]],['SP_Modular1_Black',[['CUP_30Rnd_545x39_AK_M',5,30]]],[],'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Officer_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Officer";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; _this setunitloadout [['CUP_arifle_AK74M','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['SP_0000_Standard_FieldUniform_BlueFrost',[['CUP_30Rnd_545x39_AK_M',3,30]]],['SP_Modular1_Black',[['CUP_30Rnd_545x39_AK_M',5,30]]],[],'SP_PatrolCap_BlueFrost','',['Binocular','','','',[],[],''],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Grenadier_AK74M_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Grenadier [AK74M]";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; _this setunitloadout [['CUP_arifle_AK74M_GL','','','',['CUP_30Rnd_545x39_AK_M',30],[],''],[],[],['SP_0000_Standard_FieldUniform_BlueFrost',[['CUP_30Rnd_545x39_AK_M',3,30]]],['SP_Modular1_Black',[['CUP_1Rnd_HE_GP25_M',5,1],['CUP_1Rnd_SMOKE_GP25_M',3,1],['CUP_30Rnd_545x39_AK_M',5,30]]],[],'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Machine_Gunner_PKM_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Machine Gunner [PKM]";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_lmg_PKM','','','',['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',100],[],''],[],[],['SP_0000_Standard_FieldUniform_BlueFrost',[]],['SP_Modular1_Black',[['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',1,100]]],['CUP_B_AssaultPack_Black',[['CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M',2,100]]],'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

    class CFP_B_AFGPolice_Rifleman_AT_RPG_01 : O_Soldier_F_OCimport_02 {
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Rifleman AT [RPG] TEST";
        side = 1;
        faction = "CFP_B_AFGPolice";

        identityTypes[] = { "Head_TK" , "LanguagePER_F" , "G_IRAN_default" };
        uniformClass = "SP_0000_Standard_FieldUniform_BlueFrost_SS";



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack};_this setunitloadout [['CUP_arifle_AKM','','','',['CUP_30Rnd_762x39_AK47_M',30],[],''],['CUP_launch_RPG7V','','','',['CUP_PG7V_M',1],[],''],[],['SP_0000_Standard_FieldUniform_BlueFrost_SS',[['CUP_30Rnd_762x39_AK47_M',2,30]]],['SP_Modular1_Black',[['CUP_30Rnd_762x39_AK47_M',5,30]]],['CUP_B_RPGPack_Khaki',[['CUP_PG7V_M',3,1]]],'SP_PatrolCap_BlueFrost','',[],['ItemMap','','ItemRadio','ItemCompass','ItemWatch','']];[_this,'AFG_NationalPolice'] call BIS_fnc_setUnitInsignia; reload _this};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;
        ALiVE_orbatCreator_insignia = "AFG_NationalPolice";

    };

};