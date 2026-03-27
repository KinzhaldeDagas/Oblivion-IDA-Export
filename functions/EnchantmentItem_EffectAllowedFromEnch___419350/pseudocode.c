char __cdecl EnchantmentItem_EffectAllowedFromEnch__(unsigned __int8 *a1, _BYTE *a2, int a3, char a4)
{
  int v4; // eax
  int v6; // eax
  int v7; // eax
  _WORD *v8; // eax

  if ( !a1
    || !a3
    || !OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0)
    || a4 && (*(_DWORD *)(a3 + 0x58) & 0x1000) == 0 )
  {
    return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
  }
  switch ( a1[4] )
  {
    case 0x14u:
    case 0x16u:
      v6 = *(_DWORD *)(a3 + 0x58);
      if ( (v6 & 0x10) == 0 )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      if ( (v6 & 0x40000) != 0 )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      if ( (v6 & 0x80) != 0 )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      if ( (v6 & 0x100) != 0 )
      {
        v7 = *(_DWORD *)(a3 + 0x98);
        if ( v7 != 0x52424157 && v7 != 0x41574157 && v7 != 0x4559454E && v7 != 0x434E4C53 )
          return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      }
      if ( a2 && sub_41DF40(a2) )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      v8 = OblivionDynamicCast(
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESBipedModelForm `RTTI Type Descriptor',
             0);
      if ( !v8 || !sub_469050(v8) && (*(_DWORD *)(a3 + 0x58) & 0x20000) != 0 || *(_DWORD *)(a3 + 0x98) == 0x49564E49 )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      break;
    case 0x21u:
    case 0x22u:
      if ( (*(_DWORD *)(a3 + 0x58) & 0x20) == 0 )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      if ( a2 && sub_41DF40(a2) )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      v4 = *(_DWORD *)(a3 + 0x98);
      if ( v4 == 0x4B434F4C || v4 == 0x4E45504F )
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0();
      break;
    default:
      return 1;
  }
  return 1;
}
