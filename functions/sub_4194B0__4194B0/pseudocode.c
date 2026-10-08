char __cdecl sub_4194B0(int a1, int a2, char a3)
{
  _BYTE *v4; // eax

  if ( !a1 ) /*0x4194b6*/
    return 0; /*0x4194b8*/
  if ( *(_DWORD *)a1 ) /*0x4194bb*/
    v4 = **(_BYTE ***)a1; /*0x4194c1*/
  else
    v4 = 0; /*0x4194c5*/
  return EnchantmentItem_EffectAllowedFromEnch__(*(unsigned __int8 **)(a1 + 8), v4, a2, a3); /*0x4194ba*/
}
