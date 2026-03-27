int __thiscall sub_6B6E60(int *this, char a2)
{
  int v3; // eax
  int v4; // edi
  int *v5; // ecx
  bool v6; // zf
  int v7; // ebx
  unsigned int RandomLargeInteger; // eax
  int result; // eax

  v3 = *this;
  v4 = (*this & 4) != 0 ? 4 : 8;
  v5 = (int *)*(this + 0x14);
  if ( !v5 )
    return 0x80004005;
  if ( a2 )
  {
    v6 = *(this + 2) == 0;
    *this = v3 | 0x10;
    if ( !v6 )
    {
      v7 = *v5;
      RandomLargeInteger = GetRandomLargeInteger_(0);
      (*(void (__stdcall **)(_DWORD, unsigned int))(v7 + 0x34))(*(this + 0x14), RandomLargeInteger % *(this + 2));
    }
    result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))(
               *(this + 0x14),
               0,
               0,
               v4 | 1);
    if ( result == 0x80070057 )
      return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))(
               *(this + 0x14),
               0,
               0,
               1);
  }
  else
  {
    *this = v3 & 0xFFFFFFEF;
    result = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(*v5 + 0x30))(v5, 0, 0, v4);
    if ( result == 0x80070057 )
      return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 0x14) + 0x30))(
               *(this + 0x14),
               0,
               0,
               0);
  }
  return result;
}
