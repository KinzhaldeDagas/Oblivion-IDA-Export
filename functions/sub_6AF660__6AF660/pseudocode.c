_DWORD *__thiscall sub_6AF660(_DWORD *this)
{
  int v2; // edi
  _DWORD *v3; // eax
  int i; // eax
  int v5; // ecx
  int v6; // edx
  _DWORD *v7; // ecx
  int v8; // edx

  v2 = 1; /*0x6af669*/
  *this = 0; /*0x6af66e*/
  *(this + 1) = 0; /*0x6af674*/
  *(this + 2) = 0; /*0x6af67b*/
  *(this + 3) = FormHeapAlloc(0x4000u); /*0x6af68c*/
  *(this + 4) = 8; /*0x6af68f*/
  v3 = (_DWORD *)FormHeapAlloc(0x80u); /*0x6af696*/
  *(this + 5) = v3; /*0x6af69b*/
  *v3 = 0; /*0x6af69e*/
  for ( i = 4; i < 0x80; i += 4 ) /*0x6af6a7*/
  {
    v5 = *(this + 5); /*0x6af6b0*/
    v6 = *(_DWORD *)(v5 + i - 4); /*0x6af6b3*/
    v7 = (_DWORD *)(i + v5); /*0x6af6b7*/
    v8 = v2 + v6; /*0x6af6b9*/
    v2 *= 2; /*0x6af6be*/
    *v7 = v8; /*0x6af6c5*/
  }
  return this; /*0x6af6c9*/
}
