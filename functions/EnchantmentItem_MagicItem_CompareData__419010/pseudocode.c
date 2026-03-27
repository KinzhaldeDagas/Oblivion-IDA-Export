char __thiscall EnchantmentItem_MagicItem_CompareData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &EnchantmentItem `RTTI Type Descriptor',
         0);
  if ( v3
    && v3[0xE] == *(this + 8)
    && v3[0xF] == *(this + 9)
    && v3[0xD] == *(this + 7)
    && *((_BYTE *)v3 + 0x40) == *((_BYTE *)this + 0x28) )
  {
    return 0;
  }
  else
  {
    return EnchantmentItem_MagicItem_CompareData_::Return_1((int)a2);
  }
}
