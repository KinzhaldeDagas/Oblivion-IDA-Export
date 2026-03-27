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

  if ( !Magic_GetShieldType(*(_DWORD *)(a1 + 0x98)) )
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a3, a6, a7);
  v7 = *(float *)(a3 + 0x18);
  if ( v7 >= fCostant_100 )
    return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList(a3, a6, a7);
  if ( *(_DWORD *)(a3 + 0x28) == 4 )
    *(_DWORD *)(a3 + 0x14) |= 4u;
  return ActiveEffect_Base_ProcessEffect_::TestIngred(a2, a3, a4, a5, v7);
}
