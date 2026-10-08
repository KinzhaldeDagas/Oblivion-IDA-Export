bool __thiscall sub_4CA6A0(int this)
{
  bool result; // al
  _DWORD *v2; // ecx

  result = 1; /*0x4ca6a0*/
  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4ca6a5*/
  {
    if ( (*(_DWORD *)(this + 8) & 0x80000) != 0 ) /*0x4ca6ae*/
      return result; /*0x4ca6ae*/
  }
  else
  {
    v2 = *(_DWORD **)(this + 0x50); /*0x4ca6b3*/
    if ( v2 ) /*0x4ca6b8*/
      return sub_4D7000(v2); /*0x4ca6ba*/
  }
  return 0; /*0x4ca6b2*/
}
