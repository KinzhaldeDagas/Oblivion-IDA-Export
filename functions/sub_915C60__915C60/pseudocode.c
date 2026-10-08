unsigned int __thiscall sub_915C60(_DWORD *this, unsigned int a2)
{
  _BYTE v5[524]; // [esp+10h] [ebp-210h] BYREF

  while ( 1 ) /*0x915c84*/
  {
    ++a2; /*0x915c84*/
    if ( (int)(a2 & 0xFFFFF) >= *(unsigned __int16 *)(*(_DWORD *)(*(this + 0xA) + 8 * (a2 >> 0x14)) + 0x40) ) /*0x915c9d*/
      a2 = ((a2 >> 0x14) + 1) << 0x14; /*0x915ca2*/
    if ( (signed int)(a2 >> 0x14) >= *(this + 0xC) ) /*0x915cad*/
      break; /*0x915cad*/
    if ( (*(int (__thiscall **)(_DWORD *, unsigned int, _BYTE *))(*this + 0x28))(this, a2, v5) ) /*0x915cbc*/
      return a2; /*0x915cd7*/
  }
  return 0xFFFFFFFF; /*0x915cc4*/
}
