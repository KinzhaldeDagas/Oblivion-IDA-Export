void __thiscall sub_88A310(int *this)
{
  unsigned int v2; // eax
  _DWORD *v3; // eax
  unsigned int i; // edi
  int v5; // eax
  int v6; // eax

  v2 = *(this + 0xD);
  if ( v2 )
  {
    if ( v2 >= 0xC8 )
      *(this + 0xD) = 0xC8;
    v3 = (_DWORD *)(*(int (__thiscall **)(int *))(*this + 0x58))(this);
    if ( v3 )
    {
      sub_89D080(v3, *(this + 0xC), *(this + 0xD));
      for ( i = 0; i < *(this + 0xD); ++i )
      {
        v5 = *(_DWORD *)(*(this + 0xC) + 4 * i);
        if ( v5 )
          v6 = *(_DWORD *)(v5 + 0xC);
        else
          v6 = 0;
        if ( v6 )
          *(_BYTE *)(v6 + 0x10) &= ~2u;
        sub_8BC730(*(int (__stdcall ****)(signed int))(*(this + 0xC) + 4 * i));
      }
      _memset(*(this + 0xC), 0, 4 * *(this + 0xD));
      *(this + 0xD) = 0;
    }
  }
}
