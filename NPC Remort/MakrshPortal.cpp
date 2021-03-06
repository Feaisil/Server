#pragma hdrstop
#include "MakrshPortal.h"

MakrshPortal::MakrshPortal()
{}

MakrshPortal::~MakrshPortal()
{}

extern NPCstructure::NPC PortalNPC;

void MakrshPortal::Create( ){
	npc = PortalNPC;
	SET_NPC_NAME(  "[7396]A shimmering portal" );
	npc.InitialPos.X = 1290;  
	npc.InitialPos.Y = 1009;
	npc.InitialPos.world = 0;
} 
void MakrshPortal::OnAttacked( UNIT_FUNC_PROTOTYPE ){
}

void MakrshPortal::OnInitialise( UNIT_FUNC_PROTOTYPE ){
	NPCstructure::OnInitialise( UNIT_FUNC_PARAM );
	WorldPos wlPos = { 0,0,0 };
	self->SetDestination( wlPos );
	self->Do( nothing );
	self->SetCanMove( FALSE );
}

void MakrshPortal::OnTalk( UNIT_FUNC_PROTOTYPE )
{
InitTalk

Begin
""
IF (IsInRange(4))
	TELEPORT( 2785, 210, 1)
ELSE
	PRIVATE_SYSTEM_MESSAGE(INTL( 7349, "You must step closer to the portal to activate it."))
ENDIF
BREAK

Default
""
BREAK

EndTalk

}

