#pragma hdrstop
#include <NPC.H>

#include "Amelia.h"
#include "AnthorTheMad.h"
#include "Antonian.h"
#include "Aquinos.h"
#include "BedNomad1.h"
#include "BlueShardChest.h"
#include "BookshelfNomad1.h"
#include "BookshelfNomad2.h"
#include "BookshelfNomad3.h"
#include "Carman.h"
#include "CarmanSpawner.h"
#include "ChaosEastExitPortal.h"
#include "ChaosEastToCenterPortal.h"
#include "ChaosSouthExitPortal.h"
#include "ChaosSouthToCenterPortal.h"
#include "ChaosWestExitPortal.h"
#include "ChaosWestToCenterPortal.h"
#include "Crimsonscale.h"
#include "CrystalPortal.h"
#include "Custodian.h"
#include "DefilementPortal1.h"
#include "DefilementPortal2.h"
#include "DeskNomad1.h"
#include "DoorEfnisien2.h"
#include "DoorGluriurl1.h"
#include "DoorGluriurl2.h"
#include "DoorGunthar1.h"
#include "DoorNomad1.h"
#include "DoorOlinHaad1.h"
#include "Doppelganger.h"
#include "DoppelgangerPortal1a.h"
#include "DoppelgangerPortal1b.h"
#include "DoppelgangerPortal2a.h"
#include "DoppelgangerPortal2b.h"
#include "DoppelgangerPortal3a.h"
#include "DoppelgangerPortal3b.h"
#include "DoppelgangerPortal4a.h"
#include "DoppelgangerPortal4b.h"
#include "DoppelgangerPortal5a.h"
#include "DoppelgangerPortal5b.h"
#include "DoppelgangerPortal6a.h"
#include "DoppelgangerPortal6b.h"
#include "DoppelgangerPortal7a.h"
#include "DoppelgangerPortal7b.h"
#include "DoppelgangerPortal8a.h"
#include "DoppelgangerPortal8b.h"
#include "DraconisGuardian.h"
#include "Efnisien.h"
#include "Fenrir.h"
#include "Filandrius.h"
#include "FountainOfKnowledge.h"
#include "Gluriurl.h"
#include "GorlokBloodaxe.h"
#include "GreenShardChest.h"
#include "GuildLeaderEthan.h"
#include "Gypsy.h"
#include "HarvesterOfLife.h"
#include "HarvesterPortal.h"
#include "HighPriestGunthar.h"
#include "HighPriestGunthar2.h"
#include "InvisibleMazeExitPortal.h"
#include "Jormungand.h"
#include "Librarian1.h"
#include "Librarian2.h"
#include "Librarian3.h"
#include "Lothar.h"
#include "MazeExitPortal.h"
#include "MetalChestNomad1.h"
#include "MetalChestNomad2.h"
#include "MetalChestNomad3.h"
#include "MOBMercenaryA.h"
#include "MOBMercenaryB.h"
#include "MOBMercenaryC.h"
#include "MOBMercenaryLeader.h"
#include "MOBMercenaryLieutenantA.h"
#include "MOBMercenaryLieutenantB.h"
#include "MOBMercenaryLieutenantC.h"
#include "MOBMordred.h"
#include "MOBObsidianConclaveKnight.h"
#include "MOBOlinHaadGuard3.h"
#include "MOBOlinHaadGuard4.h"
#include "MordredChest.h"
#include "NamelessBard.h"
#include "NexusStone1.h"
#include "NexusStone10.h"
#include "NexusStone11.h"
#include "NexusStone12.h"
#include "NexusStone13.h"
#include "NexusStone14.h"
#include "NexusStone15.h"
#include "NexusStone2.h"
#include "NexusStone3.h"
#include "NexusStone4.h"
#include "NexusStone5.h"
#include "NexusStone6.h"
#include "NexusStone7.h"
#include "NexusStone8.h"
#include "NexusStone9.h"
#include "OfferingAltar.h"
#include "OlinHaad1.h"
#include "OlinHaad2.h"
#include "OlinHaad3.h"
#include "OlinHaadAssassin.h"
#include "OlinHaadCommander.h"
#include "OlinHaadEliteGuard.h"
#include "OlinToStrongholdPortal.h"
#include "PaintingNomad1.h"
#include "PortalSpellDruidPoint.h"
#include "PortalSpellLighthaven.h"
#include "PortalSpellSilversky.h"
#include "PortalSpellStonecrest.h"
#include "PortalSpellSunkenWoods.h"
#include "PortalSpellWindhowl.h"
#include "PortalSpellWizardVale.h"
#include "Ramirgo.h"
#include "RedShardChest.h"
#include "Ribcage.h"
#include "RibCageEntrancePortal.h"
#include "RibCageExitPortal.h"
#include "SanctuaryGuardian.h"
#include "Scholar1.h"
#include "Scholar2.h"
#include "Scholar3.h"
#include "Scholar4.h"
#include "SnakeFountain.h"
#include "StrongholdRandomChest1.h"
#include "StrongholdRandomChest2.h"
#include "StrongholdRandomChest3.h"
#include "StrongholdRandomChest4.h"
#include "StrongholdRandomChest5.h"
#include "StrongholdRandomChest6.h"
#include "StrongholdRandomChest7.h"
#include "StrongholdToOlinPortal.h"
#include "SufferingPortal1.h"
#include "SufferingPortal2.h"
#include "TableNomad1.h"
#include "Tarnian.h"
#include "TreeOfWisdom.h"
#include "Tristan.h"
#include "Urik.h"
#include "UrikThief.h"
#include "VicarAsgoth.h"
#include "VicarKervian.h"
#include "VicarRamiel.h"
#include "VicarVharmes.h"
#include "VincentSwiftblade.h"
#include "WhirlpoolMazeExitPortal.h"
#include "WindhowlSentry.h"
#include "WoodenChestNomad1.h"
#include "WoodenChestNomad2.h"
#include "WoodenChestNomad3.h"

// NPC object definitions.

Amelia                                  AMELIA;
AnthorTheMad                            ANTHORTHEMAD;
Antonian                                ANTONIAN;
Aquinos                                 AQUINOS;
BedNomad1                               BEDNOMAD1;
BlueShardChest                          BLUESHARDCHEST;
BookshelfNomad1                         BOOKSHELFNOMAD1;
BookshelfNomad2                         BOOKSHELFNOMAD2;
BookshelfNomad3                         BOOKSHELFNOMAD3;
Carman                                  CARMAN;
CarmanSpawner                           CARMANSPAWNER;
ChaosEastExitPortal                     CHAOSEASTEXITPORTAL;
ChaosEastToCenterPortal                 CHAOSEASTTOCENTERPORTAL;
ChaosSouthExitPortal                    CHAOSSOUTHEXITPORTAL;
ChaosSouthToCenterPortal                CHAOSSOUTHTOCENTERPORTAL;
ChaosWestExitPortal                     CHAOSWESTEXITPORTAL;
ChaosWestToCenterPortal                 CHAOSWESTTOCENTERPORTAL;
Crimsonscale                            CRIMSONSCALE;
CrystalPortal                           CRYSTALPORTAL;
Custodian                               CUSTODIAN;
DefilementPortal1                       DEFILEMENTPORTAL1;
DefilementPortal2                       DEFILEMENTPORTAL2;
DeskNomad1                              DESKNOMAD1;
DoorEfnisien2                           DOOREFNISIEN2;
DoorGluriurl1                           DOORGLURIURL1;
DoorGluriurl2                           DOORGLURIURL2;
DoorGunthar1                            DOORGUNTHAR1;
DoorNomad1                              DOORNOMAD1;
DoorOlinHaad1                           DOOROLINHAAD1;
Doppelganger                            DOPPELGANGER;
DoppelgangerPortal1a                    DOPPELGANGERPORTAL1A;
DoppelgangerPortal1b                    DOPPELGANGERPORTAL1B;
DoppelgangerPortal2a                    DOPPELGANGERPORTAL2A;
DoppelgangerPortal2b                    DOPPELGANGERPORTAL2B;
DoppelgangerPortal3a                    DOPPELGANGERPORTAL3A;
DoppelgangerPortal3b                    DOPPELGANGERPORTAL3B;
DoppelgangerPortal4a                    DOPPELGANGERPORTAL4A;
DoppelgangerPortal4b                    DOPPELGANGERPORTAL4B;
DoppelgangerPortal5a                    DOPPELGANGERPORTAL5A;
DoppelgangerPortal5b                    DOPPELGANGERPORTAL5B;
DoppelgangerPortal6a                    DOPPELGANGERPORTAL6A;
DoppelgangerPortal6b                    DOPPELGANGERPORTAL6B;
DoppelgangerPortal7a                    DOPPELGANGERPORTAL7A;
DoppelgangerPortal7b                    DOPPELGANGERPORTAL7B;
DoppelgangerPortal8a                    DOPPELGANGERPORTAL8A;
DoppelgangerPortal8b                    DOPPELGANGERPORTAL8B;
DraconisGuardian                        DRACONISGUARDIAN;
Efnisien                                EFNISIEN;
Fenrir                                  FENRIR;
Filandrius                              FILANDRIUS;
FountainOfKnowledge                     FOUNTAINOFKNOWLEDGE;
Gluriurl                                GLURIURL;
GorlokBloodaxe                          GORLOKBLOODAXE;
GreenShardChest                         GREENSHARDCHEST;
GuildLeaderEthan                        GUILDLEADERETHAN;
Gypsy                                   GYPSY;
HarvesterOfLife                         HARVESTEROFLIFE;
HarvesterPortal                         HARVESTERPORTAL;
HighPriestGunthar                       HIGHPRIESTGUNTHAR;
HighPriestGunthar2                      HIGHPRIESTGUNTHAR2;
InvisibleMazeExitPortal                 INVISIBLEMAZEEXITPORTAL;
Jormungand                              JORMUNGAND;
Librarian1                              LIBRARIAN1;
Librarian2                              LIBRARIAN2;
Librarian3                              LIBRARIAN3;
Lothar                                  LOTHAR;
MazeExitPortal                          MAZEEXITPORTAL;
MetalChestNomad1                        METALCHESTNOMAD1;
MetalChestNomad2                        METALCHESTNOMAD2;
MetalChestNomad3                        METALCHESTNOMAD3;
MOBMercenaryA                           MOBMERCENARYA;
MOBMercenaryB                           MOBMERCENARYB;
MOBMercenaryC                           MOBMERCENARYC;
MOBMercenaryLeader                      MOBMERCENARYLEADER;
MOBMercenaryLieutenantA                 MOBMERCENARYLIEUTENANTA;
MOBMercenaryLieutenantB                 MOBMERCENARYLIEUTENANTB;
MOBMercenaryLieutenantC                 MOBMERCENARYLIEUTENANTC;
MOBMordred                              MOBMORDRED;
MOBObsidianConclaveKnight               MOBOBSIDIANCONCLAVEKNIGHT;
MOBOlinHaadGuard3                       MOBOLINHAADGUARD3;
MOBOlinHaadGuard4                       MOBOLINHAADGUARD4;
MordredChest                            MORDREDCHEST;
NamelessBard                            NAMELESSBARD;
NexusStone1                             NEXUSSTONE1;
NexusStone10                            NEXUSSTONE10;
NexusStone11                            NEXUSSTONE11;
NexusStone12                            NEXUSSTONE12;
NexusStone13                            NEXUSSTONE13;
NexusStone14                            NEXUSSTONE14;
NexusStone15                            NEXUSSTONE15;
NexusStone2                             NEXUSSTONE2;
NexusStone3                             NEXUSSTONE3;
NexusStone4                             NEXUSSTONE4;
NexusStone5                             NEXUSSTONE5;
NexusStone6                             NEXUSSTONE6;
NexusStone7                             NEXUSSTONE7;
NexusStone8                             NEXUSSTONE8;
NexusStone9                             NEXUSSTONE9;
OfferingAltar                           OFFERINGALTAR;
OlinHaad1                               OLINHAAD1;
OlinHaad2                               OLINHAAD2;
OlinHaad3                               OLINHAAD3;
OlinHaadAssassin                        OLINHAADASSASSIN;
OlinHaadCommander                       OLINHAADCOMMANDER;
OlinHaadEliteGuard                      OLINHAADELITEGUARD;
OlinToStrongholdPortal                  OLINTOSTRONGHOLDPORTAL;
PaintingNomad1                          PAINTINGNOMAD1;
PortalSpellDruidPoint                   PORTALSPELLDRUIDPOINT;
PortalSpellLighthaven                   PORTALSPELLLIGHTHAVEN;
PortalSpellSilversky                    PORTALSPELLSILVERSKY;
PortalSpellStonecrest                   PORTALSPELLSTONECREST;
PortalSpellSunkenWoods                  PORTALSPELLSUNKENWOODS;
PortalSpellWindhowl                     PORTALSPELLWINDHOWL;
PortalSpellWizardVale                   PORTALSPELLWIZARDVALE;
Ramirgo                                 RAMIRGO;
RedShardChest                           REDSHARDCHEST;
Ribcage                                 RIBCAGE;
RibCageEntrancePortal                   RIBCAGEENTRANCEPORTAL;
RibCageExitPortal                       RIBCAGEEXITPORTAL;
SanctuaryGuardian                       SANCTUARYGUARDIAN;
Scholar1                                SCHOLAR1;
Scholar2                                SCHOLAR2;
Scholar3                                SCHOLAR3;
Scholar4                                SCHOLAR4;
SnakeFountain                           SNAKEFOUNTAIN;
StrongholdRandomChest1                  STRONGHOLDRANDOMCHEST1;
StrongholdRandomChest2                  STRONGHOLDRANDOMCHEST2;
StrongholdRandomChest3                  STRONGHOLDRANDOMCHEST3;
StrongholdRandomChest4                  STRONGHOLDRANDOMCHEST4;
StrongholdRandomChest5                  STRONGHOLDRANDOMCHEST5;
StrongholdRandomChest6                  STRONGHOLDRANDOMCHEST6;
StrongholdRandomChest7                  STRONGHOLDRANDOMCHEST7;
StrongholdToOlinPortal                  STRONGHOLDTOOLINPORTAL;
SufferingPortal1                        SUFFERINGPORTAL1;
SufferingPortal2                        SUFFERINGPORTAL2;
TableNomad1                             TABLENOMAD1;
Tarnian                                 TARNIAN;
TreeOfWisdom                            TREEOFWISDOM;
Tristan                                 TRISTAN;
Urik                                    URIK;
UrikThief                               URIKTHIEF;
VicarAsgoth                             VICARASGOTH;
VicarKervian                            VICARKERVIAN;
VicarRamiel                             VICARRAMIEL;
VicarVharmes                            VICARVHARMES;
VincentSwiftblade                       VINCENTSWIFTBLADE;
WhirlpoolMazeExitPortal                 WHIRLPOOLMAZEEXITPORTAL;
WindhowlSentry                          WINDHOWLSENTRY;
WoodenChestNomad1                       WOODENCHESTNOMAD1;
WoodenChestNomad2                       WOODENCHESTNOMAD2;
WoodenChestNomad3                       WOODENCHESTNOMAD3;

// NPC registration.

INIT_NPC_DATA

    REGISTER_NPC( AMELIA )
    REGISTER_NPC( ANTHORTHEMAD )
    REGISTER_NPC( ANTONIAN )
    REGISTER_NPC( AQUINOS )
    REGISTER_NPC( BEDNOMAD1 )
    REGISTER_NPC( BLUESHARDCHEST )
    REGISTER_NPC( BOOKSHELFNOMAD1 )
    REGISTER_NPC( BOOKSHELFNOMAD2 )
    REGISTER_NPC( BOOKSHELFNOMAD3 )
    REGISTER_NPC( CARMAN )
    REGISTER_NPC( CARMANSPAWNER )
    REGISTER_NPC( CHAOSEASTEXITPORTAL )
    REGISTER_NPC( CHAOSEASTTOCENTERPORTAL )
    REGISTER_NPC( CHAOSSOUTHEXITPORTAL )
    REGISTER_NPC( CHAOSSOUTHTOCENTERPORTAL )
    REGISTER_NPC( CHAOSWESTEXITPORTAL )
    REGISTER_NPC( CHAOSWESTTOCENTERPORTAL )
    REGISTER_NPC( CRIMSONSCALE )
    REGISTER_NPC( CRYSTALPORTAL )
    REGISTER_NPC( CUSTODIAN )
    REGISTER_NPC( DEFILEMENTPORTAL1 )
    REGISTER_NPC( DEFILEMENTPORTAL2 )
    REGISTER_NPC( DESKNOMAD1 )
    REGISTER_NPC( DOOREFNISIEN2 )
    REGISTER_NPC( DOORGLURIURL1 )
    REGISTER_NPC( DOORGLURIURL2 )
    REGISTER_NPC( DOORGUNTHAR1 )
    REGISTER_NPC( DOORNOMAD1 )
    REGISTER_NPC( DOOROLINHAAD1 )
    REGISTER_NPC( DOPPELGANGER )
    REGISTER_NPC( DOPPELGANGERPORTAL1A )
    REGISTER_NPC( DOPPELGANGERPORTAL1B )
    REGISTER_NPC( DOPPELGANGERPORTAL2A )
    REGISTER_NPC( DOPPELGANGERPORTAL2B )
    REGISTER_NPC( DOPPELGANGERPORTAL3A )
    REGISTER_NPC( DOPPELGANGERPORTAL3B )
    REGISTER_NPC( DOPPELGANGERPORTAL4A )
    REGISTER_NPC( DOPPELGANGERPORTAL4B )
    REGISTER_NPC( DOPPELGANGERPORTAL5A )
    REGISTER_NPC( DOPPELGANGERPORTAL5B )
    REGISTER_NPC( DOPPELGANGERPORTAL6A )
    REGISTER_NPC( DOPPELGANGERPORTAL6B )
    REGISTER_NPC( DOPPELGANGERPORTAL7A )
    REGISTER_NPC( DOPPELGANGERPORTAL7B )
    REGISTER_NPC( DOPPELGANGERPORTAL8A )
    REGISTER_NPC( DOPPELGANGERPORTAL8B )
    REGISTER_NPC( DRACONISGUARDIAN )
    REGISTER_NPC( EFNISIEN )
    REGISTER_NPC( FENRIR )
    REGISTER_NPC( FILANDRIUS )
    REGISTER_NPC( FOUNTAINOFKNOWLEDGE )
    REGISTER_NPC( GLURIURL )
    REGISTER_NPC( GORLOKBLOODAXE )
    REGISTER_NPC( GREENSHARDCHEST )
    REGISTER_NPC( GUILDLEADERETHAN )
    REGISTER_NPC( GYPSY )
    REGISTER_NPC( HARVESTEROFLIFE )
    REGISTER_NPC( HARVESTERPORTAL )
    REGISTER_NPC( HIGHPRIESTGUNTHAR )
    REGISTER_NPC( HIGHPRIESTGUNTHAR2 )
    REGISTER_NPC( INVISIBLEMAZEEXITPORTAL )
    REGISTER_NPC( JORMUNGAND )
    REGISTER_NPC( LIBRARIAN1 )
    REGISTER_NPC( LIBRARIAN2 )
    REGISTER_NPC( LIBRARIAN3 )
    REGISTER_NPC( LOTHAR )
    REGISTER_NPC( MAZEEXITPORTAL )
    REGISTER_NPC( METALCHESTNOMAD1 )
    REGISTER_NPC( METALCHESTNOMAD2 )
    REGISTER_NPC( METALCHESTNOMAD3 )
    REGISTER_NPC( MOBMERCENARYA )
    REGISTER_NPC( MOBMERCENARYB )
    REGISTER_NPC( MOBMERCENARYC )
    REGISTER_NPC( MOBMERCENARYLEADER )
    REGISTER_NPC( MOBMERCENARYLIEUTENANTA )
    REGISTER_NPC( MOBMERCENARYLIEUTENANTB )
    REGISTER_NPC( MOBMERCENARYLIEUTENANTC )
    REGISTER_NPC( MOBMORDRED )
    REGISTER_NPC( MOBOBSIDIANCONCLAVEKNIGHT )
    REGISTER_NPC( MOBOLINHAADGUARD3 )
    REGISTER_NPC( MOBOLINHAADGUARD4 )
    REGISTER_NPC( MORDREDCHEST )
    REGISTER_NPC( NAMELESSBARD )
    REGISTER_NPC( NEXUSSTONE1 )
    REGISTER_NPC( NEXUSSTONE10 )
    REGISTER_NPC( NEXUSSTONE11 )
    REGISTER_NPC( NEXUSSTONE12 )
    REGISTER_NPC( NEXUSSTONE13 )
    REGISTER_NPC( NEXUSSTONE14 )
    REGISTER_NPC( NEXUSSTONE15 )
    REGISTER_NPC( NEXUSSTONE2 )
    REGISTER_NPC( NEXUSSTONE3 )
    REGISTER_NPC( NEXUSSTONE4 )
    REGISTER_NPC( NEXUSSTONE5 )
    REGISTER_NPC( NEXUSSTONE6 )
    REGISTER_NPC( NEXUSSTONE7 )
    REGISTER_NPC( NEXUSSTONE8 )
    REGISTER_NPC( NEXUSSTONE9 )
    REGISTER_NPC( OFFERINGALTAR )
    REGISTER_NPC( OLINHAAD1 )
    REGISTER_NPC( OLINHAAD2 )
    REGISTER_NPC( OLINHAAD3 )
    REGISTER_NPC( OLINHAADASSASSIN )
    REGISTER_NPC( OLINHAADCOMMANDER )
    REGISTER_NPC( OLINHAADELITEGUARD )
    REGISTER_NPC( OLINTOSTRONGHOLDPORTAL )
    REGISTER_NPC( PAINTINGNOMAD1 )
    REGISTER_NPC( PORTALSPELLDRUIDPOINT )
    REGISTER_NPC( PORTALSPELLLIGHTHAVEN )
    REGISTER_NPC( PORTALSPELLSILVERSKY )
    REGISTER_NPC( PORTALSPELLSTONECREST )
    REGISTER_NPC( PORTALSPELLSUNKENWOODS )
    REGISTER_NPC( PORTALSPELLWINDHOWL )
    REGISTER_NPC( PORTALSPELLWIZARDVALE )
    REGISTER_NPC( RAMIRGO )
    REGISTER_NPC( REDSHARDCHEST )
    REGISTER_NPC( RIBCAGE )
    REGISTER_NPC( RIBCAGEENTRANCEPORTAL )
    REGISTER_NPC( RIBCAGEEXITPORTAL )
    REGISTER_NPC( SANCTUARYGUARDIAN )
    REGISTER_NPC( SCHOLAR1 )
    REGISTER_NPC( SCHOLAR2 )
    REGISTER_NPC( SCHOLAR3 )
    REGISTER_NPC( SCHOLAR4 )
    REGISTER_NPC( SNAKEFOUNTAIN )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST1 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST2 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST3 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST4 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST5 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST6 )
    REGISTER_NPC( STRONGHOLDRANDOMCHEST7 )
    REGISTER_NPC( STRONGHOLDTOOLINPORTAL )
    REGISTER_NPC( SUFFERINGPORTAL1 )
    REGISTER_NPC( SUFFERINGPORTAL2 )
    REGISTER_NPC( TABLENOMAD1 )
    REGISTER_NPC( TARNIAN )
    REGISTER_NPC( TREEOFWISDOM )
    REGISTER_NPC( TRISTAN )
    REGISTER_NPC( URIK )
    REGISTER_NPC( URIKTHIEF )
    REGISTER_NPC( VICARASGOTH )
    REGISTER_NPC( VICARKERVIAN )
    REGISTER_NPC( VICARRAMIEL )
    REGISTER_NPC( VICARVHARMES )
    REGISTER_NPC( VINCENTSWIFTBLADE )
    REGISTER_NPC( WHIRLPOOLMAZEEXITPORTAL )
    REGISTER_NPC( WINDHOWLSENTRY )
    REGISTER_NPC( WOODENCHESTNOMAD1 )
    REGISTER_NPC( WOODENCHESTNOMAD2 )
    REGISTER_NPC( WOODENCHESTNOMAD3 )

END_INIT_NPC_DATA

// NPC creation.

INIT_NPC_CREATION

    CREATE_NPC( AMELIA )
    CREATE_NPC( ANTHORTHEMAD )
    CREATE_NPC( ANTONIAN )
    CREATE_NPC( AQUINOS )
    CREATE_NPC( BEDNOMAD1 )
    CREATE_NPC( BLUESHARDCHEST )
    CREATE_NPC( BOOKSHELFNOMAD1 )
    CREATE_NPC( BOOKSHELFNOMAD2 )
    CREATE_NPC( BOOKSHELFNOMAD3 )
    CREATE_NPC( CARMAN )
    CREATE_NPC( CARMANSPAWNER )
    CREATE_NPC( CHAOSEASTEXITPORTAL )
    CREATE_NPC( CHAOSEASTTOCENTERPORTAL )
    CREATE_NPC( CHAOSSOUTHEXITPORTAL )
    CREATE_NPC( CHAOSSOUTHTOCENTERPORTAL )
    CREATE_NPC( CHAOSWESTEXITPORTAL )
    CREATE_NPC( CHAOSWESTTOCENTERPORTAL )
    CREATE_NPC( CRIMSONSCALE )
    CREATE_NPC( CRYSTALPORTAL )
    CREATE_NPC( CUSTODIAN )
    CREATE_NPC( DEFILEMENTPORTAL1 )
    CREATE_NPC( DEFILEMENTPORTAL2 )
    CREATE_NPC( DESKNOMAD1 )
    CREATE_NPC( DOOREFNISIEN2 )
    CREATE_NPC( DOORGLURIURL1 )
    CREATE_NPC( DOORGLURIURL2 )
    CREATE_NPC( DOORGUNTHAR1 )
    CREATE_NPC( DOORNOMAD1 )
    CREATE_NPC( DOOROLINHAAD1 )
    CREATE_NPC( DOPPELGANGER )
    CREATE_NPC( DOPPELGANGERPORTAL1A )
    CREATE_NPC( DOPPELGANGERPORTAL1B )
    CREATE_NPC( DOPPELGANGERPORTAL2A )
    CREATE_NPC( DOPPELGANGERPORTAL2B )
    CREATE_NPC( DOPPELGANGERPORTAL3A )
    CREATE_NPC( DOPPELGANGERPORTAL3B )
    CREATE_NPC( DOPPELGANGERPORTAL4A )
    CREATE_NPC( DOPPELGANGERPORTAL4B )
    CREATE_NPC( DOPPELGANGERPORTAL5A )
    CREATE_NPC( DOPPELGANGERPORTAL5B )
    CREATE_NPC( DOPPELGANGERPORTAL6A )
    CREATE_NPC( DOPPELGANGERPORTAL6B )
    CREATE_NPC( DOPPELGANGERPORTAL7A )
    CREATE_NPC( DOPPELGANGERPORTAL7B )
    CREATE_NPC( DOPPELGANGERPORTAL8A )
    CREATE_NPC( DOPPELGANGERPORTAL8B )
    CREATE_NPC( DRACONISGUARDIAN )
    CREATE_NPC( EFNISIEN )
    CREATE_NPC( FENRIR )
    CREATE_NPC( FILANDRIUS )
    CREATE_NPC( FOUNTAINOFKNOWLEDGE )
    CREATE_NPC( GLURIURL )
    CREATE_NPC( GORLOKBLOODAXE )
    CREATE_NPC( GREENSHARDCHEST )
    CREATE_NPC( GUILDLEADERETHAN )
    CREATE_NPC( GYPSY )
    CREATE_NPC( HARVESTEROFLIFE )
    CREATE_NPC( HARVESTERPORTAL )
    CREATE_NPC( HIGHPRIESTGUNTHAR )
    CREATE_NPC( HIGHPRIESTGUNTHAR2 )
    CREATE_NPC( INVISIBLEMAZEEXITPORTAL )
    CREATE_NPC( JORMUNGAND )
    CREATE_NPC( LIBRARIAN1 )
    CREATE_NPC( LIBRARIAN2 )
    CREATE_NPC( LIBRARIAN3 )
    CREATE_NPC( LOTHAR )
    CREATE_NPC( MAZEEXITPORTAL )
    CREATE_NPC( METALCHESTNOMAD1 )
    CREATE_NPC( METALCHESTNOMAD2 )
    CREATE_NPC( METALCHESTNOMAD3 )
    CREATE_NPC( MOBMERCENARYA )
    CREATE_NPC( MOBMERCENARYB )
    CREATE_NPC( MOBMERCENARYC )
    CREATE_NPC( MOBMERCENARYLEADER )
    CREATE_NPC( MOBMERCENARYLIEUTENANTA )
    CREATE_NPC( MOBMERCENARYLIEUTENANTB )
    CREATE_NPC( MOBMERCENARYLIEUTENANTC )
    CREATE_NPC( MOBMORDRED )
    CREATE_NPC( MOBOBSIDIANCONCLAVEKNIGHT )
    CREATE_NPC( MOBOLINHAADGUARD3 )
    CREATE_NPC( MOBOLINHAADGUARD4 )
    CREATE_NPC( MORDREDCHEST )
    CREATE_NPC( NAMELESSBARD )
    CREATE_NPC( NEXUSSTONE1 )
    CREATE_NPC( NEXUSSTONE10 )
    CREATE_NPC( NEXUSSTONE11 )
    CREATE_NPC( NEXUSSTONE12 )
    CREATE_NPC( NEXUSSTONE13 )
    CREATE_NPC( NEXUSSTONE14 )
    CREATE_NPC( NEXUSSTONE15 )
    CREATE_NPC( NEXUSSTONE2 )
    CREATE_NPC( NEXUSSTONE3 )
    CREATE_NPC( NEXUSSTONE4 )
    CREATE_NPC( NEXUSSTONE5 )
    CREATE_NPC( NEXUSSTONE6 )
    CREATE_NPC( NEXUSSTONE7 )
    CREATE_NPC( NEXUSSTONE8 )
    CREATE_NPC( NEXUSSTONE9 )
    CREATE_NPC( OFFERINGALTAR )
    CREATE_NPC( OLINHAAD1 )
    CREATE_NPC( OLINHAAD2 )
    CREATE_NPC( OLINHAAD3 )
    CREATE_NPC( OLINHAADASSASSIN )
    CREATE_NPC( OLINHAADCOMMANDER )
    CREATE_NPC( OLINHAADELITEGUARD )
    CREATE_NPC( OLINTOSTRONGHOLDPORTAL )
    CREATE_NPC( PAINTINGNOMAD1 )
    CREATE_NPC( PORTALSPELLDRUIDPOINT )
    CREATE_NPC( PORTALSPELLLIGHTHAVEN )
    CREATE_NPC( PORTALSPELLSILVERSKY )
    CREATE_NPC( PORTALSPELLSTONECREST )
    CREATE_NPC( PORTALSPELLSUNKENWOODS )
    CREATE_NPC( PORTALSPELLWINDHOWL )
    CREATE_NPC( PORTALSPELLWIZARDVALE )
    CREATE_NPC( RAMIRGO )
    CREATE_NPC( REDSHARDCHEST )
    CREATE_NPC( RIBCAGE )
    CREATE_NPC( RIBCAGEENTRANCEPORTAL )
    CREATE_NPC( RIBCAGEEXITPORTAL )
    CREATE_NPC( SANCTUARYGUARDIAN )
    CREATE_NPC( SCHOLAR1 )
    CREATE_NPC( SCHOLAR2 )
    CREATE_NPC( SCHOLAR3 )
    CREATE_NPC( SCHOLAR4 )
    CREATE_NPC( SNAKEFOUNTAIN )
    CREATE_NPC( STRONGHOLDRANDOMCHEST1 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST2 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST3 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST4 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST5 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST6 )
    CREATE_NPC( STRONGHOLDRANDOMCHEST7 )
    CREATE_NPC( STRONGHOLDTOOLINPORTAL )
    CREATE_NPC( SUFFERINGPORTAL1 )
    CREATE_NPC( SUFFERINGPORTAL2 )
    CREATE_NPC( TABLENOMAD1 )
    CREATE_NPC( TARNIAN )
    CREATE_NPC( TREEOFWISDOM )
    CREATE_NPC( TRISTAN )
    CREATE_NPC( URIK )
    CREATE_NPC( URIKTHIEF )
    CREATE_NPC( VICARASGOTH )
    CREATE_NPC( VICARKERVIAN )
    CREATE_NPC( VICARRAMIEL )
    CREATE_NPC( VICARVHARMES )
    CREATE_NPC( VINCENTSWIFTBLADE )
    CREATE_NPC( WHIRLPOOLMAZEEXITPORTAL )
    CREATE_NPC( WINDHOWLSENTRY )
    CREATE_NPC( WOODENCHESTNOMAD1 )
    CREATE_NPC( WOODENCHESTNOMAD2 )
    CREATE_NPC( WOODENCHESTNOMAD3 )

END_INIT_NPC_CREATION
