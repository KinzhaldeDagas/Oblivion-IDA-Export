void __thiscall bhkWaterListener::~bhkWaterListener(bhkWaterListener *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 3); /*0x4cd289*/
  if ( v2 ) /*0x4cd296*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x4cd29c*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x4cd2b2*/
  }
  *(_DWORD *)this = &hkEntityListener::`vftable'; /*0x4cd2b4*/
}
