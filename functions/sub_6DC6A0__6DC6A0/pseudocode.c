NiPathInterpolator *__thiscall sub_6DC6A0(const void **this, _DWORD **a2)
{
  NiPathInterpolator *v3; // eax
  NiPathInterpolator *v4; // esi

  v3 = (NiPathInterpolator *)FormHeapAlloc(0x5Cu); /*0x6dc6c7*/
  v4 = 0; /*0x6dc6d3*/
  if ( v3 ) /*0x6dc6db*/
    v4 = NiPathInterpolator::NiPathInterpolator(v3, 0, 0); /*0x6dc6e6*/
  sub_6DC480(this, (int)v4, a2); /*0x6dc6f8*/
  return v4; /*0x6dc6ff*/
}
