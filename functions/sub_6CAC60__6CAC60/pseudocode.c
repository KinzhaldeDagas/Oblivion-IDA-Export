void __thiscall sub_6CAC60(_DWORD *this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // esi
  _DWORD *v5; // ebp
  unsigned int i; // [esp+10h] [ebp-4h]

  v2 = 0; /*0x6cac65*/
  if ( *(this + 0x11) )                         // Crash investigation 2026-05-26: WER hit-crash offset mapped here in animation/controller cleanup (sub_6CAC60 reading this+0x44). BloodOnDeath now avoids doing limb lookup/native decal projection inside Actor_Kill/death call stack to avoid interfering with this hit/death cleanup path. /*0x6cac67*/
    NiControllerSequence_Deactivate((int)this, 0.0, 0); /*0x6cac73*/
  for ( i = 0; i < *(this + 3); ++i ) /*0x6cac78*/
  {
    v3 = *(this + 5); /*0x6cac83*/
    v4 = *(_DWORD *)(v3 + v2 + 4); /*0x6cac86*/
    v5 = (_DWORD *)(v3 + v2 + 4); /*0x6cac8c*/
    if ( v4 ) /*0x6cac90*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6cac96*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6cacac*/
      *v5 = 0; /*0x6cacae*/
    }
    *(_DWORD *)(*(this + 5) + v2 + 8) = 0; /*0x6cacbc*/
    v2 += 0x10; /*0x6cacc7*/
  }
}
