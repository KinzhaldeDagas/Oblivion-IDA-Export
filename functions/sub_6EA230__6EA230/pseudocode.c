int sub_6EA230()
{
  int v0; // esi
  int result; // eax

  v0 = FormHeapAlloc(0x40u); /*0x6ea259*/
  result = 0; /*0x6ea262*/
  if ( v0 ) /*0x6ea26a*/
  {
    sub_6CC4E0((NiObject *)v0); /*0x6ea26e*/
    *(_DWORD *)v0 = &NiBlendQuaternionInterpolator::`vftable'; /*0x6ea273*/
    *(float *)(v0 + 0x30) = flt_B3EBA0[0]; /*0x6ea27e*/
    *(float *)(v0 + 0x34) = flt_B3EBA0[1]; /*0x6ea287*/
    *(float *)(v0 + 0x38) = flt_B3EBA0[2]; /*0x6ea290*/
    *(float *)(v0 + 0x3C) = flt_B3EBA0[3]; /*0x6ea298*/
    return v0; /*0x6ea29b*/
  }
  return result; /*0x6ea29d*/
}
