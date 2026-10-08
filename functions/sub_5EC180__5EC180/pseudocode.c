// Returns true for swimming/falling style animation groups 0x28..0x2A, or if current character state id == 2 InAir. Player jump path uses this to suppress normal jump handling.
bool __thiscall MobileObject_IsJumpSuppressedByFallAnimOrInAir(MobileObject *this)
{
  ActorAnimData *v2; // eax
  ActorAnimData *v3; // esi
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  bool result; // al
  bhkCharacterProxy *CharProxy; // eax

  v2 = this->vtbl->super.GetAnimData(this); /*0x5ec18c*/
  v3 = v2; /*0x5ec18e*/
  result = 1; /*0x5ec1bb*/
  if ( !v2 /*0x5ec1b8*/
    || !ActorAnimData_GetNormalizedSequenceSlot(v2, 0)
    || (NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v3, 0),
        (unsigned int)(TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)NormalizedSequenceSlot + 0x1A)) - 0x28) > 2) )
  {
    if ( !MobileObject_GetCharProxy(this) ) /*0x5ec1c1*/
      return 0; /*0x5ec1c1*/
    CharProxy = MobileObject_GetCharProxy(this); /*0x5ec1cc*/
    if ( hkCharacterContext_GetStateId((_DWORD *)CharProxy + 0x78) != 2 ) /*0x5ec1df*/
      return 0; /*0x5ec1b8*/
  }
  return result; /*0x5ec1ba*/
}
