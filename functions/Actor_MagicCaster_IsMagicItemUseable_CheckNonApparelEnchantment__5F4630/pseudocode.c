int __usercall Actor_MagicCaster_IsMagicItemUseable_::CheckNonApparelEnchantment@<eax>(
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
  _DWORD *v11; // eax

  v11 = OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &EnchantmentItem `RTTI Type Descriptor',
          0);
  if ( v11 && v11[0xD] == 3 )
    return Actor_MagicCaster_IsMagicItemUseable_::SetFailureCode(a2, a3, a4, a5, a6, a7, a8, a9);
  else
    return Actor_MagicCaster_IsMagicItemUseable_::EffectLoop_Setup(0, (int)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
