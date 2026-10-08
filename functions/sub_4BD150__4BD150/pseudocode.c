_DWORD *__thiscall sub_4BD150(_DWORD *this, int a2, int *a3)
{
  int v4; // edi
  int v5; // eax
  bool v6; // zf

  *(this + 1) = 0; /*0x4bd17a*/
  *(this + 2) = 0; /*0x4bd189*/
  *this = a2; /*0x4bd190*/
  v4 = *(this + 1); /*0x4bd192*/
  if ( v4 != *a3 ) /*0x4bd19f*/
  {
    if ( v4 ) /*0x4bd1a3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 8)) ) /*0x4bd1a9*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x4bd1bf*/
    }
    v5 = *a3; /*0x4bd1c1*/
    v6 = *a3 == 0; /*0x4bd1c3*/
    *(this + 1) = *a3; /*0x4bd1c5*/
    if ( !v6 ) /*0x4bd1c8*/
      InterlockedIncrement((volatile LONG *)(v5 + 8)); /*0x4bd1ce*/
  }
  return this; /*0x4bd1d6*/
}
