#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        units[] = {"SP_Carryall_Black","SP_Carryall_Green","SP_Carryall_Tan","SP_Carryall_White","SP_Carryall_Hunter","SP_Carryall_Hunter2","SP_Carryall_ATacsFG","Carryall_ATacsAU","SP_Carryall_NodUrban","SP_Camelbak_Black","SP_Camelbak_Green","SP_Camelbak_Tan"};
        weapons[] = {};
        author = MODULE_AUTHOR;
        authors[] = {"SP Craig", "Tupolov"};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CFP_main","CFP_Models"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
