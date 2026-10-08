int __thiscall sub_6D5D10(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a2 ) /*0x6d5d18*/
  {
    if ( a2 == 1 ) /*0x6d5d2b*/
    {
      v4 = *(this + 0xB); /*0x6d5d2d*/
      if ( v4 ) /*0x6d5d32*/
        return *(_DWORD *)(v4 + 0x20); /*0x6d5d37*/
    }
    else if ( a2 == 2 ) /*0x6d5d3e*/
    {
      v5 = *(this + 0xB); /*0x6d5d40*/
      if ( v5 ) /*0x6d5d45*/
        return *(_DWORD *)(v5 + 0x28); /*0x6d5d4a*/
    }
  }
  else
  {
    v2 = *(this + 0xB); /*0x6d5d1a*/
    if ( v2 ) /*0x6d5d1f*/
      return *(_DWORD *)(v2 + 0x24); /*0x6d5d24*/
  }
  return 0; /*0x6d5d24*/
}
