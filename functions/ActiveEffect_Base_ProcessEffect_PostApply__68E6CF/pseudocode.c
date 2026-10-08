int __usercall ActiveEffect_Base_ProcessEffect_::PostApply@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        int a6,
        float a7)
{
  int v7; // eax

  if ( *(_BYTE *)(a1 + 0x11) || *(_BYTE *)(a1 + 0x12) ) /*0x68e6d9*/
    return ActiveEffect_Base_ProcessEffect_::TestUpdate_(a2, a1, a3, a4, a6, a7); /*0x68e6d3*/
  if ( (*(_BYTE *)(a1 + 0x14) & 1) != 0 ) /*0x68e6e7*/
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a1, a6, a7); /*0x68e6e7*/
  v7 = *(_DWORD *)(*(_DWORD *)(a1 + 0xC) + 0x1C); /*0x68e6f0*/
  if ( (*(_DWORD *)(v7 + 0x58) & 0x8000000) != 0 ) /*0x68e6fc*/
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a1, a6, a7); /*0x68e6e7*/
  return ActiveEffect_Base_ProcessEffect_::TestAbility(a1, v7, a2, a3, a4, a5);
}
