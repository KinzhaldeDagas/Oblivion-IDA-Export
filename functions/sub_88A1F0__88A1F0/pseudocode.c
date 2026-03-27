void __thiscall sub_88A1F0(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0x13);
  if ( v2 )
  {
    if ( v2 >= 0xBB8 )
      *(this + 0x13) = 0xBB8;
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    if ( v3 )
    {
      sub_89C8E0(v3, *(this + 0x12), *(this + 0x13));
      for ( i = 0; i < *(this + 0x13); ++i )
      {
        v5 = *(_DWORD *)(*(this + 0x12) + 4 * i);
        if ( v5 )
          v6 = *(_DWORD *)(v5 + 0xC);
        else
          v6 = 0;
        if ( v6 )
          *(_DWORD *)(v6 + 0x18) &= ~0x20u;
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0x12) + 4 * i));
      }
      _memset(*(this + 0x12), 0, 4 * *(this + 0x13));
      *(this + 0x13) = 0;
    }
  }
}
