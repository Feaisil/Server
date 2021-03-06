#pragma hdrstop
#include <NPCStructure.h>
#include <DLLCreatures.h>

NPCstructure::NPC IslandPortalNPC;
NPCstructure::NPC GMassistantNPC;
NPCstructure::NPC ArenaClerkNPC;
NPCstructure::NPC HealingPlantNPC;
NPCstructure::NPC HealingWellNPC;
NPCstructure::NPC _NPCRat;
NPCstructure::NPC _NPCTombRaider;
NPCstructure::NPC _NPCForestGuardian;
NPCstructure::NPC NPCSabrina;

// Signs 

void CreateNPC( void );

INIT_MONSTER_STAT_SETUP

SET_MONSTER( NPCSabrina )
MOB_NPC_APPEARANCE    ( HUMAN_PAYSANNE )
MOB_AGRESSIVNESS      ( -100 )     
MOB_CLAN              ( LIGHTHAVEN )    
MOB_HP                ( 1000000 )       
MOB_DODGE_SKILL       ( 30 )         
MOB_AC                ( 0 )         
MOB_LEVEL             ( 100 )        
MOB_XP_PER_HIT        ( 0 )          
MOB_XP_DEATH          ( 0 )          
MOB_MIN_GOLD          ( 0 )          
MOB_MAX_GOLD          ( 0 )          
MOB_STR               ( 500 )         
MOB_DEX               ( 500 )          
MOB_END               ( 500 )         
MOB_INT               ( 500 )        
MOB_WIS               ( 500 )			
MOB_WIL               ( 500 )        
MOB_LCK               ( 500 )       

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 100 )
MOB_WATER_RESIST      ( 100 )
MOB_AIR_RESIST        ( 100 )
MOB_EARTH_RESIST      ( 100 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 100 )

MOB_CAN_ATTACK        ( FALSE )

SET_MONSTER( _NPCForestGuardian )
MOB_APPEARANCE        ( TREE_ENT )
MOB_AGRESSIVNESS      ( -100 )     
MOB_CLAN              ( ANIMALS )    
MOB_HP                ( 3259 )       
MOB_DODGE_SKILL       ( 410 )         
MOB_AC                ( 50 )         
MOB_LEVEL             ( 100 )        
MOB_XP_PER_HIT        ( 0 )          
MOB_XP_DEATH          ( 0 )          
MOB_MIN_GOLD          ( 0 )          
MOB_MAX_GOLD          ( 0 )          
MOB_STR               ( 85 )         
MOB_DEX               ( 74 )          
MOB_END               ( 74 )         
MOB_INT               ( 285 )        
MOB_WIS               ( 74 )			
MOB_WIL               ( 74 )        
MOB_LCK               ( 35 )       

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 62 )
MOB_WATER_RESIST      ( 62 )
MOB_AIR_RESIST        ( 62 )
MOB_EARTH_RESIST      ( 62 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 62 )

MOB_CREATE_SPELL_ATTACK( 6, 25 )
MOB_ATTACK_SPELL( 10091 )
MOB_ATTACK_PERCENTAGE( 50 )
MOB_CREATE_SPELL_ATTACK( 6, 25  )
MOB_ATTACK_SPELL( 10120 )
MOB_ATTACK_PERCENTAGE( 50 )
MOB_CREATE_SPELL_ATTACK( 1, 5  )
MOB_ATTACK_SPELL( 10120 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 1210 )
MOB_ATTACK_DMG_ROLL   (	"1d172+134" )
MOB_ATTACK_PERCENTAGE ( 100 )
// MINDAM: 135 MAXDAM: 306

MOB_ITEM( __OBJ_LIGHT_HEALING_POTION, 15 )

SET_MONSTER( _NPCTombRaider )
MOB_SPEED             ( 25, dice( 1, 1500, 750), 20, dice( 1, 1000, 400) )
MOB_AGRESSIVNESS      ( 100 ) 
MOB_APPEARANCE        ( BRIGAND ) 
MOB_CLAN              ( DUNGEON_OF_BALORK ) 
MOB_HP                ( 3000 )
MOB_DODGE_SKILL       ( 47 )
MOB_AC                ( 20 )
MOB_LEVEL             ( 8 )
MOB_XP_PER_HIT        ( 2.06 )   
MOB_XP_DEATH          ( 272.2 )
MOB_MIN_GOLD          ( 28 )
MOB_MAX_GOLD          ( 88 )
MOB_STR               ( 22 )
MOB_DEX               ( 22 )
MOB_END               ( 22 )
MOB_INT               ( 22 )
MOB_WIS               ( 22 )
MOB_WIL               ( 22 )
MOB_LCK               ( 19 )
MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 90 )
MOB_WATER_RESIST      ( 90 )
MOB_AIR_RESIST        ( 90 )
MOB_EARTH_RESIST      ( 90 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 60 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 106 )
MOB_ATTACK_DMG_ROLL   (	"1d11+100" )
MOB_ATTACK_PERCENTAGE ( 100 )
// MINdam: 7  MAXdam: 17

MOB_ITEM( __OBJ_TORCH, 10 )
MOB_ITEM( __OBJ_LEATHER_PANTS, 3 )
MOB_ITEM( __OBJ_DAGGER_OF_PIERCING, 0.05 ) 
MOB_ITEM( __OBJ_IRON_KEY, 0.5 )
MOB_ITEM( __OBJ_HEALING_POTION, 10)

SET_MONSTER( _NPCRat )
MOB_SPEED             ( 25, dice( 1, 1500, 750), 20, dice( 1, 1000, 400) )
MOB_APPEARANCE        ( RAT )
MOB_AGRESSIVNESS      ( 70 )
MOB_CLAN              ( INSECT_AND_ANIMALS )
MOB_HP                ( 27 )
MOB_DODGE_SKILL       ( 14 )         
MOB_AC                ( 0 )         
MOB_LEVEL             ( 1 )
MOB_XP_PER_HIT        ( 1.58 )
MOB_XP_DEATH          ( 21.39 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 16 )
MOB_DEX               ( 15 )
MOB_END               ( 15 )
MOB_INT               ( 16 )
MOB_WIS               ( 15 )
MOB_WIL               ( 15 )
MOB_LCK               ( 15 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 93 )
MOB_WATER_RESIST      ( 93 )
MOB_AIR_RESIST        ( 124 )
MOB_EARTH_RESIST      ( 62 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 93 )

MOB_CREATE_PHYSICAL_ATTACK
MOB_ATTACK_SKILL      ( 22 )
MOB_ATTACK_DMG_ROLL   (	"1d4+1" )
MOB_ATTACK_PERCENTAGE ( 100 )
// MINdam: 2  MAXdam: 5 

SET_MONSTER( IslandPortalNPC ) // BOSS
MOB_AGRESSIVNESS      ( -100 ) 
MOB_OBJ_APPEARANCE    ( PORTAL )  // Appearance 297 __OBJGROUP_PORTAL 
MOB_CLAN              ( PEACE ) 
MOB_HP                ( 1000000 )
MOB_DODGE_SKILL       ( 65535 )
MOB_AC                ( 1000000 )
MOB_LEVEL             ( 100 )
MOB_XP_PER_HIT        ( 0 )
MOB_XP_DEATH          ( 0 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 500 )
MOB_DEX               ( 500 )
MOB_END               ( 500 )
MOB_INT               ( 500 )
MOB_WIS               ( 500 )
MOB_WIL               ( 500 )
MOB_LCK               ( 500 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )
MOB_CAN_ATTACK        ( FALSE )

SET_MONSTER( GMassistantNPC )
MOB_NPC_APPEARANCE    ( PLAYER_PRIEST )
MOB_AGRESSIVNESS      ( -100 )
MOB_CLAN              ( PEACE )
MOB_AGRESSIVNESS      ( 100 ) 
MOB_HP                ( 1000000 )
MOB_DODGE_SKILL       ( 65535 )
MOB_AC                ( 1000000 )
MOB_LEVEL             ( 100 )
MOB_XP_PER_HIT        ( 0 )
MOB_XP_DEATH          ( 0 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 500 )
MOB_DEX               ( 500 )
MOB_END               ( 500 )
MOB_INT               ( 500 )
MOB_WIS               ( 500 )
MOB_WIL               ( 500 )
MOB_LCK               ( 500 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )
MOB_CAN_ATTACK        ( FALSE )

//MOB_CREATE_SPELL_ATTACK( 0, 25 )
//MOB_ATTACK_SPELL( 10059 )        // Destroy itself
//MOB_ATTACK_PERCENTAGE( 100 )

SET_MONSTER( ArenaClerkNPC )
MOB_NPC_APPEARANCE    ( PLAYER_PRIEST )
MOB_AGRESSIVNESS      ( -100 )
MOB_CLAN              ( PEACE )
MOB_AGRESSIVNESS      ( 100 ) 
MOB_HP                ( 1000000 )
MOB_DODGE_SKILL       ( 65535 )
MOB_AC                ( 1000000 )
MOB_LEVEL             ( 100 )
MOB_XP_PER_HIT        ( 0 )
MOB_XP_DEATH          ( 0 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 500 )
MOB_DEX               ( 500 )
MOB_END               ( 500 )
MOB_INT               ( 500 )
MOB_WIS               ( 500 )
MOB_WIL               ( 500 )
MOB_LCK               ( 500 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )
MOB_CAN_ATTACK        ( FALSE )

SET_MONSTER( HealingPlantNPC )
MOB_OBJ_APPEARANCE    ( FOUGERE ) 
MOB_CLAN              ( PEACE )
MOB_AGRESSIVNESS      ( 100 ) 
MOB_HP                ( 1000000 )
MOB_DODGE_SKILL       ( 65535 )
MOB_AC                ( 1000000 )
MOB_LEVEL             ( 100 )
MOB_XP_PER_HIT        ( 0 )
MOB_XP_DEATH          ( 0 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 500 )
MOB_DEX               ( 500 )
MOB_END               ( 500 )
MOB_INT               ( 500 )
MOB_WIS               ( 500 )
MOB_WIL               ( 500 )
MOB_LCK               ( 500 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )
MOB_CAN_ATTACK        ( FALSE )

MOB_CREATE_SPELL_ATTACK( 0, 10 )
MOB_ATTACK_SPELL(  10227 )
MOB_ATTACK_PERCENTAGE( 100 )

SET_MONSTER( HealingWellNPC )
MOB_SPEED             ( 0, dice( 1, 1000, 500 ), 25, dice( 1, 500, 500 ) )
MOB_AGRESSIVNESS      ( -100 ) 
MOB_OBJ_APPEARANCE    ( WELL_TALK )
MOB_CLAN              ( PEACE )
MOB_HP                ( 1000000 )
MOB_DODGE_SKILL       ( 65535 )
MOB_AC                ( 1000000 )
MOB_LEVEL             ( 200 )
MOB_XP_PER_HIT        ( 0 )
MOB_XP_DEATH          ( 0 )
MOB_MIN_GOLD          ( 0 )
MOB_MAX_GOLD          ( 0 )
MOB_STR               ( 500 )
MOB_DEX               ( 500 )
MOB_END               ( 500 )
MOB_INT               ( 500 )
MOB_WIS               ( 500 )
MOB_WIL               ( 500 )
MOB_LCK               ( 500 )

MOB_FIRE_POWER        ( 100 )
MOB_WATER_POWER       ( 100 )
MOB_AIR_POWER         ( 100 )
MOB_EARTH_POWER       ( 100 )
MOB_LIGHT_POWER       ( 100 )
MOB_DARK_POWER        ( 100 )

MOB_FIRE_RESIST       ( 5000 )
MOB_WATER_RESIST      ( 5000 )
MOB_AIR_RESIST        ( 5000 )
MOB_EARTH_RESIST      ( 5000 )
MOB_LIGHT_RESIST      ( 5000 )
MOB_DARK_RESIST       ( 5000 )
MOB_CAN_ATTACK        ( FALSE )

	CreateNPC();
CLOSE_MONSTER_STAT_SETUP
		
void MonsterStatDestroy(){
}




