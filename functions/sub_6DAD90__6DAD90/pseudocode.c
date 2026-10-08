int __thiscall sub_6DAD90(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 ) /*0x6dad98*/
  {
    if ( a2 == 1 ) /*0x6dadab*/
    {
      v4 = *(this + 7); /*0x6dadad*/
      if ( v4 ) /*0x6dadb2*/
        return *(_DWORD *)(v4 + 8); /*0x6dadb7*/
    }
  }
  else
  {
    v2 = *(this + 6); /*0x6dad9a*/
    if ( v2 ) /*0x6dad9f*/
      return *(_DWORD *)(v2 + 8); /*0x6dada4*/
  }
  return 0; /*0x6dada4*/
}
