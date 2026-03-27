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

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0;
  v47 = 0;
  v71 = 0x7F7FFFFF;
  if ( v3 > 0 )
  {
    while ( 1 )
    {
      v5 = *(unsigned __int8 **)(*(_DWORD *)v2 + 4 * v4++);
      v51 = v4;
      v6 = v4 == v3 ? *(_DWORD *)(v2 + 0x10) : *(unsigned __int16 *)(v2 + 0x16);
      v48 = &v5[v6];
      if ( v5 < &v5[v6] )
        break;
LABEL_32:
      v3 = *(_DWORD *)(v2 + 4);
      if ( v4 >= v3 )
        goto LABEL_33;
    }
    while ( 1 )
    {
      v7 = *((_DWORD *)v5 + 6);
      v8 = *((_DWORD *)v5 + 5);
      v71 = 0x7F7FFFFF;
      v72 = 0;
      v69[0] = v70;
      _mm_prefetch((const char *)v5 + 0x80, 0);
      v50 = v7;
      v9 = *v5 - 2;
      v52 = v8;
      v10 = *((const char **)v5 + 4);
      _mm_prefetch(v10, 0);
      if ( v9 )
        break;
      v29 = *((_DWORD *)v5 + 6);
      v66[0] = *((_DWORD *)v5 + 5);
      v66[1] = v29;
      v66[3] = v10;
      v66[2] = a2;
      v30 = *(__m128 **)(v66[0] + 8);
      v31 = *(__m128 **)(v29 + 8);
      v32 = *(float *)(a2 + 0x18) * v30[5].m128_f32[3];
      v33 = *(float *)(a2 + 0x18) * v31[5].m128_f32[3];
      *(float *)&v45 = v32;
      v34 = (__m128)v45;
      *(float *)&v46 = v33;
      v68 = _mm_add_ps(
              _mm_mul_ps(_mm_shuffle_ps(v34, v34, 0), _mm_sub_ps(v30[4], v30[5])),
              _mm_mul_ps(_mm_shuffle_ps((__m128)v46, (__m128)v46, 0), _mm_sub_ps(v31[5], v31[4])));
      v68.m128_f32[3] = v31[0xA].m128_f32[0] * v31[9].m128_f32[3] * v33
                      + v30[0xA].m128_f32[0] * v30[9].m128_f32[3] * v32;
      sub_8B1FF0(v67, v30, v31);
      (*(void (__cdecl **)(_DWORD *, unsigned __int8 *, unsigned __int8 *, _DWORD, _DWORD *))(0x34 * v5[1]
                                                                                            + *(_DWORD *)a2
                                                                                            + 0x16BC))(
        v66,
        v5,
        v5 + 0x20,
        0,
        v69);
LABEL_24:
      result = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
      v36 = *(_DWORD *)(dword_BA7D98 + 8);
      if ( v36 <= result || v36 == result )
        *(_DWORD *)(dword_BA7D98 + 4) = 1;
      if ( *(_DWORD *)(dword_BA7D98 + 4) == 1 )
        return result;
      if ( (_BYTE *)v69[0] != v70 )
        (*(void (__thiscall **)(_DWORD, int, int, int, _DWORD *))(**((_DWORD **)v5 + 4) + 0x14))(
          *((_DWORD *)v5 + 4),
          v52,
          v50,
          a2,
          v69);
      v5 += v5[3];
      if ( v5 >= v48 )
      {
        v4 = v51;
        v2 = a1;
        goto LABEL_32;
      }
    }
    v11 = v9 - 2;
    if ( v11 )
    {
      if ( v11 == 2 )
        (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int, _DWORD *))(**((_DWORD **)v5 + 1) + 0x14))(
          *((_DWORD *)v5 + 1),
          *((_DWORD *)v5 + 5),
          *((_DWORD *)v5 + 6),
          a2,
          v69);
      goto LABEL_24;
    }
    v12 = *(__m128 **)(*((_DWORD *)v5 + 5) + 8);
    v13 = *(__m128 **)(*((_DWORD *)v5 + 6) + 8);
    v53 = *((int **)v5 + 5);
    v14 = *((_DWORD **)v5 + 6);
    v56 = v10;
    v54 = v14;
    v55 = a2;
    v15 = *(float *)(a2 + 0x18) * v12[5].m128_f32[3];
    v16 = *(float *)(a2 + 0x18) * v13[5].m128_f32[3];
    v49 = v13;
    *(float *)&v40 = v15;
    v17 = (__m128)v40;
    *(float *)&v41 = v16;
    v59 = _mm_add_ps(
            _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), _mm_sub_ps(v12[4], v12[5])),
            _mm_mul_ps(_mm_shuffle_ps((__m128)v41, (__m128)v41, 0), _mm_sub_ps(v13[5], v13[4])));
    v59.m128_f32[3] = v13[0xA].m128_f32[0] * v13[9].m128_f32[3] * v16 + v12[0xA].m128_f32[0] * v12[9].m128_f32[3] * v15;
    if ( *((float *)v5 + 7) != *(float *)(a2 + 0x10) )
    {
      if ( !*(_BYTE *)(*(_DWORD *)(a2 + 0x28) + 0x10) )
      {
        v18 = flt_A3B888;
        *((_DWORD *)v5 + 7) = *(_DWORD *)(a2 + 0x14);
        *((_OWORD *)v5 + 2) = 0;
        *((_DWORD *)v5 + 0xB) = 0xFF7FFFFF;
LABEL_13:
        v58 = v18;
        sub_8B1FF0(v57, v12, v13);
        (*(void (__cdecl **)(int **, unsigned __int8 *, unsigned __int8 *, unsigned __int8 *, _DWORD *))(0x34 * v5[1] + *(_DWORD *)a2 + 0x16BC))(
          &v53,
          v5,
          v5 + 0x30,
          v5 + 0x20,
          v69);
        goto LABEL_24;
      }
      v19 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v19 + 0x1A4) < *(_DWORD *)(v19 + 0x1A8) )
      {
        v20 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v21 = *(_DWORD **)(v20 + 0x1A4);
        v42 = v20;
        *v21 = "TtrecalcT0";
        v22 = __rdtsc();
        v21[1] = v22;
        *(_DWORD *)(v42 + 0x1A4) = v21 + 3;
      }
      sub_8DD150((__m128 *)(v53[2] + 0x40), *(float *)(v55 + 0x10), v64);
      sub_8DD150((__m128 *)(v54[2] + 0x40), *(float *)(v55 + 0x10), v65);
      v60[3] = v56;
      v60[0] = v62;
      v60[2] = v55;
      v60[1] = v63;
      v23 = *v53;
      v62[1] = v53[1];
      v62[0] = v23;
      v43 = v54[1];
      v63[0] = *v54;
      v63[3] = v54;
      v63[1] = v43;
      v62[3] = v53;
      v63[2] = v65;
      v62[2] = v64;
      sub_8B1FF0(v61, v64, v65);
      (*(void (__cdecl **)(_DWORD *, unsigned __int8 *, unsigned __int8 *))(0x34 * v5[1] + *(_DWORD *)a2 + 0x16B8))(
        v60,
        v5 + 0x30,
        v5 + 0x20);
      v24 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
      if ( *(_DWORD *)(v24 + 0x1A4) < *(_DWORD *)(v24 + 0x1A8) )
      {
        v44 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
        v25 = *(_DWORD **)(v44 + 0x1A4);
        *v25 = "Et";
        v26 = __rdtsc();
        v25[1] = v26;
        *(_DWORD *)(v44 + 0x1A4) = v25 + 3;
      }
      v13 = v49;
    }
    v27 = _mm_mul_ps(v59, *((__m128 *)v5 + 2));
    v28 = _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0] + _mm_shuffle_ps(v59, v59, 0xFF).m128_f32[0];
    *((_DWORD *)v5 + 7) = *(_DWORD *)(a2 + 0x14);
    v18 = *((float *)v5 + 0xB) - (float)((float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]) + v28);
    if ( v18 >= *(float *)(a2 + 8) )
    {
      *((float *)v5 + 0xB) = v18;
      if ( v5[2] )
        (*(void (__cdecl **)(unsigned __int8 *, unsigned __int8 *, _DWORD))(0x34 * v5[1] + *(_DWORD *)a2 + 0x169C))(
          v5,
          v5 + 0x30,
          *((_DWORD *)v5 + 4));
      ++v47;
      goto LABEL_24;
    }
    goto LABEL_13;
  }
LABEL_33:
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
  result = ThreadLocalStoragePointer[TlsIndex];
  if ( *(_DWORD *)(result + 0x1A4) < *(_DWORD *)(result + 0x1A8) )
  {
    v38 = ThreadLocalStoragePointer[TlsIndex];
    v39 = *(_DWORD *)(result + 0x1A4);
    *(_DWORD *)v39 = "MinumTim";
    *(float *)(v39 + 4) = (float)v47;
    result = v39 + 8;
    *(_DWORD *)(v38 + 0x1A4) = result;
  }
  return result;
}
