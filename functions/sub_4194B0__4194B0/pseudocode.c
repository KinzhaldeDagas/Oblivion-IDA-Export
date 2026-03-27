char __cdecl sub_4194B0(int a1, int a2, char a3)
{
  _BYTE *v4; // eax

  if ( !a1 )
    return 0;
  if ( *(_DWORD *)a1 )
    v4 = **(_BYTE ***)a1;
  else
    v4 = 0;
  return EnchantmentItem_EffectAllowedFromEnch__(*(unsigned __int8 **)(a1 + 8), v4, a2, a3);
}
