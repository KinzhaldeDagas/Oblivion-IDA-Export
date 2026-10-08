void __thiscall sub_75DFF0(float *this, int a2, float a3)
{
  int v4; // esi

  v4 = *((_DWORD *)this + 3); /*0x75dff9*/
  if ( v4 != a2 ) /*0x75dffe*/
  {
    if ( v4 ) /*0x75e002*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x75e008*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x75e01e*/
    }
    *((_DWORD *)this + 3) = a2; /*0x75e022*/
    if ( a2 ) /*0x75e025*/
      InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x75e02b*/
  }
  *(this + 4) = a3; /*0x75e035*/
}
