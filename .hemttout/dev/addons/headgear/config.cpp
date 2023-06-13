#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = QUOTE(COMPONENT);
        units[] = {
            QCLASS(Item_Hat_Beret_BlackLogo),
            QCLASS(Item_Cap_Headphones_GreenLogo)
        };
        weapons[] = {
            QCLASS(Hat_Beret_BlackLogo),
            QCLASS(Cap_Headphones_GreenLogo)
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
