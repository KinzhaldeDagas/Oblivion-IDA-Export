NiObject *__thiscall MagicModelHitEffect_constr_args(NiObject *this, TESObjectREFR *a2, int a3)
{
  int v4; // edi
  int v5; // edi
  int FXEffect; // eax

  MagicHitEffect_constr_args(this, a2, a3); /*0x69e445*/
  this->__vftable = (NiObjectVtbl *)&MagicModelHitEffect::`vftable'; /*0x69e44c*/
  *((_DWORD *)this + 0xC) = 0; /*0x69e456*/
  *((_DWORD *)this + 0xD) = 0; /*0x69e459*/
  v4 = *((_DWORD *)this + 0xC); /*0x69e45c*/
  if ( v4 ) /*0x69e466*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x69e46c*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x69e482*/
    *((_DWORD *)this + 0xC) = 0; /*0x69e484*/
  }
  v5 = *((_DWORD *)this + 0xD); /*0x69e487*/
  if ( v5 ) /*0x69e48c*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) ) /*0x69e492*/
      (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x69e4a8*/
    *((_DWORD *)this + 0xD) = 0; /*0x69e4aa*/
  }
  *((_BYTE *)this + 0x29) = 0; /*0x69e4ad*/
  *((_DWORD *)this + 0xB) = 0; /*0x69e4b0*/
  FXEffect = MagicItem_GetFXEffect(*(_DWORD **)(a3 + 8), 0);// OBMEFix 2026-06-01 verification: MagicModelHitEffect pushes minRange=0, calls MagicItem_GetFXEffect with ECX=MagicItem, then dereferences EAX at 0x0069E4BC. OBMEFix chains this call through a null guard and falls back to SEFF only on null. /*0x69e4b7*/
  *((_DWORD *)this + 0xB) = (*(int (__thiscall **)(int))(*(_DWORD *)(FXEffect + 0x18) + 0x14))(FXEffect + 0x18); /*0x69e4c7*/
  *((_BYTE *)this + 0x28) = 0; /*0x69e4ca*/
  return this; /*0x69e4cf*/
}
