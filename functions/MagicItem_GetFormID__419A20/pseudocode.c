int __thiscall MagicItem_GetFormID(void *this)
{
  _DWORD *v2; // edi

  v2 = OblivionDynamicCast(
         this,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &MagicItemForm `RTTI Type Descriptor',
         0);
  OblivionDynamicCast(
    this,
    0,
    (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
    &MagicItemObject `RTTI Type Descriptor',
    0);
  if ( v2 )
    return v2[3];
  else
    return MagicItem_GetFormID_::NotAForm();
}
