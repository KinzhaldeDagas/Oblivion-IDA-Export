int __usercall MagicTarget_AddEffect_::CloneActiveEffect@<eax>(
        int a1@<ebp>,
        int a2@<edi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10,
        float a11)
{
  int v11; // eax
  _DWORD *v12; // esi

  v11 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  v12 = (_DWORD *)v11;
  if ( !v11 )
    JUMPOUT(0x6A2CBA);
  *(_DWORD *)(v11 + 0x20) = a2;
  if ( OblivionDynamicCast(
         a10,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &IngredientItem `RTTI Type Descriptor',
         0) )
  {
    return MagicTarget_AddEffect_::AddEffectToTarget();
  }
  else
  {
    return MagicTarget_AddEffect_::ApplyResistance(v12, a3, a4, a5, a6, a7, a8, a9, (int)a10, a11);
  }
}
