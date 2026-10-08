NiBSplineInterpolator *__thiscall NiBSplineInterpolator::NiBSplineInterpolator(
        NiBSplineInterpolator *this,
        int a2,
        int a3)
{
  void (__stdcall *v4)(volatile LONG *); // edi

  sub_6EBA00((NiObject *)this); /*0x6ed144*/
  v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x6ed14f*/
  *(_DWORD *)this = &NiBSplineInterpolator::`vftable'; /*0x6ed155*/
  *((float *)this + 3) = flt_A7DEB4; /*0x6ed161*/
  *((float *)this + 4) = -flt_A7DEB4; /*0x6ed16c*/
  *((_DWORD *)this + 5) = a2; /*0x6ed16f*/
  if ( a2 ) /*0x6ed172*/
    v4((volatile LONG *)(a2 + 4)); /*0x6ed178*/
  *((_DWORD *)this + 6) = a3; /*0x6ed180*/
  if ( a3 ) /*0x6ed183*/
    v4((volatile LONG *)(a3 + 4)); /*0x6ed189*/
  return this; /*0x6ed18b*/
}
