void __usercall Actor_MagicCaster_ApplyMagicItemCost_::CastToIngred(
        void *a1@<esi>,
        double a2@<st0>,
        _DWORD *a3@<ebp>,
        int a4,
        int a5,
        int a6,
        float a7,
        int a8,
        int a9,
        int a10,
        char a11)
{
  void *v11; // eax
  int v12; // [esp+18h] [ebp+18h]

  *(float *)&v12 = a2; /*0x5fc912*/
  v11 = OblivionDynamicCast( /*0x5fc926*/
          a1,
          0,
          (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
          &IngredientItem `RTTI Type Descriptor',
          0);
  Actor_MagicCaster_ApplyMagicItemCost_::SwitchMagicType(2, a3, a1, a4, a5, a6, a7, 0x48, v12, (int)v11, a11); /*0x5fc92c*/
}
