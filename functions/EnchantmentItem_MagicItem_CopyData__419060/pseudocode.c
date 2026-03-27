int __thiscall EnchantmentItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &EnchantmentItem `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    *(this + 8) = v3[0xE];
    *(this + 9) = v3[0xF];
    *(this + 7) = v3[0xD];
    *((_BYTE *)this + 0x28) = *((_BYTE *)v3 + 0x40);
  }
  return EnchantmentItem_MagicItem_CopyData_::Done(a2);
}
