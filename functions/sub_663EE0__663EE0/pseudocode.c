// Verified paired writer for PlayerCharacter_GetLastSpaceForDoor: writes spaceIndex into the same per-player map at +0x788 using TESObjectDOOR.refID (+0x0C) as key. Called after random destination-space selection. Map value's full stored width is not inferred here; getter returns UInt8.
void __thiscall PlayerCharacter_SetLastSpaceForDoor(PlayerCharacter *this, TESObjectDOOR *door, UInt32 spaceIndex)
{
  if ( door ) /*0x663ee6*/
    NiTMap_SetAt(&this->unk760.lastSpaceForDoorByRefID.vtbl, door->super.super.super.refID, spaceIndex); /*0x663ef5*/
}
