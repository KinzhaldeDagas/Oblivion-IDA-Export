int __userpurge Actor_MagicCaster_IsMagicItemUseable_::CheckImmuneToSilence@<eax>(
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
  _BYTE *v12; // eax

  v12 = OblivionDynamicCast( /*0x5f4619*/
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &SpellItem `RTTI Type Descriptor',
          0);
  if ( v12 ) /*0x5f4623*/
  {
    if ( (v12[0x40] & 8) != 0 ) /*0x5f4629*/
      BYTE2(a6) = 0; /*0x5f462b*/
  }
  return Actor_MagicCaster_IsMagicItemUseable_::CheckNonApparelEnchantment(
           a1,
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
