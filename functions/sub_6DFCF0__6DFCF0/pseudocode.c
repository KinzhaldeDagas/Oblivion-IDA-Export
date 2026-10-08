NiLookAtInterpolator *__thiscall sub_6DFCF0(_WORD *this, _DWORD **a2)
{
  NiLookAtInterpolator *v3; // eax
  NiLookAtInterpolator *v4; // esi

  v3 = (NiLookAtInterpolator *)FormHeapAlloc(0x44u); /*0x6dfd17*/
  v4 = 0; /*0x6dfd23*/
  if ( v3 ) /*0x6dfd2b*/
    v4 = NiLookAtInterpolator::NiLookAtInterpolator(v3, 0, 0, 0); /*0x6dfd37*/
  sub_6DF950(this, (int)v4, a2); /*0x6dfd49*/
  return v4; /*0x6dfd50*/
}
