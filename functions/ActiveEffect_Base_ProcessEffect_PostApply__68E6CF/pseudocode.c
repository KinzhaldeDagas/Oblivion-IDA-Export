int __usercall ActiveEffect_Base_ProcessEffect_::PostApply@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        float a6)
{
  int v6; // eax

  if ( *(_BYTE *)(a1 + 0x11) || *(_BYTE *)(a1 + 0x12) )
    return ActiveEffect_Base_ProcessEffect_::TestUpdate_(a5, a6);
  if ( (*(_BYTE *)(a1 + 0x14) & 1) != 0 )
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a1, a5, a6);
  v6 = *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C);
  if ( (*(_DWORD *)(v6 + 0x58) & 0x8000000) != 0 )
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a1, a5, a6);
  return ActiveEffect_Base_ProcessEffect_::TestAbility(a1, v6, a2, a3, a4);
}
