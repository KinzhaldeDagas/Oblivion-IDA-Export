void __thiscall TESTrapListener::~TESTrapListener(TESTrapListener *this)
{
  *(_DWORD *)this = &TESTrapListener::`vftable'{for `TESTrapListener'}; /*0x5374a8*/
  *((_DWORD *)this + 5) = &TESTrapListener::`vftable'{for `hkPhantomListener'}; /*0x5374ae*/
  sub_536E50(this); /*0x5374bd*/
  *((_DWORD *)this + 5) = &hkPhantomListener::`vftable'; /*0x5374cc*/
  bhkWaterListener::~bhkWaterListener(this); /*0x5374d3*/
}
