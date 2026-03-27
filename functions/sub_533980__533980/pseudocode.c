void __thiscall sub_533980(hkAllCdPointCollector *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 0x68);
  if ( v2 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  hkAllCdPointCollector::~hkAllCdPointCollector(this);
}
