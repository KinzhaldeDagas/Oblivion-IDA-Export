// Player active ActorAnimData selector. Prefer defaultAnimData override +0x5DC when nonnull; otherwise, when first-person is active (+0x588 == 0), prefer firstPersonAnimData +0x5CC; fall back to TESObjectREFR_GetAnimData. This is distinct from perspective-specific ActorSkinInfo.
ActorAnimData *__thiscall PlayerCharacter_GetActiveAnimData(PlayerCharacter *this)
{
  ActorAnimData *result; // eax

  result = this->defaultAnimData; /*0x65d720*/
  if ( !result ) /*0x65d728*/
  {
    if ( this->isThirdPerson ) /*0x65d72a*/
      return TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x65d72a*/
    result = this->firstPersonAnimData; /*0x65d732*/
    if ( !result ) /*0x65d73a*/
      return TESObjectREFR_GetAnimData((TESObjectREFR *)this); /*0x65d73c*/
  }
  return result; /*0x65d741*/
}
