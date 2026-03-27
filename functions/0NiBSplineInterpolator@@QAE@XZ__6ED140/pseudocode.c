NiBSplineInterpolator *__thiscall NiBSplineInterpolator::NiBSplineInterpolator(
        NiBSplineInterpolator *this,
        int a2,
        int a3)
{
  void (__stdcall *v4)(volatile LONG *); // edi

  sub_6EBA00((NiObject *)this);
  v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement;
  *(_DWORD *)this = &NiBSplineInterpolator::`vftable';
  *((float *)this + 3) = flt_A7DEB4;
  *((float *)this + 4) = -flt_A7DEB4;
  *((_DWORD *)this + 5) = a2;
  if ( a2 )
    v4((volatile LONG *)(a2 + 4));
  *((_DWORD *)this + 6) = a3;
  if ( a3 )
    v4((volatile LONG *)(a3 + 4));
  return this;
}
