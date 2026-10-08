void __thiscall sub_8C8080(__m128 **this, float *a2)
{
  __m128 *v4; // eax
  __m128 *v5; // eax
  __m128 *v6; // eax
  __m128 *v7; // eax
  float *v8; // ecx
  float v9; // [esp+Ch] [ebp+4h]

  sub_8AEA60(this, (int)a2); /*0x8c8089*/
  if ( this && (v4 = *(this + 2)) != 0 ) /*0x8c8097*/
    v5 = v4 + 2; /*0x8c8099*/
  else
    v5 = (__m128 *)&unk_BA7A40; /*0x8c809e*/
  sub_47DCD0(a2 + 4, v5); /*0x8c80a7*/
  if ( this && (v6 = *(this + 2)) != 0 ) /*0x8c80b5*/
    v7 = v6 + 3; /*0x8c80b7*/
  else
    v7 = (__m128 *)&unk_BA7A40; /*0x8c80bc*/
  sub_47DCD0(a2 + 8, v7); /*0x8c80c5*/
  if ( this && (v8 = (float *)*(this + 2)) != 0 ) /*0x8c80d3*/
  {
    v9 = sub_8F2260(v8); /*0x8c80da*/
    a2[0xC] = v9; /*0x8c80e2*/
  }
  else
  {
    a2[0xC] = 0.0; /*0x8c80f4*/
  }
}
