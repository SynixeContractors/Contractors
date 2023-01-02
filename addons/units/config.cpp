#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            // Uniforms
            QCLASS(Item_Uniform_Combat_LS_Synixe_BP_BB),
            QCLASS(Item_Uniform_Combat_RS_Synixe_BP_BB),
            QCLASS(Item_Uniform_Contractor_Shirt),

            // Public Units
            QCLASS(Unit_I_Contractor),

            // Helicopters
            QCLASS(Heli_Light_01_F)
        };
        weapons[] = {
            QCLASS(Uniform_Combat_LS_Synixe_BP_BB),
            QCLASS(Uniform_Combat_RS_Synixe_BP_BB),
            QCLASS(Uniform_Contractor_Shirt)
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "synixe_contractors_main"
        };
        authors[] = {"Brett Harrison"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "CfgWorlds.hpp"
