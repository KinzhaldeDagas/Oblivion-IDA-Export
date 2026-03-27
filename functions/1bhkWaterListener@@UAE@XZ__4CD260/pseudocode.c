void __thiscall bhkWaterListener::~bhkWaterListener(bhkWaterListener *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 3);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  *(_DWORD *)this = &hkEntityListener::`vftable';
}
