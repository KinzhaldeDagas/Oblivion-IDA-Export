void __thiscall sub_64F7D0(_DWORD *this)
{
  PathMiddleHigh *v2; // eax
  PathMiddleHigh *v3; // eax

  if ( !*(this + 0xD) )
  {
    v2 = (PathMiddleHigh *)FormHeapAlloc(0x1Cu);
    if ( v2 )
      v3 = PathMiddleHigh::PathMiddleHigh(v2);
    else
      v3 = 0;
    *(this + 0xD) = v3;
    *((_BYTE *)v3 + 0x10) = 0;
  }
}
