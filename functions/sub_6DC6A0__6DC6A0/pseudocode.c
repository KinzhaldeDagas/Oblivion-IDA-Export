NiPathInterpolator *__thiscall sub_6DC6A0(void *this, int a2)
{
  NiPathInterpolator *v3; // eax
  NiPathInterpolator *v4; // esi

  v3 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu);
  v4 = 0;
  if ( v3 )
    v4 = NiPathInterpolator::NiPathInterpolator(v3, 0, 0);
  sub_6DC480(this, (int)v4, a2);
  return v4;
}
