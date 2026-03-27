void __thiscall sub_8C8080(float **this, float *a2)
{
  __m128 *v4; // eax
  __m128 *v5; // eax
  __m128 *v6; // eax
  __m128 *v7; // eax
  float *v8; // ecx
  float v9; // [esp+Ch] [ebp+4h]

  sub_8AEA60(this, (int)a2);
  if ( this && (v4 = (__m128 *)*(this + 2)) != 0 )
    v5 = v4 + 2;
  else
    v5 = (__m128 *)&stru_BA7A40;
  sub_47DCD0(a2 + 4, v5);
  if ( this && (v6 = (__m128 *)*(this + 2)) != 0 )
    v7 = v6 + 3;
  else
    v7 = (__m128 *)&stru_BA7A40;
  sub_47DCD0(a2 + 8, v7);
  if ( this && (v8 = *(this + 2)) != 0 )
  {
    v9 = sub_8F2260(v8);
    a2[0xC] = v9;
  }
  else
  {
    a2[0xC] = 0.0;
  }
}
