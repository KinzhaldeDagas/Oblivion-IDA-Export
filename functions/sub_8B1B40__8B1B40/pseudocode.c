void __thiscall sub_8B1B40(float *this, float *a2)
{
  double v2; // st7
  long double v3; // st7
  long double v4; // st6
  double v5; // st7
  bool v6; // c0
  bool v7; // c3
  int v8; // esi
  int v9; // eax
  int v10; // edi
  long double v11; // st6
  long double v12; // st7
  _DWORD v13[3]; // [esp+4h] [ebp-Ch]

  v2 = a2[5] + *a2 + a2[0xA]; /*0x8b1b4f*/
  if ( v2 <= *(float *)&SrcStr ) /*0x8b1b5d*/
  {
    v5 = a2[5]; /*0x8b1ba3*/
    v6 = v5 < *a2; /*0x8b1ba7*/
    v7 = v5 == *a2; /*0x8b1ba7*/
    v13[0] = 1; /*0x8b1bad*/
    v13[1] = 2; /*0x8b1bb7*/
    v13[2] = 0; /*0x8b1bbf*/
    v8 = !v6 && !v7; /*0x8b1bc8*/
    if ( a2[0xA] > (double)a2[5 * v8] ) /*0x8b1bdb*/
      v8 = 2; /*0x8b1bdd*/
    v9 = v13[v8]; /*0x8b1be2*/
    v10 = v13[v9]; /*0x8b1be6*/
    v11 = sqrt(a2[5 * v8] - (a2[5 * v10] + a2[5 * v9]) + fConstant_1); /*0x8b1c16*/
    v12 = kHeadBodyNormalMatchRadius / v11; /*0x8b1c16*/
    *(this + v8) = v11 * kHeadBodyNormalMatchRadius; /*0x8b1c1e*/
    *(this + 3) = (a2[4 * v9 + v10] - a2[4 * v10 + v9]) * v12; /*0x8b1c2f*/
    *(this + v9) = (a2[4 * v9 + v8] + a2[4 * v8 + v9]) * v12; /*0x8b1c3a*/
    *(this + v10) = (a2[4 * v10 + v8] + a2[4 * v8 + v10]) * v12; /*0x8b1c4b*/
  }
  else
  {
    v3 = sqrt(v2 + fConstant_1); /*0x8b1b65*/
    v4 = kHeadBodyNormalMatchRadius / v3; /*0x8b1b6d*/
    *this = (a2[6] - a2[9]) * v4; /*0x8b1b77*/
    *(this + 1) = (a2[8] - a2[2]) * v4; /*0x8b1b81*/
    *(this + 2) = (a2[1] - a2[4]) * v4; /*0x8b1b8c*/
    *(this + 3) = v3 * kHeadBodyNormalMatchRadius; /*0x8b1b97*/
  }
}
