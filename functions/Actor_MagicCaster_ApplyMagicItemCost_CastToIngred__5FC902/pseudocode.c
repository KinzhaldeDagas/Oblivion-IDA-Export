int __usercall Actor_MagicCaster_ApplyMagicItemCost_::CastToIngred@<eax>(
        void *a1@<esi>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  void *v10; // eax
  float v12; // [esp+18h] [ebp+18h]
  float v13; // [esp+24h] [ebp+24h]

  v13 = a2;
  v12 = a2;
  v10 = OblivionDynamicCast(
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &IngredientItem `RTTI Type Descriptor',
          0);
  return Actor_MagicCaster_ApplyMagicItemCost_::SwitchMagicType(
           a3,
           a4,
           a5,
           a6,
           0x48,
           LODWORD(v12),
           v10,
           a10,
           LODWORD(v13));
}
