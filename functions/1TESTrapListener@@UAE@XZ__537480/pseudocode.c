void __thiscall TESTrapListener::~TESTrapListener(TESTrapListener *this)
{
  *(_DWORD *)this = &TESTrapListener::`vftable'{for `TESTrapListener'};
  *((_DWORD *)this + 5) = &TESTrapListener::`vftable'{for `hkPhantomListener'};
  sub_536E50(this);
  *((_DWORD *)this + 5) = &hkPhantomListener::`vftable';
  bhkWaterListener::~bhkWaterListener(this);
}
