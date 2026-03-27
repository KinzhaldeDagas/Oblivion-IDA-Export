int __thiscall sub_93C350(_DWORD *this, int a2, int a3, __m128 *a4)
{
  int v5; // eax
  int v6; // edx
  __m128 *v7; // ecx
  __m128 *v8; // eax
  int result; // eax
  __int128 v10; // xmm0
  unsigned int v11; // eax
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  int v17; // eax
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  int v22; // ecx
  __m128 *v23; // eax
  __m128 v24; // xmm0
  __int128 v25; // xmm0
  int v26; // [esp+Ch] [ebp-94h] BYREF
  __m128 v27; // [esp+10h] [ebp-90h] BYREF
  __m128 v28; // [esp+20h] [ebp-80h] BYREF
  _OWORD v29[3]; // [esp+30h] [ebp-70h] BYREF
  int v30[16]; // [esp+60h] [ebp-40h] BYREF

  v5 = *(this + 1);
  v6 = 4;
  v26 = 4;
  if ( v5 < 3 )
  {
    if ( (int)*this < 3 )
    {
      v6 = 1;
      v26 = 1;
    }
    else
    {
      if ( (int)*this <= 3 )
      {
        if ( v5 <= 1 )
        {
          v6 = 3;
          v26 = 3;
        }
        else
        {
          *((_OWORD *)this + 5) = *((_OWORD *)this + 2);
          *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xF);
          *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xB);
        }
      }
      else
      {
        *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xE);
        *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xA);
      }
      *((_OWORD *)this + 0xF) = *((_OWORD *)this + 0xE);
      *((_OWORD *)this + 0xB) = *((_OWORD *)this + 0xA);
      *((_OWORD *)this + 0x10) = *((_OWORD *)this + 0xE);
      *((_OWORD *)this + 0xC) = *((_OWORD *)this + 0xA);
    }
  }
  else
  {
    if ( v5 <= 3 )
    {
      if ( (int)*this <= 1 )
      {
        v6 = 3;
        v26 = 3;
      }
      else
      {
        *((_OWORD *)this + 5) = *((_OWORD *)this + 3);
        *((_OWORD *)this + 0x11) = *((_OWORD *)this + 0xE);
        *((_OWORD *)this + 0xD) = *((_OWORD *)this + 0xA);
      }
    }
    else
    {
      *((_OWORD *)this + 5) = *((_OWORD *)this + 2);
    }
    *((_OWORD *)this + 3) = *((_OWORD *)this + 2);
    *((_OWORD *)this + 4) = *((_OWORD *)this + 2);
  }
  v7 = (__m128 *)v30;
  v8 = (__m128 *)(this + 8);
  do
  {
    *v7 = _mm_sub_ps(*v8, v8[8]);
    ++v8;
    ++v7;
    --v6;
  }
  while ( v6 );
  sub_952B90(a2, a3, (int)a4, 0.000099999997, (int)(this + 8), (int)(this + 0x38), (int)v30, (int)&v26, (int)v29);
  result = 1;
  if ( v26 == 1 )
  {
    v10 = v29[0];
    *(this + 1) = 1;
    *this = 1;
    *(this + 5) = 1;
    *((_OWORD *)this + 0x12) = v10;
  }
  else
  {
    v11 = *(this + 0x13) & 0xC0FFFFFF;
    v12 = *(this + 0xF) & 0xC0FFFFFF;
    *(this + 1) = 3;
    *this = 3;
    if ( v12 == v11 || (*(this + 0xB) & 0xC0FFFFFF) == v11 )
      *this = 2;
    if ( (*(this + 0xB) & 0xC0FFFFFF) == v12 )
    {
      v13 = --*this + 2;
      *((_OWORD *)this + 2) = *((_OWORD *)this + v13);
    }
    v14 = *(this + 0x43) & 0xC0FFFFFF;
    v15 = *(this + 0x3F) & 0xC0FFFFFF;
    if ( v15 == v14 || (*(this + 0x3B) & 0xC0FFFFFF) == v14 )
      --*(this + 1);
    v16 = *(this + 1);
    if ( v16 >= 2 && (*(this + 0x3B) & 0xC0FFFFFF) == v15 )
    {
      v17 = v16 - 1;
      *(this + 1) = v17;
      *((_OWORD *)this + 0xE) = *((_OWORD *)this + v17 + 0xE);
    }
    v18 = *a4;
    v19 = a4[1];
    v20 = a4[2];
    v21 = a4[3];
    v22 = *(this + 1);
    v23 = (__m128 *)(this + 0x38);
    do
    {
      v23[0xFFFFFFFC] = _mm_add_ps(
                          _mm_add_ps(
                            _mm_mul_ps(v18, _mm_shuffle_ps(*v23, *v23, 0)),
                            _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0x55))),
                          _mm_add_ps(_mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0xAA)), v21));
      ++v23;
      --v22;
    }
    while ( v22 > 0 );
    result = *(this + 1) + *this;
    if ( result > 4 )
      result = (int)sub_93B7D0((__m128 *)this);
    if ( *this == 2 && *(this + 1) == 2 )
    {
      v24 = *((__m128 *)this + 0xA);
      v27 = _mm_sub_ps(*((__m128 *)this + 3), *((__m128 *)this + 2));
      v28 = _mm_sub_ps(*((__m128 *)this + 0xB), v24);
      result = sub_8D1A30((__m128 *)this + 2, &v27, (__m128 *)this + 0xA, &v28, (__m128 *)this + 0x13);
    }
    v25 = v29[0];
    *(this + 5) = 1;
    *((_OWORD *)this + 0x12) = v25;
  }
  return result;
}
