static const u8 sDummyDesc[] = _(
    "?????");

// Poké Balls
static const u8 sPokeBallDesc[] = _(
    "A tool used for\n"
    "catching wild\n"
    "Pokémon.");

static const u8 sGreatBallDesc[] = _(
    "A good Ball with a\n"
    "higher catch rate\n"
    "than a Poké Ball.");

static const u8 sUltraBallDesc[] = _(
    "A better Ball with\n"
    "a higher catch rate\n"
    "than a Great Ball.");

static const u8 sMasterBallDesc[] = _(
    "The best Ball that\n"
    "catches a Pokémon\n"
    "without fail.");

static const u8 sPremierBallDesc[] = _(
    "A rare Ball made\n"
    "in commemoration\n"
    "of some event.");

static const u8 sHealBallDesc[] = _(
    "A remedial Ball\n"
    "that restores\n"
    "caught Pokémon.");

static const u8 sNetBallDesc[] = _(
    "A Ball that works\n"
    "well on Water- and\n"
    "Bug-type Pokémon.");

static const u8 sNestBallDesc[] = _(
    "A Ball that works\n"
    "better on weaker\n"
    "Pokémon.");

static const u8 sDiveBallDesc[] = _(
    "A Ball that works\n"
    "better on Pokémon\n"
    "on the ocean floor.");

static const u8 sDuskBallDesc[] = _(
    "Works well if\n"
    "used in a\n"
    "dark place.");

static const u8 sTimerBallDesc[] = _(
    "A Ball that gains\n"
    "power in battles\n"
    "taking many turns.");

static const u8 sQuickBallDesc[] = _(
    "Works well if\n"
    "used on the\n"
    "first turn.");

static const u8 sRepeatBallDesc[] = _(
    "A Ball that works\n"
    "better on Pokémon\n"
    "caught before.");

static const u8 sLuxuryBallDesc[] = _(
    "A cozy Ball that\n"
    "makes Pokémon\n"
    "more friendly.");

static const u8 sLevelBallDesc[] = _(
    "A Ball that works\n"
    "well on lower\n"
    "level Pokémon.");

static const u8 sLureBallDesc[] = _(
    "A Ball that works\n"
    "well on fished\n"
    "up Pokémon.");

static const u8 sMoonBallDesc[] = _(
    "A Ball that works\n"
    "well on Moon\n"
    "Stone users.");

static const u8 sFriendBallDesc[] = _(
    "A Ball that makes\n"
    "a Pokémon friendly\n"
    "when caught.");

static const u8 sLoveBallDesc[] = _(
    "Works well on\n"
    "Pokémon of the\n"
    "opposite gender.");

static const u8 sFastBallDesc[] = _(
    "Works well on\n"
    "very fast\n"
    "Pokémon.");

static const u8 sHeavyBallDesc[] = _(
    "Works well on\n"
    "very heavy\n"
    "Pokémon.");

static const u8 sDreamBallDesc[] = _(
#if B_DREAM_BALL_MODIFIER >= GEN_8
    "A Ball that works\n"
    "well on sleeping\n"
    "Pokémon.");
#else
    "A Poké Ball used in\n"
    "the Entree Forest.");
#endif

static const u8 sSafariBallDesc[] = _(
    "A special Ball that\n"
    "is used only in the\n"
    "Safari Zone.");

static const u8 sSportBallDesc[] = _(
    "A special Ball used\n"
    "in the Bug-Catching\n"
    "Contest.");

static const u8 sParkBallDesc[] = _(
    "A special Ball for\n"
    "the Pal Park.");

static const u8 sBeastBallDesc[] = _(
    "A Ball designed to\n"
    "catch Ultra Beasts.");

static const u8 sCherishBallDesc[] = _(
    "A rare Ball made\n"
    "in commemoration\n"
    "of some event.");

// Medicine
static const u8 sPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
    "20 points.");

static const u8 sSuperPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "60 points.");
#else
    "50 points.");
#endif

static const u8 sHyperPotionDesc[] = _(
    "Restores the HP of\n"
    "a Pokémon by\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "120 points.");
#else
    "200 points.");
#endif

static const u8 sMaxPotionDesc[] = _(
    "Fully restores the\n"
    "HP of a Pokémon.");

static const u8 sFullRestoreDesc[] = _(
    "Fully restores the\n"
    "HP and status of a\n"
    "Pokémon.");

static const u8 sReviveDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with half\n"
    "its HP.");

static const u8 sMaxReviveDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sFreshWaterDesc[] = _(
    "A mineral water\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 30 points.");
#else
    "by 50 points.");
#endif

static const u8 sSodaPopDesc[] = _(
    "A fizzy soda drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 50 points.");
#else
    "by 60 points.");
#endif

static const u8 sLemonadeDesc[] = _(
    "A very sweet drink\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 70 points.");
#else
    "by 80 points.");
#endif

static const u8 sMoomooMilkDesc[] = _(
    "A nutritious milk\n"
    "that restores HP\n"
    "by 100 points.");

static const u8 sEnergyPowderDesc[] = _(
    "A bitter powder\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 60 points.");
#else
    "by 50 points.");
#endif

static const u8 sEnergyRootDesc[] = _(
    "A bitter root\n"
    "that restores HP\n"
#if I_HEALTH_RECOVERY >= GEN_7
    "by 120 points.");
#else
    "by 200 points.");
#endif

static const u8 sHealPowderDesc[] = _(
    "A bitter powder\n"
    "that heals all\n"
    "status problems.");

static const u8 sRevivalHerbDesc[] = _(
    "A very bitter herb\n"
    "that revives a\n"
    "fainted Pokémon.");

static const u8 sAntidoteDesc[] = _(
    "Heals a poisoned\n"
    "Pokémon.");

static const u8 sParalyzeHealDesc[] = _(
    "Heals a paralyzed\n"
    "Pokémon.");

static const u8 sBurnHealDesc[] = _(
    "Heals Pokémon\n"
    "of a burn.");

static const u8 sIceHealDesc[] = _(
    "Defrosts a frozen\n"
    "Pokémon.");

static const u8 sAwakeningDesc[] = _(
    "Awakens a sleeping\n"
    "Pokémon.");

static const u8 sFullHealDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sEtherDesc[] = _(
    "Restores the PP\n"
    "of a selected move\n"
    "by 10.");

static const u8 sMaxEtherDesc[] = _(
    "Fully restores the\n"
    "PP of a selected\n"
    "move.");

static const u8 sElixirDesc[] = _(
    "Restores the PP\n"
    "of all moves by 10.");

static const u8 sMaxElixirDesc[] = _(
    "Fully restores the\n"
    "PP of a Pokémon's\n"
    "moves.");

static const u8 sBerryJuiceDesc[] = _(
    "A 100% pure juice\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sSacredAshDesc[] = _(
    "Fully revives and\n"
    "restores all\n"
    "fainted Pokémon.");

static const u8 sSweetHeartDesc[] = _(
    "A sweet chocolate\n"
    "that restores HP\n"
    "by 20 points.");

static const u8 sMaxHoneyDesc[] = _(
    "Revives a fainted\n"
    "Pokémon with all\n"
    "its HP.");

static const u8 sPewterCrunchiesDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sRageCandyBarDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLavaCookieDesc[] = _(
    "A local specialty\n"
    "that heals all\n"
    "status problems.");

static const u8 sOldGateauDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sCasteliaconeDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sLumioseGaletteDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sShalourSableDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

static const u8 sBigMalasadaDesc[] = _(
    "Heals all the\n"
    "status problems of\n"
    "one Pokémon.");

// Vitamins
static const u8 sHPUpDesc[] = _(
    "Raises the base HP\n"
    "of one Pokémon.");

static const u8 sProteinDesc[] = _(
    "Raises the base\n"
    "Attack stat of one\n"
    "Pokémon.");

static const u8 sIronDesc[] = _(
    "Raises the base\n"
    "Defense stat of\n"
    "one Pokémon.");

static const u8 sCalciumDesc[] = _(
    "Raises the base\n"
    "Sp. Atk stat of one\n"
    "Pokémon.");

static const u8 sZincDesc[] = _(
    "Raises the base\n"
    "Sp. Def stat of one\n"
    "Pokémon.");

static const u8 sCarbosDesc[] = _(
    "Raises the base\n"
    "Speed stat of one\n"
    "Pokémon.");

static const u8 sPPUpDesc[] = _(
    "Raises the maximum\n"
    "PP of a selected\n"
    "move.");

static const u8 sPPMaxDesc[] = _(
    "Raises the PP of a\n"
    "move to its maximum\n"
    "points.");

// EV Feathers
static const u8 sHealthFeatherDesc[] = _(
    "An item that raises\n"
    "the base HP of\n"
    "a Pokémon.");

static const u8 sMuscleFeatherDesc[] = _(
    "An item that raises\n"
    "the base Attack of\n"
    "a Pokémon.");

static const u8 sResistFeatherDesc[] = _(
    "An item that raises\n"
    "the base Defense\n"
    "of a Pokémon.");

static const u8 sGeniusFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Atk.\n"
    "of a Pokémon.");

static const u8 sCleverFeatherDesc[] = _(
    "An item that raises\n"
    "the base Sp. Def.\n"
    "of a Pokémon.");

static const u8 sSwiftFeatherDesc[] = _(
    "An item that raises\n"
    "the base Speed of\n"
    "a Pokémon.");

// Ability Modifiers
static const u8 sAbilityCapsuleDesc[] = _(
    "Switches a Poké-\n"
    "mon's ability.");

static const u8 sAbilityPatchDesc[] = _(
    "Turns the ability\n"
    "of a Pokémon into\n"
    "a rare ability.");

// Mints
static const u8 sLonelyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Defense.");

static const u8 sAdamantMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Atk.");

static const u8 sNaughtyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Sp. Def.");

static const u8 sBraveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Attack, but\n"
    "reduces Speed.");

static const u8 sBoldMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Attack.");

static const u8 sImpishMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Atk.");

static const u8 sLaxMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Sp. Def.");

static const u8 sRelaxedMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Defense, but\n"
    "reduces Speed.");

static const u8 sModestMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Attack.");

static const u8 sMildMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Defense.");

static const u8 sRashMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Sp. Def.");

static const u8 sQuietMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Atk, but\n"
    "reduces Speed.");

static const u8 sCalmMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Attack.");

static const u8 sGentleMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Defense.");

static const u8 sCarefulMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Sp. Atk.");

static const u8 sSassyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Sp. Def, but\n"
    "reduces Speed.");

static const u8 sTimidMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

static const u8 sHastyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Defense.");

static const u8 sJollyMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Atk.");

static const u8 sNaiveMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Sp. Def.");

static const u8 sSeriousMintDesc[] = _(
    "Can be smelled. It\n"
    "ups Speed, but\n"
    "reduces Attack.");

// Candy
static const u8 sRareCandyDesc[] = _(
    "Raises the level\n"
    "of a Pokémon by\n"
    "one.");

static const u8 sExpCandyXSDesc[] = _(
    "Gives a very small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandySDesc[] = _(
    "Gives a small\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyMDesc[] = _(
    "Gives a moderate\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyLDesc[] = _(
    "Gives a large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sExpCandyXLDesc[] = _(
    "Gives a very large\n"
    "amount of Exp. to\n"
    "a single Pokémon.");

static const u8 sDynamaxCandyDesc[] = _(
    "Raises the Dynamax\n"
    "Level of a single\n"
    "Pokémon by one.");

// Medicinal Flutes
static const u8 sBlueFluteDesc[] = _(
    "A glass flute that\n"
    "awakens sleeping\n"
    "Pokémon.");

static const u8 sYellowFluteDesc[] = _(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of confusion.");

static const u8 sRedFluteDesc[] = _(
    "A glass flute that\n"
    "snaps Pokémon\n"
    "out of attraction.");

// Encounter-modifying Flutes
static const u8 sBlackFluteDesc[] = _(
    "A glass flute that\n"
    "keeps away wild\n"
    "Pokémon.");

static const u8 sWhiteFluteDesc[] = _(
    "A glass flute that\n"
    "lures wild Pokémon.");

// Encounter Modifiers
static const u8 sRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 100\n"
    "steps.");

static const u8 sSuperRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 200\n"
    "steps.");

static const u8 sMaxRepelDesc[] = _(
    "Repels weak wild\n"
    "Pokémon for 250\n"
    "steps.");

static const u8 sLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 100 steps.");

static const u8 sSuperLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 200 steps.");

static const u8 sMaxLureDesc[] = _(
    "Makes Pokémon more\n"
    "likely to appear\n"
    "for 250 steps.");

static const u8 sEscapeRopeDesc[] = _(
    "Use to escape\n"
    "instantly from a\n"
    "cave or a dungeon.");

// Battle items
static const u8 sXAttackDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Attack during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Attack during one\n"
    "battle.");
#endif

static const u8 sXDefenseDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Defense during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Defense during one\n"
    "battle.");
#endif

static const u8 sXSpAtkDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Atk during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Atk during one\n"
    "battle.");
#endif

static const u8 sXSpDefDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Sp. Def during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Sp. Def during one\n"
    "battle.");
#endif

static const u8 sXSpeedDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises stat\n"
    "Speed during\n"
    "one battle.");
#else
    "Raises the stat\n"
    "Speed during one\n"
    "battle.");
#endif

static const u8 sXAccuracyDesc[] = _(
#if B_X_ITEMS_BUFF >= GEN_7
    "Sharply raises move\n"
    "accuracy during\n"
    "one battle.");
#else
    "Raises accuracy\n"
    "of attack moves\n"
    "during one battle.");
#endif

static const u8 sDireHitDesc[] = _(
    "Raises the\n"
    "critical-hit ratio\n"
    "during one battle.");

static const u8 sGuardSpecDesc[] = _(
    "Prevents stat\n"
    "reduction when\n"
    "used in battle.");

// Escape Items
static const u8 sPokeDollDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sFluffyTailDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sPokeToyDesc[] = _(
    "Use to flee from\n"
    "any battle with\n"
    "a wild Pokémon.");

static const u8 sMaxMushroomsDesc[] = _(
    "Raises every stat\n"
    "during one battle\n"
    "by one stage.");

// Treasures
static const u8 sBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a silver gleam.");

static const u8 sGoldBottleCapDesc[] = _(
    "A beautiful bottle\n"
    "cap that gives off\n"
    "a golden gleam.");

static const u8 sNuggetDesc[] = _(
    "A nugget of pure\n"
    "gold. Can be sold at\n"
    "a high price.");

static const u8 sBigNuggetDesc[] = _(
    "A big nugget made\n"
    "of gold, sellable\n"
    "at a high price.");

static const u8 sTinyMushroomDesc[] = _(
    "A plain mushroom\n"
    "that would sell\n"
    "at a cheap price.");

static const u8 sBigMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sBalmMushroomDesc[] = _(
    "A rare mushroom\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlDesc[] = _(
    "A pretty pearl\n"
    "that would sell at a\n"
    "cheap price.");

static const u8 sBigPearlDesc[] = _(
    "A lovely large pearl\n"
    "that would sell at a\n"
    "high price.");

static const u8 sPearlStringDesc[] = _(
    "Very large pearls\n"
    "that would sell at a\n"
    "high price.");

static const u8 sStardustDesc[] = _(
    "Beautiful red sand.\n"
    "Can be sold at a\n"
    "high price.");

static const u8 sStarPieceDesc[] = _(
    "A red gem shard.\n"
    "It would sell for a\n"
    "very high price.");

static const u8 sCometShardDesc[] = _(
    "A comet's shard.\n"
    "It would sell for a\n"
    "high price.");

static const u8 sShoalSaltDesc[] = _(
    "Salt obtained from\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sShoalShellDesc[] = _(
    "A seashell found\n"
    "deep inside the\n"
    "Shoal Cave.");

static const u8 sRedShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sBlueShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sYellowShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sGreenShardDesc[] = _(
    "A shard from an\n"
    "ancient item. Can\n"
    "be sold cheaply.");

static const u8 sHeartScaleDesc[] = _(
    "A lovely scale.\n"
    "It is coveted by\n"
    "collectors.");

static const u8 sHoneyDesc[] = _(
    "Sweet honey that\n"
    "attracts wild\n"
    "Pokémon when used.");

static const u8 sRareBoneDesc[] = _(
    "A very rare bone.\n"
    "It can be sold at\n"
    "a high price.");

static const u8 sOddKeystoneDesc[] = _(
    "Voices can be heard\n"
    "from this odd stone\n"
    "occasionally.");

static const u8 sPrettyFeatherDesc[] = _(
    "A beautiful yet\n"
    "plain feather that\n"
    "does nothing.");

static const u8 sRelicCopperDesc[] = _(
    "A copper coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicSilverDesc[] = _(
    "A silver coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicGoldDesc[] = _(
    "A gold coin used\n"
    "long ago. It sells\n"
    "at a high price.");

static const u8 sRelicVaseDesc[] = _(
    "A vase made long\n"
    "ago. It sells at\n"
    "a high price.");

static const u8 sRelicBandDesc[] = _(
    "An old bracelet.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicStatueDesc[] = _(
    "An old statue.\n"
    "It sells at a\n"
    "high price.");

static const u8 sRelicCrownDesc[] = _(
    "An old crown.\n"
    "It sells at a\n"
    "high price.");

static const u8 sStrangeSouvenirDesc[] = _(
    "An ornament that\n"
    "depicts a Pokémon\n"
    "from Alola.");

// Fossils
static const u8 sHelixFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's seashell.");

static const u8 sDomeFossilDesc[] = _(
    "A piece of an\n"
    "ancient marine\n"
    "Pokémon's shell.");

static const u8 sOldAmberDesc[] = _(
    "A stone containing\n"
    "the genes of an\n"
    "ancient Pokémon.");

static const u8 sRootFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sClawFossilDesc[] = _(
    "A fossil of an\n"
    "ancient, seafloor-\n"
    "dwelling Pokémon.");

static const u8 sArmorFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sSkullFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's head.");

static const u8 sCoverFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's back.");

static const u8 sPlumeFossilDesc[] = _(
    "A piece of a\n"
    "prehistoric Poké-\n"
    "mon's wing.");

static const u8 sJawFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "large jaw.");

static const u8 sSailFossilDesc[] = _(
    "A piece of a prehis-\n"
    "toric Pokémon's\n"
    "skin sail.");

static const u8 sFossilizedBirdDesc[] = _(
    "A fossil of an\n"
    "ancient, sky-\n"
    "soaring Pokémon.");

static const u8 sFossilizedFishDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

static const u8 sFossilizedDrakeDesc[] = _(
    "A fossil of an\n"
    "ancient, land-\n"
    "roaming Pokémon.");

static const u8 sFossilizedDinoDesc[] = _(
    "A fossil of an\n"
    "ancient, sea-\n"
    "dwelling Pokémon.");

// Mulch
static const u8 sGrowthMulchDesc[] = _(
    "A fertilizer that\n"
    "accelerates the\n"
    "growth of Berries.");

static const u8 sDampMulchDesc[] = _(
    "A fertilizer that\n"
    "decelerates the\n"
    "growth of Berries.");

static const u8 sStableMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the life time\n"
    "of Berry trees.");

static const u8 sGooeyMulchDesc[] = _(
    "A fertilizer that\n"
    "makes more Berries\n"
    "regrow after fall.");

static const u8 sRichMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the number of\n"
    "Berries harvested.");

static const u8 sSurpriseMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the chance of\n"
    "Berry mutations.");

static const u8 sBoostMulchDesc[] = _(
    "A fertilizer that\n"
    "ups the dry speed\n"
    "of soft soil.");

static const u8 sAmazeMulchDesc[] = _(
    "A fertilizer Rich\n"
    "Surprising and\n"
    "Boosting as well.");

// Apricorns
static const u8 sRedApricornDesc[] = _(
    "A red apricorn.\n"
    "It assails your\n"
    "nostrils.");

static const u8 sBlueApricornDesc[] = _(
    "A blue apricorn.\n"
    "It smells a bit\n"
    "like grass.");

static const u8 sYellowApricornDesc[] = _(
    "A yellow apricorn.\n"
    "It has an invigor-\n"
    "ating scent.");

static const u8 sGreenApricornDesc[] = _(
    "A green apricorn.\n"
    "It has a strange,\n"
    "aromatic scent.");

static const u8 sPinkApricornDesc[] = _(
    "A pink apricorn.\n"
    "It has a nice,\n"
    "sweet scent.");

static const u8 sWhiteApricornDesc[] = _(
    "A white apricorn.\n"
    "It doesn't smell\n"
    "like anything.");

static const u8 sBlackApricornDesc[] = _(
    "A black apricorn.\n"
    "It has an inde-\n"
    "scribable scent.");

static const u8 sWishingPieceDesc[] = _(
    "Throw into a\n"
    "{PKMN} Den to attract\n"
    "Dynamax Pokémon.");

static const u8 sGalaricaTwigDesc[] = _(
    "A twig from a tree\n"
    "in Galar called\n"
    "Galarica.");

static const u8 sArmoriteOreDesc[] = _(
    "A rare ore. Can be\n"
    "found in the Isle\n"
    "of Armor at Galar.");

static const u8 sDyniteOreDesc[] = _(
    "A mysterious ore.\n"
    "It can be found in\n"
    "Galar's Max Lair.");

// Mail
static const u8 sOrangeMailDesc[] = _(
    "A Zigzagoon-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sHarborMailDesc[] = _(
    "A Wingull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sGlitterMailDesc[] = _(
    "A Pikachu-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sMechMailDesc[] = _(
    "A Magnemite-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWoodMailDesc[] = _(
    "A Slakoth-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sWaveMailDesc[] = _(
    "A Wailmer-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sBeadMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sShadowMailDesc[] = _(
    "A Duskull-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sTropicMailDesc[] = _(
    "A Bellossom-print\n"
    "Mail to be held by\n"
    "a Pokémon.");

static const u8 sDreamMailDesc[] = _(
    "Mail featuring a\n"
    "sketch of the\n"
    "holding Pokémon.");

static const u8 sFabMailDesc[] = _(
    "A gorgeous-print\n"
    "Mail to be held\n"
    "by a Pokémon.");

static const u8 sRetroMailDesc[] = _(
    "Mail featuring the\n"
    "drawings of three\n"
    "Pokémon.");

// Evolution Items
static const u8 sFireStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sWaterStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sThunderStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sLeafStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sIceStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSunStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sMoonStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sShinyStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDuskStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sDawnStoneDesc[] = _(
    "Makes certain\n"
    "species of Pokémon\n"
    "evolve.");

static const u8 sSweetAppleDesc[] = _(
    "A very sweet apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sTartAppleDesc[] = _(
    "A very tart apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCrackedPotDesc[] = _(
    "A cracked teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sChippedPotDesc[] = _(
    "A chipped teapot\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaCuffDesc[] = _(
    "A cuff from Galar\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sGalaricaWreathDesc[] = _(
    "A wreath made in\n"
    "Galar. Makes some\n"
    "Pokémon evolve.");

static const u8 sDragonScaleDesc[] = _(
    "A strange scale\n"
    "held by Dragon-\n"
    "type Pokémon.");

static const u8 sUpgradeDesc[] = _(
    "A peculiar box made\n"
    "by Silph Co.");

static const u8 sProtectorDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's stiff\n"
    "and heavy.");

static const u8 sElectirizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of electric energy.");

static const u8 sMagmarizerDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. It's full\n"
    "of magma energy.");

static const u8 sDubiousDiscDesc[] = _(
    "A transparent device\n"
    "overflowing with\n"
    "dubious data.");

static const u8 sReaperClothDesc[] = _(
    "Loved by a certain\n"
    "Pokémon. Imbued with\n"
    "spiritual energy.");

static const u8 sPrismScaleDesc[] = _(
    "A mysterious scale\n"
    "that evolves certain\n"
    "Pokémon. It shines.");

static const u8 sWhippedDreamDesc[] = _(
    "A soft and sweet\n"
    "treat loved by\n"
    "a certain Pokémon.");

static const u8 sSachetDesc[] = _(
    "A sachet filled with\n"
    "perfumes loved by\n"
    "a certain Pokémon.");

static const u8 sOvalStoneDesc[] = _(
    "Makes a certain\n"
    "Pokémon evolve. It's\n"
    "shaped like an egg.");

static const u8 sStrawberrySweetDesc[] = _(
    "Strawberry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sLoveSweetDesc[] = _(
    "A heart-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sBerrySweetDesc[] = _(
    "A berry-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sCloverSweetDesc[] = _(
    "A clover-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sFlowerSweetDesc[] = _(
    "A flower-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sStarSweetDesc[] = _(
    "A star-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sRibbonSweetDesc[] = _(
    "A ribbon-shaped\n"
    "sweet loved by\n"
    "Milcery.");

static const u8 sEverstoneDesc[] = _(
    "A wondrous hold\n"
    "item that prevents\n"
    "evolution.");

static const u8 sBlackAuguriteDesc[] = _(
    "A black stone that\n"
    "makes some Pokémon\n"
    "evolve.");;

static const u8 sLinkingCordDesc[] = _(
    "A mysterious string\n"
    "that makes some\n"
    "Pokémon evolve.");

static const u8 sPeatBlockDesc[] = _(
    "A block of material\n"
    "that makes some\n"
    "Pokémon evolve.");

// Nectars
static const u8 sRedNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sYellowNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPinkNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

static const u8 sPurpleNectarDesc[] = _(
    "Flower nectar that\n"
    "changes the form\n"
    "of certain Pokémon.");

// Plates
static const u8 sFlamePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Fire-type moves.");

static const u8 sSplashPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Water-type moves.");

static const u8 sZapPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Elec-\n"
    "tric-type moves.");

static const u8 sMeadowPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Grass-type moves.");

static const u8 sIciclePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ice-type moves.");

static const u8 sFistPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Fight-\n"
    "ing-type moves.");

static const u8 sToxicPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Poison-type moves.");

static const u8 sEarthPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ground-type moves.");

static const u8 sSkyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Flying-type moves.");

static const u8 sMindPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of Psy\n"
    "chic-type moves.");

static const u8 sInsectPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Bug-type moves.");

static const u8 sStonePlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Rock-type moves.");

static const u8 sSpookyPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Ghost-type moves.");

static const u8 sDracoPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dragon-type moves.");

static const u8 sDreadPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Dark-type moves.");

static const u8 sIronPlateDesc[] = _(
    "A tablet that ups\n"
    "the power of\n"
    "Steel-type moves.");

static const u8 sPixiePlateDesc[] = _(
    "A stone tablet that\n"
    "boosts the power of\n"
    "Fairy-type moves.");

// Drives
static const u8 sDouseDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Water-type.");

static const u8 sShockDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Electric-type.");

static const u8 sBurnDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Fire-type.");

static const u8 sChillDriveDesc[] = _(
    "Changes Genesect's\n"
    "Techno Blast to\n"
    "Ice-type.");

// Memories
static const u8 sFireMemoryDesc[] = _(
    "A disc with Fire\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sWaterMemoryDesc[] = _(
    "A disc with Water\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sElectricMemoryDesc[] = _(
    "A disc with Electric\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGrassMemoryDesc[] = _(
    "A disc with Grass\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sIceMemoryDesc[] = _(
    "A disc with Ice\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFightingMemoryDesc[] = _(
    "A disc with Fighting\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPoisonMemoryDesc[] = _(
    "A disc with Poison\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGroundMemoryDesc[] = _(
    "A disc with Ground\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFlyingMemoryDesc[] = _(
    "A disc with Flying\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sPsychicMemoryDesc[] = _(
    "A disc with Psychic\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sBugMemoryDesc[] = _(
    "A disc with Bug\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRockMemoryDesc[] = _(
    "A disc with Rock\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sGhostMemoryDesc[] = _(
    "A disc with Ghost\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDragonMemoryDesc[] = _(
    "A disc with Dragon\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sDarkMemoryDesc[] = _(
    "A disc with Dark\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sSteelMemoryDesc[] = _(
    "A disc with Steel\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sFairyMemoryDesc[] = _(
    "A disc with Fairy\n"
    "type data. It swaps\n"
    "Silvally's type.");

static const u8 sRustedSwordDesc[] = _(
    "A rusty sword. A\n"
    "hero used it to\n"
    "halt a disaster.");

static const u8 sRustedShieldDesc[] = _(
    "A rusty shield. A\n"
    "hero used it to\n"
    "halt a disaster.");

// Colored Orbs
static const u8 sRedOrbDesc[] = _(
    "A red, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

static const u8 sBlueOrbDesc[] = _(
    "A blue, glowing orb\n"
    "said to contain an\n"
    "ancient power.");

// Mega Stones
static const u8 sVenusauriteDesc[] = _(
    "This stone enables\n"
    "Venusaur to Mega\n"
    "Evolve in battle.");

static const u8 sCharizarditeDesc[] = _(
    "This stone enables\n"
    "Charizard to Mega\n"
    "Evolve in battle.");

static const u8 sBlastoisiniteDesc[] = _(
    "This stone enables\n"
    "Blastoise to Mega\n"
    "Evolve in battle.");

static const u8 sBeedrilliteDesc[] = _(
    "This stone enables\n"
    "Beedrill to Mega\n"
    "Evolve in battle.");

static const u8 sPidgeotiteDesc[] = _(
    "This stone enables\n"
    "Pidgeot to Mega\n"
    "Evolve in battle.");

static const u8 sAlakaziteDesc[] = _(
    "This stone enables\n"
    "Alakazam to Mega\n"
    "Evolve in battle.");

static const u8 sSlowbroniteDesc[] = _(
    "This stone enables\n"
    "Slowbro to Mega\n"
    "Evolve in battle.");

static const u8 sGengariteDesc[] = _(
    "This stone enables\n"
    "Gengar to Mega\n"
    "Evolve in battle.");

static const u8 sKangaskhaniteDesc[] = _(
    "This stone enables\n"
    "Kangaskhan to Mega\n"
    "Evolve in battle.");

static const u8 sPinsiriteDesc[] = _(
    "This stone enables\n"
    "Pinsir to Mega\n"
    "Evolve in battle.");

static const u8 sGyaradositeDesc[] = _(
    "This stone enables\n"
    "Gyarados to Mega\n"
    "Evolve in battle.");

static const u8 sAerodactyliteDesc[] = _(
    "This stone enables\n"
    "Aerodactyl to Mega\n"
    "Evolve in battle.");

static const u8 sMewtwoniteDesc[] = _(
    "This stone enables\n"
    "Mewtwo to Mega\n"
    "Evolve in battle.");

static const u8 sAmpharositeDesc[] = _(
    "This stone enables\n"
    "Ampharos to Mega\n"
    "Evolve in battle.");

static const u8 sSteelixiteDesc[] = _(
    "This stone enables\n"
    "Steelix to Mega\n"
    "Evolve in battle.");

static const u8 sScizoriteDesc[] = _(
    "This stone enables\n"
    "Scizor to Mega\n"
    "Evolve in battle.");

static const u8 sHeracroniteDesc[] = _(
    "This stone enables\n"
    "Heracross to Mega\n"
    "Evolve in battle.");

static const u8 sHoundoominiteDesc[] = _(
    "This stone enables\n"
    "Houndoom to Mega\n"
    "Evolve in battle.");

static const u8 sTyranitariteDesc[] = _(
    "This stone enables\n"
    "Tyranitar to Mega\n"
    "Evolve in battle.");

static const u8 sSceptiliteDesc[] = _(
    "This stone enables\n"
    "Sceptile to Mega\n"
    "Evolve in battle.");

static const u8 sBlazikeniteDesc[] = _(
    "This stone enables\n"
    "Blaziken to Mega\n"
    "Evolve in battle.");

static const u8 sSwampertiteDesc[] = _(
    "This stone enables\n"
    "Swampert to Mega\n"
    "Evolve in battle.");

static const u8 sGardevoiriteDesc[] = _(
    "This stone enables\n"
    "Gardevoir to Mega\n"
    "Evolve in battle.");

static const u8 sSableniteDesc[] = _(
    "This stone enables\n"
    "Sableye to Mega\n"
    "Evolve in battle.");

static const u8 sMawiliteDesc[] = _(
    "This stone enables\n"
    "Mawile to Mega\n"
    "Evolve in battle.");

static const u8 sAggroniteDesc[] = _(
    "This stone enables\n"
    "Aggron to Mega\n"
    "Evolve in battle.");

static const u8 sMedichamiteDesc[] = _(
    "This stone enables\n"
    "Medicham to Mega\n"
    "Evolve in battle.");

static const u8 sManectiteDesc[] = _(
    "This stone enables\n"
    "Manectric to Mega\n"
    "Evolve in battle.");

static const u8 sSharpedoniteDesc[] = _(
    "This stone enables\n"
    "Sharpedo to Mega\n"
    "Evolve in battle.");

static const u8 sCameruptiteDesc[] = _(
    "This stone enables\n"
    "Camerupt to Mega\n"
    "Evolve in battle.");

static const u8 sAltarianiteDesc[] = _(
    "This stone enables\n"
    "Altaria to Mega\n"
    "Evolve in battle.");

static const u8 sBanettiteDesc[] = _(
    "This stone enables\n"
    "Banette to Mega\n"
    "Evolve in battle.");

static const u8 sAbsoliteDesc[] = _(
    "This stone enables\n"
    "Absol to Mega\n"
    "Evolve in battle.");

static const u8 sGlalititeDesc[] = _(
    "This stone enables\n"
    "Glalie to Mega\n"
    "Evolve in battle.");

static const u8 sSalamenciteDesc[] = _(
    "This stone enables\n"
    "Salamence to Mega\n"
    "Evolve in battle.");

static const u8 sMetagrossiteDesc[] = _(
    "This stone enables\n"
    "Metagross to Mega\n"
    "Evolve in battle.");

static const u8 sLatiasiteDesc[] = _(
    "This stone enables\n"
    "Latias to Mega\n"
    "Evolve in battle.");

static const u8 sLatiositeDesc[] = _(
    "This stone enables\n"
    "Latios to Mega\n"
    "Evolve in battle.");

static const u8 sLopunniteDesc[] = _(
    "This stone enables\n"
    "Lopunny to Mega\n"
    "Evolve in battle.");

static const u8 sGarchompiteDesc[] = _(
    "This stone enables\n"
    "Garchomp to Mega\n"
    "Evolve in battle.");

static const u8 sLucarioniteDesc[] = _(
    "This stone enables\n"
    "Lucario to Mega\n"
    "Evolve in battle.");

static const u8 sAbomasiteDesc[] = _(
    "This stone enables\n"
    "Abomasnow to Mega\n"
    "Evolve in battle.");

static const u8 sGalladiteDesc[] = _(
    "This stone enables\n"
    "Gallade to Mega\n"
    "Evolve in battle.");

static const u8 sAudiniteDesc[] = _(
    "This stone enables\n"
    "Audino to Mega\n"
    "Evolve in battle.");

static const u8 sDianciteDesc[] = _(
    "This stone enables\n"
    "Diancie to Mega\n"
    "Evolve in battle.");

// Gems
static const u8 sNormalGemDesc[] = _(
    "Increases the\n"
    "power of Normal\n"
    "Type moves.");

static const u8 sFireGemDesc[] = _(
    "Increases the\n"
    "power of Fire\n"
    "Type moves.");

static const u8 sWaterGemDesc[] = _(
    "Increases the\n"
    "power of Water\n"
    "Type moves.");

static const u8 sElectricGemDesc[] = _(
    "Increases the\n"
    "power of Electric\n"
    "Type moves.");

static const u8 sGrassGemDesc[] = _(
    "Increases the\n"
    "power of Grass\n"
    "Type moves.");

static const u8 sIceGemDesc[] = _(
    "Increases the\n"
    "power of Ice\n"
    "Type moves.");

static const u8 sFightingGemDesc[] = _(
    "Increases the\n"
    "power of Fighting\n"
    "Type moves.");

static const u8 sPoisonGemDesc[] = _(
    "Increases the\n"
    "power of Poison\n"
    "Type moves.");

static const u8 sGroundGemDesc[] = _(
    "Increases the\n"
    "power of Ground\n"
    "Type moves.");

static const u8 sFlyingGemDesc[] = _(
    "Increases the\n"
    "power of Flying\n"
    "Type moves.");

static const u8 sPsychicGemDesc[] = _(
    "Increases the\n"
    "power of Psychic\n"
    "Type moves.");

static const u8 sBugGemDesc[] = _(
    "Increases the\n"
    "power of Bug\n"
    "Type moves.");

static const u8 sRockGemDesc[] = _(
    "Increases the\n"
    "power of Rock\n"
    "Type moves.");

static const u8 sGhostGemDesc[] = _(
    "Increases the\n"
    "power of Ghost\n"
    "Type moves.");

static const u8 sDragonGemDesc[] = _(
    "Increases the\n"
    "power of Dragon\n"
    "Type moves.");

static const u8 sDarkGemDesc[] = _(
    "Increases the\n"
    "power of Dark\n"
    "Type moves.");

static const u8 sSteelGemDesc[] = _(
    "Increases the\n"
    "power of Steel\n"
    "Type moves.");

static const u8 sFairyGemDesc[] = _(
    "Increases the\n"
    "power of Fairy\n"
    "Type moves.");

// Z-Crystals
static const u8 sNormaliumZDesc[] = _(
    "Upgrade Normal-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFiriumZDesc[] = _(
    "Upgrade Fire-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sWateriumZDesc[] = _(
    "Upgrade Water-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sElectriumZDesc[] = _(
    "Upgrade Electric-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGrassiumZDesc[] = _(
    "Upgrade Grass-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sIciumZDesc[] = _(
    "Upgrade Ice-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFightiniumZDesc[] = _(
    "Upgrade Fighting-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPoisoniumZDesc[] = _(
    "Upgrade Poison-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGroundiumZDesc[] = _(
    "Upgrade Ground-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFlyiniumZDesc[] = _(
    "Upgrade Flying-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPsychiumZDesc[] = _(
    "Upgrade Psychic-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sBuginiumZDesc[] = _(
    "Upgrade Bug-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sRockiumZDesc[] = _(
    "Upgrade Rock-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sGhostiumZDesc[] = _(
    "Upgrade Ghost-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDragoniumZDesc[] = _(
    "Upgrade Dragon-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sDarkiniumZDesc[] = _(
    "Upgrade Dark-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sSteeliumZDesc[] = _(
    "Upgrade Steel-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sFairiumZDesc[] = _(
    "Upgrade Fairy-\n"
    "type moves into\n"
    "Z-Moves.");

static const u8 sPikaniumZDesc[] = _(
    "Upgrade Pikachu's\n"
    "Volt Tackle\n"
    "into a Z-Move.");

static const u8 sEeviumZDesc[] = _(
    "Upgrade Eevee's\n"
    "Last Resort\n"
    "into a Z-Move.");

static const u8 sSnorliumZDesc[] = _(
    "Upgrade Snorlax's\n"
    "Giga Impact\n"
    "into a Z-Move.");

static const u8 sMewniumZDesc[] = _(
    "Upgrade Mew's\n"
    "Psychic into\n"
    "a Z-Move.");

static const u8 sDecidiumZDesc[] = _(
    "Upgrade Decidu-\n"
    "eye's Spirit Sha-\n"
    "ckle into a Z-Move.");

static const u8 sInciniumZDesc[] = _(
    "Upgrade Incine-\n"
    "roar's Darkest La-\n"
    "riat into a Z-Move.");

static const u8 sPrimariumZDesc[] = _(
    "Upgrade Primarina's\n"
    "Sparkling Aria\n"
    "into a Z-Move.");

static const u8 sLycaniumZDesc[] = _(
    "Upgrade Lycanroc's\n"
    "Stone Edge\n"
    "into a Z-Move.");

static const u8 sMimikiumZDesc[] = _(
    "Upgrade Mimikyu's\n"
    "Play Rough\n"
    "into a Z-Move.");

static const u8 sKommoniumZDesc[] = _(
    "Upgrade Kommo-o's\n"
    "Clanging Scales\n"
    "into a Z-Move.");

static const u8 sTapuniumZDesc[] = _(
    "Upgrade the tapu's\n"
    "Nature's Madness\n"
    "into a Z-Move.");

static const u8 sSolganiumZDesc[] = _(
    "Upgrade Solgaleo's\n"
    "Sunsteel Strike\n"
    "into a Z-Move.");

static const u8 sLunaliumZDesc[] = _(
    "Upgrade Lunala's\n"
    "Moongeist Beam\n"
    "into a Z-Move.");

static const u8 sMarshadiumZDesc[] = _(
    "Upgrade Marsha-\n"
    "dow's Spectral Thi-\n"
    "ef into a Z-Move.");

static const u8 sAloraichiumZDesc[] = _(
    "Upgrade Alolan\n"
    "Raichu's Thunder-\n"
    "bolt into a Z-Move.");

static const u8 sPikashuniumZDesc[] = _(
    "Upgrade Pikachu w/\n"
    "a cap's Thunderbolt\n"
    "into a Z-Move.");

static const u8 sUltranecroziumZDesc[] = _(
    "A crystal to turn\n"
    "fused Necrozma\n"
    "into a new form.");

// Species-specific Held Items
static const u8 sLightBallDesc[] = _(
    "A hold item that\n"
    "raises the Atk and\n"
    "Sp. Atk of Pikachu.");

static const u8 sLeekDesc[] = _(
    "A hold item that\n"
    "raises Farfetch'd's\n"
    "critical-hit ratio.");

static const u8 sThickClubDesc[] = _(
    "A hold item that \n"
    "raises Cubone or\n"
    "Marowak's Attack.");

static const u8 sLuckyPunchDesc[] = _(
    "A hold item that\n"
    "raises Chansey's\n"
    "critical-hit rate.");

static const u8 sMetalPowderDesc[] = _(
    "A hold item that\n"
    "raises Ditto's\n"
    "Defense.");

static const u8 sQuickPowderDesc[] = _(
    "An item to be held\n"
    "by Ditto. This odd\n"
    "powder boosts Speed.");

static const u8 sDeepSeaScaleDesc[] = _(
    "A hold item that\n"
    "raises the Sp. Def\n"
    "of Clamperl.");

static const u8 sDeepSeaToothDesc[] = _(
    "A hold item that\n"
    "raises the Sp. Atk\n"
    "of Clamperl.");

static const u8 sSoulDewDesc[] = _(
#if B_SOUL_DEW_BOOST >= GEN_7
    "Powers up Latios' &\n"
    "Latias' Psychic and\n"
    "Dragon-type moves.");
#else
    "Hold item: raises\n"
    "Sp. Atk & Sp. Def of\n"
    "Latios & Latias.");
#endif

static const u8 sAdamantOrbDesc[] = _(
    "Boosts the power of\n"
    "Dialga's Dragon and\n"
    "Steel-type moves.");

static const u8 sLustrousOrbDesc[] = _(
    "Boosts the power of\n"
    "Palkia's Dragon and\n"
    "Water-type moves.");

static const u8 sGriseousOrbDesc[] = _(
    "Powers up Giratina's\n"
    "Dragon and Ghost-\n"
    "type moves.");

// Incenses
static const u8 sSeaIncenseDesc[] = _(
    "A hold item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sLaxIncenseDesc[] = _(
    "A hold item that\n"
    "slightly lowers the\n"
    "foe's accuracy.");

static const u8 sOddIncenseDesc[] = _(
    "A hold item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sRockIncenseDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sFullIncenseDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sWaveIncenseDesc[] = _(
    "A hold item that\n"
    "slightly boosts\n"
    "Water-type moves.");

static const u8 sRoseIncenseDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sLuckIncenseDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sPureIncenseDesc[] = _(
    "A hold item that\n"
    "helps repel wild\n"
    "Pokémon.");

// Contest Scarves
static const u8 sRedScarfDesc[] = _(
    "A hold item that\n"
    "raises Cool in\n"
    "Contests.");

static const u8 sBlueScarfDesc[] = _(
    "A hold item that\n"
    "raises Beauty in\n"
    "Contests.");

static const u8 sPinkScarfDesc[] = _(
    "A hold item that\n"
    "raises Cute in\n"
    "Contests.");

static const u8 sGreenScarfDesc[] = _(
    "A hold item that\n"
    "raises Smart in\n"
    "Contests.");

static const u8 sYellowScarfDesc[] = _(
    "A hold item that\n"
    "raises Tough in\n"
    "Contests.");

// EV Gain Modifiers
static const u8 sMachoBraceDesc[] = _(
    "A hold item that\n"
    "promotes growth,\n"
    "but reduces Speed.");

static const u8 sPowerWeightDesc[] = _(
    "A hold item that\n"
    "promotes HP gain,\n"
    "but reduces Speed.");

static const u8 sPowerBracerDesc[] = _(
    "A hold item that\n"
    "promotes Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBeltDesc[] = _(
    "A hold item that\n"
    "promotes Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerLensDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Atk gain,\n"
    "but reduces Speed.");

static const u8 sPowerBandDesc[] = _(
    "Hold item that pro-\n"
    "motes Sp. Def gain,\n"
    "but reduces Speed.");

static const u8 sPowerAnkletDesc[] = _(
    "A hold item that\n"
    "promotes Spd gain,\n"
    "but reduces Speed.");

// Type-boosting Held Items
static const u8 sSilkScarfDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Normal-type moves.");

static const u8 sCharcoalDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Fire-type moves.");

static const u8 sMysticWaterDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Water-type moves.");

static const u8 sMagnetDesc[] = _(
    "A hold item that\n"
    "boosts Electric-\n"
    "type moves.");

static const u8 sMiracleSeedDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Grass-type moves.");

static const u8 sNeverMeltIceDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Ice-type moves.");

static const u8 sBlackBeltDesc[] = _(
    "A hold item that\n"
    "boosts Fighting-\n"
    "type moves.");

static const u8 sPoisonBarbDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Poison-type moves.");

static const u8 sSoftSandDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Ground-type moves.");

static const u8 sSharpBeakDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Flying-type moves.");

static const u8 sTwistedSpoonDesc[] = _(
    "A hold item that\n"
    "boosts Psychic-\n"
    "type moves.");

static const u8 sSilverPowderDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Bug-type moves.");

static const u8 sHardStoneDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Rock-type moves.");

static const u8 sSpellTagDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Ghost-type moves.");

static const u8 sDragonFangDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Dragon-type moves.");

static const u8 sBlackGlassesDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Dark-type moves.");

static const u8 sMetalCoatDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Steel-type moves.");

// Choice Items
static const u8 sChoiceBandDesc[] = _(
    "Raises a move's\n"
    "power, but permits\n"
    "only that move.");

static const u8 sChoiceSpecsDesc[] = _(
    "Boosts Sp. Atk, but\n"
    "allows the use of\n"
    "only one move.");

static const u8 sChoiceScarfDesc[] = _(
    "Boosts Speed, but\n"
    "allows the use of\n"
    "only one move.");

// Status Orbs
static const u8 sFlameOrbDesc[] = _(
    "A bizarre orb that\n"
    "inflicts a burn on\n"
    "holder in battle.");

static const u8 sToxicOrbDesc[] = _(
    "A bizarre orb that\n"
    "badly poisons the\n"
    "holder in battle.");

// Weather Rocks
static const u8 sDampRockDesc[] = _(
    "Extends the length\n"
    "of Rain Dance if\n"
    "used by the holder.");

static const u8 sHeatRockDesc[] = _(
    "Extends the length\n"
    "of Sunny Day if\n"
    "used by the holder.");

static const u8 sSmoothRockDesc[] = _(
    "Extends the length\n"
    "of Sandstorm if\n"
    "used by the holder.");

static const u8 sIcyRockDesc[] = _(
    "Extends the length\n"
    "of the move Hail\n"
    "used by the holder.");

// Terrain Seeds
static const u8 sElectricSeedDesc[] = _(
    "Boosts Defense on\n"
    "Electric Terrain,\n"
    "but only one time.");

static const u8 sPsychicSeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Psychic Terrain,\n"
    "but only one time.");

static const u8 sMistySeedDesc[] = _(
    "Boosts Sp. Def. on\n"
    "Misty Terrain,\n"
    "but only one time.");

static const u8 sGrassySeedDesc[] = _(
    "Boosts Defense on\n"
    "Grassy Terrain,\n"
    "but only one time.");

// Type-activated Stat Modifiers
static const u8 sAbsorbBulbDesc[] = _(
    "Raises Sp. Atk if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sCellBatteryDesc[] = _(
    "Raises Atk if the\n"
    "holder is hit by an\n"
    "Electric-type move.");

static const u8 sLuminousMossDesc[] = _(
    "Raises Sp. Def if\n"
    "the holder is hit by\n"
    "a Water-type move.");

static const u8 sSnowballDesc[] = _(
    "Raises Atk if its\n"
    "holder is hit by an\n"
    "Ice-type move.");

// Misc. Held Items
static const u8 sBrightPowderDesc[] = _(
    "A hold item that\n"
    "casts a glare to\n"
    "reduce accuracy.");

static const u8 sWhiteHerbDesc[] = _(
    "A hold item that\n"
    "restores any\n"
    "lowered stat.");

static const u8 sExpShareDesc[] = _(
#if I_EXP_SHARE_ITEM >= GEN_6
    "This device gives\n"
    "exp. to other\n"
    "party members.");
#else
    "A hold item that\n"
    "gets Exp. points\n"
    "from battles.");
#endif

static const u8 sQuickClawDesc[] = _(
    "A hold item that\n"
    "occasionally allows\n"
    "the first strike.");

static const u8 sSootheBellDesc[] = _(
    "A hold item that\n"
    "calms spirits and\n"
    "fosters friendship.");

#if B_MENTAL_HERB >= GEN_5
static const u8 sMentalHerbDesc[] = _(
    "Snaps Pokémon out\n"
    "of move-binding\n"
    "effects.");
#else
static const u8 sMentalHerbDesc[] = _(
    "A hold item that\n"
    "snaps Pokémon out\n"
    "of infatuation.");
#endif

static const u8 sKingsRockDesc[] = _(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sAmuletCoinDesc[] = _(
    "Doubles money in\n"
    "battle if the\n"
    "holder takes part.");

static const u8 sCleanseTagDesc[] = _(
    "A hold item that\n"
    "helps repel wild\n"
    "Pokémon.");

static const u8 sSmokeBallDesc[] = _(
    "A hold item that\n"
    "assures fleeing\n"
    "from wild Pokémon.");

static const u8 sFocusBandDesc[] = _(
    "A hold item that\n"
    "occasionally\n"
    "prevents fainting.");

static const u8 sLuckyEggDesc[] = _(
    "A hold item that\n"
    "boosts Exp. points\n"
    "earned in battle.");

static const u8 sScopeLensDesc[] = _(
    "A hold item that\n"
    "improves the\n"
    "critical-hit rate.");

static const u8 sLeftoversDesc[] = _(
    "A hold item that\n"
    "gradually restores\n"
    "HP in battle.");

static const u8 sShellBellDesc[] = _(
    "A hold item that\n"
    "restores HP upon\n"
    "striking the foe.");

static const u8 sWideLensDesc[] = _(
    "A magnifying lens\n"
    "that boosts the\n"
    "accuracy of moves.");

static const u8 sMuscleBandDesc[] = _(
    "A headband that\n"
    "boosts the power of\n"
    "physical moves.");

static const u8 sWiseGlassesDesc[] = _(
    "A pair of glasses\n"
    "that ups the power\n"
    "of special moves.");

static const u8 sExpertBeltDesc[] = _(
    "A belt that boosts\n"
    "the power of super\n"
    "effective moves.");

static const u8 sLightClayDesc[] = _(
    "Extends the length\n"
    "of barrier moves\n"
    "used by the holder.");

static const u8 sLifeOrbDesc[] = _(
    "Boosts the power of\n"
    "moves at the cost\n"
    "of some HP per turn.");

static const u8 sPowerHerbDesc[] = _(
    "Allows immediate\n"
    "use of a move that\n"
    "charges first.");

static const u8 sFocusSashDesc[] = _(
    "If the holder has\n"
    "full HP, it endures\n"
    "KO hits with 1 HP.");

static const u8 sZoomLensDesc[] = _(
    "If the holder moves\n"
    "after the foe, it'll\n"
    "boost accuracy.");

static const u8 sMetronomeDesc[] = _(
    "A held item that\n"
    "boosts a move used\n"
    "consecutively.");

static const u8 sIronBallDesc[] = _(
    "Cuts Speed and lets\n"
    "Flying-types be hit\n"
    "by Ground moves.");

static const u8 sLaggingTailDesc[] = _(
    "A held item that\n"
    "makes the holder\n"
    "move slower.");

static const u8 sDestinyKnotDesc[] = _(
    "If the holder falls\n"
    "in love, the foe\n"
    "does too.");

static const u8 sBlackSludgeDesc[] = _(
    "Gradually restores\n"
    "HP of Poison-types.\n"
    "Damages others.");

static const u8 sGripClawDesc[] = _(
    "Makes binding moves\n"
    "used by the holder\n"
    "go on for 7 turns.");

static const u8 sStickyBarbDesc[] = _(
    "Damages the holder\n"
    "each turn. May latch\n"
    "on to foes.");

static const u8 sShedShellDesc[] = _(
    "Enables the holder\n"
    "to switch out of\n"
    "battle without fail.");

static const u8 sBigRootDesc[] = _(
    "A held item that\n"
    "boosts the power of\n"
    "HP-stealing moves.");

static const u8 sRazorClawDesc[] = _(
    "A hooked claw that\n"
    "ups the holder's\n"
    "critical-hit ratio.");

static const u8 sRazorFangDesc[] = _(
    "A hold item that\n"
    "may cause flinching\n"
    "when the foe is hit.");

static const u8 sEvioliteDesc[] = _(
    "Raises the Def and\n"
    "Sp. Def of Pokémon\n"
    "that can evolve.");

static const u8 sFloatStoneDesc[] = _(
    "It's so light that\n"
    "when held, it halves\n"
    "a Pokémon's weight.");

static const u8 sRockyHelmetDesc[] = _(
    "Hurts the foe if\n"
    "they touch its\n"
    "holder.");

static const u8 sAirBalloonDesc[] = _(
    "Elevates the holder\n"
    "in the air. If hit,\n"
    "this item will burst.");

static const u8 sRedCardDesc[] = _(
    "Switches out the\n"
    "foe if they hit the\n"
    "holder.");

static const u8 sRingTargetDesc[] = _(
    "Moves that wouldn't\n"
    "have effect will\n"
    "land on its holder.");

static const u8 sBindingBandDesc[] = _(
    "Increases the\n"
    "power of binding\n"
    "moves when held.");

static const u8 sEjectButtonDesc[] = _(
    "Switches out the\n"
    "user if they're hit\n"
    "by the foe.");

static const u8 sWeaknessPolicyDesc[] = _(
    "If hit by a Super\n"
    "Effective move, ups\n"
    "Atk and Sp. Atk.");

static const u8 sAssaultVestDesc[] = _(
    "Raises Sp. Def but\n"
    "prevents the use\n"
    "of status moves.");

static const u8 sSafetyGogglesDesc[] = _(
    "Protect from\n"
    "weather damage and\n"
    "powder moves.");

static const u8 sAdrenalineOrbDesc[] = _(
    "Boosts Speed if the\n"
    "user is intimidated,\n"
    "but only one time.");

static const u8 sTerrainExtenderDesc[] = _(
    "Extends the length\n"
    "of the active\n"
    "battle terrain.");

static const u8 sProtectivePadsDesc[] = _(
    "Guard the holder\n"
    "from contact move\n"
    "effects.");

static const u8 sThroatSprayDesc[] = _(
    "Raises Sp. Atk. if\n"
    "the holder uses a\n"
    "sound-based move.");

static const u8 sEjectPackDesc[] = _(
    "Forces the user to\n"
    "switch if its stats\n"
    "are lowered.");

static const u8 sHeavyDutyBootsDesc[] = _(
    "Boots that prevent\n"
    "effects of traps\n"
    "set in the field.");

static const u8 sBlunderPolicyDesc[] = _(
    "Raises Speed if\n"
    "the user misses\n"
    "due to Accuracy.");

static const u8 sRoomServiceDesc[] = _(
    "Lowers Speed if\n"
    "Trick Room is\n"
    "active.");

static const u8 sUtilityUmbrellaDesc[] = _(
    "An umbrella that\n"
    "protects from\n"
    "weather effects.");

// Berries
static const u8 sCheriBerryDesc[] = _(
    "A hold item that\n"
    "heals paralysis\n"
    "in battle.");

static const u8 sChestoBerryDesc[] = _(
    "A hold item that\n"
    "awakens Pokémon\n"
    "in battle.");

static const u8 sPechaBerryDesc[] = _(
    "A hold item that\n"
    "heals poisoning\n"
    "in battle.");

static const u8 sRawstBerryDesc[] = _(
    "A hold item that\n"
    "heals a burn in\n"
    "battle.");

static const u8 sAspearBerryDesc[] = _(
    "A hold item that\n"
    "defrosts Pokémon\n"
    "in battle.");

static const u8 sLeppaBerryDesc[] = _(
    "A hold item that\n"
    "restores 10 PP in\n"
    "battle.");

static const u8 sOranBerryDesc[] = _(
    "A hold item that\n"
    "restores 10 HP in\n"
    "battle.");

static const u8 sPersimBerryDesc[] = _(
    "A hold item that\n"
    "heals confusion\n"
    "in battle.");

static const u8 sLumBerryDesc[] = _(
    "A hold item that\n"
    "heals any status\n"
    "problem in battle.");

static const u8 sSitrusBerryDesc[] = _(
#if I_SITRUS_BERRY_HEAL >= GEN_4
    "A hold item that\n"
    "restores the user's\n"
    "HP a little.");
#else
    "A hold item that\n"
    "restores 30 HP in\n"
    "battle.");
#endif

static const u8 sFigyBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sWikiBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sMagoBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sAguavBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sIapapaBerryDesc[] = _(
    "A hold item that\n"
    "restores HP but\n"
    "may confuse.");

static const u8 sRazzBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Razz.");

static const u8 sBlukBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Bluk.");

static const u8 sNanabBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nanab.");

static const u8 sWepearBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Wepear.");

static const u8 sPinapBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pinap.");

static const u8 sPomegBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base HP.");

static const u8 sKelpsyBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Attack.");

static const u8 sQualotBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Defense.");

static const u8 sHondewBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Atk.");

static const u8 sGrepaBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Sp. Def.");

static const u8 sTamatoBerryDesc[] = _(
    "Makes a Pokémon\n"
    "friendly but lowers\n"
    "base Speed.");

static const u8 sCornnBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Cornn.");

static const u8 sMagostBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Magost.");

static const u8 sRabutaBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Rabuta.");

static const u8 sNomelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Nomel.");

static const u8 sSpelonBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Spelon.");

static const u8 sPamtreBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Pamtre.");

static const u8 sWatmelBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Watmel.");

static const u8 sDurinBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Durin.");

static const u8 sBelueBerryDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow Belue.");

static const u8 sChilanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Normal\n"
    "move.");

static const u8 sOccaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fire\n"
    "move if weak to it.");

static const u8 sPasshoBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Water\n"
    "move if weak to it.");

static const u8 sWacanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Electric\n"
    "move if weak to it.");

static const u8 sRindoBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Grass\n"
    "move if weak to it.");

static const u8 sYacheBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ice\n"
    "move if weak to it.");

static const u8 sChopleBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fighting\n"
    "move if weak to it.");

static const u8 sKebiaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Poison\n"
    "move if weak to it.");

static const u8 sShucaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ground\n"
    "move if weak to it.");

static const u8 sCobaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Flying\n"
    "move if weak to it.");

static const u8 sPayapaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Psychic\n"
    "move if weak to it.");

static const u8 sTangaBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Bug\n"
    "move if weak to it.");

static const u8 sChartiBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Rock\n"
    "move if weak to it.");

static const u8 sKasibBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Ghost\n"
    "move if weak to it.");

static const u8 sHabanBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Dragon\n"
    "move if weak to it.");

static const u8 sColburBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Dark\n"
    "move if weak to it.");

static const u8 sBabiriBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Steel\n"
    "move if weak to it.");

static const u8 sRoseliBerryDesc[] = _(
    "A hold item that\n"
    "weakens a Fairy\n"
    "move if weak to it.");

static const u8 sLiechiBerryDesc[] = _(
    "A hold item that\n"
    "raises Attack in\n"
    "a pinch.");

static const u8 sGanlonBerryDesc[] = _(
    "A hold item that\n"
    "raises Defense in\n"
    "a pinch.");

static const u8 sSalacBerryDesc[] = _(
    "A hold item that\n"
    "raises Speed in\n"
    "a pinch.");

static const u8 sPetayaBerryDesc[] = _(
    "A hold item that\n"
    "raises Sp. Atk in\n"
    "a pinch.");

static const u8 sApicotBerryDesc[] = _(
    "A hold item that\n"
    "raises Sp. Def in\n"
    "a pinch.");

static const u8 sLansatBerryDesc[] = _(
    "A hold item that\n"
    "ups the critical-\n"
    "hit rate in a pinch.");

static const u8 sStarfBerryDesc[] = _(
    "A hold item that\n"
    "sharply boosts a\n"
    "stat in a pinch.");

static const u8 sEnigmaBerryDesc[] = _(
    "A hold item that\n"
    "heals from super\n"
    "effective moves.");

static const u8 sMicleBerryDesc[] = _(
    "When held, it ups\n"
    "the Accuracy of a\n"
    "move in a pinch.");

static const u8 sCustapBerryDesc[] = _(
    "It allows a Pokémon\n"
    "in a pinch to move\n"
    "first just once.");

static const u8 sJabocaBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sRowapBerryDesc[] = _(
    "If hit by a special\n"
    "move, it will hurt\n"
    "the attacker a bit.");

static const u8 sKeeBerryDesc[] = _(
    "If hit by a physical\n"
    "move, it raises the\n"
    "Defense a bit.");

static const u8 sMarangaBerryDesc[] = _(
    "If hit by a special\n"
    "move, it raises the\n"
    "Sp. Def. a bit.");

static const u8 sEnigmaBerryEReaderDesc[] = _(
    "{POKEBLOCK} ingredient.\n"
    "Plant in loamy soil\n"
    "to grow a mystery.");

// TMs/HMs
static const u8 sTM01Desc[] = _(
    "Powerful, but makes\n"
    "the user flinch if\n"
    "hit by the foe.");

static const u8 sTM02Desc[] = _(
    "Hooks and slashes\n"
    "the foe with long,\n"
    "sharp claws.");

static const u8 sTM03Desc[] = _(
    "Generates an\n"
    "ultrasonic wave\n"
    "that may confuse.");

static const u8 sTM04Desc[] = _(
    "Raises Sp. Atk and\n"
    "Sp. Def by focusing\n"
    "the mind.");

static const u8 sTM05Desc[] = _(
    "A savage roar that\n"
    "makes the foe flee \n"
    "to end the battle.");

static const u8 sTM06Desc[] = _(
    "Poisons the foe\n"
    "with a toxin that\n"
    "gradually worsens.");

static const u8 sTM07Desc[] = _(
    "Creates a hailstorm\n"
    "that damages all\n"
    "types except Ice.");

static const u8 sTM08Desc[] = _(
    "Bulks up the body\n"
    "to boost both\n"
    "Attack & Defense.");

static const u8 sTM09Desc[] = _(
    "Shoots 2 to 5 seeds\n"
    "in a row to strike\n"
    "the foe.");

static const u8 sTM10Desc[] = _(
    "The attack power\n"
    "varies among\n"
    "different Pokémon.");

static const u8 sTM11Desc[] = _(
    "Raises the power of\n"
    "Fire-type moves\n"
    "for 5 turns.");

static const u8 sTM12Desc[] = _(
    "Enrages the foe so\n"
    "it can only use\n"
    "attack moves.");

static const u8 sTM13Desc[] = _(
    "Fires an icy cold\n"
    "beam that may\n"
    "freeze the foe.");

static const u8 sTM14Desc[] = _(
    "A brutal snow-and-\n"
    "wind attack that\n"
    "may freeze the foe.");

static const u8 sTM15Desc[] = _(
    "Powerful, but needs\n"
    "recharging the\n"
    "next turn.");

static const u8 sTM16Desc[] = _(
    "Creates a wall of\n"
    "light that lowers\n"
    "Sp. Atk damage.");

static const u8 sTM17Desc[] = _(
    "Negates all damage,\n"
    "but may fail if used\n"
    "in succession.");

static const u8 sTM18Desc[] = _(
    "Raises the power of\n"
    "Water-type moves\n"
    "for 5 turns.");

static const u8 sTM19Desc[] = _(
    "Recovers half the\n"
    "HP of the damage \n"
    "this move inflicts.");

static const u8 sTM20Desc[] = _(
    "Prevents status\n"
    "abnormality with a\n"
    "mystical power.");

static const u8 sTM21Desc[] = _(
    "The less the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM22Desc[] = _(
    "Absorbs sunlight in\n"
    "the 1st turn, then\n"
    "attacks next turn.");

static const u8 sTM23Desc[] = _(
    "Slams the foe with\n"
    "a hard tail. It may\n"
    "lower Defense.");

static const u8 sTM24Desc[] = _(
    "A powerful electric\n"
    "attack that may\n"
    "cause paralysis.");

static const u8 sTM25Desc[] = _(
    "Strikes the foe\n"
    "with a thunderbolt.\n"
    "It may paralyze.");

static const u8 sTM26Desc[] = _(
    "Causes a quake\n"
    "that has no effect\n"
    "on flying foes.");

static const u8 sTM27Desc[] = _(
    "The more the user\n"
    "likes you, the more\n"
    "powerful this move.");

static const u8 sTM28Desc[] = _(
    "Digs underground\n"
    "the 1st turn, then\n"
    "strikes next turn.");

static const u8 sTM29Desc[] = _(
    "A powerful psychic\n"
    "attack that may\n"
    "lower Sp. Def.");

static const u8 sTM30Desc[] = _(
    "Hurls a dark lump\n"
    "at the foe. It may\n"
    "lower Sp. Def.");

static const u8 sTM31Desc[] = _(
    "Destroys barriers\n"
    "like Light Screen\n"
    "and causes damage.");

static const u8 sTM32Desc[] = _(
    "Creates illusory\n"
    "copies to enhance\n"
    "elusiveness.");

static const u8 sTM33Desc[] = _(
    "Creates a wall of\n"
    "light that weakens\n"
    "physical attacks.");

static const u8 sTM34Desc[] = _(
    "Zaps the foe with a\n"
    "jolt of electricity\n"
    "that never misses.");

static const u8 sTM35Desc[] = _(
    "Looses a stream of\n"
    "fire that may burn\n"
    "the foe.");

static const u8 sTM36Desc[] = _(
    "Hurls sludge at the\n"
    "foe. It may poison\n"
    "the foe.");

static const u8 sTM37Desc[] = _(
    "Causes a sandstorm\n"
    "that hits the foe\n"
    "over several turns.");

static const u8 sTM38Desc[] = _(
    "A powerful fire\n"
    "attack that may\n"
    "burn the foe.");

static const u8 sTM39Desc[] = _(
    "Stops the foe from\n"
    "moving with rocks.\n"
    "May lower Speed.");

static const u8 sTM40Desc[] = _(
    "An extremely fast\n"
    "attack that can't\n"
    "be avoided.");

static const u8 sTM41Desc[] = _(
    "Prevents the foe\n"
    "from using the same\n"
    "move in a row.");

static const u8 sTM42Desc[] = _(
    "Raises Attack when\n"
    "poisoned, burned,\n"
    "or paralyzed.");

static const u8 sTM43Desc[] = _(
    "Adds an effect to\n"
    "attack depending\n"
    "on the location.");

static const u8 sTM44Desc[] = _(
    "The user sleeps for\n"
    "2 turns to restore\n"
    "health and status.");

static const u8 sTM45Desc[] = _(
    "Makes it tough to\n"
    "attack a foe of the\n"
    "opposite gender.");

static const u8 sTM46Desc[] = _(
    "While attacking,\n"
    "it may steal the\n"
    "foe's held item.");

static const u8 sTM47Desc[] = _(
    "Spreads hard-\n"
    "edged wings and\n"
    "slams into the foe.");

static const u8 sTM48Desc[] = _(
    "Switches abilities\n"
    "with the foe on the\n"
    "turn this is used.");

static const u8 sTM49Desc[] = _(
    "Steals the effects\n"
    "of the move the foe\n"
    "is trying to use.");

static const u8 sTM50Desc[] = _(
    "Enables full-power\n"
    "attack, but sharply\n"
    "lowers Sp. Atk.");

static const u8 sTM51Desc[] = _(
    "A strong punch thrown\n"
    "with incredible power.");

static const u8 sTM52Desc[] = _(   
    "Blades of wind hit the\n"
    "foe on the 2nd turn.\n"
    "It has a high critical-hit ratio.");

static const u8 sTM53Desc[] = _(   
    "A fighting dance that\n"
    "sharply raises ATTACK.");

static const u8 sTM54Desc[] = _(   
    "Blows away the foe with wind\n"
    "and ends the battle.");

static const u8 sTM55Desc[] = _(   
    "An extremely powerful kick\n"
    "with intense force.");

static const u8 sTM56Desc[] = _(   
    "A one-hit KO attack that\n"
    "uses a horn like a drill.");

static const u8 sTM57Desc[] = _(   
    "A full-body slam\n"
    "that may cause paralysis.");

static const u8 sTM58Desc[] = _(   
    "A reckless charge attack\n"
    "that also hurts the user.");

static const u8 sTM59Desc[] = _(   
    "A life-risking tackle\n"
    "that also hurts the user.");

static const u8 sTM60Desc[] = _(   
    "A spray of bubbles strikes\n"
    "the foe. It may lower the\n"
    "SPEED stat of the foe.");

static const u8 sTM61Desc[] = _(   
    "The foe is hit with a flashing\n"
    "beam that may also cause confusion.");

static const u8 sTM62Desc[] = _(   
    "Draws the foe close, then\n"
    "strikes without fail.");

static const u8 sTM63Desc[] = _(   
    "A reckless, full-body throw\n"
    "attack that also hurts the user\n"
    "a little.");

static const u8 sTM64Desc[] = _(   
    "Retaliates any physical hit\n"
    "with double the power.");

static const u8 sTM65Desc[] = _(   
    "The foe is thrown using the\n"
    "power of gravity. It inflicts\n"
    "damage equal to the level of the user.");

static const u8 sTM66Desc[] = _(   
    "Borrowing the power of the moon,\n"
    "the user attacks the target. This may\n"
    "also lower the Sp. Atk stat of the target.");

static const u8 sTM67Desc[] = _(   
    "An attack that absorbs half\n"
    "the damage inflicted.");

static const u8 sTM68Desc[] = _(   
    "The user slashes the foe the\n"
    "instant an opportunity arises.\n"
    "It has a high critical-hit ratio.");

static const u8 sTM69Desc[] = _(   
    "A one-hit KO move that drops\n"
    "the foe in a fissure.");

static const u8 sTM70Desc[] = _(   
    "Use it to flee from any wild\n"
    "POKéMON. Also warps to the last\n"
    "POKé CENTER.");

static const u8 sTM71Desc[] = _(   
    "The user attacks by kicking up\n"
    "into the air and slamming its heel\n"
    "down upon the target. This may also confuse\n"
    "the target. If it misses, the user takes damage instead.");

static const u8 sTM72Desc[] = _(   
    "The user endures attacks for two turns,\n"
    "then strikes back double.");

static const u8 sTM73Desc[] = _(   
    "The user waggles a finger and stimulates\n"
    "the brain into randomly using nearly any move.");

static const u8 sTM74Desc[] = _(   
    "The user blows up to inflict severe\n"
    "damage, even making itself faint.");

static const u8 sTM75Desc[] = _(   
    "The user rampages around spewing\n"
    "flames for two to three turns. The user\n"
    "then becomes confused.");

static const u8 sTM76Desc[] = _(   
    "Star-shaped rays are shot at\n"
    "the opposing Pokémon. This attack\n"
    "never misses.");

static const u8 sTM77Desc[] = _(   
    "The user tucks in its head to raise\n"
    "its Defense in the first turn, then rams\n"
    "the foe on the next turn.");

static const u8 sTM78Desc[] = _(   
    "The user rapidly cools the target.\n"
    "This may also leave the target frozen.\n"
    "This move is super effective on Water types.");

static const u8 sTM79Desc[] = _(   
    "Absorbs half the damage it inflicted\n"
    "on a sleeping foe to restore HP.");

static const u8 sTM80Desc[] = _(   
    "A second-turn attack move with a\n"
    "high critical-hit ratio. It may also make\n"
    "the target flinch.");

static const u8 sTM81Desc[] = _(  
    "A weak electric shock that is sure to\n"
    "cause paralysis if it hits.");

static const u8 sTM82Desc[] = _(   
    "The target is attacked with an odd\n"
    "psychic wave. The attack varies in intensity.");

static const u8 sTM83Desc[] = _(   
    "The user explodes to inflict damage\n"
    "on all Pokémon in battle. The user faints\n"
    "upon using this move.");

static const u8 sTM84Desc[] = _(   
    "Large boulders are hurled at\n"
    "the foe to inflict damage. It may\n"
    "also make the target flinch.");

static const u8 sTM85Desc[] = _(   
    "A simultaneous 3-beam attack that\n"
    "may paralyze, burn, or freeze the foe.");

static const u8 sTM86Desc[] = _(   
    "The user creates a decoy using\n"
    "one-quarter of its full HP.");

static const u8 sTM87Desc[] = _(   
    "The user punches the target with full,\n"
    "concentrated power. It confuses the target\n"
    "if it hits.");

static const u8 sTM88Desc[] = _(   
    "The user sticks its head out and\n"
    "rams straight forward. It may make\n"
    "the foe flinch.");

static const u8 sTM89Desc[] = _(   
    "A move that has different effects\n"
    "depending on whether the user is a\n"
    "Ghost type or not.");

static const u8 sTM90Desc[] = _(   
    "The user continually rolls into\n"
    "the foe over five turns. It becomes\n"
    "stronger each time it hits.");

static const u8 sTM91Desc[] = _(   
    "The user hypnotizes itself into\n"
    "copying any stat change made by the foe.");

static const u8 sTM92Desc[] = _(   
    "Allures the foe to reduce evasiveness.\n"
    "It also attracts wild POKéMON.");

static const u8 sTM93Desc[] = _(   
    "This attack can be used only if the\n"
    "user is asleep. The harsh noise may also\n"
    "make the target flinch.");

static const u8 sTM94Desc[] = _(   
    "A chilling wind is used to attack.\n"
    "It also lowers the SPEED stat.");

static const u8 sTM95Desc[] = _(   
    "Endures any attack for 1 turn,\n"
    "leaving at least 1HP.");

static const u8 sTM96Desc[] = _(   
    "The foe is hit with an incredible\n"
    "blast of breath that may also paralyze.");

static const u8 sTM97Desc[] = _(   
    "Hurls mud in the foes face to\n"
    "reduce its accuracy.");

static const u8 sTM98Desc[] = _(   
    "An icy punch that may freeze\n"
    "the foe.");

static const u8 sTM99Desc[] = _(   
    "Confuses the foe, but also sharply\n"
    "raises ATTACK.");

static const u8 sTM100Desc[] = _(   
    "While asleep, the user randomly uses\n"
    "one of the moves it knows.");

static const u8 sTM101Desc[] = _(
    "Curls up to conceal weak spots\n"
    "and raise DEFENSE.");

static const u8 sTM102Desc[] = _(
    "An electrified punch that may\n"
    "paralyze the foe.");

static const u8 sTM103Desc[] = _(
    "Evades attack, but may fail if\n"
    "used in succession.");

static const u8 sTM104Desc[] = _(
    "A fiery punch that may\n"
    "burn the foe.");

static const u8 sTM105Desc[] = _(
    "An attack that grows stronger\n"
    "on each successive hit.");

static const u8 sTM106Desc[] = _(
    "The user lands and rests its body.\n"
    "It restores the users HP by up to half\n"
    "of its max HP.");

static const u8 sTM107Desc[] = _(
    "The user heightens its mental focus\n"
    "and unleashes its power. It may also lower\n"
    "the targets Sp. Def.");

static const u8 sTM108Desc[] = _(
    "The user draws power from nature\n"
    "and fires it at the foe. It may also\n"
    "lower the targets Sp. Def.");

static const u8 sTM109Desc[] = _(
    "An attack that leaves the foe\n"
    "with at least 1 HP.");

static const u8 sTM110Desc[] = _(
    "If the foes HP is down to about half,\n"
    "this attack will hit with double the power.");

static const u8 sTM111Desc[] = _(
    "The user fires a concentrated bundle of\n"
    "electricity. It may also raise the users\n"
    "Sp. Atk stat.");

static const u8 sTM112Desc[] = _(
    "The foe is attacked with a shock wave\n"
    "generated by the users gaping mouth.");

static const u8 sTM113Desc[] = _(
    "An energy-draining punch. The\n"
    "users HP is restored by half the damage\n"
    "taken by the target.");

static const u8 sTM114Desc[] = _(
    "A sinister, bluish white flame is\n"
    "shot at the foe to inflict a burn.");

static const u8 sTM115Desc[] = _(
    "The foe is attacked with a silver dust.\n"
    "It may raise all the users stats.");

static const u8 sTM116Desc[] = _(
    "It prevents the foe from using its held item.\n"
    "Its Trainer is also prevented from using items on it.");

static const u8 sTM117Desc[] = _(
    "The user slashes with a sharp\n"
    "claw made from shadows. It has a\n"
    "high critical-hit ratio.");

static const u8 sTM118Desc[] = _(
    "If the user can use this attack after\n"
    "the foe attacks, its power is doubled.");

static const u8 sTM119Desc[] = _(
    "A move that recycles a used item\n"
    "for use once more.");

static const u8 sTM120Desc[] = _(
    "The user charges at the foe using\n"
    "every bit of its power. The user must\n"
    "rest on the next turn.");

static const u8 sTM121Desc[] = _(
    "The user polishes its body to reduce drag.\n"
    "It can sharply raise the Speed stat.");

static const u8 sTM122Desc[] = _(
    "The user stabs the foe with a\n"
    "sharpened stone. It has a high\n"
    "critical-hit ratio.");

static const u8 sTM123Desc[] = _(
    "An attack move that inflicts double\n"
    "the damage if the user has been hurt by\n"
    "the foe in the same turn.");

static const u8 sTM124Desc[] = _(
    "The user tackles the foe with a\n"
    "high-speed spin. The slower the user,\n"
    "the greater the damage.");

static const u8 sTM125Desc[] = _(
    "The user lays a trap of levitating\n"
    "stones around the foe. The trap hurts\n"
    "foes that switch into battle.");

static const u8 sTM126Desc[] = _(
    "If it is the opposite gender of\n"
    "the user, the foe is charmed into sharply\n"
    "lowering its Sp. Atk stat.");

static const u8 sTM127Desc[] = _(
    "The user releases a horrible aura\n"
    "imbued with dark thoughts. It may also\n"
    "make the target flinch.");

static const u8 sTM128Desc[] = _(
    "The user slashes at the foe by\n"
    "crossing its scythes or claws as if\n"
    "they were a pair of scissors.");

static const u8 sTM129Desc[] = _(
    "The user draws power to attack\n"
    "by using its held Berry. The Berry\n"
    "determines its type and power.");

static const u8 sTM130Desc[] = _(
    "The foe is stabbed with a tentacle\n"
    "or arm steeped in poison. It may also\n"
    "poison the foe.");

static const u8 sTM131Desc[] = _(
    "The user snares the foe with grass\n"
    "and trips it. The heavier the foe,\n"
    "the greater the damage.");

static const u8 sTM132Desc[] = _(
    "The user pecks the target. If the target\n"
    "is holding a Berry, the user eats it and\n"
    "gains its effect.");

static const u8 sTM133Desc[] = _(
    "After making its attack, the user\n"
    "rushes back to switch places with a\n"
    "party Pokémon in waiting.");

static const u8 sTM134Desc[] = _(
    "The user gathers all its light energy\n"
    "and releases it at once. It may also lower\n"
    "the foes Sp. Def stat.");

static const u8 sTM135Desc[] = _(
    "The user creates a bizarre area\n"
    "in which slower Pokémon get to move\n"
    "first for five turns.");

static const u8 sTM136Desc[] = _(
    "The user sharpens its claws to boost\n"
    "its Attack stat and accuracy.");

static const u8 sTM137Desc[] = _(
    "The user materializes an odd psychic\n"
    "wave to attack the target. This attack does\n"
    "physical damage.");

static const u8 sTM138Desc[] = _(
    "The user drenches the target in a\n"
    "special poisonous liquid. Its power is\n"
    "doubled if the target is poisoned.");

static const u8 sTM139Desc[] = _(
    "The user makes the target float\n"
    "with its psychic power. The target is\n"
    "easier to hit for three turns.");

static const u8 sTM140Desc[] = _(
    "The user throws a stone or projectile\n"
    "to attack an opponent. A flying Pokémon\n"
    "will fall to the ground when hit.");

static const u8 sTM141Desc[] = _(
    "It swamps the area around the user\n"
    "with a giant sludge wave. It may also\n"
    "poison those hit.");

static const u8 sTM142Desc[] = _(
    "The user cloaks itself with flame\n"
    "and attacks. Building up more power,\n"
    "it raises the users Speed stat.");

static const u8 sTM143Desc[] = _(
    "The user attacks the targets legs swiftly,\n"
    "reducing the targets Speed stat.");

static const u8 sTM144Desc[] = _(
    "The user attacks the target with a song.\n"
    "Others can join in the Round and make the\n"
    "attack do greater damage.");

static const u8 sTM145Desc[] = _(
    "The user attacks the target with an\n"
    "echoing voice. If this move is used every turn,\n"
    "it does greater damage.");

static const u8 sTM146Desc[] = _(
    "The user teleports using a strange power\n"
    "and switches its place with one of its allies.");

static const u8 sTM147Desc[] = _(
    "The user shoots boiling hot water\n"
    "at its target. It may also leave the\n"
    "target with a burn.");

static const u8 sTM148Desc[] = _(
    "The user flings its held item at\n"
    "the foe to attack. Its power and effects\n"
    "depend on the item.");

static const u8 sTM149Desc[] = _(
    "The user takes the target into\n"
    "the sky, then drops it during the\n"
    "next turn. The target cannot attack\n"
    "while in the sky.");

static const u8 sTM150Desc[] = _(
    "The user attacks the target with fire.\n"
    "If the target is holding a Berry,\n"
    "the Berry becomes burnt up and unusable.");

static const u8 sTM151Desc[] = _(   
    "The user suppresses the target\n"
    "and makes its move go last.");

static const u8 sTM152Desc[] = _(   
    "The user nimbly strikes the target.\n"
    "If the user is not holding an item,\n"
    "this attack inflicts massive damage.");

static const u8 sTM153Desc[] = _(   
    "The user gets revenge for a fainted ally.\n"
    "If an ally fainted in the previous turn,\n"
    "this attacks damage increases.");

static const u8 sTM154Desc[] = _(   
    "After making its attack, the user\n"
    "rushes back to switch places with a\n"
    "party Pokémon in waiting.");

static const u8 sTM155Desc[] = _(   
    "While resisting, the user attacks\n"
    "the opposing Pokémon. The targets\n"
    "Sp. Atk stat is reduced.");

static const u8 sTM156Desc[] = _(   
    "The user stomps down on the ground and\n"
    "attacks everything in the area. Hit Pokémons\n"
    "Speed stat is reduced.");

static const u8 sTM157Desc[] = _(   
    "The user blows a cold breath on\n"
    "the target. This attack always\n"
    "results in a critical hit.");

static const u8 sTM158Desc[] = _(   
    "The user knocks away the target and\n"
    "drags out another Pokémon in its party.\n"
    "In the wild, the battle ends.");

static const u8 sTM159Desc[] = _(   
    "The user is roused, and its Attack\n"
    "and Sp. Atk stats increase.");

static const u8 sTM160Desc[] = _(   
    "The user shrouds itself in electricity\n"
    "and smashes into its target. It also damages\n"
    "the user a little.");

static const u8 sTM161Desc[] = _(   
    "The user yells as if it is ranting\n"
    "about something, making the targets\n"
    "Sp. Atk stat decrease.");

static const u8 sTM162Desc[] = _(   
    "The target is infested and attacked\n"
    "for four to five turns. The target cant\n"
    "flee during this time.");

static const u8 sTM163Desc[] = _(   
    "Striking opponents over and over\n"
    "makes the users fists harder. Hitting\n"
    "a target raises the Attack stat.");

static const u8 sTM164Desc[] = _(   
    "The user damages opposing Pokémon\n"
    "by emitting a powerful flash.");

static const u8 sTM165Desc[] = _(   
    "The user tells the target a secret,\n"
    "and the target loses its ability to concentrate.\n"
    "This lowers the targets Sp. Atk stat.");

static const u8 sTM166Desc[] = _(   
    "An attack that absorbs half the\n"
    "damage it inflicted to restore HP.");

static const u8 sTM167Desc[] = _(   
    "The user stabs the target with a\n"
    "sharp horn. This attack never misses.");

static const u8 sTM168Desc[] = _(   
    "This move reduces damage from physical\n"
    "and special moves for five turns.\n"
    "This can be used only in hail or snow.");

static const u8 sTM169Desc[] = _(   
    "A move that boosts the power of the\n"
    "allys attack in a battle.");

static const u8 sTM170Desc[] = _(   
    "The user thrashes about for two\n"
    "to three turns, then becomes confused.");

static const u8 sTM171Desc[] = _(   
    "The user plays rough with the target\n"
    "and attacks it. This may also lower the\n"
    "targets Attack stat.");

static const u8 sTM172Desc[] = _(   
    "The user attacks the foe with\n"
    "great power. However, it also lowers\n"
    "the users Attack and Defense.");

static const u8 sTM173Desc[] = _(   
    "The user crashes into its target\n"
    "while rotating its body like a drill.\n"
    "Critical hits land more easily.");

static const u8 sTM174Desc[] = _(   
    "A brutal ramming attack delivered\n"
    "with a tough and impressive horn.");

static const u8 sTM175Desc[] = _(   
    "Sharp pins are shot at the foe in\n"
    "rapid succession. They hit\n"
    "two to five times in a row.");

static const u8 sTM176Desc[] = _(   
    "The foe is attacked with a\n"
    "strange leaf that cannot be evaded");

static const u8 sTM177Desc[] = _(   
    "The foe is trapped in an intense\n"
    "spiral of fire that rages\n"
    "two to five turns.");

static const u8 sTM178Desc[] = _(   
    "An ear-splitting screech is emitted\n"
    "to sharply reduce the foes DEFENSE.");

static const u8 sTM179Desc[] = _(   
    "Frightens the foe with a scary face\n"
    "to sharply reduce its SPEED.");

static const u8 sTM180Desc[] = _(   
    "Charms the foe and sharply\n"
    "reduces its ATTACK.");

static const u8 sTM181Desc[] = _(   
    "The foe is trapped in a fast, vicious\n"
    "whirlpool for two to five turns");

static const u8 sTM182Desc[] = _(   
    "All party POKéMON join in the attack.\n"
    "The more allies, the more damage.");

static const u8 sTM183Desc[] = _(   
    "An attack move that inflicts double\n"
    "the damage if the user has been hurt\n"
    "by the foe in the same turn.");

static const u8 sTM184Desc[] = _(   
    "revents foes from using moves\n"
    "known by the user.");

static const u8 sTM185Desc[] = _(   
    "An attack that varies in power\n"
    "and type depending on the weather.");

static const u8 sTM186Desc[] = _(   
    "The user feigns crying to make the\n"
    "foe feel flustered, sharply lowering its\n"
    "Sp. Def stat.");

static const u8 sTM187Desc[] = _(   
    "The foe is trapped inside a\n"
    "painful sandstorm for\n"
    "two to five turns.");

static const u8 sTM188Desc[] = _(   
    "Sharp icicles are fired at the foe.\n"
    "It strikes two to five times.");

static const u8 sTM189Desc[] = _(   
    "The user bounces up high, then drops\n"
    "on the foe on the second turn. It may\n"
    "also paralyze the foe.");

static const u8 sTM190Desc[] = _(   
    "The user attacks by hurling a blob\n"
    "of mud at the foe. It also reduces the\n"
    "targets Speed.");

static const u8 sTM191Desc[] = _(   
    "The user hurls hard rocks at the foe.\n"
    "Two to five rocks are launched in quick\n"
    "succession.");

static const u8 sTM192Desc[] = _(   
    "If the foe has already taken some\n"
    "damage in the same turn, this attacks\n"
    "power is doubled.");

static const u8 sTM193Desc[] = _(   
    "The user employs its psychic power\n"
    "to switch changes to its Attack and\n"
    "Sp. Atk with the foe.");

static const u8 sTM194Desc[] = _(   
    "The user employs its psychic power\n"
    "to switch changes to its Defense and\n"
    "Sp. Def with the foe.");

static const u8 sTM195Desc[] = _(   
    "The user exchanges Speed stats\n"
    "with the target.");

static const u8 sTM196Desc[] = _(   
    "The user bites with flame-cloaked fangs.\n"
    "It may also make the foe flinch or sustain a burn.");

static const u8 sTM197Desc[] = _(   
    "The user bites with cold-infused fangs.\n"
    "It may also make the foe flinch or freeze.");

static const u8 sTM198Desc[] = _(   
    "The user bites with electrified fangs.\n"
    "It may also make the foe flinch or become paralyzed.");

static const u8 sTM199Desc[] = _(   
    "The user tears at the foe with blades\n"
    "formed by psychic power. It has a high\n"
    "critical-hit ratio.");

static const u8 sTM200Desc[] = _(   
    "The user creates a bizarre area\n"
    "in which Pokémon’s Defense and Sp. Def\n"
    "stats are swapped for five turns.");
static const u8 sTM201Desc[] = _(
    "The user creates a bizarre area\n"
    "in which Pokémon’s held items lose\n"
    "effects for five turns.");

static const u8 sTM202Desc[] = _(
    "A slashing attack with a poisonous\n"
    "blade that may also leave the target\n"
    "poisoned. Critical hits land more easily.");

static const u8 sTM203Desc[] = _(
    "This relentless attack does\n"
    "massive damage to a target\n"
    "affected by status problems.");

static const u8 sTM204Desc[] = _(
    "The user captures and attacks\n"
    "opposing Pokémon by using an\n"
    "electric net. It reduces the\n"
    "targets Speed stat.");

static const u8 sTM205Desc[] = _(
    "The user cuts its target with\n"
    "sharp shells. This attack may\n"
    "also lower the targets Defense stat.");

static const u8 sTM206Desc[] = _(
    "The user attacks by striking\n"
    "the target with its hard tail.\n"
    "It hits the target two to five\n"
    "times in a row.");

static const u8 sTM207Desc[] = _(
    "The user vanishes somewhere,\n"
    "then strikes the target on the\n"
    "next turn. This move hits even if\n"
    "the target protects itself.");

static const u8 sTM208Desc[] = _(
    "The user steals the targets energy\n"
    "with a kiss. The users HP is restored\n"
    "by over half of the damage taken by the\n"
    "target.");

static const u8 sTM209Desc[] = _(
    "The user turns the ground under\n"
    "everyones feet to grass for five\n"
    "turns. This restores the HP of Pokémon\n"
    "on the ground a little every turn.");

static const u8 sTM210Desc[] = _(
    "The user covers the ground under\n"
    "everyones feet with mist for five\n"
    "turns. This protects Pokémon on the\n"
    "ground from status conditions.");

static const u8 sTM211Desc[] = _(
    "The user electrifies the ground under\n"
    "everyones feet for five turns.\n"
    "Pokémon on the ground no longer\n"
    "fall asleep.");

static const u8 sTM212Desc[] = _(
    "This protects Pokémon on the ground\n"
    "from priority moves and powers up\n"
    "Psychic-type moves for five turns.");

static const u8 sTM213Desc[] = _(
    "The user attacks by breathing a\n"
    "special, hot fire. This also lowers\n"
    "the targets Sp. Atk stat.");

static const u8 sTM214Desc[] = _(
    "The users body generates an eerie\n"
    "impulse. Exposing the target to it harshly\n"
    "lowers the targets Sp. Atk stat.");

static const u8 sTM215Desc[] = _(
    "The user attacks with a blade\n"
    "of air that slices even the sky.\n"
    "It may also make the target flinch.");

static const u8 sTM216Desc[] = _(
    "The user swings its body around\n"
    "violently to inflict damage on\n"
    "everything in its vicinity.");

static const u8 sTM217Desc[] = _(
    "Driven by frustration, the user\n"
    "attacks the target. If the users\n"
    "previous move has failed, the power\n"
    "of this move doubles.");

static const u8 sTM218Desc[] = _(
    "The user swings its tough tail\n"
    "wildly and attacks opposing Pokémon.\n"
    "This also lowers their Attack stats.");

static const u8 sTM219Desc[] = _(
    "A high volume of water is blasted\n"
    "at the foe under great pressure.");

static const u8 sTM220Desc[] = _(
    "A low, tripping kick that inflicts\n"
    "more damage on heavier foes.");

static const u8 sTM221Desc[] = _(
    "The user relaxes and lightens its\n"
    "body to sharply boost its SPEED.");

static const u8 sTM222Desc[] = _(
    "The user takes a deep breath and\n"
    "focuses to raise its critical-hit ratio.");

static const u8 sTM223Desc[] = _(
    "The user temporarily empties its\n"
    "mind to forget its concerns. It sharply\n"
    "raises the users Sp. Def stat.");

static const u8 sTM224Desc[] = _(
    "An all-out attack that becomes\n"
    "more powerful the less HP the user has.");

static const u8 sTM225Desc[] = _(
    "A trap of spikes is laid around\n"
    "the foes party to hurt foes\n"
    "switching in.");

static const u8 sTM226Desc[] = _(
    "The user switches places with a\n"
    "party Pokémon in waiting, passing\n"
    "along any stat changes.");

static const u8 sTM227Desc[] = _(
    "The user compels the foe to keep\n"
    "using only the move it last used\n"
    "for two to six turns.");

static const u8 sTM228Desc[] = _(
    "The user crunches up the foe with\n"
    "sharp fangs. It may also lower the\n"
    "targets Defense stat.");

static const u8 sTM229Desc[] = _(
    "Two turns after this move is used,\n"
    "the foe is attacked with a hunk of\n"
    "psychic energy.");

static const u8 sTM230Desc[] = _(
    "The user attacks by exhaling\n"
    "hot breath on the opposing Pokémon.\n"
    "This may also leave those Pokémon with\n"
    "a burn.");

static const u8 sTM231Desc[] = _(
    "A move that tricks the foe into\n"
    "trading held items with the user.");

static const u8 sTM232Desc[] = _(
    "A fiery kick with a high critical-hit\n"
    "ratio. It may also burn the foe.");

static const u8 sTM233Desc[] = _(
    "The user lets loose a horribly\n"
    "loud shout with the power to damage.");

static const u8 sTM234Desc[] = _(
    "The user absorbs a mystical power\n"
    "from space to raise its Defense\n"
    "and Sp. Def stats.");

static const u8 sTM235Desc[] = _(
    "The user attacks with muddy water.\n"
    "It may also lower the foes accuracy.");

static const u8 sTM236Desc[] = _(
    "The user hardens its bodys surface\n"
    "like iron, sharply raising its Defense\n"
    "stat.");

static const u8 sTM237Desc[] = _(
    "The foe is slashed with a sharp\n"
    "eaf. It has a high critical-hit ratio.");

static const u8 sTM238Desc[] = _(
    "The user vigorously performs a\n"
    "mystic, powerful dance that\n"
    "boosts its Attack and Speed stats.");

static const u8 sTM239Desc[] = _(
    "The user fights the foe up close\n"
    "without guarding itself. It also\n"
    "cuts the users Defense and Sp. Def.");

static const u8 sTM240Desc[] = _(
    "The user lays a trap of poison\n"
    "spikes at the opponents feet.\n"
    "They poison opponents that switch\n"
    "into battle.");

static const u8 sTM241Desc[] = _(
    "The user cloaks itself in fire\n"
    "and charges at the target. The\n"
    "user sustains serious damage and\n"
    "may leave the target burned.");

static const u8 sTM242Desc[] = _(
    "The user lets loose a blast of\n"
    "aura power from deep within its\n"
    "body at the target. This attack\n"
    "never misses.");

static const u8 sTM243Desc[] = _(
    "The user slams a barrage of hard-shelled\n"
    "seeds down on the target from above.");

static const u8 sTM244Desc[] = _(
    "The user vibrates its wings to\n"
    "generate a damaging sound wave.\n"
    "It may also lower the targets\n"
    "Sp. Def stat.");

static const u8 sTM245Desc[] = _(
    "The user attacks with a ray of\n"
    "light that sparkles as if it were\n"
    "made of gemstones.");

static const u8 sTM246Desc[] = _(
    "The user tucks in its wings and\n"
    "charges from a low altitude.\n"
    "The user also takes serious damage.");

static const u8 sTM247Desc[] = _(
    "The user makes the ground under\n"
    "the foe erupt with power. It may\n"
    "also lower the targets Sp. Def.");

static const u8 sTM248Desc[] = _(
    "The user stimulates its brain\n"
    "by thinking bad thoughts. It\n"
    "sharply raises the users Sp. Atk.");

static const u8 sTM249Desc[] = _(
    "The user focuses its willpower\n"
    "to its head and rams the foe.\n"
    "It may also make the target flinch.");

static const u8 sTM250Desc[] = _(
    "The user whips up a storm of\n"
    "leaves around the target. The\n"
    "attacks recoil harshly reduces\n"
    "the users Sp. Atk stat.");

static const u8 sTM251Desc[] = _(   
    "The user violently whirls its\n"
    "vines, tentacles, or the like\n"
    "to harshly lash the target.");

static const u8 sTM252Desc[] = _(   
    "The user shoots filthy garbage\n"
    "at the target to attack. It may \n"
    "also poison the target.");

static const u8 sTM253Desc[] = _(   
    "he user slams the target with\n"
    "its steel-hard head. This may\n"
    "also make the target flinch.");

static const u8 sTM254Desc[] = _(   
    "The user slams into the target\n"
    "with its heavy body. The more\n"
    "the user outweighs the target,\n"
    "the greater its damage.");

static const u8 sTM255Desc[] = _(   
    "The user hurls an electric orb\n"
    "at the target. The faster the\n"
    "user is than the target, the\n"
    "greater the damage.");

static const u8 sTM256Desc[] = _(   
    "The user turns the targets power\n"
    "against it. The higher the targets\n"
    "Attack stat, the greater the damage.");

static const u8 sTM257Desc[] = _(   
    "The user attacks the target with\n"
    "stored power. The more the users\n"
    "stats are raised, the greater the damage.");

static const u8 sTM258Desc[] = _(   
    "The user slams its target with\n"
    "its flame-covered body. The more\n"
    "the user outweighs the target,\n"
    "the greater the damage.");

static const u8 sTM259Desc[] = _(   
    "The user attacks by wrapping\n"
    "its opponent in a fierce wind\n"
    "that flies up into the sky. It\n"
    "may also confuse the target.");

static const u8 sTM260Desc[] = _(   
    "This attack inflicts high damage\n"
    "on a sleeping foe. It also wakes\n"
    "the foe up, however.");

static const u8 sTM261Desc[] = _(   
    "Opposing Pokémon are drenched\n"
    "in an odd poisonous liquid. This\n"
    "lowers the Attack, Sp. Atk, and\n"
    "Speed stats of a poisoned target.");

static const u8 sTM262Desc[] = _(   
    "The user swings both arms and\n"
    "hits the target. The targets\n"
    "stat changes dont affect this\n"
    "attacks damage.");

static const u8 sTM263Desc[] = _(   
    "The user fiercely attacks the\n"
    "target using its entire body.");

static const u8 sTM264Desc[] = _(   
    "The user attacks the targets\n"
    "throat, and the resultant\n"
    "suffering prevents the target\n"
    "from using sound-based moves\n"
    "for two turns.");

static const u8 sTM265Desc[] = _(   
    "The user attacks the enemy with\n"
    "a pollen puff that explodes. If\n"
    "the target is an ally, it gives\n"
    "the ally a pollen puff that restores\n"
    "its HP instead.");

static const u8 sTM266Desc[] = _(   
    "The user bites the target with\n"
    "its psychic capabilities. This\n"
    "can also destroy Light Screen\n"
    "and Reflect.");

static const u8 sTM267Desc[] = _(   
    "The user slams into the target\n"
    "using a full-force blast of water.\n"
    "This may also lower the targets\n"
    "Defense stat.");

static const u8 sTM268Desc[] = _(   
    "The user attacks by slamming\n"
    "its body into the target. The\n"
    "higher the users Defense stat,\n"
    "the greater the damage this move deals.");

static const u8 sTM269Desc[] = _(   
    "The user spits fluid that works\n"
    "to melt the target. This harshly\n"
    "reduces the targets Sp. Def stat.");

static const u8 sTM270Desc[] = _(   
    "A peculiar ray is shot at the foe.\n"
    "It may leave the foe confused.");

static const u8 sTM271Desc[] = _(   
    "The foe is exposed to a sinister\n"
    "ray that triggers confusion.");

static const u8 sTM272Desc[] = _(   
    "Letting out a charming cry, the\n"
    "user does emotional damage to\n"
    "opposing Pokémon. This attack\n"
    "never misses.");

static const u8 sTM273Desc[] = _(   
    "The user attacks suddenly as if\n"
    "leaping out from tall grass. The\n"
    "users nimble footwork boosts its Speed stat.");

static const u8 sTM274Desc[] = _(   
    "The user attacks by pouncing on the\n"
    "target. This also lowers the targets Speed stat.");

static const u8 sTM275Desc[] = _(   
    "The user attacks the target by\n"
    "showering it with water thats so\n"
    "cold it saps the targets power.\n"
    "This also lowers the targets Attack stat.");

static const u8 sTM276Desc[] = _(   
    "An attack with a high critical-hit\n"
    "ratio. This tail attack may also\n"
    "poison the foe.");

static const u8 sTM277Desc[] = _(   
    "The foe is attacked with steel\n"
    "claws. It may also raise\n"
    "the users ATTACK.");

static const u8 sTM278Desc[] = _(   
    "The user launches razor-like wind\n"
    "to slash the opposing team.\n"
    "Critical hits land more easily.");

static const u8 sTM279Desc[] = _(   
    "The user attacks its target by\n"
    "hitting it with brutal strikes.\n"
    "The target is hit twice in a row.");

static const u8 sTM280Desc[] = _(   
    "The user summons a snowstorm\n"
    "lasting five turns. This boosts\n"
    "the Defense stats of Ice types.");

static const u8 sTM281Desc[] = _(   
    "The user covers its feet in thin\n"
    "ice and twirls around, slamming into\n"
    "the target. This moves spinning motion\n"
    "also destroys the terrain.");

static const u8 sTM282Desc[] = _(   
    "A column of fire hits opposing Pokémon.\n"
    "When used with its Grass or Water equivalent,\n"
    "something unique happens");

static const u8 sTM283Desc[] = _(   
    "A column of water hits opposing Pokémon.\n"
    "When used with its Grass or Fire equivalent,\n"
    "something unique happens");

static const u8 sTM284Desc[] = _(   
    "A column of grass hits opposing Pokémon.\n"
    "When used with its Fire or Water equivalent,\n"
    "something unique happens");

static const u8 sTM285Desc[] = _(   
    "The target is razed by a fiery\n"
    "explosion. The user must rest on\n"
    "the next turn, however.");

static const u8 sTM286Desc[] = _(   
    "The target is hit with a watery\n"
    "blast. The user must rest on the\n"
    "next turn, however.");

static const u8 sTM287Desc[] = _(   
    "The user slams the target with an\n"
    "enormous tree. The user must rest\n"
    "on the next turn, however.");

static const u8 sTM288Desc[] = _(   
    "Comets are summoned down from\n"
    "the sky. The attacks recoil sharply\n"
    "reduces the users Sp. Atk stat.");

static const u8 sTM289Desc[] = _(   
    "The user fires a beam of steel\n"
    "that it collected from its entire\n"
    "body. This also damages the user.");

static const u8 sTM290Desc[] = _(   
    "If the user has Terastallized,\n"
    "it unleashes energy of its Tera Type.\n"
    "This move inflicts damage using the\n"
    "Attack or Sp. Atk stat—whichever is\n"
    "higher for the user.");

static const u8 sTM291Desc[] = _(   
    "The user boosts the power of the\n"
    "Electric move it uses next. It also\n"
    "raises the users Sp. Def stat.");

static const u8 sTM292Desc[] = _(   
    "A blindingly speedy charge attack\n"
    "that always goes before any other.");

static const u8 sTM293Desc[] = _(   
    "This move enables Flying-type\n"
    "Pokémon or Pokémon with the\n"
    "Levitate Ability to be hit by\n"
    "Ground-type moves. Moves that\n"
    "involve flying can not be used.");

static const u8 sTM294Desc[] = _(   
    "The user slaps down the foes\n"
    "held item, preventing the item\n"
    "from being used during the battle.");

static const u8 sTM295Desc[] = _(   
    "The user bites the target. If the\n"
    "target is holding a Berry, the user\n"
    "eats it and gains its effect.");

static const u8 sTM296Desc[] = _(   
    "The user chomps hard on the foe\n"
    "with its sharp front fangs. It cuts\n"
    "the targets HP to half.");

static const u8 sTM297Desc[] = _(   
    "The user whirls its fists to send\n"
    "a wave of pure vacuum at the target.\n"
    "This move always goes first.");

static const u8 sTM298Desc[] = _(   
    "The user makes a lunge at the\n"
    "target, attacking with full force.\n"
    "This also lowers the targets Attack stat.");

static const u8 sTM299Desc[] = _(   
    "The user gathers light on the\n"
    "first turn, then fills a blade\n"
    "with the light energy and attacks\n"
    "on the next turn.");

static const u8 sTM300Desc[] = _(   
    "The user attacks in an uproar\n"
    "for two to five turns. Over that\n"
    "time, no one can fall asleep.");

static const u8 sTM301Desc[] = _(
    "Gliding on the ground, the user\n"
    "attacks the target. This move always\n"
    "goes first on Grassy Terrain.");

static const u8 sTM302Desc[] = _(
    "The user attacks with energy\n"
    "from jealousy. This leaves all\n"
    "opposing Pokémon that have had\n"
    "their stats boosted during the\n"
    "turn with a burn.");

static const u8 sTM303Desc[] = _(
    "After making its attack, the user\n"
    "rushes back to switch places with a\n"
    "party Pokémon in waiting.");

static const u8 sTM304Desc[] = _(
    "The user slams the target with\n"
    "its wings to inflict damage. The\n"
    "target is hit twice in a row.");

static const u8 sTM305Desc[] = _(
    "The user attacks by controlling\n"
    "the targets item. This move fails\n"
    "if the target isnt holding an item.");

static const u8 sTM306Desc[] = _(
    "The user lashes out to vent its\n"
    "frustration toward the target.\n"
    "This moves power is doubled if\n"
    "the users stats were lowered\n"
    "during this turn.");

static const u8 sTM307Desc[] = _(
    "The user attacks by shooting\n"
    "scales two to five times in a row.\n"
    "This move boosts the users Speed stat\n"
    "but lowers its Defense stat.");

static const u8 sTM308Desc[] = _(
    "The user attacks everything around\n"
    "it and faints upon using this move.\n"
    "This moves power is boosted on Misty Terrain.");

static const u8 sTM309Desc[] = _(
    "The user adds its HP to the foes\n"
    "HP, then equally shares the total HP.");

static const u8 sTM310Desc[] = _(
    "This attack move cuts down the\n"
    "targets HP to equal the users HP.");

static const u8 sTM311Desc[] = _(
    "The user stirs up a violent\n"
    "petal blizzard and attacks\n"
    "everything around it.");

static const u8 sTM312Desc[] = _(
    "Spurred by desperation, the user\n"
    "attacks the target. This moves power\n"
    "is doubled if the users previous move failed.");

static const u8 sTM313Desc[] = _(
    "The user electrifies its body\n"
    "and drops onto the target to\n"
    "inflict damage. If this move misses,\n"
    "the user takes damage instead.");

static const u8 sTM314Desc[] = _(
    "A consecutive three-kick attack\n"
    "that becomes more powerful with\n"
    "each successful hit.");

static const u8 sTM315Desc[] = _(
    "The user properly coaches its\n"
    "ally Pokémon, boosting their\n"
    "Attack and Defense stats.");

static const u8 sTM316Desc[] = _(
    "The user throws scorching sand\n"
    "at the target to attack. This\n"
    "may also leave the target with a burn.");

static const u8 sTM317Desc[] = _(
    "The user covers the foe with\n"
    "a mass of down that sharply\n"
    "lowers the Attack stat.");

static const u8 sTM318Desc[] = _(
    "The user attacks the target with\n"
    "its psychic power. When the ground\n"
    "is Psychic Terrain, this moves power\n"
    "is boosted and it damages all opposing Pokémon.");

static const u8 sTM319Desc[] = _(
    "The user attacks with electricity\n"
    "rising from the ground. This moves\n"
    "power is doubled if the target is\n"
    "on Electric Terrain.");

static const u8 sTM320Desc[] = _(
    "The user skitters behind the target\n"
    "to attack. This also lowers the targets\n"
    "Sp. Atk stat.");

static const u8 sTM321Desc[] = _(
    "The user gathers energy from\n"
    "space and boosts its Sp. Atk\n"
    "stat on the first turn, then\n"
    "attacks on the next turn.");

static const u8 sTM322Desc[] = _(
    "A horrible sound like scraping\n"
    "metal is emitted to sharply reduce\n"
    "the foes Sp. Def stat.");

static const u8 sTM323Desc[] = _(
    "The target is crushed with an arm,\n"
    "a claw, or the like to inflict damage.\n"
    "The more HP the target has left, the\n"
    "greater the moves power.");

static const u8 sTM324Desc[] = _(
    "The user raises its allies morale\n"
    "with a draconic cry so that their\n"
    "future attacks have a heightened chance\n"
    "of landing critical hits. This rouses\n"
    "Dragon types more.");

static const u8 sTM325Desc[] = _(
    "The user attacks the target using\n"
    "its angelic voice. This also confuses\n"
    "the target if its stats have been\n"
    "boosted during the turn.");

static const u8 sTM326Desc[] = _(
    "The user attacks the target with\n"
    "unpleasant sound waves. For two turns,\n"
    "the target is prevented from recovering HP\n"
    "through moves, Abilities, or held items.");

static const u8 sTM327Desc[] = _(
    "The user reacts to the target's\n"
    "movement and strikes with the heel\n"
    "of its palm, making the target flinch.\n"
    "This move fails if the target is not readying\n"
    "a priority move.");

static const u8 sTM328Desc[] = _(
    "The target is attacked with a\n"
    "blast of absolute-zero cold.\n"
    "The target faints instantly if\n"
    "this attack hits.");

static const u8 sTM329Desc[] = _(
    "A vicious, tearing attack with pincers.\n"
    "The foe will faint instantly if\n"
    "this attack hits.");

static const u8 sTM330Desc[] = _(
    "The target is attacked with a\n"
    "slash of claws or blades.\n"
    "Critical hits land more easily.");

static const u8 sTM331Desc[] = _(
    "The user strikes the target with\n"
    "tough punches as fast as bullets.\n"
    "This move always goes first.");

static const u8 sTM332Desc[] = _(
    "This move enables the user to\n"
    "attack first. It fails if the target\n"
    "is not readying an attack, however.");

static const u8 sTM333Desc[] = _(
    "The user attacks the target with\n"
    "a bursting flame. The bursting flame\n"
    "damages Pokémon next to the target as well.");

static const u8 sTM334Desc[] = _(
    "The user expels pressurized water\n"
    "to cut at the target like a blade.\n'
    This move has a heightened chance of\n"
    "landing a critical hit.");

static const u8 sTM335Desc[] = _(
    "The user shrouds itself in water\n"
    "and slams into the target with its\n"
    "whole body to inflict damage. This\n"
    "also damages the user quite a lot.");

static const u8 sTM336Desc[] = _(
    "This move can be used only after\n"
    "the user has used all the other moves\n"
    "it knows in the battle.");

static const u8 sTM337Desc[] = _(
    "Intimidates and frightens the\n"
    "foe into paralysis.");

static const u8 sTM338Desc[] = _(
    "The user attacks everything around\n"
    "it with the destructive power of a\n"
    "terrible, explosive sound.");

static const u8 sTM339Desc[] = _(
    "The user attacks by harshly dropping\n"
    "large icicles onto the target. This may\n"
    "also make the target flinch.");

static const u8 sTM340Desc[] = _(
    "The user whips up a turbulent\n"
    "whirlwind that ups the Speed of\n"
    "all party Pokémon for four turns.");

static const u8 sTM341Desc[] = _(
    "The user strikes the target with\n"
    "a fierce blow. This attack always\n"
    "results in a critical hit.");

static const u8 sTM342Desc[] = _(
    "The user attacks the foe with\n"
    "an uppercut thrown skyward with force.");

static const u8 sTM343Desc[] = _(
    "The user protects itself and\n"
    "its allies from priority moves.");

static const u8 sTM344Desc[] = _(
    "The user and its allies are\n"
    "protected from wide-ranging attacks\n"
    "for one turn.");

static const u8 sTM345Desc[] = _(
    "An attack move that inflicts\n"
    "double damage if used on a foe\n"
    "that is switching out of battle.");

static const u8 sTM346Desc[] = _(
    "The target is attacked with a\n"
    "shock wave. It may also leave\n"
    "the target with paralysis.");

static const u8 sTM347Desc[] = _(
    "The user maximizes its Attack stat\n"
    "in exchange for HP equal to half its max HP.");

static const u8 sTM348Desc[] = _(
    "The user throws a punch from the\n"
    "shadows. The punch lands without fail.");

static const u8 sTM349Desc[] = _(
    "The user launches a hard-packed\n"
    "mud ball to attack. This may also\n"
    "lower the targets accuracy.");

static const u8 sTM350Desc[] = _(
    "The user smashes into the target in a\n"
    "full-body tackle. This also lowers the users\n"
    "defensive stats.");

static const u8 sTM351Desc[] = _(
    "The user swings and hits with its\n"
    "strong and heavy fist. It lowers the\n"
    "users Speed, however.");

static const u8 sTM352Desc[] = _(
    "The user uses its body like a\n"
    "hammer to attack the target and\n"
    "inflict damage.");

static const u8 sTM353Desc[] = _(
    "The user swings and hits with\n"
    "its frozen, heavy fist. It lowers\n"
    "the users Speed, however.");

static const u8 sTM354Desc[] = _(
    "The user slams its rugged body\n"
    "into the target to attack. The user\n"
    "also sustains serious damage.");

static const u8 sTM355Desc[] = _(
    "The target is hit with a hard punch\n"
    "fired like a meteor. It may also raise\n"
    "the users Attack.");

static const u8 sHM01Desc[] = _(
    "Attacks the foe\n"
    "with sharp blades\n"
    "or claws.");

static const u8 sHM02Desc[] = _(
    "Flies up on the\n"
    "first turn, then\n"
    "attacks next turn.");

static const u8 sHM03Desc[] = _(
    "Creates a huge\n"
    "wave, then crashes\n"
    "it down on the foe.");

static const u8 sHM04Desc[] = _(
    "Builds enormous\n"
    "power, then slams\n"
    "the foe.");

static const u8 sHM05Desc[] = _(
    "Looses a powerful\n"
    "blast of light that\n"
    "reduces accuracy.");

static const u8 sHM06Desc[] = _(
    "A rock-crushingly\n"
    "tough attack that\n"
    "may lower Defense.");

static const u8 sHM07Desc[] = _(
    "Attacks the foe\n"
    "with enough power\n"
    "to climb waterfalls.");

static const u8 sHM08Desc[] = _(
    "Dives underwater\n"
    "the 1st turn, then\n"
    "attacks next turn.");

// Charms
static const u8 sOvalCharmDesc[] = _(
    "Raises the chance\n"
    "of finding eggs\n"
    "at the daycare.");

static const u8 sShinyCharmDesc[] = _(
    "A charm that will\n"
    "raise the chance\n"
    "of Shiny Pokémon.");

static const u8 sCatchingCharmDesc[] = _(
    "A charm that raises\n"
    "the chance of\n"
    "Critical Captures.");

static const u8 sExpCharmDesc[] = _(
    "A charm that raises\n"
    "the amount of Exp.\n"
    "earned in battle.");

// Form-changing Key Items
static const u8 sRotomCatalogDesc[] = _(
    "A catalog full of\n"
    "deviced liked by\n"
    "Rotom.");

static const u8 sGracideaDesc[] = _(
    "Bouquets made with\n"
    "it are offered as a\n"
    "token of gratitude.");

static const u8 sRevealGlassDesc[] = _(
    "This glass returns\n"
    "a Pokémon back to\n"
    "its original form.");

static const u8 sDNASplicersDesc[] = _(
    "Splicer that fuses\n"
    "Kyurem and a\n"
    "certain Pokémon.");

static const u8 sZygardeCubeDesc[] = _(
    "An item to store\n"
    "Zygarde Cores and\n"
    "Cells.");

static const u8 sPrisonBottleDesc[] = _(
    "A bottle used to\n"
    "seal a certain\n"
    "Pokémon long ago.");

static const u8 sNSolarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Solgaleo.");

static const u8 sNLunarizerDesc[] = _(
    "A device to fuse\n"
    "and split Necrozma\n"
    "using a Lunala.");

static const u8 sReinsOfUnityDesc[] = _(
    "Reins that unite\n"
    "Calyrex with its\n"
    "beloved steed.");

// Battle Mechanic Key Items
static const u8 sMegaRingDesc[] = _(
    "Enables {PKMN} holding\n"
    "their Mega Stone to\n"
    "Mega Evolve.");

static const u8 sZPowerRingDesc[] = _(
    "A strange ring\n"
    "that enables\n"
    "Z-Move usage.");

static const u8 sDynamaxBandDesc[] = _(
    "A band carrying a\n"
    "Wishing Star that\n"
    "allows Dynamaxing.");

// Misc. Key Items
static const u8 sBicycleDesc[] = _(
    "A folding bicycle\n"
    "that is faster than\n"
    "the Running Shoes.");

static const u8 sMachBikeDesc[] = _(
    "A folding bicycle\n"
    "that doubles your\n"
    "speed or better.");

static const u8 sAcroBikeDesc[] = _(
    "A folding bicycle\n"
    "capable of jumps\n"
    "and wheelies.");

static const u8 sOldRodDesc[] = _(
    "Use by any body of\n"
    "water to fish for\n"
    "wild Pokémon.");

static const u8 sGoodRodDesc[] = _(
    "A decent fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sSuperRodDesc[] = _(
    "The best fishing\n"
    "rod for catching\n"
    "wild Pokémon.");

static const u8 sDowsingMachineDesc[] = _(
    "A device that\n"
    "signals an invisible\n"
    "item by sound.");

static const u8 sTownMapDesc[] = _(
    "Can be viewed\n"
    "anytime. Shows your\n"
    "present location.");

static const u8 sVsSeekerDesc[] = _(
    "A rechargeable unit\n"
    "that flags battle-\n"
    "ready Trainers.");

static const u8 sTMCaseDesc[] = _(
    "A convenient case \n"
    "that holds TMs and\n"
    "HMs.");

static const u8 sBerryPouchDesc[] = _(
    "A convenient\n"
    "container that\n"
    "holds Berries.");

static const u8 sPokemonBoxLinkDesc[] = _(
    "This device grants\n"
    "access to the {PKMN}\n"
    "Storage System.");

static const u8 sCoinCaseDesc[] = _(
    "A case that holds\n"
    "up to 9,999 Coins.");

static const u8 sPowderJarDesc[] = _(
    "Stores Berry\n"
    "Powder made using\n"
    "a Berry Crusher.");

static const u8 sWailmerPailDesc[] = _(
    "A tool used for\n"
    "watering Berries\n"
    "and plants.");

static const u8 sPokeRadarDesc[] = _(
    "A tool used to\n"
    "search out Pokémon\n"
    "hiding in grass.");

static const u8 sPokeblockCaseDesc[] = _(
    "A case for holding\n"
    "{POKEBLOCK}s made with\n"
    "a Berry Blender.");

static const u8 sSootSackDesc[] = _(
    "A sack used to\n"
    "gather and hold\n"
    "volcanic ash.");

static const u8 sPokeFluteDesc[] = _(
    "A sweet-sounding\n"
    "flute that awakens\n"
    "Pokémon.");

static const u8 sFameCheckerDesc[] = _(
    "Stores information\n"
    "on famous people\n"
    "for instant recall.");

static const u8 sTeachyTVDesc[] = _(
    "A TV set tuned to\n"
    "an advice program\n"
    "for Trainers.");

// Story Key Items
static const u8 sSSTicketDesc[] = _(
    "The ticket required\n"
    "for sailing on a\n"
    "ferry.");

static const u8 sEonTicketDesc[] = _(
    "The ticket for a\n"
    "ferry to a distant\n"
    "southern island.");

static const u8 sMysticTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to Navel Rock.");

static const u8 sAuroraTicketDesc[] = _(
    "A ticket required\n"
    "to board the ship\n"
    "to Birth Island.");

static const u8 sOldSeaMapDesc[] = _(
    "A faded sea chart\n"
    "that shows the way\n"
    "to a certain island.");

static const u8 sLetterDesc[] = _(
    "A letter to Steven\n"
    "from the President\n"
    "of the Devon Corp.");

static const u8 sDevonPartsDesc[] = _(
    "A package that\n"
    "contains Devon's\n"
    "machine parts.");

static const u8 sGoGogglesDesc[] = _(
    "Nifty goggles that\n"
    "protect eyes from\n"
    "desert sandstorms.");

static const u8 sDevonScopeDesc[] = _(
    "A device by Devon\n"
    "that signals any\n"
    "unseeable Pokémon.");

static const u8 sBasementKeyDesc[] = _(
    "The key for New\n"
    "Mauville beneath\n"
    "Mauville City.");

static const u8 sScannerDesc[] = _(
    "A device found\n"
    "inside the\n"
    "Abandoned Ship.");

static const u8 sStorageKeyDesc[] = _(
    "The key to the\n"
    "storage inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom1Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom2Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom4Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sKeyToRoom6Desc[] = _(
    "A key that opens a\n"
    "door inside the\n"
    "Abandoned Ship.");

static const u8 sMeteoriteDesc[] = _(
    "A meteorite found\n"
    "at Meteor Falls.");

static const u8 sMagmaEmblemDesc[] = _(
    "A medal-like item in\n"
    "the same shape as\n"
    "Team Magma's mark.");

static const u8 sContestPassDesc[] = _(
    "The pass required\n"
    "for entering\n"
    "Pokémon Contests.");

static const u8 sParcelDesc[] = _(
    "A parcel for Prof.\n"
    "Oak from a Pokémon\n"
    "Mart's clerk.");

static const u8 sSecretKeyDesc[] = _(
    "The key to the\n"
    "Cinnabar Island\n"
    "Gym's entrance.");

static const u8 sBikeVoucherDesc[] = _(
    "A voucher for\n"
    "obtaining a bicycle\n"
    "from the Bike Shop.");

static const u8 sGoldTeethDesc[] = _(
    "Gold dentures lost\n"
    "by the Safari\n"
    "Zone's Warden.");

static const u8 sCardKeyDesc[] = _(
    "A card-type door\n"
    "key used in Silph\n"
    "Co's office.");

static const u8 sLiftKeyDesc[] = _(
    "An elevator key\n"
    "used in Team\n"
    "Rocket's Hideout.");

static const u8 sSilphScopeDesc[] = _(
    "Silph Co's scope\n"
    "makes unseeable\n"
    "POKéMON visible.");

static const u8 sTriPassDesc[] = _(
    "A pass for ferries\n"
    "between One, Two,\n"
    "and Three Island.");

static const u8 sRainbowPassDesc[] = _(
    "For ferries serving\n"
    "Vermilion and the\n"
    "Sevii Islands.");

static const u8 sTeaDesc[] = _(
    "A thirst-quenching\n"
    "tea prepared by an\n"
    "old lady.");

static const u8 sRubyDesc[] = _(
    "An exquisite, red-\n"
    "glowing gem that\n"
    "symbolizes passion.");

static const u8 sSapphireDesc[] = _(
    "A brilliant blue gem\n"
    "that symbolizes\n"
    "honesty.");

static const u8 sAbilityShieldDesc[] = _(
    "Ability changes are\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sClearAmuletDesc[] = _(
    "Stat lowering is\n"
    "prevented for this\n"
    "items's holder.");

static const u8 sPunchingGloveDesc[] = _(
    "Powers up punching\n"
    "moves and removes\n"
    "their contact.");

static const u8 sCovertCloakDesc[] = _(
    "Protects the holder\n"
    "from secondary\n"
    "move effects.");

static const u8 sLoadedDiceDesc[] = _(
    "Rolls high numbers.\n"
    "Multihit strikes\n"
    "hit more times.");

static const u8 sAuspiciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "auspicious wishes.\n"
    "Causes evolution.");

static const u8 sBoosterEnergyDesc[] = _(
    "Encapsuled energy\n"
    "ups Pokémon with\n"
    "certain Abilities.");

static const u8 sBigBambooShootDesc[] = _(
    "A large and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sGimmighoulCoinDesc[] = _(
    "Gimmighoul hoard\n"
    "and treasure these\n"
    "curious coins.");

static const u8 sLeadersCrestDesc[] = _(
    "A shard of an old\n"
    "blade of some sort.\n"
    "Held by Bisharp.");

static const u8 sMaliciousArmorDesc[] = _(
    "Armor inhabited by\n"
    "malicious will.\n"
    "Causes evolution.");

static const u8 sMirrorHerbDesc[] = _(
    "Mirrors an enemy's\n"
    "stat increases\n"
    "but only once.");

static const u8 sScrollOfDarknessDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the dark path.");

static const u8 sScrollOfWatersDesc[] = _(
    "A peculiar scroll\n"
    "with secrets of\n"
    "the water path.");

static const u8 sTeraOrbDesc[] = _(
    "Energy charges can\n"
    "be used to cause\n"
    "Terastallization.");

static const u8 sTinyBambooShootDesc[] = _(
    "A small and rare\n"
    "bamboo shoot. Best\n"
    "sold to gourmands.");

static const u8 sTeraShardDesc[] = _(
    "These shards may\n"
    "form when a Tera\n"
    "Pokémon faints.");

static const u8 sAdamantCrystalDesc[] = _(
    "A large, glowing gem\n"
    "that lets Dialga\n"
    "change form.");

static const u8 sGriseousCoreDesc[] = _(
    "A large, glowing gem\n"
    "that lets Giratina\n"
    "change form.");

static const u8 sLustrousGlobeDesc[] = _(
    "A large, glowing gem\n"
    "that lets Palkia\n"
    "change form.");

static const u8 sBerserkGene[] = _(
    "Sharply boosts\n"
    "Attack, but causes\n"
    "lasting confusion.");

static const u8 sFairyFeatherDesc[] = _(
    "A hold item that\n"
    "raises the power of\n"
    "Fairy-type moves.");

static const u8 sSyrupyAppleDesc[] = _(
    "A very syrupy apple\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sUnremarkableTeacupDesc[] = _(
    "A cracked teacup\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sMasterpieceTeacupDesc[] = _(
    "A chipped teacup\n"
    "that makes certain\n"
    "Pokémon evolve.");

static const u8 sCornerstoneMaskDesc[] = _(
    "Allows Ogerpon to\n"
    "wield the Rock-\n"
    "type in battle.");

static const u8 sWellspringMaskDesc[] = _(
    "Allows Ogerpon to\n"
    "wield the Water-\n"
    "type in battle.");

static const u8 sHearthflameMaskDesc[] = _(
    "Allows Ogerpon to\n"
    "wield the Fire-\n"
    "type in battle.");

static const u8 sHealthMochiDesc[] = _(
    "An item that raises\n"
    "the base HP of\n"
    "a Pokémon.");

static const u8 sMuscleMochiDesc[] = _(
    "An item that raises\n"
    "the base Attack of\n"
    "a Pokémon.");

static const u8 sResistMochiDesc[] = _(
    "An item that raises\n"
    "the base Defense\n"
    "of a Pokémon.");

static const u8 sGeniusMochiDesc[] = _(
    "An item that raises\n"
    "the base Sp. Atk.\n"
    "of a Pokémon.");

static const u8 sCleverMochiDesc[] = _(
    "An item that raises\n"
    "the base Sp. Def.\n"
    "of a Pokémon.");

static const u8 sSwiftMochiDesc[] = _(
    "An item that raises\n"
    "the base Speed of\n"
    "a Pokémon.");

static const u8 sFreshStartMochiDesc[] = _(
    "An item that resets\n"
    "all base points of\n"
    "a Pokémon.");

static const u8 sGlimmeringCharmDesc[] = _(
    "A charm that will\n"
    "raise the shards\n"
    "from Tera Raids.");
