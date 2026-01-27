#include "globals.hxx"

void *SME::TGlobals::sPRMFile = nullptr;

SME::CharacterID SME::TGlobals::sCharacterIDList[4] = {
    SME::CharacterID::MARIO,
    SME::CharacterID::SHADOW_MARIO, SME::CharacterID::LUIGI, SME::CharacterID::PIANTISSIMO};

bool SME::TGlobals::sIsFreePlay;