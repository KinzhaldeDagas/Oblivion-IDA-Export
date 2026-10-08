char __thiscall sub_7809C0(_BYTE *this, int a2)
{
  float *v3; // ecx
  int v4; // eax
  char result; // al
  int v6; // ecx

  v3 = *(float **)(a2 + 0x58); /*0x7809c8*/
  if ( !v3 ) /*0x7809cd*/
  {
    v4 = FormHeapAlloc(0x48u); /*0x7809d1*/
    if ( v4 ) /*0x7809dd*/
    {
      *(_DWORD *)(v4 + 0x44) = 0; /*0x7809e0*/
      sub_7808C0((float *)v4, a2); /*0x7809e7*/
    }
    else
    {
      v3 = 0; /*0x7809ee*/
    }
    *(_DWORD *)(a2 + 0x58) = v3; /*0x7809f0*/
    *(this + 4) = 1; /*0x7809f3*/
  }
  result = sub_7808C0(v3, a2); /*0x7809f8*/
  if ( result ) /*0x7809ff*/
    *(this + 4) = 1; /*0x780a01*/
  if ( v6 != *(_DWORD *)this ) /*0x780a07*/
  {
    *(this + 4) = 1; /*0x780a09*/
    *(_DWORD *)this = v6; /*0x780a0d*/
  }
  return result; /*0x780a0f*/
}
