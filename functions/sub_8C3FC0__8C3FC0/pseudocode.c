int __thiscall sub_8C3FC0(__m128 **this, _BYTE *a2)
{
  float *v3; // eax
  __m128 *v4; // eax
  bool v5; // zf

  if ( *(this + 3) ) /*0x8c3fc3*/
  {
    *a2 = 0; /*0x8c4005*/
    return (int)*(this + 3); /*0x8c4008*/
  }
  else
  {
    v3 = (float *)FormHeapAlloc(0x40u); /*0x8c3fcb*/
    if ( v3 ) /*0x8c3fd5*/
      v4 = (__m128 *)sub_8C3F40(v3); /*0x8c3fd9*/
    else
      v4 = 0; /*0x8c3fe0*/
    v5 = *(this + 2) == 0; /*0x8c3fe2*/
    *(this + 3) = v4; /*0x8c3fe6*/
    if ( !v5 ) /*0x8c3fe9*/
      sub_8C3CD0(this, v4->m128_f32); /*0x8c3fee*/
    *a2 = 1; /*0x8c3ff7*/
    return (int)*(this + 3); /*0x8c3ffa*/
  }
}
