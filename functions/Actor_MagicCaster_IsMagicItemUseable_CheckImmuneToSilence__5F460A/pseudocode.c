int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence@<eax>(
        void *a1@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        int a10,
        int a11)
{
  _BYTE *v11; // eax

  v11 = OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &SpellItem `RTTI Type Descriptor',
          0);
  if ( v11 )
  {
    if ( (v11[0x40] & 8) != 0 )
      BYTE2(a5) = 0;
  }
  return Actor_MagicCaster_IsMagicItemUseable_::CheckNonApparelEnchantment(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
