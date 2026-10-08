int __thiscall sub_6DADC0(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 ) /*0x6dadc8*/
  {
    if ( a2 == 1 ) /*0x6daddb*/
    {
      v4 = *(this + 7); /*0x6daddd*/
      if ( v4 ) /*0x6dade2*/
        return *(_DWORD *)(v4 + 0x10); /*0x6dade7*/
    }
  }
  else
  {
    v2 = *(this + 6); /*0x6dadca*/
    if ( v2 ) /*0x6dadcf*/
      return *(_DWORD *)(v2 + 0x10); /*0x6dadd4*/
  }
  return 0; /*0x6dadd4*/
}
