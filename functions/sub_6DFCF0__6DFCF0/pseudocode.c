NiLookAtInterpolator *__thiscall sub_6DFCF0(_WORD *this, _DWORD **a2)
{
  NiLookAtInterpolator *v3; // eax
  NiLookAtInterpolator *v4; // esi

  v3 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u);
  v4 = 0;
  if ( v3 )
    v4 = NiLookAtInterpolator::NiLookAtInterpolator(v3, 0, 0, 0);
  sub_6DF950(this, (int)v4, a2);
  return v4;
}
