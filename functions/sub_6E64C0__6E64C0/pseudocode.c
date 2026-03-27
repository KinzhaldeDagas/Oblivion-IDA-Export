NiBSplineInterpolator *__thiscall sub_6E64C0(float *this, _DWORD **a2)
{
  NiBSplineInterpolator *v3; // eax
  NiBSplineInterpolator *v4; // esi

  v3 = (NiBSplineInterpolator *)FormHeapAlloc(0x3Cu);
  v4 = v3;
  if ( v3 )
  {
    sub_6E66C0(v3, 0, 0xFFFF, 0);
    *(_DWORD *)v4 = &NiBSplineCompColorInterpolator::`vftable';
    *((float *)v4 + 0xD) = flt_A7DEB4;
    *((float *)v4 + 0xE) = flt_A7DEB4;
  }
  else
  {
    v4 = 0;
  }
  sub_6E67A0(this, v4, a2);
  *((float *)v4 + 0xD) = *(this + 0xD);
  *((float *)v4 + 0xE) = *(this + 0xE);
  return v4;
}
