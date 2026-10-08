float *__thiscall sub_6EA700(float *this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi

  v3 = (NiObject *)FormHeapAlloc(0x40u); /*0x6ea727*/
  v4 = (int)v3; /*0x6ea72c*/
  if ( v3 ) /*0x6ea73f*/
  {
    sub_6CC4E0(v3); /*0x6ea743*/
    *(_DWORD *)v4 = &NiBlendQuaternionInterpolator::`vftable'; /*0x6ea748*/
    *(float *)(v4 + 0x30) = flt_B3EBA0[0]; /*0x6ea753*/
    *(float *)(v4 + 0x34) = flt_B3EBA0[1]; /*0x6ea75c*/
    *(float *)(v4 + 0x38) = flt_B3EBA0[2]; /*0x6ea765*/
    *(float *)(v4 + 0x3C) = flt_B3EBA0[3]; /*0x6ea76d*/
  }
  else
  {
    v4 = 0; /*0x6ea772*/
  }
  sub_6CD3D0(this, v4, a2); /*0x6ea784*/
  *(float *)(v4 + 0x30) = *(this + 0xC); /*0x6ea78f*/
  *(float *)(v4 + 0x34) = *(this + 0xD); /*0x6ea795*/
  *(float *)(v4 + 0x38) = *(this + 0xE); /*0x6ea79b*/
  *(float *)(v4 + 0x3C) = *(this + 0xF); /*0x6ea7a1*/
  return (float *)v4; /*0x6ea7a6*/
}
