int __thiscall sub_6B6A50(_DWORD *this, int a2)
{
  int result; // eax

  if ( !*(this + 0x14) ) /*0x6b6a53*/
    return 0x80004005; /*0x6b6a92*/
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))( /*0x6b6a71*/
             *(this + 0x14),
             0,
             0,
             a2 | 8);
  if ( result == 0x80070057 ) /*0x6b6a78*/
    return (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int))(*(_DWORD *)*(this + 0x14) + 0x30))( /*0x6b6a8b*/
             *(this + 0x14),
             0,
             0,
             a2 | 4);
  return result; /*0x6b6a8e*/
}
