/* (c) Magnus Auvinen. See licence.txt in the root of the distribution for more information. */
/* If you are missing that file, acquire a complete release at teeworlds.com.                */
#include "mod.h"

CGameControllerMOD::CGameControllerMOD(class CGameContext* pGameServer) :
	IGameController{pGameServer}
{m_pGameType = "[S]KO-Race";}

void CGameControllerMOD::Tick()
{
	// this is the main part of the gamemode, this function is run every tick

	IGameController::Tick();
}
