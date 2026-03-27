signed int __thiscall sub_938190(__m128 *this, int a2, _BYTE *a3, __m128 *a4)
{
  double v5; // st7
  unsigned __int8 *v6; // edx
  int v7; // eax
  bool v8; // cc
  char v10; // al
  int v11; // ecx
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __int32 v14; // edx
  char v15; // al
  int v16; // ecx
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  __int32 v19; // ecx
  unsigned __int32 v20; // [esp+1Ch] [ebp-34h]
  int i; // [esp+20h] [ebp-30h]
  _BYTE v22[4]; // [esp+2Ch] [ebp-24h] BYREF
  __m128 v23; // [esp+30h] [ebp-20h]
  __m128 v24; // [esp+40h] [ebp-10h]

  for ( i = 8; ; --i )
  {
    v5 = *((float *)this + 0x38);
    v20 = 0;
    if ( v5 < *((float *)this + 0x39) )
    {
      v20 = 1;
      v5 = *((float *)this + 0x39);
    }
    if ( v5 < *((float *)this + 0x3A) )
    {
      v20 = 2;
      v5 = *((float *)this + 0x3A);
    }
    if ( v5 < *((float *)this + 0x3C) )
    {
      v20 = 4;
      v5 = *((float *)this + 0x3C);
    }
    if ( v5 < *((float *)this + 0x3D) )
    {
      v20 = 5;
      v5 = *((float *)this + 0x3D);
    }
    if ( v5 < *((float *)this + 0x3E) )
    {
      v20 = 6;
      v5 = *((float *)this + 0x3E);
    }
    if ( v5 < *((float *)this + 0x40) )
    {
      v20 = 8;
      v5 = *((float *)this + 0x40);
    }
    if ( v5 < *((float *)this + 0x41) )
    {
      v20 = 9;
      v5 = *((float *)this + 0x41);
    }
    if ( v5 < *((float *)this + 0x42) )
    {
      v20 = 0xA;
      v5 = *((float *)this + 0x42);
    }
    if ( v5 < *((float *)this + 0x44) )
    {
      v20 = 0xC;
      v5 = *((float *)this + 0x44);
    }
    if ( v5 < *((float *)this + 0x45) )
    {
      v20 = 0xD;
      v5 = *((float *)this + 0x45);
    }
    if ( v5 < *((float *)this + 0x46) )
    {
      v20 = 0xE;
      v5 = *((float *)this + 0x46);
    }
    if ( v5 < *((float *)this + 0x48) )
    {
      v20 = 0x10;
      v5 = *((float *)this + 0x48);
    }
    if ( v5 < *((float *)this + 0x49) )
    {
      v20 = 0x11;
      v5 = *((float *)this + 0x49);
    }
    if ( v5 < *((float *)this + 0x4A) )
    {
      v20 = 0x12;
LABEL_30:
      a4[3].m128_i32[2] = (v20 - 8) >> 2;
      a4[3].m128_i32[3] = ((_BYTE)v20 - 8) & 3;
      sub_938060(this, a4);
      sub_936790((int)&a4[1], a3, a4[3].m128_i32[3], (int)a4, a4[3].m128_i32[2]);
      a4[3].m128_i32[2] = *v6;
      a4[3].m128_i32[3] = v6[1];
      v7 = *(unsigned __int8 *)(a2 + 0x21) - 1;
      if ( v7 >= 0 )
      {
        while ( *(_BYTE *)(a2 + 4 * v7) != *v6 || *(_BYTE *)(a2 + 4 * v7 + 1) != v6[1] )
        {
          if ( --v7 < 0 )
            goto LABEL_34;
        }
        return 1;
      }
LABEL_34:
      sub_936810(this, v22, a4);
      if ( v22[0] )
        return 2;
      goto LABEL_35;
    }
    if ( v20 > 2 )
      break;
    *a3 = v20;
    sub_937DB0(this, a4, v20);
    v10 = ((unsigned __int32)a4[3].m128_i32[0] >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(a4[1]) & 7));
    a3[1] = v10;
    v11 = *(unsigned __int8 *)(a2 + 0x21) - 1;
    if ( v11 >= 0 )
    {
      while ( *(_BYTE *)(a2 + 4 * v11) != *a3 || *(_BYTE *)(a2 + 4 * v11 + 1) != v10 )
      {
        if ( --v11 < 0 )
          goto LABEL_42;
      }
      return 1;
    }
LABEL_42:
    v12 = (__m128)xmmword_A372D0;
    v13 = *(this + 9);
    v14 = a4->m128_i32[1];
    v23.m128_i32[0] = a4->m128_i32[0];
    *(unsigned __int64 *)((char *)v23.m128_u64 + 4) = __PAIR64__(a4->m128_i32[2], v14);
    v23.m128_i32[3] = a4->m128_i32[3];
    if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v23, v12), v13)) & 7) == 7 )
    {
      a4[3].m128_f32[1] = a4->m128_f32[a4[3].m128_i32[2]] * a4[3].m128_f32[0]
                        - *((float *)this + a4[3].m128_i32[2] + 0x18);
      return 2;
    }
LABEL_35:
    v8 = i - 1 <= 0;
    *((_DWORD *)this + v20 + 0x38) = 0xFF7FFFFF;
    if ( v8 )
      return 0;
  }
  if ( v20 > 6 )
    goto LABEL_30;
  *a3 = v20;
  sub_937EF0(this, a4, v20 - 4);
  v15 = ((unsigned __int32)a4[3].m128_i32[0] >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(*a4) & 7));
  a3[1] = v15;
  v16 = *(unsigned __int8 *)(a2 + 0x21) - 1;
  if ( v16 < 0 )
  {
LABEL_50:
    v17 = (__m128)xmmword_A372D0;
    v18 = *(this + 0xA);
    v19 = a4[1].m128_i32[1];
    v24.m128_i32[0] = a4[1].m128_i32[0];
    *(unsigned __int64 *)((char *)v24.m128_u64 + 4) = __PAIR64__(a4[1].m128_i32[2], v19);
    v24.m128_i32[3] = a4[1].m128_i32[3];
    if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v24, v17), v18)) & 7) == 7 )
    {
      a4[3].m128_f32[1] = -(a4->m128_f32[a4[3].m128_i32[2]] * a4[3].m128_f32[0])
                        - *((float *)this + a4[3].m128_i32[2] + 0x18);
      return 2;
    }
    goto LABEL_35;
  }
  while ( *(_BYTE *)(a2 + 4 * v16) != *a3 || *(_BYTE *)(a2 + 4 * v16 + 1) != v15 )
  {
    if ( --v16 < 0 )
      goto LABEL_50;
  }
  return 1;
}
