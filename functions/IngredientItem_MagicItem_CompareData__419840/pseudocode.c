char __thiscall IngredientItem_MagicItem_CompareData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &IngredientItem `RTTI Type Descriptor',
         0);
  if ( v3 && v3[0x1E] == *(this + 0x15) && *((_BYTE *)v3 + 0x7C) == *((_BYTE *)this + 0x58) )
    return 0;
  else
    return IngredientItem_MagicItem_CompareData_::Return_1((int)a2);
}
