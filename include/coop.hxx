#pragma once

#include <JSystem/JGeometry/JGMVec.hxx>

#include <SMS/Camera/PolarSubCamera.hxx>
#include <SMS/Player/Mario.hxx>

namespace SMSCoop {
	void startDemoCameraCoOp(const char* camera_name, const TVec3f *unk1, s32 unk2, f32 unk3, bool unk4);
    int getPlayerCount();
    int getLoadedPlayerCount();
	u8 getPlayerId(TMario* mario);
    int getClosestMarioId(TVec3f* position);
    TMario *getMario(int id);
    CPolarSubCamera *getCameraById(int id);
    TGCConsole2 *getConsoleForPlayer(int id);

    //void setCamera(int i);
    //CPolarSubCamera *getCameraById(int i);
    //int getActivePerspective();
    //void setSkinForPlayer(int id, char const *path);
    //TMario *getMarioById(int id);
    //int getClosestMarioId(TVec3f *position);
    //u8 getPlayerId(TMario *mario);
    //int getPlayerCount();
    //void setActiveMario(int id);

}  // namespace SMSCoop