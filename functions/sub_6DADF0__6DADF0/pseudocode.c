int __thiscall sub_6DADF0(_DWORD *this, __int16 a2)
{
  int v2; // ecx
  int v4; // ecx

  if ( a2 ) /*0x6dadf8*/
  {
    if ( a2 == 1 ) /*0x6dae0b*/
    {
      v4 = *(this + 7); /*0x6dae0d*/
      if ( v4 ) /*0x6dae12*/
        return *(_DWORD *)(v4 + 0xC); /*0x6dae17*/
    }
  }
  else
  {
    v2 = *(this + 6); /*0x6dadfa*/
    if ( v2 ) /*0x6dadff*/
      return *(_DWORD *)(v2 + 0xC); /*0x6dae04*/
  }
  return 0; /*0x6dae04*/
}
