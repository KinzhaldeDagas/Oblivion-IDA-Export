int __thiscall sub_94D2E0(__m128 *this, const void **a2)
{
  __m128 *v3; // edi
  const void *v4; // edi
  signed int v5; // eax
  int v6; // eax
  _OWORD *v7; // edx
  __m128 v8; // xmm0
  int result; // eax
  int v10; // edi
  __m128 v11; // xmm0
  char *v12; // edx
  int v13; // [esp+18h] [ebp-58h]
  float v14; // [esp+1Ch] [ebp-54h]
  __m128 v15; // [esp+20h] [ebp-50h] BYREF
  __m128 v16; // [esp+30h] [ebp-40h] BYREF
  __m128 v17[3]; // [esp+40h] [ebp-30h] BYREF

  v3 = this + 6;
  v14 = (*((float *)this + 0x25) - *((float *)this + 0x24)) / (double)*((int *)this + 0x27);
  sub_8B1EB0(v17[0].m128_f32, this + 6, *((float *)this + 0x24));
  v15 = _mm_mul_ps(
          _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x26), (__m128)*((unsigned int *)this + 0x26), 0),
          *(this + 7));
  sub_88FE00(&v15, v17, &v15);
  v15 = _mm_add_ps(v15, *(this + 8));
  sub_8B1EB0(v17[0].m128_f32, v3, v14);
  v4 = (const void *)(*((_DWORD *)this + 0x27) + 2);
  v5 = (unsigned int)a2[2] & 0x3FFFFFFF;
  if ( v5 < (int)v4 )
  {
    v6 = 2 * v5;
    if ( (int)v4 >= v6 )
      v6 = *((_DWORD *)this + 0x27) + 2;
    sub_8A6E40(a2, v6, 0x10);
  }
  v7 = *a2;
  v8 = v15;
  a2[1] = v4;
  *v7 = v8;
  result = *((_DWORD *)this + 0x27);
  v10 = 0;
  if ( result >= 0 )
  {
    v11 = v15;
    v13 = 0;
    do
    {
      v16 = _mm_sub_ps(v11, *(this + 8));
      sub_88FE00(&v16, v17, &v16);
      v12 = (char *)*a2;
      v16 = _mm_add_ps(v16, *(this + 8));
      *(__m128 *)&v12[v13 + 0x10] = v16;
      v11 = v16;
      v13 += 0x10;
      result = *((_DWORD *)this + 0x27);
      ++v10;
      v15 = v16;
    }
    while ( v10 <= result );
  }
  return result;
}
