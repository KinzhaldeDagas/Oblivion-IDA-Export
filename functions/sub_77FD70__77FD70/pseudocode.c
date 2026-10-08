//
// DX11 verified generic Z property: byte+18 bit0 enables RS7=1 then writes RS23 from manager+100+4*((flags>>2)&15); otherwise only RS7=0. Always RS14 from bit1, save0. Lighting30 7FB470 does not dispatch this property.
int __thiscall sub_77FD70(_DWORD *this, int a2)
{
  if ( (*(_BYTE *)(a2 + 0x18) & 1) != 0 ) /*0x77fd7e*/
  {
    (*(void (__thiscall **)(_DWORD *, int, int, _DWORD))(*this + 0x64))(this, 7, 1, 0); /*0x77fd89*/
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))( /*0x77fda8*/
      0x17,
      *(this + ((*(unsigned __int8 *)(a2 + 0x18) >> 2) & 0xF) + 0x40),
      0);
  }
  else
  {
    (*(void (__stdcall **)(int, _DWORD, _DWORD))(*this + 0x64))(7, 0, 0); /*0x77fdb3*/
  }
  return (*(int (__thiscall **)(_DWORD *, int, bool, _DWORD))(*this + 0x64))( /*0x77fdcc*/
           this,
           0xE,
           (*(_BYTE *)(a2 + 0x18) & 2) != 0,
           0);
}
