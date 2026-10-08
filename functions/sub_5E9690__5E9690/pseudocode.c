int __thiscall sub_5E9690(int *this)
{
  int v2; // ecx
  int result; // eax

  v2 = *(this + 0x16); /*0x5e9693*/
  if ( v2 ) /*0x5e9698*/
  {
    (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v2 + 0x104))(v2, 0, 0); /*0x5e96a6*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x10C))(*(this + 0x16), 0); /*0x5e96b5*/
    (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x108))(*(this + 0x16), 0); /*0x5e96c4*/
    return (*(int (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 0x16) + 0x110))(*(this + 0x16), 0); /*0x5e96d3*/
  }
  return result; /*0x5e96d5*/
}
