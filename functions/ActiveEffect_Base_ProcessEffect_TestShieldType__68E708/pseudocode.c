int __usercall ActiveEffect_Base_ProcessEffect_::TestShieldType@<eax>(
        int a1@<eax>,
        char a2@<bpl>,
        int a3@<esi>,
        double a4@<st2>,
        double a5@<st1>,
        int a6,
        float a7)
{
  double v7; // st7

  if ( !Magic_GetShieldType(*(_DWORD *)(a1 + 0x98)) ) /*0x68e70f*/
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a3, a6, a7); /*0x68e70f*/
  v7 = *(float *)(a3 + 0x18); /*0x68e71f*/
  if ( v7 >= fCostant_100 ) /*0x68e72d*/
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a3, a6, a7); /*0x68e719*/
  if ( *(_DWORD *)(a3 + 0x28) == 4 ) /*0x68e737*/
    *(_DWORD *)(a3 + 0x14) |= 4u; /*0x68e739*/
  return ActiveEffect_Base_ProcessEffect_::TestIngred(a2, a3, a4, a5, v7);
}
