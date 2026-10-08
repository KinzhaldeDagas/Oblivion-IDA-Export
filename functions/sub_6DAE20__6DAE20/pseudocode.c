char __thiscall sub_6DAE20(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 ) /*0x6dae28*/
  {
    if ( a2 == 1 ) /*0x6dae3b*/
    {
      v4 = *(this + 7); /*0x6dae3d*/
      if ( v4 ) /*0x6dae42*/
        return *(_BYTE *)(v4 + 0x14); /*0x6dae47*/
    }
  }
  else
  {
    v2 = *(this + 6); /*0x6dae2a*/
    if ( v2 ) /*0x6dae2f*/
      return *(_BYTE *)(v2 + 0x14); /*0x6dae34*/
  }
  return 0; /*0x6dae34*/
}
