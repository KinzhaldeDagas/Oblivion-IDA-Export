// UCWUS decode note: EnchantmentItem_EffectAllowedFromEnch applies global object/effect flag rules for weapon/apparel enchantment effects. UCWUS should not bypass this wholesale; the faithful path is a targeted apparel-cast branch patch plus plugin session/suppression commands.
char __cdecl EnchantmentItem_EffectAllowedFromEnch__(unsigned __int8 *a1, _BYTE *a2, int a3, char a4)
{
  int v4; // eax
  int v6; // eax
  int v7; // eax
  _WORD *v8; // eax

  if ( !a1 /*0x419390*/
    || !a3
    || !OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
          &TESEnchantableForm `RTTI Type Descriptor',
          0)
    || a4 && (*(_DWORD *)(a3 + 0x58) & 0x1000) == 0 )
  {
    return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193de*/
  }
  switch ( a1[4] ) /*0x4193a9*/
  {
    case 0x14u: /*0x4193a9*/
    case 0x16u: /*0x4193a9*/
      v6 = *(_DWORD *)(a3 + 0x58); /*0x4193e9*/
      if ( (v6 & 0x10) == 0 ) /*0x4193f4*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193f4*/
      if ( (v6 & 0x40000) != 0 ) /*0x4193fe*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193fe*/
      if ( (v6 & 0x80) != 0 ) /*0x419408*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x419408*/
      if ( (v6 & 0x100) != 0 ) /*0x41940f*/
      {
        v7 = *(_DWORD *)(a3 + 0x98); /*0x419411*/
        if ( v7 != 0x52424157 && v7 != 0x41574157 && v7 != 0x4559454E && v7 != 0x434E4C53 ) /*0x419431*/
          return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x419431*/
      }
      if ( a2 && sub_41DF40(a2) ) /*0x41943b*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x41943b*/
      v8 = OblivionDynamicCast( /*0x419453*/
             a1,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
             &TESBipedModelForm `RTTI Type Descriptor',
             0);
      if ( !v8 || !sub_469050(v8) && (*(_DWORD *)(a3 + 0x58) & 0x20000) != 0 || *(_DWORD *)(a3 + 0x98) == 0x49564E49 ) /*0x419483*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x419483*/
      break; /*0x419483*/
    case 0x21u: /*0x4193a9*/
    case 0x22u: /*0x4193a9*/
      if ( (*(_DWORD *)(a3 + 0x58) & 0x20) == 0 ) /*0x4193b9*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193b9*/
      if ( a2 && sub_41DF40(a2) ) /*0x4193c3*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193c3*/
      v4 = *(_DWORD *)(a3 + 0x98); /*0x4193cc*/
      if ( v4 == 0x4B434F4C || v4 == 0x4E45504F ) /*0x4193de*/
        return EnchantmentItem_EffectAllowedFromEnch___::Return_0(); /*0x4193de*/
      break; /*0x4193de*/
    default:
      return 1;
  }
  return 1; /*0x419489*/
}
