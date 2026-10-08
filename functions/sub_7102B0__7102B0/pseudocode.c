char __thiscall sub_7102B0(float *this, float *a2)
{
  float *v2; // edx
  double v3; // st7
  float *v5; // eax
  int v6; // ecx
  double v7; // st7
  double v8; // st6
  float v9; // [esp+4h] [ebp+4h]
  float v10; // [esp+4h] [ebp+4h]
  float v11; // [esp+4h] [ebp+4h]

  v2 = a2 + 2; /*0x7102ba*/
  *a2 = *(this + 8) * *(this + 4) - *(this + 7) * *(this + 5); /*0x7102c5*/
  a2[1] = *(this + 7) * *(this + 2) - *(this + 1) * *(this + 8); /*0x7102d5*/
  a2[2] = *(this + 1) * *(this + 5) - *(this + 2) * *(this + 4); /*0x7102e6*/
  a2[3] = *(this + 6) * *(this + 5) - *(this + 3) * *(this + 8); /*0x7102f6*/
  a2[4] = *this * *(this + 8) - *(this + 6) * *(this + 2); /*0x710306*/
  a2[5] = *(this + 3) * *(this + 2) - *(this + 5) * *this; /*0x710316*/
  a2[6] = *(this + 3) * *(this + 7) - *(this + 6) * *(this + 4); /*0x710327*/
  a2[7] = *(this + 1) * *(this + 6) - *(this + 7) * *this; /*0x710337*/
  a2[8] = *this * *(this + 4) - *(this + 3) * *(this + 1); /*0x710347*/
  v9 = *a2 * *this + *(this + 1) * a2[3] + a2[6] * *(this + 2); /*0x71035e*/
  v3 = v9; /*0x710362*/
  v10 = fabs(v9); /*0x71036a*/
  if ( v10 <= (double)flt_A372CC ) /*0x71037d*/
    return 0; /*0x71037f*/
  v5 = v2; /*0x710388*/
  v6 = 3; /*0x71038c*/
  v11 = 1.0 / v3; /*0x710391*/
  v7 = v11; /*0x710395*/
  do /*0x7103b7*/
  {
    v8 = v5[0xFFFFFFFE]; /*0x710399*/
    v5 += 3; /*0x71039c*/
    --v6; /*0x71039f*/
    v5[0xFFFFFFFB] = v8 * v7; /*0x7103a4*/
    v5[0xFFFFFFFC] = v5[0xFFFFFFFC] * v7; /*0x7103ac*/
    v5[0xFFFFFFFD] = v5[0xFFFFFFFD] * v7; /*0x7103b4*/
  }
  while ( v6 ); /*0x7103b7*/
  return 1; /*0x710383*/
}
