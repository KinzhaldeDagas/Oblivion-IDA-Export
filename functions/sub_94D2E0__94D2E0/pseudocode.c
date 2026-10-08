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

  v3 = this + 6; /*0x94d307*/
  v14 = (*((float *)this + 0x25) - *((float *)this + 0x24)) / (double)*((int *)this + 0x27); /*0x94d30f*/
  sub_8B1EB0(v17[0].m128_f32, this + 6, *((float *)this + 0x24)); /*0x94d313*/
  v15 = _mm_mul_ps( /*0x94d344*/
          _mm_shuffle_ps((__m128)*((unsigned int *)this + 0x26), (__m128)*((unsigned int *)this + 0x26), 0),
          *(this + 7));
  hkBasis_TransformVector(&v15, v17, &v15); /*0x94d349*/
  v15 = _mm_add_ps(v15, *(this + 8)); /*0x94d367*/
  sub_8B1EB0(v17[0].m128_f32, v3, v14); /*0x94d36c*/
  v4 = (const void *)(*((_DWORD *)this + 0x27) + 2); /*0x94d37d*/
  v5 = (unsigned int)a2[2] & 0x3FFFFFFF; /*0x94d380*/
  if ( v5 < (int)v4 ) /*0x94d387*/
  {
    v6 = 2 * v5; /*0x94d389*/
    if ( (int)v4 >= v6 ) /*0x94d38d*/
      v6 = *((_DWORD *)this + 0x27) + 2; /*0x94d38f*/
    sub_8A6E40(a2, v6, 0x10); /*0x94d395*/
  }
  v7 = *a2; /*0x94d39d*/
  v8 = v15; /*0x94d39f*/
  a2[1] = v4; /*0x94d3a4*/
  *v7 = v8; /*0x94d3a7*/
  result = *((_DWORD *)this + 0x27); /*0x94d3aa*/
  v10 = 0; /*0x94d3b0*/
  if ( result >= 0 ) /*0x94d3b4*/
  {
    v11 = v15; /*0x94d3b6*/
    v13 = 0; /*0x94d3bb*/
    do /*0x94d41b*/
    {
      v16 = _mm_sub_ps(v11, *(this + 8)); /*0x94d3d8*/
      hkBasis_TransformVector(&v16, v17, &v16); /*0x94d3dd*/
      v12 = (char *)*a2; /*0x94d3f2*/
      v16 = _mm_add_ps(v16, *(this + 8)); /*0x94d3f7*/
      *(__m128 *)&v12[v13 + 0x10] = v16; /*0x94d3fc*/
      v11 = v16; /*0x94d401*/
      v13 += 0x10; /*0x94d409*/
      result = *((_DWORD *)this + 0x27); /*0x94d40d*/
      ++v10; /*0x94d413*/
      v15 = v16; /*0x94d416*/
    }
    while ( v10 <= result ); /*0x94d41b*/
  }
  return result; /*0x94d41d*/
}
