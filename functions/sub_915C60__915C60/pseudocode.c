unsigned int __thiscall sub_915C60(_DWORD *this, unsigned int a2)
{
  _BYTE v5[524]; // [esp+10h] [ebp-210h] BYREF

  while ( 1 )
  {
    ++a2;
    if ( (int)(a2 & 0xFFFFF) >= *(unsigned __int16 *)(*(_DWORD *)(*(this + 0xA) + 8 * (a2 >> 0x14)) + 0x40) )
      a2 = ((a2 >> 0x14) + 1) << 0x14;
    if ( (signed int)(a2 >> 0x14) >= *(this + 0xC) )
      break;
    if ( (*(int (__thiscall **)(_DWORD *, unsigned int, _BYTE *))(*this + 0x28))(this, a2, v5) )
      return a2;
  }
  return 0xFFFFFFFF;
}
