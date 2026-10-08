double __userpurge Actor_MagicTarget_CalcResFactor_::CheckIsEdibleIngredient@<st0>(
        void *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        double result@<st0>,
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

  if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18))(a1) == 7 ) /*0x5e5279*/
  {
    v11 = OblivionDynamicCast( /*0x5e528a*/
            a1,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &AlchemyItem `RTTI Type Descriptor',
            0);
    v12 = v11; /*0x5e528f*/
    if ( !v11 || (LOBYTE(a9) = 1, !(unsigned __int8)EffectItemList_AllEffectsHostile(v11 + 0xC)) ) /*0x5e529b*/
      LOBYTE(a9) = 0; /*0x5e52a9*/
    if ( v12 && !(_BYTE)a9 ) /*0x5e52b7*/
      return Actor_MagicTarget_CalcResFactor_::Return_1f_(a5, a6, a7); /*0x5e52b7*/
    if ( (*(int (__thiscall **)(void *))(*(_DWORD *)a1 + 0x18))(a1) == 8 /*0x5e52e6*/
      && (v13 = OblivionDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
                  &IngredientItem `RTTI Type Descriptor',
                  0)) != 0
      && (v13[0x7C] & 2) != 0 )
    {
      return Actor_MagicTarget_CalcResFactor_::Return_1f_(a5, a6, a7); /*0x5e52e7*/
    }
    else
    {
      Actor_MagicTarget_CalcResFactor_::GetCasterSkill((int)a1, a2, a3, result, a5, a6, a7, a8, a9, a10, a11); /*0x5e52c5*/
    }
  }
  else
  {
    Actor_MagicTarget_CalcResFactor_::NotAlchemyItem(a5, a6, a7); /*0x5e5279*/
  }
  return result;
}
