int __thiscall SpellItem_MagicItem_CopyData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // esi

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3 )
  {
    *(this + 7) = (*(int (__thiscall **)(_DWORD *))(v3[6] + 0x18))(v3 + 6);
    *(this + 8) = v4[0xE];
    *(this + 9) = v4[0xF];
    *((_BYTE *)this + 0x28) = *((_BYTE *)v4 + 0x40);
  }
  return SpellItem_MagicItem_CopyData_::Done(a2);
}
