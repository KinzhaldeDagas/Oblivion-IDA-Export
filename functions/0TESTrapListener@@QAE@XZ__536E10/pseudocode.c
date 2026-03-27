TESTrapListener *__thiscall TESTrapListener::TESTrapListener(TESTrapListener *this)
{
  sub_536060(this, 0);
  *((_DWORD *)this + 5) = &hkPhantomListener::`vftable';
  *(_DWORD *)this = &TESTrapListener::`vftable'{for `TESTrapListener'};
  *((_DWORD *)this + 5) = &TESTrapListener::`vftable'{for `hkPhantomListener'};
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  return this;
}
