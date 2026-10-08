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

  for ( i = 8; ; --i ) /*0x9381a1*/
  {
    v5 = *((float *)this + 0x38); /*0x9381b0*/
    v20 = 0; /*0x9381be*/
    if ( v5 < *((float *)this + 0x39) ) /*0x9381e0*/
    {
      v20 = 1; /*0x9381e4*/
      v5 = *((float *)this + 0x39); /*0x9381ec*/
    }
    if ( v5 < *((float *)this + 0x3A) ) /*0x9381fd*/
    {
      v20 = 2; /*0x938201*/
      v5 = *((float *)this + 0x3A); /*0x938209*/
    }
    if ( v5 < *((float *)this + 0x3C) ) /*0x93821a*/
    {
      v20 = 4; /*0x93821e*/
      v5 = *((float *)this + 0x3C); /*0x938226*/
    }
    if ( v5 < *((float *)this + 0x3D) ) /*0x938237*/
    {
      v20 = 5; /*0x93823b*/
      v5 = *((float *)this + 0x3D); /*0x938243*/
    }
    if ( v5 < *((float *)this + 0x3E) ) /*0x938254*/
    {
      v20 = 6; /*0x938258*/
      v5 = *((float *)this + 0x3E); /*0x938260*/
    }
    if ( v5 < *((float *)this + 0x40) ) /*0x938271*/
    {
      v20 = 8; /*0x938275*/
      v5 = *((float *)this + 0x40); /*0x93827d*/
    }
    if ( v5 < *((float *)this + 0x41) ) /*0x93828e*/
    {
      v20 = 9; /*0x938292*/
      v5 = *((float *)this + 0x41); /*0x93829a*/
    }
    if ( v5 < *((float *)this + 0x42) ) /*0x9382ab*/
    {
      v20 = 0xA; /*0x9382af*/
      v5 = *((float *)this + 0x42); /*0x9382b7*/
    }
    if ( v5 < *((float *)this + 0x44) ) /*0x9382c8*/
    {
      v20 = 0xC; /*0x9382cc*/
      v5 = *((float *)this + 0x44); /*0x9382d4*/
    }
    if ( v5 < *((float *)this + 0x45) ) /*0x9382e5*/
    {
      v20 = 0xD; /*0x9382e9*/
      v5 = *((float *)this + 0x45); /*0x9382f1*/
    }
    if ( v5 < *((float *)this + 0x46) ) /*0x938302*/
    {
      v20 = 0xE; /*0x938306*/
      v5 = *((float *)this + 0x46); /*0x93830e*/
    }
    if ( v5 < *((float *)this + 0x48) ) /*0x93831f*/
    {
      v20 = 0x10; /*0x938323*/
      v5 = *((float *)this + 0x48); /*0x93832b*/
    }
    if ( v5 < *((float *)this + 0x49) ) /*0x93833c*/
    {
      v20 = 0x11; /*0x938340*/
      v5 = *((float *)this + 0x49); /*0x938348*/
    }
    if ( v5 < *((float *)this + 0x4A) ) /*0x938359*/
    {
      v20 = 0x12; /*0x93835f*/
LABEL_30:
      a4[3].m128_i32[2] = (v20 - 8) >> 2; /*0x938367*/
      a4[3].m128_i32[3] = ((_BYTE)v20 - 8) & 3; /*0x93837c*/
      sub_938060(this, a4); /*0x93837f*/
      sub_936790((int)&a4[1], a3, a4[3].m128_i32[3], (int)a4, a4[3].m128_i32[2]); /*0x938392*/
      a4[3].m128_i32[2] = *v6; /*0x93839c*/
      a4[3].m128_i32[3] = v6[1]; /*0x9383a3*/
      v7 = *(unsigned __int8 *)(a2 + 0x21) - 1; /*0x9383b0*/
      if ( v7 >= 0 ) /*0x9383b1*/
      {
        while ( *(_BYTE *)(a2 + 4 * v7) != *v6 || *(_BYTE *)(a2 + 4 * v7 + 1) != v6[1] ) /*0x9383d0*/
        {
          if ( --v7 < 0 ) /*0x9383d7*/
            goto LABEL_34; /*0x9383d7*/
        }
        return 1; /*0x9383d0*/
      }
LABEL_34:
      sub_936810(this, v22, a4); /*0x9383d9*/
      if ( v22[0] ) /*0x9383ec*/
        return 2; /*0x9383ec*/
      goto LABEL_35; /*0x9383ec*/
    }
    if ( v20 > 2 ) /*0x93842c*/
      break; /*0x93842c*/
    *a3 = v20; /*0x938439*/
    sub_937DB0(this, a4, v20); /*0x93843b*/
    v10 = ((unsigned __int32)a4[3].m128_i32[0] >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(a4[1]) & 7)); /*0x938460*/
    a3[1] = v10; /*0x938462*/
    v11 = *(unsigned __int8 *)(a2 + 0x21) - 1; /*0x938469*/
    if ( v11 >= 0 ) /*0x93846a*/
    {
      while ( *(_BYTE *)(a2 + 4 * v11) != *a3 || *(_BYTE *)(a2 + 4 * v11 + 1) != v10 ) /*0x938479*/
      {
        if ( --v11 < 0 ) /*0x938480*/
          goto LABEL_42; /*0x938480*/
      }
      return 1; /*0x938479*/
    }
LABEL_42:
    v12 = (__m128)xmmword_A372D0; /*0x938482*/
    v13 = *(this + 9); /*0x938489*/
    v14 = a4->m128_i32[1]; /*0x938494*/
    v23.m128_i32[0] = a4->m128_i32[0]; /*0x938497*/
    *(unsigned __int64 *)((char *)v23.m128_u64 + 4) = __PAIR64__(a4->m128_i32[2], v14); /*0x93849e*/
    v23.m128_i32[3] = a4->m128_i32[3]; /*0x9384a9*/
    if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v23, v12), v13)) & 7) == 7 ) /*0x9384c1*/
    {
      a4[3].m128_f32[1] = a4->m128_f32[a4[3].m128_i32[2]] * a4[3].m128_f32[0] /*0x9384d4*/
                        - *((float *)this + a4[3].m128_i32[2] + 0x18);
      return 2; /*0x9384e2*/
    }
LABEL_35:
    v8 = i - 1 <= 0; /*0x9383f2*/
    *((_DWORD *)this + v20 + 0x38) = 0xFF7FFFFF; /*0x938409*/
    if ( v8 ) /*0x938414*/
      return 0; /*0x938422*/
  }
  if ( v20 > 6 ) /*0x9384e8*/
    goto LABEL_30; /*0x9384e8*/
  *a3 = v20; /*0x9384f5*/
  sub_937EF0(this, a4, v20 - 4); /*0x9384fe*/
  v15 = ((unsigned __int32)a4[3].m128_i32[0] >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(*a4) & 7)); /*0x938520*/
  a3[1] = v15; /*0x938522*/
  v16 = *(unsigned __int8 *)(a2 + 0x21) - 1; /*0x938529*/
  if ( v16 < 0 ) /*0x93852a*/
  {
LABEL_50:
    v17 = (__m128)xmmword_A372D0; /*0x93853f*/
    v18 = *(this + 0xA); /*0x938546*/
    v19 = a4[1].m128_i32[1]; /*0x938552*/
    v24.m128_i32[0] = a4[1].m128_i32[0]; /*0x938555*/
    *(unsigned __int64 *)((char *)v24.m128_u64 + 4) = __PAIR64__(a4[1].m128_i32[2], v19); /*0x93855c*/
    v24.m128_i32[3] = a4[1].m128_i32[3]; /*0x938567*/
    if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v24, v17), v18)) & 7) == 7 ) /*0x938580*/
    {
      a4[3].m128_f32[1] = -(a4->m128_f32[a4[3].m128_i32[2]] * a4[3].m128_f32[0]) /*0x93859d*/
                        - *((float *)this + a4[3].m128_i32[2] + 0x18);
      return 2; /*0x9385a6*/
    }
    goto LABEL_35; /*0x938580*/
  }
  while ( *(_BYTE *)(a2 + 4 * v16) != *a3 || *(_BYTE *)(a2 + 4 * v16 + 1) != v15 ) /*0x93853a*/
  {
    if ( --v16 < 0 ) /*0x93853d*/
      goto LABEL_50; /*0x93853d*/
  }
  return 1; /*0x93841c*/
}
