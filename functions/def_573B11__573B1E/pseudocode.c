// positive sp value has been detected, the output may be wrong!
int __userpurge def_573B11@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<edx>,
        _BYTE *a3@<ebx>,
        float *_EBP@<ebp>,
        int _EDI@<edi>,
        float *_ESI@<esi>,
        double a7@<st1>,
        double a8@<st0>,
        int a9,
        float a10,
        int a11,
        int a12,
        float a13,
        char a14,
        float a15)
{
  double v15; // st7
  double v16; // st5
  int result; // eax
  int v18; // [esp-4h] [ebp-4h]
  float v19; // [esp+Ch] [ebp+Ch]
  float v20; // [esp+Ch] [ebp+Ch]

  if ( a1 == 9 ) /*0x573b52*/
  {
    v15 = *_ESI; /*0x573b58*/
    unknown_libname_14(a7, v15); /*0x573b5a*/
    v20 = v15; /*0x573b5f*/
    a2 = a12; /*0x573b67*/
    v19 = dbl_A68950 - v20; /*0x573b77*/
    a8 = 0.0; /*0x573b7d*/
  }
  else
  {
    v19 = *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x154) /*0x573b4a*/
        + *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x14C)
        + *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x158);
  }
  if ( a13 >= *_ESI + v19 ) /*0x573b90*/
    goto LABEL_11; /*0x573b90*/
  if ( a14 ) /*0x573b97*/
    v16 = **(float **)(_EDI + 0x38) + *_EBP; /*0x573b9e*/
  else
    v16 = *_EBP + *(float *)(_EDI + 0x2C); /*0x573ba6*/
  *_EBP = v16; /*0x573bac*/
  if ( a2 != 0xFFFFFFFE ) /*0x573baf*/
  {
    ++v18; /*0x573bb1*/
    *_ESI = a8; /*0x573bb8*/
LABEL_11:
    if ( *a3 ) /*0x573bbc*/
      JUMPOUT(0x573A00); /*0x573a00*/
  }
  result = v18; /*0x573bc5*/
  if ( *_ESI < (double)a10 ) /*0x573bdb*/
    *_ESI = a10; /*0x573bde*/
  return result; /*0x573be3*/
}
