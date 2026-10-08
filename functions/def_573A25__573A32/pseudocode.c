int __userpurge def_573A25@<eax>(
        unsigned __int8 a1@<al>,
        int a2@<edx>,
        int a3@<ebx>,
        float *_EBP@<ebp>,
        int _EDI@<edi>,
        float *_ESI@<esi>,
        double a7@<st1>,
        double a8@<st0>,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        char a14,
        float a15,
        int a16,
        int a17,
        float a18,
        char a19)
{
  double v19; // st7
  _BYTE *v20; // ebx
  double v21; // st5
  int result; // eax
  float v23; // [esp+20h] [ebp+20h]

  if ( a1 == 9 ) /*0x573a66*/
  {
    v19 = *_ESI; /*0x573a6c*/
    unknown_libname_14(a7, v19); /*0x573a6e*/
    v23 = v19; /*0x573a73*/
    a2 = a17; /*0x573a7b*/
    a7 = dbl_A68950; /*0x573a7f*/
    *_ESI = a7 - v23 + *_ESI; /*0x573a8f*/
    a8 = 0.0; /*0x573a93*/
  }
  else
  {
    *_ESI = *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x154) /*0x573a60*/
          + *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x14C)
          + *(float *)(*(_DWORD *)(_EDI + 0x38) + 0x38 * a1 + 0x158)
          + *_ESI;
  }
  v20 = (_BYTE *)(a3 + 1); /*0x573a95*/
  if ( *v20 == 0xA ) /*0x573a9b*/
  {
    if ( a15 < (double)*_ESI ) /*0x573aaa*/
      a15 = *_ESI; /*0x573aae*/
    if ( a19 ) /*0x573ab7*/
      v21 = **(float **)(_EDI + 0x38) + *_EBP; /*0x573abe*/
    else
      v21 = *_EBP + *(float *)(_EDI + 0x2C); /*0x573ac6*/
    *_EBP = v21; /*0x573acc*/
    if ( a2 == 0xFFFFFFFE ) /*0x573acf*/
      goto LABEL_24; /*0x573acf*/
    ++a12; /*0x573ad5*/
    *_ESI = a8; /*0x573adc*/
  }
  if ( a8 == a18 ) /*0x573aeb*/
    goto LABEL_25; /*0x573aeb*/
  if ( !*v20 ) /*0x573af5*/
LABEL_24:
    JUMPOUT(0x573BC5); /*0x573bc5*/
  if ( !a2 ) /*0x573afd*/
LABEL_25:
    JUMPOUT(0x573BBC); /*0x573bbc*/
  switch ( *v20 ) /*0x573b11*/
  {
    case 0x91: /*0x573b11*/
    case 0x92: /*0x573b11*/
      result = def_573B11(0x27u, a2, v20, _EBP, _EDI, _ESI, a7, a8, a9, a10, a11, a12, a13, a14, a15); /*0x573b1a*/
      break; /*0x573b1a*/
    case 0x93: /*0x573b11*/
    case 0x94: /*0x573b11*/
      result = def_573B11(0x22u, a2, v20, _EBP, _EDI, _ESI, a7, a8, a9, a10, a11, a12, a13, a14, a15); /*0x573b1d*/
      break; /*0x573b1d*/
    default:
      JUMPOUT(0x573B1E); /*0x573b1e*/
  }
  return result;
}
