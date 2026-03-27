void __userpurge Actor_MagicTarget_CalcResFactor_::CheckIsEdibleIngredient(
        void *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double a4@<st0>,
        int a5,
        int a6,
        int a7,
        float a8,
        void *a9,
        int a10,
        int a11)
{
  _DWORD *v11; // eax
  _DWORD *v12; // esi
  _BYTE *v13; // eax

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18))(a1) == 7 )
  {
    v11 = OblivionDynamicCast(
            a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &AlchemyItem `RTTI Type Descriptor',
            0);
    v12 = v11;
    if ( !v11 || (LOBYTE(a9) = 1, !(unsigned __int8)EffectItemList_AllEffectsHostile(v11 + 0xC)) )
      LOBYTE(a9) = 0;
    if ( v12 && !(_BYTE)a9
      || (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18))(a1) == 8
      && (v13 = OblivionDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                  &IngredientItem `RTTI Type Descriptor',
                  0)) != 0
      && (v13[0x7C] & 2) != 0 )
    {
      Actor_MagicTarget_CalcResFactor_::Return_1f_(a5, a6, a7);
    }
    else
    {
      Actor_MagicTarget_CalcResFactor_::GetCasterSkill((int)a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
    }
  }
  else
  {
    Actor_MagicTarget_CalcResFactor_::NotAlchemyItem(a5, a6, a7);
  }
}
