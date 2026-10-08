void __thiscall sub_533980(hkAllCdPointCollector *this)
{
  int v2; // esi

  v2 = *((_DWORD *)this + 0x68); /*0x5339a9*/
  if ( v2 ) /*0x5339b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x5339bf*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x5339d5*/
  }
  hkAllCdPointCollector::~hkAllCdPointCollector(this); /*0x5339e1*/
}
