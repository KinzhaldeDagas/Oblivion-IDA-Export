void __thiscall SpellItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = OblivionDynamicCast( /*0x41d2e7*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  v4 = v3; /*0x41d2ec*/
  if ( v3 ) /*0x41d2f3*/
  {
    *(this + 7) = (*(int (__thiscall **)(_DWORD *))(v3[6] + 0x18))(v3 + 6); /*0x41d300*/
    *(this + 8) = v4[0xE]; /*0x41d306*/
    *(this + 9) = v4[0xF]; /*0x41d30c*/
    *((_BYTE *)this + 0x28) = *((_BYTE *)v4 + 0x40); /*0x41d312*/
  }
  SpellItem_MagicItem_CopyData_::Done((int)a2); /*0x41d313*/
}
