// Return the player's currently active ActorSkinInfo: third-person +0x104 when +0x588 is set; otherwise first-person +0x5C8 when nonnull, falling back to +0x104. ActorSkinInfo owns equipped model pointers; it is not ActorAnimData.
ActorSkinInfo *__thiscall PlayerCharacter_GetActiveSkinInfo(PlayerCharacter *this)
{
  ActorSkinInfo *result; // eax

  if ( this->isThirdPerson ) /*0x6600b0*/
    return this->super.skinInfo; /*0x6600b0*/
  result = this->firstPersonSkinInfo; /*0x6600b9*/
  if ( !result ) /*0x6600c1*/
    return this->super.skinInfo; /*0x6600c3*/
  return result; /*0x6600c9*/
}
