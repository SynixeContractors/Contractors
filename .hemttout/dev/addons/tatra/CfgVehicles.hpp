class CfgVehicles {
    class CUP_T810_Unarmed_Base;
    class CLASS(tatra_covered): CUP_T810_Unarmed_Base {
        scope = 2;
        curatorScope = 2;
        faction = QCLASS(I_Logistics);
        side = 2;
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Unarmed_CZ_WDL.jpg";
        maximumLoad = 5000;
    };
    class CLASS(tatra_desert_covered): CLASS(tatra_covered) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Unarmed_CZ_DES.jpg";
    };
    class CLASS(tatra_nologo_covered): CLASS(tatra_covered) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Unarmed_CZ_WDL.jpg";
        displayName = "Tatra T810 (Covered, No Logo)";
    };
    class CLASS(tatra_nologo_desert_covered): CLASS(tatra_nologo_covered) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Unarmed_CZ_DES.jpg";
    };


    class CUP_T810_Repair_Base;
    class CLASS(tatra_repair): CUP_T810_Repair_Base {
        scope = 2;
        curatorScope = 2;
        faction = QCLASS(I_Logistics);
        side = 2;
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Repair_CZ_WDL.jpg";
        maximumLoad = 5000;
    };
    class CLASS(tatra_desert_repair): CLASS(tatra_repair) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Repair_CZ_DES.jpg";
    };
    class CLASS(tatra_nologo_repair): CLASS(tatra_repair) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Repair_CZ_WDL.jpg";
        displayName = "Tatra T810 (Repair, No Logo)";
    };
    class CLASS(tatra_nologo_desert_repair): CLASS(tatra_nologo_repair) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Repair_CZ_DES.jpg";
    };

    class CUP_T810_Reammo_Base;
    class CLASS(tatra_reammo): CUP_T810_Reammo_Base {
        scope = 2;
        curatorScope = 2;
        faction = QCLASS(I_Logistics);
        side = 2;
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Reammo_CZ_WDL.jpg";
        maximumLoad = 5000;
    };
    class CLASS(tatra_desert_reammo): CLASS(tatra_reammo) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Reammo_CZ_DES.jpg";
    };
    class CLASS(tatra_nologo_reammo): CLASS(tatra_reammo) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed2_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Reammo_CZ_WDL.jpg";
        displayName = "Tatra T810 (Ammo, No Logo)";
    };
    class CLASS(tatra_nologo_desert_reammo): CLASS(tatra_nologo_reammo) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\bed_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Reammo_CZ_DES.jpg";
    };

    class CUP_T810_Refuel_Base;
    class CLASS(tatra_refuel): CUP_T810_Refuel_Base {
        scope = 2;
        curatorScope = 2;
        faction = QCLASS(I_Logistics);
        side = 2;
        crew = QCLASS(Unit_I_Contractor);
        typicalCargo[] = {QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor), QCLASS(Unit_I_Contractor)};
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_fueltank_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Refuel_CZ_WDL.jpg";
        maximumLoad = 5000;
        ace_refuel_fuelCargo = 6000;
    };
    class CLASS(tatra_desert_refuel): CLASS(tatra_refuel) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_logo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_fueltank_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Refuel_CZ_DES.jpg";
    };
    class CLASS(tatra_nologo_refuel): CLASS(tatra_refuel) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_fueltank_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Refuel_CZ_WDL.jpg";
        displayName = "Tatra T810 (Fuel, No Logo)";
    };
    class CLASS(tatra_nologo_desert_refuel): CLASS(tatra_nologo_refuel) {
        hiddenSelectionsTextures[] = {QPATHTOF(data\cabin_desert_synixe_nologo_co.paa), "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_fueltank_desert_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\undercarriage_des_co.paa", "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\data\t810_desert_mlod_co.paa"};
        editorPreview = "CUP\WheeledVehicles\CUP_WheeledVehicles_T810\Data\preview\CUP_B_T810_Refuel_CZ_DES.jpg";
    };
};
