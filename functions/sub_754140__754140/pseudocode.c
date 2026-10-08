int __thiscall sub_754140(const char **this, _DWORD **a2)
{
  NiObject *v3; // eax
  int v4; // esi
  int result; // eax
  float v6; // [esp+Ch] [ebp+4h]

  v3 = (NiObject *)FormHeapAlloc(0x3Cu); /*0x754146*/
  v4 = (int)v3; /*0x75414b*/
  if ( v3 ) /*0x754152*/
  {
    sub_75E800(v3); /*0x754156*/
    *(float *)(v4 + 0x30) = 0.0; /*0x75415d*/
    *(_DWORD *)v4 = &NiPSysTurbulenceFieldModifier::`vftable'; /*0x754160*/
    *(float *)(v4 + 0x38) = -flt_A7DEB4; /*0x75416e*/
    *(float *)(v4 + 0x34) = flt_A5A04C; /*0x754177*/
  }
  else
  {
    v4 = 0; /*0x75417c*/
  }
  sub_75E830(this, v4, a2); /*0x754186*/
  v6 = *((float *)this + 0xC); /*0x75418e*/
  *(float *)(v4 + 0x30) = v6; /*0x754196*/
  result = v4; /*0x7541a4*/
  if ( v6 >= dbl_A68FE0 ) /*0x7541a6*/
    *(float *)(v4 + 0x34) = 1.0 / v6; /*0x7541bd*/
  else
    *(float *)(v4 + 0x34) = flt_A5A04C; /*0x7541b1*/
  return result; /*0x7541b4*/
}
