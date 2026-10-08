void __thiscall sub_62EA30(_DWORD *this)
{
  PathHigh *v2; // eax
  PathHigh *v3; // eax

  if ( !*(this + 0xD) ) /*0x62ea54*/
  {
    v2 = (PathHigh *)FormHeapAlloc(0x4Cu); /*0x62ea5c*/
    if ( v2 ) /*0x62ea72*/
      v3 = PathHigh::PathHigh(v2); /*0x62ea76*/
    else
      v3 = 0; /*0x62ea7d*/
    *(this + 0xD) = v3; /*0x62ea7f*/
    *((_BYTE *)v3 + 0x10) = 0; /*0x62ea82*/
  }
}
