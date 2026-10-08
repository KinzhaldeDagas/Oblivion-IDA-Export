void __thiscall sub_64F7D0(_DWORD *this)
{
  PathMiddleHigh *v2; // eax
  PathMiddleHigh *v3; // eax

  if ( !*(this + 0xD) ) /*0x64f7f4*/
  {
    v2 = (PathMiddleHigh *)FormHeapAlloc(0x1Cu); /*0x64f7fc*/
    if ( v2 ) /*0x64f812*/
      v3 = PathMiddleHigh::PathMiddleHigh(v2); /*0x64f816*/
    else
      v3 = 0; /*0x64f81d*/
    *(this + 0xD) = v3; /*0x64f81f*/
    *((_BYTE *)v3 + 0x10) = 0; /*0x64f822*/
  }
}
