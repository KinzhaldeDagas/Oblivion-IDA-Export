void __thiscall IngredientItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast( /*0x419896*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &IngredientItem `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x4198a0*/
  {
    *(this + 0x15) = v3[0x1E]; /*0x4198a5*/
    *((_BYTE *)this + 0x58) = *((_BYTE *)v3 + 0x7C); /*0x4198ab*/
  }
  IngredientItem_MagicItem_CopyData_::Done((int)a2); /*0x4198ac*/
}
