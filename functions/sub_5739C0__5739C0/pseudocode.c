int __thiscall sub_5739C0(
        float *this,
        int a2,
        float *a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        float a8,
        int a9,
        int a10,
        int a11,
        char a12)
{
  _BYTE *v13; // eax
  double v14; // st6
  int v15; // edx
  int result; // eax
  int v17; // [esp+18h] [ebp+8h]

  *a3 = 0.0; /*0x5739d1*/
  *a4 = *(this + 0xB); /*0x5739dd*/
  v13 = (_BYTE *)(a2 + LODWORD(a8)); /*0x5739e0*/
  *(float *)&v17 = 0.0; /*0x5739e5*/
  if ( !*(_BYTE *)(a2 + LODWORD(a8)) ) /*0x5739f1*/
    JUMPOUT(0x573BC8); /*0x573bc8*/
  v14 = dbl_A68950; /*0x5739f7*/
  v15 = a5; /*0x573a00*/
  if ( !a5 ) /*0x573a06*/
    JUMPOUT(0x573BC5); /*0x573bc5*/
  if ( a5 > 0 ) /*0x573a0c*/
    v15 = --a5; /*0x573a0e*/
  switch ( *v13 ) /*0x573a25*/
  {
    case 0x91: /*0x573a25*/
    case 0x92: /*0x573a25*/
      result = def_573A25( /*0x573a2e*/
                 0x27u,
                 v15,
                 (int)v13,
                 a4,
                 (int)this,
                 a3,
                 v14,
                 0.0,
                 a2,
                 v17,
                 (int)a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12);
      break; /*0x573a2e*/
    case 0x93: /*0x573a25*/
    case 0x94: /*0x573a25*/
      result = def_573A25( /*0x573a31*/
                 0x22u,
                 v15,
                 (int)v13,
                 a4,
                 (int)this,
                 a3,
                 v14,
                 0.0,
                 a2,
                 v17,
                 (int)a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12);
      break; /*0x573a31*/
    default:
      JUMPOUT(0x573A32); /*0x573a32*/
  }
  return result;
}
