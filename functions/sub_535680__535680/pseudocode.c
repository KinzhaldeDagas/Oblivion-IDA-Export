void __thiscall sub_535680(hkAllCdPointCollector *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  v2 = *((_DWORD *)this + 0x68); /*0x5356aa*/
  v3 = InterlockedDecrement; /*0x5356b2*/
  if ( v2 ) /*0x5356c0*/
  {
    if ( !v3((volatile LONG *)(v2 + 4)) ) /*0x5356c6*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x5356d8*/
    *((_DWORD *)this + 0x68) = 0; /*0x5356da*/
  }
  v4 = *((_DWORD *)this + 0x68); /*0x5356e4*/
  if ( v4 ) /*0x5356f1*/
  {
    if ( !v3((volatile LONG *)(v4 + 4)) ) /*0x5356f7*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x535709*/
  }
  hkAllCdPointCollector::~hkAllCdPointCollector(this); /*0x535715*/
}
