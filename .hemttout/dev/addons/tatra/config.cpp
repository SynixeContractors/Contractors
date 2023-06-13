#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QCLASS(tatra_covered),
            QCLASS(tatra_desert_covered),
            QCLASS(tatra_nologo_covered),
            QCLASS(tatra_nologo_desert_covered),
            QCLASS(tatra_repair),
            QCLASS(tatra_desert_repair),
            QCLASS(tatra_nologo_repair),
            QCLASS(tatra_nologo_desert_repair),
            QCLASS(tatra_reammo),
            QCLASS(tatra_desert_reammo),
            QCLASS(tatra_nologo_reammo),
            QCLASS(tatra_nologo_desert_reammo),
            QCLASS(tatra_refuel),
            QCLASS(tatra_desert_refuel),
            QCLASS(tatra_nologo_refuel),
            QCLASS(tatra_nologo_desert_refuel)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"CUP_WheeledVehicles_T810"};
        author = "Synixe Contractors";
        authors[] = {"Brett Harrison"};
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
