class CfgWeapons {
    class H_Beret_02;
    class CLASS(Hat_Beret_Black) : H_Beret_02 {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Brett Harrison";
        displayName = "Beret (Black) [Synixe]";
        picture = QPATHTOF(UI\hat_beret_black_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\hat_beret_black_co.paa)};
    };

    class HelmetBase;
    class H_Cap_headphones: HelmetBase {
        class ItemInfo;
    };
    class CLASS(Cap_Headphones_GreenLogo): H_Cap_headphones {
        dlc = QUOTE(PREFIX);
        scope = 2;
        author = "Brett Harrison";
        displayName = "Rangemaster Cap [Synixe]";
        picture = QPATHTOF(UI\cap_headphones_green_ca.paa);
        hiddenSelectionsTextures[] = {QPATHTOF(data\cap_headphones_green_co.paa)};

        class ItemInfo: ItemInfo {
            hiddenSelections[] = {"camo"};
        };
    };
};
