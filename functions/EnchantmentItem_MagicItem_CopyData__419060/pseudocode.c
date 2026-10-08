void __thiscall EnchantmentItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast( /*0x419076*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &EnchantmentItem `RTTI Type Descriptor',
         0);
  if ( v3 ) /*0x419080*/
  {
    *(this + 8) = v3[0xE]; /*0x419085*/
    *(this + 9) = v3[0xF]; /*0x41908b*/
    *(this + 7) = v3[0xD]; /*0x419091*/
    *((_BYTE *)this + 0x28) = *((_BYTE *)v3 + 0x40); /*0x419097*/
  }
  EnchantmentItem_MagicItem_CopyData_::Done((int)a2); /*0x419098*/
}
