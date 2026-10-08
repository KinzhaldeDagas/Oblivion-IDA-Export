int __thiscall sub_72FDF0(float *this)
{
  int result; // eax
  double v2; // st7
  double v3; // st6
  double v4; // st5
  double v5; // st4
  double v6; // st7
  double v7; // st7
  double v8; // st6
  double v9; // rtt
  double v10; // st4
  float v11; // [esp+4h] [ebp-8h]
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+4h] [ebp-8h]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]
  float v16; // [esp+8h] [ebp-4h]
  float v17; // [esp+8h] [ebp-4h]
  float v18; // [esp+8h] [ebp-4h]

  v15 = cos(*(this + 2)); /*0x72fdfe*/
  v11 = sin(*(this + 2)); /*0x72fe12*/
  result = *((_DWORD *)this + 0x11); /*0x72fe16*/
  if ( !result ) /*0x72fe25*/
  {
    v7 = v11; /*0x72fead*/
    v13 = *(this + 3) * v11; /*0x72feaf*/
    v8 = v15; /*0x72febe*/
    *(this + 8) = *(this + 3) * v15; /*0x72fec0*/
    *(this + 0xB) = v13; /*0x72fec7*/
    *(this + 0xE) = 0.0; /*0x72fecc*/
    v14 = *(this + 4) * v15; /*0x72fed4*/
    v18 = -v7; /*0x72fedc*/
    *(this + 9) = v18 * *(this + 4); /*0x72fee9*/
    *(this + 0xC) = v14; /*0x72fef0*/
    v9 = v18; /*0x72fef3*/
    *(this + 0xF) = 0.0; /*0x72fef5*/
    v10 = *(this + 1) - *(this + 6); /*0x72fefb*/
    v17 = v8 * v10 + v7 * (*this - *(this + 5)) + *(this + 6); /*0x72ff14*/
    v6 = (*this - *(this + 5)) * v8 + v9 * v10; /*0x72ff1e*/
    goto LABEL_5; /*0x72ff1e*/
  }
  if ( !--result ) /*0x72fe2a*/
  {
    v2 = v11; /*0x72fe30*/
    v12 = -v11 * *(this + 4); /*0x72fe3b*/
    v3 = v15; /*0x72fe4a*/
    *(this + 8) = *(this + 3) * v15; /*0x72fe4c*/
    *(this + 0xB) = v12; /*0x72fe53*/
    *(this + 0xE) = 0.0; /*0x72fe58*/
    v16 = *(this + 4) * v15; /*0x72fe60*/
    *(this + 9) = *(this + 3) * v2; /*0x72fe69*/
    *(this + 0xC) = v16; /*0x72fe70*/
    *(this + 0xF) = 0.0; /*0x72fe73*/
    v4 = *(this + 1) - *(this + 6); /*0x72fe79*/
    v5 = -*(this + 5) - *this; /*0x72fe81*/
    v17 = (v3 * v4 - v2 * v5) * *(this + 4) + *(this + 6); /*0x72fe93*/
    v6 = (v2 * v4 + v3 * v5) * *(this + 3); /*0x72fe9d*/
LABEL_5:
    *(this + 0xA) = v6 + *(this + 5); /*0x72ff20*/
    *(this + 0xD) = v17; /*0x72ff2a*/
    *(this + 0x10) = 1.0; /*0x72ff2f*/
  }
  *((_BYTE *)this + 0x1C) = 0; /*0x72ff32*/
  return result; /*0x72ff35*/
}
