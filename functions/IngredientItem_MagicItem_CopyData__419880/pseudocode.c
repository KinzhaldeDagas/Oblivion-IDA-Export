int __thiscall IngredientItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &IngredientItem `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    *(this + 0x15) = v3[0x1E];
    *((_BYTE *)this + 0x58) = *((_BYTE *)v3 + 0x7C);
  }
  return IngredientItem_MagicItem_CopyData_::Done(a2);
}
