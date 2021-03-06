#pragma hdrstop

#include <NPC.H>

#include "AnnithaeTeardrop.h"
#include "BeltiganWhitesword.h"
#include "CryptWell.h"
#include "Bloodlust.h"
#include "CentaurAvenger.h"
#include "CentaurChampion.h"
#include "CentaurManaweaver.h"
#include "CentaurSentinel.h"
#include "CentaurTracker.h"
#include "ChieftainThorwagth.h"
#include "ChieftainYahgwuhl.h"
#include "ChiefWuuthgoran.h"
#include "ChryseidaYolangda.h"
#include "CryptChest1.h"
#include "CryptChest2.h"
#include "CryptChest3.h"
#include "CryptChest4.h"
#include "CryptChest5.h"
#include "CryptCoffin1.h"
#include "DantalirSongweaver.h"
#include "DaranLightfoot.h"
#include "DelnarSteelblade.h"
#include "DionysusSilverstream.h"
#include "Eldantor.h"
#include "Eldrig.h"
#include "EtherealPortal.h"
#include "GabrielArchonis.h"
#include "GaenenElthorn.h"
#include "GladdiusWindchaser.h"
#include "Glaenshenmilandira.h"
#include "GrantHornkeep.h"
#include "GulfridSteelhammer.h"
#include "HeadhunterWajpoothin.h"
#include "HerewaldIronbender.h"
#include "HunterGruttWorgwloth.h"
#include "HunterTruggWorgwloth.h"
#include "Julian.h"
#include "KahpLethGuard1.h"
#include "KahpLethGuard2.h"
#include "Kavarian.h"
#include "KhanWulgworth.h"
#include "KheralSilverhawk.h"
#include "Khimtesar.h"
#include "KhimtesarWell.h"
#include "KingAedenasGravesoul.h"
#include "KyathosShatterskull.h"
#include "MalachaiFatebringer.h"
#include "MayorFairweather.h"
#include "MeltarWinterstorm.h"
#include "MirymwenFeatherfoot.h"
#include "MithannaSnowraven.h"
#include "MOBGehennaReaver.h"
#include "MOBGiantBlackWidow.h"
#include "MOBNeoflare.h"
#include "MOBNightRetriever.h"
#include "MOBRedEyedCentaur.h"
#include "MOBShadowstalker.h"
#include "BastienMilandra.h"
#include "MoonTugGuard1.h"
#include "MoonTugGuard2.h"
#include "Mordenthal.h"
#include "NissusHaloseeker.h"
#include "NorimarSteelwind.h"
#include "OmarHald.h"
#include "Oracle.h"
#include "OracleChest14.h"
#include "OracleChest15.h"
#include "OracleEscapeDoor.h"
#include "OracleEscapeFlippedDoor.h"
#include "OracleGuardian1a.h"
#include "OracleGuardian1b.h"
#include "OracleGuardian1c.h"
#include "OracleGuardian1d.h"
#include "OracleGuardian1e.h"
#include "OracleGuardian1f.h"
#include "OraclePortal1.h"
#include "OraclePortal2.h"
#include "OraclePortal3.h"
#include "OraclePortal4.h"
#include "OraclePortal5.h"
#include "OraclePortal6.h"
#include "OraclePortal7.h"
#include "OraclePortal8.h"
#include "OracleRandomChest1.h"
#include "OracleRandomChest10.h"
#include "OracleRandomChest11.h"
#include "OracleRandomChest2.h"
#include "OracleRandomChest3.h"
#include "OracleRandomChest4.h"
#include "OracleRandomChest5.h"
#include "OracleRandomChest6.h"
#include "OracleRandomChest7.h"
#include "OracleRandomChest8.h"
#include "OracleRandomChest9.h"
#include "OracleTrappedChest1a.h"
#include "OracleTrappedChest1b.h"
#include "OracleTrappedChest2a.h"
#include "OracleTrappedChest2b.h"
#include "OracleTrappedChest3a.h"
#include "OracleTrappedChest3b.h"
#include "OracleTrappedChest4a.h"
#include "OracleTrappedChest4b.h"
#include "OracleTrappedChest5a.h"
#include "OracleTrappedChest5b.h"
#include "OracleTrappedChest6a.h"
#include "OracleTrappedChest6b.h"
#include "OracleTrappedChest7a.h"
#include "OracleTrappedChest7b.h"
#include "OracleVulnerableGuardian.h"
#include "RablekSwiftblade.h"
#include "Resha.h"
#include "RoenGreenleaf.h"
#include "ShamanWeethgwotha.h"
#include "MOBPurifier.h"
#include "Sweeper.h"
#include "ThorGlarefire.h"
#include "Torgas.h"
#include "DaranAnnithae.h"
#include "TrackerOoglaThraaglurh.h"
#include "Vargus.h"
#include "VargusChest.h"
#include "DaranAtrocity.h"
#include "WitchDoctorKwarlgloth.h"
#include "ZionThunderheart.h"
#include "MOBBlackProphet.h"
#include "OracleQuickChest1a.h"
#include "OracleQuickChest1b.h"
#include "OracleQuickChest2b.h"
#include "OracleQuickChest2a.h"
#include "LordStonecrest.h"
#include "MOBCelestialCobra.h"
#include "MOBDarkCleric.h"
#include "MOBDarkNoble.h"
#include "MOBGauzeCorpse.h"
#include "MOBHereticWarrior.h"
#include "MOBMadBerserkerDemon.h"
#include "MOBQuentinTarantula.h"
#include "MOBShriekerRodent.h"
#include "Venadar.h"
#include "MOBYoggothWorm.h"
#include "MonsterSpawner.h"
#include "SkraugBigbruddalbashah.h"
#include "SkraugBigworviktor.h"
#include "SkraugBludfightor.h"
#include "SkraugClangbangah.h"
#include "SkraugGrubbringah.h"
#include "SkraugMadlimbmanglor.h"
#include "SkraugMeanheaddrummah.h"
#include "SkraugMoonfiredansah.h"
#include "SkraugMunchhuntor.h"
#include "SkraugProtekterritor.h"
#include "SkraugStandanbonkah.h"
#include "SkraugTotemherbdoktor.h"
#include "TheoranIronfaith.h"
#include "WorldWildHorse.h"
#include "RemortNPC1.h"
#include "RemortNPC2.h"
#include "RemortNPC3.h"
#include "RemortNPC4.h"
#include "RemortNPC5.h"
#include "MOBHunter1.h"
#include "MOBHunter2.h"
#include "LordoftheShops.h"

// NPC object definitions.

AnnithaeTeardrop                        ANNITHAETEARDROP;
BeltiganWhitesword                      BELTIGANWHITESWORD;
CryptWell                               CRYPTWELL;
Bloodlust                               BLOODLUST;
CentaurAvenger                          CENTAURAVENGER;
CentaurChampion                         CENTAURCHAMPION;
CentaurManaweaver                       CENTAURMANAWEAVER;
CentaurSentinel                         CENTAURSENTINEL;
CentaurTracker                          CENTAURTRACKER;
ChieftainThorwagth                      CHIEFTAINTHORWAGTH;
ChieftainYahgwuhl                       CHIEFTAINYAHGWUHL;
ChiefWuuthgoran                         CHIEFWUUTHGORAN;
ChryseidaYolangda                       CHRYSEIDAYOLANGDA;
CryptChest1                             CRYPTCHEST1;
CryptChest2                             CRYPTCHEST2;
CryptChest3                             CRYPTCHEST3;
CryptChest4                             CRYPTCHEST4;
CryptChest5                             CRYPTCHEST5;
CryptCoffin1                            CRYPTCOFFIN1;
DantalirSongweaver                      DANTALIRSONGWEAVER;
DaranLightfoot                          DARANLIGHTFOOT;
DelnarSteelblade                        DELNARSTEELBLADE;
DionysusSilverstream                    DIONYSUSSILVERSTREAM;
Eldantor                                ELDANTOR;
Eldrig                                  ELDRIG;
EtherealPortal                          ETHEREALPORTAL;
GabrielArchonis                         GABRIELARCHONIS;
GaenenElthorn                           GAENENELTHORN;
GladdiusWindchaser                      GLADDIUSWINDCHASER;
Glaenshenmilandira                      GLAENSHENMILANDIRA;
GrantHornkeep                           GRANTHORNKEEP;
GulfridSteelhammer                      GULFRIDSTEELHAMMER;
HeadhunterWajpoothin                    HEADHUNTERWAJPOOTHIN;
HerewaldIronbender                      HEREWALDIRONBENDER;
HunterGruttWorgwloth                    HUNTERGRUTTWORGWLOTH;
HunterTruggWorgwloth                    HUNTERTRUGGWORGWLOTH;
Julian                                  JULIAN;
KahpLethGuard1                          KAHPLETHGUARD1;
KahpLethGuard2                          KAHPLETHGUARD2;
Kavarian                                KAVARIAN;
KhanWulgworth                           KHANWULGWORTH;
KheralSilverhawk                        KHERALSILVERHAWK;
Khimtesar                               KHIMTESAR;
KhimtesarWell                           KHIMTESARWELL;
KingAedenasGravesoul                    KINGAEDENASGRAVESOUL;
KyathosShatterskull                     KYATHOSSHATTERSKULL;
MalachaiFatebringer                     MALACHAIFATEBRINGER;
MayorFairweather                        MAYORFAIRWEATHER;
MeltarWinterstorm                       MELTARWINTERSTORM;
MirymwenFeatherfoot                     MIRYMWENFEATHERFOOT;
MithannaSnowraven                       MITHANNASNOWRAVEN;
MOBGehennaReaver                        MOBGEHENNAREAVER;
MOBGiantBlackWidow                      MOBGIANTBLACKWIDOW;
MOBNeoflare                             MOBNEOFLARE;
MOBNightRetriever                       MOBNIGHTRETRIEVER;
MOBRedEyedCentaur                       MOBREDEYEDCENTAUR;
MOBShadowstalker                        MOBSHADOWSTALKER;
BastienMilandra                         BASTIENMILANDRA;
MoonTugGuard1                           MOONTUGGUARD1;
MoonTugGuard2                           MOONTUGGUARD2;
Mordenthal                              MORDENTHAL;
NissusHaloseeker                        NISSUSHALOSEEKER;
NorimarSteelwind                        NORIMARSTEELWIND;
OmarHald                                OMARHALD;
Oracle                                  ORACLE;
OracleChest14                           ORACLECHEST14;
OracleChest15                           ORACLECHEST15;
OracleEscapeDoor                        ORACLEESCAPEDOOR;
OracleEscapeFlippedDoor                 ORACLEESCAPEFLIPPEDDOOR;
OracleGuardian1a                        ORACLEGUARDIAN1A;
OracleGuardian1b                        ORACLEGUARDIAN1B;
OracleGuardian1c                        ORACLEGUARDIAN1C;
OracleGuardian1d                        ORACLEGUARDIAN1D;
OracleGuardian1e                        ORACLEGUARDIAN1E;
OracleGuardian1f                        ORACLEGUARDIAN1F;
OraclePortal1                           ORACLEPORTAL1;
OraclePortal2                           ORACLEPORTAL2;
OraclePortal3                           ORACLEPORTAL3;
OraclePortal4                           ORACLEPORTAL4;
OraclePortal5                           ORACLEPORTAL5;
OraclePortal6                           ORACLEPORTAL6;
OraclePortal7                           ORACLEPORTAL7;
OraclePortal8                           ORACLEPORTAL8;
OracleRandomChest1                      ORACLERANDOMCHEST1;
OracleRandomChest10                     ORACLERANDOMCHEST10;
OracleRandomChest11                     ORACLERANDOMCHEST11;
OracleRandomChest2                      ORACLERANDOMCHEST2;
OracleRandomChest3                      ORACLERANDOMCHEST3;
OracleRandomChest4                      ORACLERANDOMCHEST4;
OracleRandomChest5                      ORACLERANDOMCHEST5;
OracleRandomChest6                      ORACLERANDOMCHEST6;
OracleRandomChest7                      ORACLERANDOMCHEST7;
OracleRandomChest8                      ORACLERANDOMCHEST8;
OracleRandomChest9                      ORACLERANDOMCHEST9;
OracleTrappedChest1a                    ORACLETRAPPEDCHEST1A;
OracleTrappedChest1b                    ORACLETRAPPEDCHEST1B;
OracleTrappedChest2a                    ORACLETRAPPEDCHEST2A;
OracleTrappedChest2b                    ORACLETRAPPEDCHEST2B;
OracleTrappedChest3a                    ORACLETRAPPEDCHEST3A;
OracleTrappedChest3b                    ORACLETRAPPEDCHEST3B;
OracleTrappedChest4a                    ORACLETRAPPEDCHEST4A;
OracleTrappedChest4b                    ORACLETRAPPEDCHEST4B;
OracleTrappedChest5a                    ORACLETRAPPEDCHEST5A;
OracleTrappedChest5b                    ORACLETRAPPEDCHEST5B;
OracleTrappedChest6a                    ORACLETRAPPEDCHEST6A;
OracleTrappedChest6b                    ORACLETRAPPEDCHEST6B;
OracleTrappedChest7a                    ORACLETRAPPEDCHEST7A;
OracleTrappedChest7b                    ORACLETRAPPEDCHEST7B;
OracleVulnerableGuardian                ORACLEVULNERABLEGUARDIAN;
RablekSwiftblade                        RABLEKSWIFTBLADE;
Resha                                   RESHA;
RoenGreenleaf                           ROENGREENLEAF;
ShamanWeethgwotha                       SHAMANWEETHGWOTHA;
MOBPurifier                             MOBPURIFIER;
Sweeper                                 SWEEPER;
ThorGlarefire                           THORGLAREFIRE;
Torgas                                  TORGAS;
DaranAnnithae                           DARANANNITHAE;
TrackerOoglaThraaglurh                  TRACKEROOGLATHRAAGLURH;
Vargus                                  VARGUS;
VargusChest                             VARGUSCHEST;
DaranAtrocity                           DARANATROCITY;
WitchDoctorKwarlgloth                   WITCHDOCTORKWARLGLOTH;
ZionThunderheart                        ZIONTHUNDERHEART;
MOBBlackProphet                         MOBBLACKPROPHET;
OracleQuickChest1a                      ORACLEQUICKCHEST1A;
OracleQuickChest1b                      ORACLEQUICKCHEST1B;
OracleQuickChest2b                      ORACLEQUICKCHEST2B;
OracleQuickChest2a                      ORACLEQUICKCHEST2A;
LordStonecrest                          LORDSTONECREST;
MOBCelestialCobra                       MOBCELESTIALCOBRA;
MOBDarkCleric                           MOBDARKCLERIC;
MOBDarkNoble                            MOBDARKNOBLE;
MOBGauzeCorpse                          MOBGAUZECORPSE;
MOBHereticWarrior                       MOBHERETICWARRIOR;
MOBMadBerserkerDemon                    MOBMADBERSERKERDEMON;
MOBQuentinTarantula                     MOBQUENTINTARANTULA;
MOBShriekerRodent                       MOBSHRIEKERRODENT;
Venadar                                 VENADAR;
MOBYoggothWorm                          MOBYOGGOTHWORM;
MonsterSpawner                          MONSTERSPAWNER;
SkraugBigbruddalbashah                  SKRAUGBIGBRUDDALBASHAH;
SkraugBigworviktor                      SKRAUGBIGWORVIKTOR;
SkraugBludfightor                       SKRAUGBLUDFIGHTOR;
SkraugClangbangah                       SKRAUGCLANGBANGAH;
SkraugGrubbringah                       SKRAUGGRUBBRINGAH;
SkraugMadlimbmanglor                    SKRAUGMADLIMBMANGLOR;
SkraugMeanheaddrummah                   SKRAUGMEANHEADDRUMMAH;
SkraugMoonfiredansah                    SKRAUGMOONFIREDANSAH;
SkraugMunchhuntor                       SKRAUGMUNCHHUNTOR;
SkraugProtekterritor                    SKRAUGPROTEKTERRITOR;
SkraugStandanbonkah                     SKRAUGSTANDANBONKAH;
SkraugTotemherbdoktor                   SKRAUGTOTEMHERBDOKTOR;
TheoranIronfaith                        THEORANIRONFAITH;
WorldWildHorse                          WORLDWILDHORSE;
RemortNPC1                              REMORTNPC1;
RemortNPC2                              REMORTNPC2;
RemortNPC3                              REMORTNPC3;
RemortNPC4                              REMORTNPC4;
RemortNPC5                              REMORTNPC5;
MOBHunter1                              MOBHUNTER1;
MOBHunter2                              MOBHUNTER2;
LordoftheShops                          LORDOFTHESHOPS;

// NPC registration.

INIT_NPC_DATA

    REGISTER_NPC( ANNITHAETEARDROP )
    REGISTER_NPC( BELTIGANWHITESWORD )
    REGISTER_NPC( CRYPTWELL )
    REGISTER_NPC( BLOODLUST )
    REGISTER_NPC( CENTAURAVENGER )
    REGISTER_NPC( CENTAURCHAMPION )
    REGISTER_NPC( CENTAURMANAWEAVER )
    REGISTER_NPC( CENTAURSENTINEL )
    REGISTER_NPC( CENTAURTRACKER )
    REGISTER_NPC( CHIEFTAINTHORWAGTH )
    REGISTER_NPC( CHIEFTAINYAHGWUHL )
    REGISTER_NPC( CHIEFWUUTHGORAN )
    REGISTER_NPC( CHRYSEIDAYOLANGDA )
    REGISTER_NPC( CRYPTCHEST1 )
    REGISTER_NPC( CRYPTCHEST2 )
    REGISTER_NPC( CRYPTCHEST3 )
    REGISTER_NPC( CRYPTCHEST4 )
    REGISTER_NPC( CRYPTCHEST5 )
    REGISTER_NPC( CRYPTCOFFIN1 )
    REGISTER_NPC( DANTALIRSONGWEAVER )
    REGISTER_NPC( DARANLIGHTFOOT )
    REGISTER_NPC( DELNARSTEELBLADE )
    REGISTER_NPC( DIONYSUSSILVERSTREAM )
    REGISTER_NPC( ELDANTOR )
    REGISTER_NPC( ELDRIG )
    REGISTER_NPC( ETHEREALPORTAL )
    REGISTER_NPC( GABRIELARCHONIS )
    REGISTER_NPC( GAENENELTHORN )
    REGISTER_NPC( GLADDIUSWINDCHASER )
    REGISTER_NPC( GLAENSHENMILANDIRA )
    REGISTER_NPC( GRANTHORNKEEP )
    REGISTER_NPC( GULFRIDSTEELHAMMER )
    REGISTER_NPC( HEADHUNTERWAJPOOTHIN )
    REGISTER_NPC( HEREWALDIRONBENDER )
    REGISTER_NPC( HUNTERGRUTTWORGWLOTH )
    REGISTER_NPC( HUNTERTRUGGWORGWLOTH )
    REGISTER_NPC( JULIAN )
    REGISTER_NPC( KAHPLETHGUARD1 )
    REGISTER_NPC( KAHPLETHGUARD2 )
    REGISTER_NPC( KAVARIAN )
    REGISTER_NPC( KHANWULGWORTH )
    REGISTER_NPC( KHERALSILVERHAWK )
    REGISTER_NPC( KHIMTESAR )
    REGISTER_NPC( KHIMTESARWELL )
    REGISTER_NPC( KINGAEDENASGRAVESOUL )
    REGISTER_NPC( KYATHOSSHATTERSKULL )
    REGISTER_NPC( MALACHAIFATEBRINGER )
    REGISTER_NPC( MAYORFAIRWEATHER )
    REGISTER_NPC( MELTARWINTERSTORM )
    REGISTER_NPC( MIRYMWENFEATHERFOOT )
    REGISTER_NPC( MITHANNASNOWRAVEN )
    REGISTER_NPC( MOBGEHENNAREAVER )
    REGISTER_NPC( MOBGIANTBLACKWIDOW )
    REGISTER_NPC( MOBNEOFLARE )
    REGISTER_NPC( MOBNIGHTRETRIEVER )
    REGISTER_NPC( MOBREDEYEDCENTAUR )
    REGISTER_NPC( MOBSHADOWSTALKER )
    REGISTER_NPC( BASTIENMILANDRA )
    REGISTER_NPC( MOONTUGGUARD1 )
    REGISTER_NPC( MOONTUGGUARD2 )
    REGISTER_NPC( MORDENTHAL )
    REGISTER_NPC( NISSUSHALOSEEKER )
    REGISTER_NPC( NORIMARSTEELWIND )
    REGISTER_NPC( OMARHALD )
    REGISTER_NPC( ORACLE )
    REGISTER_NPC( ORACLECHEST14 )
    REGISTER_NPC( ORACLECHEST15 )
    REGISTER_NPC( ORACLEESCAPEDOOR )
    REGISTER_NPC( ORACLEESCAPEFLIPPEDDOOR )
    REGISTER_NPC( ORACLEGUARDIAN1A )
    REGISTER_NPC( ORACLEGUARDIAN1B )
    REGISTER_NPC( ORACLEGUARDIAN1C )
    REGISTER_NPC( ORACLEGUARDIAN1D )
    REGISTER_NPC( ORACLEGUARDIAN1E )
    REGISTER_NPC( ORACLEGUARDIAN1F )
    REGISTER_NPC( ORACLEPORTAL1 )
    REGISTER_NPC( ORACLEPORTAL2 )
    REGISTER_NPC( ORACLEPORTAL3 )
    REGISTER_NPC( ORACLEPORTAL4 )
    REGISTER_NPC( ORACLEPORTAL5 )
    REGISTER_NPC( ORACLEPORTAL6 )
    REGISTER_NPC( ORACLEPORTAL7 )
    REGISTER_NPC( ORACLEPORTAL8 )
    REGISTER_NPC( ORACLERANDOMCHEST1 )
    REGISTER_NPC( ORACLERANDOMCHEST10 )
    REGISTER_NPC( ORACLERANDOMCHEST11 )
    REGISTER_NPC( ORACLERANDOMCHEST2 )
    REGISTER_NPC( ORACLERANDOMCHEST3 )
    REGISTER_NPC( ORACLERANDOMCHEST4 )
    REGISTER_NPC( ORACLERANDOMCHEST5 )
    REGISTER_NPC( ORACLERANDOMCHEST6 )
    REGISTER_NPC( ORACLERANDOMCHEST7 )
    REGISTER_NPC( ORACLERANDOMCHEST8 )
    REGISTER_NPC( ORACLERANDOMCHEST9 )
    REGISTER_NPC( ORACLETRAPPEDCHEST1A )
    REGISTER_NPC( ORACLETRAPPEDCHEST1B )
    REGISTER_NPC( ORACLETRAPPEDCHEST2A )
    REGISTER_NPC( ORACLETRAPPEDCHEST2B )
    REGISTER_NPC( ORACLETRAPPEDCHEST3A )
    REGISTER_NPC( ORACLETRAPPEDCHEST3B )
    REGISTER_NPC( ORACLETRAPPEDCHEST4A )
    REGISTER_NPC( ORACLETRAPPEDCHEST4B )
    REGISTER_NPC( ORACLETRAPPEDCHEST5A )
    REGISTER_NPC( ORACLETRAPPEDCHEST5B )
    REGISTER_NPC( ORACLETRAPPEDCHEST6A )
    REGISTER_NPC( ORACLETRAPPEDCHEST6B )
    REGISTER_NPC( ORACLETRAPPEDCHEST7A )
    REGISTER_NPC( ORACLETRAPPEDCHEST7B )
    REGISTER_NPC( ORACLEVULNERABLEGUARDIAN )
    REGISTER_NPC( RABLEKSWIFTBLADE )
    REGISTER_NPC( RESHA )
    REGISTER_NPC( ROENGREENLEAF )
    REGISTER_NPC( SHAMANWEETHGWOTHA )
    REGISTER_NPC( MOBPURIFIER )
    REGISTER_NPC( SWEEPER )
    REGISTER_NPC( THORGLAREFIRE )
    REGISTER_NPC( TORGAS )
    REGISTER_NPC( DARANANNITHAE )
    REGISTER_NPC( TRACKEROOGLATHRAAGLURH )
    REGISTER_NPC( VARGUS )
    REGISTER_NPC( VARGUSCHEST )
    REGISTER_NPC( DARANATROCITY )
    REGISTER_NPC( WITCHDOCTORKWARLGLOTH )
    REGISTER_NPC( ZIONTHUNDERHEART )
    REGISTER_NPC( MOBBLACKPROPHET )
    REGISTER_NPC( ORACLEQUICKCHEST1A )
    REGISTER_NPC( ORACLEQUICKCHEST1B )
    REGISTER_NPC( ORACLEQUICKCHEST2B )
    REGISTER_NPC( ORACLEQUICKCHEST2A )
    REGISTER_NPC( LORDSTONECREST )
    REGISTER_NPC( MOBCELESTIALCOBRA )
    REGISTER_NPC( MOBDARKCLERIC )
    REGISTER_NPC( MOBDARKNOBLE )
    REGISTER_NPC( MOBGAUZECORPSE )
    REGISTER_NPC( MOBHERETICWARRIOR )
    REGISTER_NPC( MOBMADBERSERKERDEMON )
    REGISTER_NPC( MOBQUENTINTARANTULA )
    REGISTER_NPC( MOBSHRIEKERRODENT )
    REGISTER_NPC( VENADAR )
    REGISTER_NPC( MOBYOGGOTHWORM )
    REGISTER_NPC( MONSTERSPAWNER )
    REGISTER_NPC( SKRAUGBIGBRUDDALBASHAH )
    REGISTER_NPC( SKRAUGBIGWORVIKTOR )
    REGISTER_NPC( SKRAUGBLUDFIGHTOR )
    REGISTER_NPC( SKRAUGCLANGBANGAH )
    REGISTER_NPC( SKRAUGGRUBBRINGAH )
    REGISTER_NPC( SKRAUGMADLIMBMANGLOR )
    REGISTER_NPC( SKRAUGMEANHEADDRUMMAH )
    REGISTER_NPC( SKRAUGMOONFIREDANSAH )
    REGISTER_NPC( SKRAUGMUNCHHUNTOR )
    REGISTER_NPC( SKRAUGPROTEKTERRITOR )
    REGISTER_NPC( SKRAUGSTANDANBONKAH )
    REGISTER_NPC( SKRAUGTOTEMHERBDOKTOR )
    REGISTER_NPC( THEORANIRONFAITH )
    REGISTER_NPC( WORLDWILDHORSE )
    REGISTER_NPC( REMORTNPC1 )
    REGISTER_NPC( REMORTNPC2 )
    REGISTER_NPC( REMORTNPC3 )
    REGISTER_NPC( REMORTNPC4 )
    REGISTER_NPC( REMORTNPC5 )
    REGISTER_NPC( MOBHUNTER1 )
    REGISTER_NPC( MOBHUNTER2 )
    REGISTER_NPC( LORDOFTHESHOPS )

END_INIT_NPC_DATA

// NPC creation.

INIT_NPC_CREATION

    CREATE_NPC( ANNITHAETEARDROP )
    CREATE_NPC( BELTIGANWHITESWORD )
    CREATE_NPC( CRYPTWELL )
    CREATE_NPC( BLOODLUST )
    CREATE_NPC( CENTAURAVENGER )
    CREATE_NPC( CENTAURCHAMPION )
    CREATE_NPC( CENTAURMANAWEAVER )
    CREATE_NPC( CENTAURSENTINEL )
    CREATE_NPC( CENTAURTRACKER )
    CREATE_NPC( CHIEFTAINTHORWAGTH )
    CREATE_NPC( CHIEFTAINYAHGWUHL )
    CREATE_NPC( CHIEFWUUTHGORAN )
    CREATE_NPC( CHRYSEIDAYOLANGDA )
    CREATE_NPC( CRYPTCHEST1 )
    CREATE_NPC( CRYPTCHEST2 )
    CREATE_NPC( CRYPTCHEST3 )
    CREATE_NPC( CRYPTCHEST4 )
    CREATE_NPC( CRYPTCHEST5 )
    CREATE_NPC( CRYPTCOFFIN1 )
    CREATE_NPC( DANTALIRSONGWEAVER )
    CREATE_NPC( DARANLIGHTFOOT )
    CREATE_NPC( DELNARSTEELBLADE )
    CREATE_NPC( DIONYSUSSILVERSTREAM )
    CREATE_NPC( ELDANTOR )
    CREATE_NPC( ELDRIG )
    CREATE_NPC( ETHEREALPORTAL )
    CREATE_NPC( GABRIELARCHONIS )
    CREATE_NPC( GAENENELTHORN )
    CREATE_NPC( GLADDIUSWINDCHASER )
    CREATE_NPC( GLAENSHENMILANDIRA )
    CREATE_NPC( GRANTHORNKEEP )
    CREATE_NPC( GULFRIDSTEELHAMMER )
    CREATE_NPC( HEADHUNTERWAJPOOTHIN )
    CREATE_NPC( HEREWALDIRONBENDER )
    CREATE_NPC( HUNTERGRUTTWORGWLOTH )
    CREATE_NPC( HUNTERTRUGGWORGWLOTH )
    CREATE_NPC( JULIAN )
    CREATE_NPC( KAHPLETHGUARD1 )
    CREATE_NPC( KAHPLETHGUARD2 )
    CREATE_NPC( KAVARIAN )
    CREATE_NPC( KHANWULGWORTH )
    CREATE_NPC( KHERALSILVERHAWK )
    CREATE_NPC( KHIMTESAR )
    CREATE_NPC( KHIMTESARWELL )
    CREATE_NPC( KINGAEDENASGRAVESOUL )
    CREATE_NPC( KYATHOSSHATTERSKULL )
    CREATE_NPC( MALACHAIFATEBRINGER )
    CREATE_NPC( MAYORFAIRWEATHER )
    CREATE_NPC( MELTARWINTERSTORM )
    CREATE_NPC( MIRYMWENFEATHERFOOT )
    CREATE_NPC( MITHANNASNOWRAVEN )
    CREATE_NPC( MOBGEHENNAREAVER )
    CREATE_NPC( MOBGIANTBLACKWIDOW )
    CREATE_NPC( MOBNEOFLARE )
    CREATE_NPC( MOBNIGHTRETRIEVER )
    CREATE_NPC( MOBREDEYEDCENTAUR )
    CREATE_NPC( MOBSHADOWSTALKER )
    CREATE_NPC( BASTIENMILANDRA )
    CREATE_NPC( MOONTUGGUARD1 )
    CREATE_NPC( MOONTUGGUARD2 )
    CREATE_NPC( MORDENTHAL )
    CREATE_NPC( NISSUSHALOSEEKER )
    CREATE_NPC( NORIMARSTEELWIND )
    CREATE_NPC( OMARHALD )
    CREATE_NPC( ORACLE )
    CREATE_NPC( ORACLECHEST14 )
    CREATE_NPC( ORACLECHEST15 )
    CREATE_NPC( ORACLEESCAPEDOOR )
    CREATE_NPC( ORACLEESCAPEFLIPPEDDOOR )
    CREATE_NPC( ORACLEGUARDIAN1A )
    CREATE_NPC( ORACLEGUARDIAN1B )
    CREATE_NPC( ORACLEGUARDIAN1C )
    CREATE_NPC( ORACLEGUARDIAN1D )
    CREATE_NPC( ORACLEGUARDIAN1E )
    CREATE_NPC( ORACLEGUARDIAN1F )
    CREATE_NPC( ORACLEPORTAL1 )
    CREATE_NPC( ORACLEPORTAL2 )
    CREATE_NPC( ORACLEPORTAL3 )
    CREATE_NPC( ORACLEPORTAL4 )
    CREATE_NPC( ORACLEPORTAL5 )
    CREATE_NPC( ORACLEPORTAL6 )
    CREATE_NPC( ORACLEPORTAL7 )
    CREATE_NPC( ORACLEPORTAL8 )
    CREATE_NPC( ORACLERANDOMCHEST1 )
    CREATE_NPC( ORACLERANDOMCHEST10 )
    CREATE_NPC( ORACLERANDOMCHEST11 )
    CREATE_NPC( ORACLERANDOMCHEST2 )
    CREATE_NPC( ORACLERANDOMCHEST3 )
    CREATE_NPC( ORACLERANDOMCHEST4 )
    CREATE_NPC( ORACLERANDOMCHEST5 )
    CREATE_NPC( ORACLERANDOMCHEST6 )
    CREATE_NPC( ORACLERANDOMCHEST7 )
    CREATE_NPC( ORACLERANDOMCHEST8 )
    CREATE_NPC( ORACLERANDOMCHEST9 )
    CREATE_NPC( ORACLETRAPPEDCHEST1A )
    CREATE_NPC( ORACLETRAPPEDCHEST1B )
    CREATE_NPC( ORACLETRAPPEDCHEST2A )
    CREATE_NPC( ORACLETRAPPEDCHEST2B )
    CREATE_NPC( ORACLETRAPPEDCHEST3A )
    CREATE_NPC( ORACLETRAPPEDCHEST3B )
    CREATE_NPC( ORACLETRAPPEDCHEST4A )
    CREATE_NPC( ORACLETRAPPEDCHEST4B )
    CREATE_NPC( ORACLETRAPPEDCHEST5A )
    CREATE_NPC( ORACLETRAPPEDCHEST5B )
    CREATE_NPC( ORACLETRAPPEDCHEST6A )
    CREATE_NPC( ORACLETRAPPEDCHEST6B )
    CREATE_NPC( ORACLETRAPPEDCHEST7A )
    CREATE_NPC( ORACLETRAPPEDCHEST7B )
    CREATE_NPC( ORACLEVULNERABLEGUARDIAN )
    CREATE_NPC( RABLEKSWIFTBLADE )
    CREATE_NPC( RESHA )
    CREATE_NPC( ROENGREENLEAF )
    CREATE_NPC( SHAMANWEETHGWOTHA )
    CREATE_NPC( MOBPURIFIER )
    CREATE_NPC( SWEEPER )
    CREATE_NPC( THORGLAREFIRE )
    CREATE_NPC( TORGAS )
    CREATE_NPC( DARANANNITHAE )
    CREATE_NPC( TRACKEROOGLATHRAAGLURH )
    CREATE_NPC( VARGUS )
    CREATE_NPC( VARGUSCHEST )
    CREATE_NPC( DARANATROCITY )
    CREATE_NPC( WITCHDOCTORKWARLGLOTH )
    CREATE_NPC( ZIONTHUNDERHEART )
    CREATE_NPC( MOBBLACKPROPHET )
    CREATE_NPC( ORACLEQUICKCHEST1A )
    CREATE_NPC( ORACLEQUICKCHEST1B )
    CREATE_NPC( ORACLEQUICKCHEST2B )
    CREATE_NPC( ORACLEQUICKCHEST2A )
    CREATE_NPC( LORDSTONECREST )
    CREATE_NPC( MOBCELESTIALCOBRA )
    CREATE_NPC( MOBDARKCLERIC )
    CREATE_NPC( MOBDARKNOBLE )
    CREATE_NPC( MOBGAUZECORPSE )
    CREATE_NPC( MOBHERETICWARRIOR )
    CREATE_NPC( MOBMADBERSERKERDEMON )
    CREATE_NPC( MOBQUENTINTARANTULA )
    CREATE_NPC( MOBSHRIEKERRODENT )
    CREATE_NPC( VENADAR )
    CREATE_NPC( MOBYOGGOTHWORM )
    CREATE_NPC( MONSTERSPAWNER )
    CREATE_NPC( SKRAUGBIGBRUDDALBASHAH )
    CREATE_NPC( SKRAUGBIGWORVIKTOR )
    CREATE_NPC( SKRAUGBLUDFIGHTOR )
    CREATE_NPC( SKRAUGCLANGBANGAH )
    CREATE_NPC( SKRAUGGRUBBRINGAH )
    CREATE_NPC( SKRAUGMADLIMBMANGLOR )
    CREATE_NPC( SKRAUGMEANHEADDRUMMAH )
    CREATE_NPC( SKRAUGMOONFIREDANSAH )
    CREATE_NPC( SKRAUGMUNCHHUNTOR )
    CREATE_NPC( SKRAUGPROTEKTERRITOR )
    CREATE_NPC( SKRAUGSTANDANBONKAH )
    CREATE_NPC( SKRAUGTOTEMHERBDOKTOR )
    CREATE_NPC( THEORANIRONFAITH )
    CREATE_NPC( WORLDWILDHORSE )
    CREATE_NPC( REMORTNPC1 )
    CREATE_NPC( REMORTNPC2 )
    CREATE_NPC( REMORTNPC3 )
    CREATE_NPC( REMORTNPC4 )
    CREATE_NPC( REMORTNPC5 )
    CREATE_NPC( MOBHUNTER1 )
    CREATE_NPC( MOBHUNTER2 )
    CREATE_NPC( LORDOFTHESHOPS )

END_INIT_NPC_CREATION
