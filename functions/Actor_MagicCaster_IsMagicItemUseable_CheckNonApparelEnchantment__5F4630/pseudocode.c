int __userpurge Actor_MagicCaster_IsMagicItemUseable_::CheckNonApparelEnchantment@<eax>(
        void *a1@<edi>,
        _DWORD *a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11,
        int a12)
{
  _DWORD *v12; // eax

  v12 = OblivionDynamicCast( /*0x5f4641*/
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &EnchantmentItem `RTTI Type Descriptor',
          0);
  if ( v12 && v12[0xD] == 3 ) /*0x5f4656*/
    return Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(0, a2, a3, a4, a5, a6, a7, a8, a9, a10);// UCWUS pipeline note: current plugin patch NOPs this apparel-enchantment rejection branch when UCWUSSetEnginePatchEnabled 1 is called. This only permits apparel enchantments to proceed; it does not own cast charge/equip/recharge state. /*0x5f4656*/
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Setup( /*0x5f4657*/
             0,
             (int)a1,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7,
             a8,
             a9,
             a10,
             a11,
             a12);
}
