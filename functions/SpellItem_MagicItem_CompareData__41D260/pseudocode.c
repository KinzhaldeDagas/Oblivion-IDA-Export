char __thiscall SpellItem_MagicItem_CompareData(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edi
  int v5; // ebx

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
         &SpellItem `RTTI Type Descriptor',
         0);
  v4 = v3;
  if ( v3
    && (v5 = (*(int (__thiscall **)(_DWORD *))(v3[6] + 0x18))(v3 + 6),
        v5 == (*(int (__thiscall **)(_DWORD *))(*this + 0x18))(this))
    && v4[0xE] == *(this + 8)
    && v4[0xF] == *(this + 9)
    && *((_BYTE *)v4 + 0x40) == *((_BYTE *)this + 0x28) )
  {
    return 0;
  }
  else
  {
    return SpellItem_MagicItem_CompareData_::Return_1((int)a2);
  }
}
