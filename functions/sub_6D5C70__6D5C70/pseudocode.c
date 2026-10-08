int __thiscall sub_6D5C70(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx
  int v5; // ecx

  if ( a2 ) /*0x6d5c78*/
  {
    if ( a2 == 1 ) /*0x6d5c8c*/
    {
      v4 = *(this + 0xB); /*0x6d5c8e*/
      if ( v4 ) /*0x6d5c93*/
        return *(unsigned __int16 *)(v4 + 8); /*0x6d5c99*/
    }
    else if ( a2 == 2 ) /*0x6d5ca0*/
    {
      v5 = *(this + 0xB); /*0x6d5ca2*/
      if ( v5 ) /*0x6d5ca7*/
        return *(unsigned __int16 *)(v5 + 0xC); /*0x6d5cad*/
    }
  }
  else
  {
    v2 = *(this + 0xB); /*0x6d5c7a*/
    if ( v2 ) /*0x6d5c7f*/
      return *(unsigned __int16 *)(v2 + 0xA); /*0x6d5c85*/
  }
  return 0; /*0x6d5c85*/
}
