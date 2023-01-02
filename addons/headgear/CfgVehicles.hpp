class CfgVehicles {
	#define MACRO_ITEM_COMMON \
        dlc = QUOTE(PREFIX); \
        scope = 2; \
        scopeCurator = 2; \
        vehicleClass = "ItemsHeadgear";
	
	class Headgear_Base_F;
	class CLASS(Item_Hat_Beret_Black): Headgear_Base_F {
		MACRO_ITEM_COMMON
		author = "Brett Harrison";
		displayName = "Beret (Black) [Synixe]";
		model = "\A3\Weapons_F\DummyCap.p3d";

		class TransportItems {
			MACRO_ADDITEM(CLASS(Hat_Beret_Black),1);
		};
	};

    class CLASS(Item_Cap_Headphones_GreenLogo): Headgear_Base_F {
        MACRO_ITEM_COMMON
        author = "Brett Harrison";
        displayName = "Rangemaster Cap [Synixe]";
        model = "\A3\Weapons_F\DummyCap.p3d";

        class TransportItems {
            MACRO_ADDITEM(CLASS(Cap_Headphones_GreenLogo),1);
        };
    };
};
