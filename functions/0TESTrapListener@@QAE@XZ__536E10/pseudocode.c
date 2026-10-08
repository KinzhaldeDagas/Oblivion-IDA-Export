TESTrapListener *__thiscall TESTrapListener::TESTrapListener(TESTrapListener *this)
{
  sub_536060(this, 0); /*0x536e15*/
  *((_DWORD *)this + 5) = &hkPhantomListener::`vftable'; /*0x536e1a*/
  *(_DWORD *)this = &TESTrapListener::`vftable'{for `TESTrapListener'}; /*0x536e21*/
  *((_DWORD *)this + 5) = &TESTrapListener::`vftable'{for `hkPhantomListener'}; /*0x536e27*/
  *((_DWORD *)this + 6) = 0; /*0x536e2e*/
  *((_DWORD *)this + 7) = 0; /*0x536e35*/
  return this; /*0x536e3e*/
}
