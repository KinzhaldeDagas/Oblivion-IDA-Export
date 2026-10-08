int __cdecl sub_8E7180(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  int v4; // edx
  unsigned __int8 *v5; // esi
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  const char *v10; // eax
  int v11; // ecx
  __m128 *v12; // ebx
  __m128 *v13; // ecx
  _DWORD *v14; // edx
  double v15; // st7
  double v16; // st6
  __m128 v17; // xmm0
  double v18; // st7
  int v19; // eax
  int v20; // eax
  _DWORD *v21; // ecx
  unsigned __int64 v22; // rax
  int v23; // edx
  int v24; // eax
  _DWORD *v25; // ecx
  unsigned __int64 v26; // rax
  __m128 v27; // xmm0
  float v28; // xmm1_4
  int v29; // edx
  __m128 *v30; // eax
  __m128 *v31; // ecx
  double v32; // st7
  double v33; // st6
  __m128 v34; // xmm0
  int result; // eax
  int v36; // ecx
  _DWORD *ThreadLocalStoragePointer; // edx
  int v38; // ecx
  int v39; // eax
  unsigned int v40; // [esp+18h] [ebp-3248h]
  unsigned int v41; // [esp+18h] [ebp-3248h]
  int v42; // [esp+18h] [ebp-3248h]
  int v43; // [esp+18h] [ebp-3248h]
  int v44; // [esp+18h] [ebp-3248h]
  unsigned int v45; // [esp+18h] [ebp-3248h]
  unsigned int v46; // [esp+18h] [ebp-3248h]
  int v47; // [esp+1Ch] [ebp-3244h]
  unsigned __int8 *v48; // [esp+20h] [ebp-3240h]
  __m128 *v49; // [esp+24h] [ebp-323Ch]
  int v50; // [esp+28h] [ebp-3238h]
  int v51; // [esp+2Ch] [ebp-3234h]
  int v52; // [esp+30h] [ebp-3230h]
  int *v53; // [esp+40h] [ebp-3220h] BYREF
  _DWORD *v54; // [esp+44h] [ebp-321Ch]
  int v55; // [esp+48h] [ebp-3218h]
  const char *v56; // [esp+4Ch] [ebp-3214h]
  __m128 v57[4]; // [esp+50h] [ebp-3210h] BYREF
  float v58; // [esp+90h] [ebp-31D0h]
  __m128 v59; // [esp+A0h] [ebp-31C0h]
  _DWORD v60[4]; // [esp+B0h] [ebp-31B0h] BYREF
  __m128 v61[4]; // [esp+C0h] [ebp-31A0h] BYREF
  _DWORD v62[4]; // [esp+100h] [ebp-3160h] BYREF
  _DWORD v63[4]; // [esp+110h] [ebp-3150h] BYREF
  __m128 v64[4]; // [esp+120h] [ebp-3140h] BYREF
  __m128 v65[4]; // [esp+160h] [ebp-3100h] BYREF
  _DWORD v66[4]; // [esp+1A0h] [ebp-30C0h] BYREF
  __m128 v67[5]; // [esp+1B0h] [ebp-30B0h] BYREF
  __m128 v68; // [esp+200h] [ebp-3060h]
  _DWORD v69[12]; // [esp+210h] [ebp-3050h] BYREF
  _BYTE v70[12292]; // [esp+240h] [ebp-3020h] BYREF
  int v71; // [esp+3244h] [ebp-1Ch]
  int v72; // [esp+3250h] [ebp-10h]

  v2 = a1; /*0x8e7190*/
  v3 = *(_DWORD *)(a1 + 4); /*0x8e7193*/
  v4 = 0; /*0x8e7197*/
  v47 = 0; /*0x8e719d*/
  v71 = 0x7F7FFFFF; /*0x8e71a1*/
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v5 = *(unsigned __int8 **)(*(_DWORD *)v2 + 4 * v4++); /*0x8e71b7*/
      v51 = v4; /*0x8e71bd*/
      v6 = v4 == v3 ? *(_DWORD *)(v2 + 0x10) : *(unsigned __int16 *)(v2 + 0x16);
      v48 = &v5[v6]; /*0x8e71d0*/
      if ( v5 < &v5[v6] ) /*0x8e71d4*/
        break; /*0x8e71d4*/
LABEL_32:
      v3 = *(_DWORD *)(v2 + 4); /*0x8e76e7*/
      if ( v4 >= v3 ) /*0x8e76ec*/
        goto LABEL_33; /*0x8e76ec*/
    }
    while ( 1 ) /*0x8e71e0*/
    {
      v7 = *((_DWORD *)v5 + 6); /*0x8e71e0*/
      v8 = *((_DWORD *)v5 + 5); /*0x8e71e3*/
      v71 = 0x7F7FFFFF; /*0x8e71e6*/
      v72 = 0; /*0x8e71f1*/
      v69[0] = v70; /*0x8e7203*/
      _mm_prefetch((const char *)v5 + 0x80, 0); /*0x8e720a*/
      v50 = v7; /*0x8e7211*/
      v9 = *v5 - 2; /*0x8e7218*/
      v52 = v8; /*0x8e721b*/
      v10 = *((const char **)v5 + 4); /*0x8e721f*/
      _mm_prefetch(v10, 0); /*0x8e7222*/
      if ( v9 ) /*0x8e7225*/
        break; /*0x8e7225*/
      v29 = *((_DWORD *)v5 + 6); /*0x8e7591*/
      v66[0] = *((_DWORD *)v5 + 5); /*0x8e7594*/
      v66[1] = v29; /*0x8e759b*/
      v66[3] = v10; /*0x8e75a2*/
      v66[2] = a2; /*0x8e75a9*/
      v30 = *(__m128 **)(v66[0] + 8); /*0x8e75b3*/
      v31 = *(__m128 **)(v29 + 8); /*0x8e75bb*/
      v32 = *(float *)(a2 + 0x18) * v30[5].m128_f32[3]; /*0x8e75c2*/
      v33 = *(float *)(a2 + 0x18) * v31[5].m128_f32[3]; /*0x8e75c4*/
      *(float *)&v45 = v32; /*0x8e75d0*/
      v34 = (__m128)v45; /*0x8e75d5*/
      *(float *)&v46 = v33; /*0x8e75db*/
      v68 = _mm_add_ps( /*0x8e7608*/
              _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), _mm_sub_ps(v30[4], v30[5])),
              _mm_mul_ps(_mm_shuffle_ps((__m128)v46, (__m128)v46, 0), _mm_sub_ps(v31[5], v31[4])));
      v68.m128_f32[3] = v31[0xA].m128_f32[0] * v31[9].m128_f32[3] * v33 /*0x8e7635*/
                      + v30[0xA].m128_f32[0] * v30[9].m128_f32[3] * v32;
      sub_8B1FF0(v67, v30, v31); /*0x8e7640*/
      (*(void (__cdecl **)(_DWORD *, unsigned __int8 *, unsigned __int8 *, _DWORD, _DWORD *))(0x34 * v5[1] /*0x8e7665*/
                                                                                            + *(_DWORD *)a2
                                                                                            + 0x16BC))(
        v66,
        v5,
        v5 + 0x20,
        0,
        v69);
LABEL_24:
      result = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x8e766f*/
      v36 = *(_DWORD *)(unk_BA7D98 + 8); /*0x8e767d*/
      if ( v36 <= result || v36 == result ) /*0x8e7686*/
        *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x8e768c*/
      if ( *(_DWORD *)(unk_BA7D98 + 4) == 1 ) /*0x8e769d*/
        return result; /*0x8e769d*/
      if ( (_BYTE *)v69[0] != v70 ) /*0x8e76b3*/
        (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD *))(**((_DWORD **)v5 + 4) + 0x14))( /*0x8e76cd*/
          *((_DWORD *)v5 + 4),
          v52,
          v50,
          a2,
          v69);
      v5 += v5[3]; /*0x8e76d4*/
      if ( v5 >= v48 ) /*0x8e76da*/
      {
        v4 = v51; /*0x8e76e0*/
        v2 = a1; /*0x8e76e4*/
        goto LABEL_32; /*0x8e76e4*/
      }
    }
    v11 = v9 - 2; /*0x8e722b*/
    if ( v11 ) /*0x8e722e*/
    {
      if ( v11 == 2 ) /*0x8e7233*/
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD *))(**((_DWORD **)v5 + 1) + 0x14))( /*0x8e724f*/
          *((_DWORD *)v5 + 1),
          *((_DWORD *)v5 + 5),
          *((_DWORD *)v5 + 6),
          a2,
          v69);
      goto LABEL_24; /*0x8e7252*/
    }
    v12 = *(__m128 **)(*((_DWORD *)v5 + 5) + 8); /*0x8e725a*/
    v13 = *(__m128 **)(*((_DWORD *)v5 + 6) + 8); /*0x8e7260*/
    v53 = *((int **)v5 + 5); /*0x8e7263*/
    v14 = *((_DWORD **)v5 + 6); /*0x8e7267*/
    v56 = v10; /*0x8e726a*/
    v54 = v14; /*0x8e726e*/
    v55 = a2; /*0x8e7272*/
    v15 = *(float *)(a2 + 0x18) * v12[5].m128_f32[3]; /*0x8e7286*/
    v16 = *(float *)(a2 + 0x18) * v13[5].m128_f32[3]; /*0x8e728b*/
    v49 = v13; /*0x8e728e*/
    *(float *)&v40 = v15; /*0x8e7294*/
    v17 = (__m128)v40; /*0x8e7298*/
    *(float *)&v41 = v16; /*0x8e729e*/
    v59 = _mm_add_ps( /*0x8e72ca*/
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v12[4], v12[5])),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), _mm_sub_ps(v13[5], v13[4])));
    v59.m128_f32[3] = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v16 + v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v15; /*0x8e72f0*/
    if ( *((float *)v5 + 7) != *(float *)(a2 + 0x10) ) /*0x8e7308*/
    {
      if ( !*(_BYTE *)(*(_DWORD *)(a2 + 0x28) + 0x10) ) /*0x8e7311*/
      {
        v18 = flt_A3B888; /*0x8e731b*/
        *((_DWORD *)v5 + 7) = *(_DWORD *)(a2 + 0x14); /*0x8e7324*/
        *((_OWORD *)v5 + 2) = 0; /*0x8e7327*/
        *((_DWORD *)v5 + 0xB) = 0xFF7FFFFF; /*0x8e732b*/
LABEL_13:
        v58 = v18; /*0x8e7332*/
        sub_8B1FF0(v57, v12, v13); /*0x8e733f*/
        (*(void (__cdecl **)(int **, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _DWORD *))(0x34 * v5[1] + *(_DWORD *)a2 + 0x16BC))( /*0x8e7358*/
          &v53,
          v5,
          v5 + 0x30,
          v5 + 0x20,
          v69);
        goto LABEL_24; /*0x8e7358*/
      }
      v19 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e7369*/
      if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) ) /*0x8e7378*/
      {
        v20 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e7380*/
        v21 = *(_DWORD **)(v20 + 0x1A4); /*0x8e7383*/
        v42 = v20; /*0x8e7389*/
        *v21 = "TtrecalcT0"; /*0x8e738d*/
        v22 = __rdtsc(); /*0x8e7393*/
        v21[1] = v22; /*0x8e73a1*/
        *(_DWORD *)(v42 + 0x1A4) = v21 + 3; /*0x8e73a7*/
      }
      sub_8DD150((__m128 *)(v53[2] + 0x40), *(float *)(v55 + 0x10), v64); /*0x8e73c8*/
      sub_8DD150((__m128 *)(v54[2] + 0x40), *(float *)(v55 + 0x10), v65); /*0x8e73e8*/
      v60[3] = v56; /*0x8e73f1*/
      v60[0] = v62; /*0x8e73ff*/
      v60[2] = v55; /*0x8e740a*/
      v60[1] = v63; /*0x8e7418*/
      v23 = *v53; /*0x8e7426*/
      v62[1] = v53[1]; /*0x8e7428*/
      v62[0] = v23; /*0x8e7433*/
      v43 = v54[1]; /*0x8e743d*/
      v63[0] = *v54; /*0x8e7443*/
      v63[3] = v54; /*0x8e744e*/
      v63[1] = v43; /*0x8e745f*/
      v62[3] = v53; /*0x8e7468*/
      v63[2] = v65; /*0x8e7477*/
      v62[2] = v64; /*0x8e7486*/
      sub_8B1FF0(v61, v64, v65); /*0x8e748d*/
      (*(void (__cdecl **)(_DWORD *, unsigned __int8 *, unsigned __int8 *))(0x34 * v5[1] + *(_DWORD *)a2 + 0x16B8))( /*0x8e74ab*/
        v60,
        v5 + 0x30,
        v5 + 0x20);
      v24 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e74bf*/
      if ( *(_DWORD *)(v24 + 0x1A4) < *(_DWORD *)(v24 + 0x1A8) ) /*0x8e74d1*/
      {
        v44 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x8e74dc*/
        v25 = *(_DWORD **)(v44 + 0x1A4); /*0x8e74e0*/
        *v25 = "Et"; /*0x8e74e6*/
        v26 = __rdtsc(); /*0x8e74ec*/
        v25[1] = v26; /*0x8e74fa*/
        *(_DWORD *)(v44 + 0x1A4) = v25 + 3; /*0x8e7500*/
      }
      v13 = v49; /*0x8e7506*/
    }
    v27 = _mm_mul_ps(v59, *((__m128 *)v5 + 2)); /*0x8e751c*/
    v28 = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] + _mm_shuffle_ps(v59, v59, 0xFF).m128_f32[0]; /*0x8e752d*/
    *((_DWORD *)v5 + 7) = *(_DWORD *)(a2 + 0x14); /*0x8e7538*/
    v18 = *((float *)v5 + 0xB) - (float)((float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]) + v28); /*0x8e754d*/
    if ( v18 >= *(float *)(a2 + 8) ) /*0x8e7559*/
    {
      *((float *)v5 + 0xB) = v18; /*0x8e755f*/
      if ( v5[2] ) /*0x8e7562*/
        (*(void (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD))(0x34 * v5[1] + *(_DWORD *)a2 + 0x169C))( /*0x8e757b*/
          v5,
          v5 + 0x30,
          *((_DWORD *)v5 + 4));
      ++v47; /*0x8e7585*/
      goto LABEL_24; /*0x8e7589*/
    }
    goto LABEL_13; /*0x8e7559*/
  }
LABEL_33:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8e76f2*/
  result = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e76ff*/
  if ( *(_DWORD *)(result + 0x1A4) < *(_DWORD *)(result + 0x1A8) ) /*0x8e770e*/
  {
    v38 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x8e7714*/
    v39 = *(_DWORD *)(result + 0x1A4); /*0x8e7716*/
    *(_DWORD *)v39 = "MinumTim"; /*0x8e771c*/
    *(float *)(v39 + 4) = (float)v47; /*0x8e7722*/
    result = v39 + 8; /*0x8e7725*/
    *(_DWORD *)(v38 + 0x1A4) = result; /*0x8e7728*/
  }
  return result; /*0x8e772e*/
}
