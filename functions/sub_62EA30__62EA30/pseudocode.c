void __thiscall sub_62EA30(_DWORD *this)
{
  PathHigh *v2; // eax
  PathHigh *v3; // eax

  if ( !*(this + 0xD) )
  {
    v2 = (PathHigh *)FormHeapAlloc(0x4Cu);
    if ( v2 )
      v3 = PathHigh::PathHigh(v2);
    else
      v3 = 0;
    *(this + 0xD) = v3;
    *((_BYTE *)v3 + 0x10) = 0;
  }
}
