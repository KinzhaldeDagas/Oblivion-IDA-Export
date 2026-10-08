int __thiscall sub_6B6E60(int *this, char a2)
{
  int v3; // eax
  int v4; // edi
  int *v5; // ecx
  bool v6; // zf
  int v7; // ebx
  unsigned int v8; // eax
  int result; // eax

  v3 = *this; /*0x6b6e63*/
  v4 = (*this & 4) != 0 ? 4 : 8;
  v5 = (int *)*(this + 0x14); /*0x6b6e7a*/
  if ( !v5 ) /*0x6b6e7f*/
    return 0x80004005; /*0x6b6f13*/
  if ( a2 ) /*0x6b6e8a*/
  {
    v6 = *(this + 2) == 0; /*0x6b6e8f*/
    *this = v3 | 0x10; /*0x6b6e93*/
    if ( !v6 ) /*0x6b6e95*/
    {
      v7 = *v5; /*0x6b6e98*/
      v8 = Game_RandomLargeInteger(0); /*0x6b6e9c*/
      (*(void (__stdcall **)(_DWORD, unsigned int))(v7 + 0x34))(*(this + 0x14), v8 % *(this + 2)); /*0x6b6eb1*/
    }
    result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))( /*0x6b6ec5*/
               *(this + 0x14),
               0,
               0,
               v4 | 1);
    if ( result == 0x80070057 ) /*0x6b6ecc*/
      return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))( /*0x6b6edd*/
               *(this + 0x14),
               0,
               0,
               1);
  }
  else
  {
    *this = v3 & 0xFFFFFFEF; /*0x6b6eea*/
    result = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int))(*v5 + 0x30))(v5, 0, 0, v4); /*0x6b6ef4*/
    if ( result == 0x80070057 ) /*0x6b6efb*/
      return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)*(this + 0x14) + 0x30))( /*0x6b6f0c*/
               *(this + 0x14),
               0,
               0,
               0);
  }
  return result; /*0x6b6edf*/
}
