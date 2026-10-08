char __thiscall sub_6D5D60(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a2 ) /*0x6d5d68*/
  {
    if ( a2 == 1 ) /*0x6d5d7b*/
    {
      v4 = *(this + 0xB); /*0x6d5d7d*/
      if ( v4 ) /*0x6d5d82*/
        return *(_BYTE *)(v4 + 0x1C); /*0x6d5d87*/
    }
    else if ( a2 == 2 ) /*0x6d5d8e*/
    {
      v5 = *(this + 0xB); /*0x6d5d90*/
      if ( v5 ) /*0x6d5d95*/
        return *(_BYTE *)(v5 + 0x1E); /*0x6d5d9a*/
    }
  }
  else
  {
    v2 = *(this + 0xB); /*0x6d5d6a*/
    if ( v2 ) /*0x6d5d6f*/
      return *(_BYTE *)(v2 + 0x1D); /*0x6d5d74*/
  }
  return 0; /*0x6d5d74*/
}
