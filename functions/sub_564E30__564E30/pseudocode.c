void __userpurge sub_564E30(_DWORD *a1@<ecx>, double a2@<st2>, float a3)
{
  int v4; // ecx
  NiObject *v5; // ebx
  const char *v6; // eax
  char *v7; // eax
  double v8; // st7
  int v9; // eax
  _DWORD *v10; // ebx
  int v11; // esi
  MobileObject *v12; // eax
  bhkCharacterProxy *CharProxy; // esi
  char *v14; // edi
  int v15; // eax
  __m128 v16; // xmm0
  float v17; // xmm1_4
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __int128 v20; // xmm0
  void (__thiscall *v21)(char *, __int128 *); // edx
  char *v22; // ecx
  __m128 *v23; // eax
  float *v24; // eax
  __m128 *v25; // eax
  __m128 v26; // xmm1
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  float v29; // xmm2_4
  __m128 v30; // xmm0
  __m128 v31; // xmm2
  __m128 v32; // xmm1
  __m128 v33; // xmm0
  float v34; // xmm2_4
  __m128 v35; // xmm0
  __m128 v36; // xmm2
  int v37; // eax
  int v38; // eax
  __m128 *v39; // eax
  float *v40; // eax
  int v41; // ecx
  int v42; // [esp+18h] [ebp-264h]
  int v43; // [esp+18h] [ebp-264h]
  float v44; // [esp+1Ch] [ebp-260h]
  float v45; // [esp+1Ch] [ebp-260h]
  float v46; // [esp+1Ch] [ebp-260h]
  float v47; // [esp+20h] [ebp-25Ch]
  float v48; // [esp+20h] [ebp-25Ch]
  float v49; // [esp+24h] [ebp-258h]
  float v50; // [esp+24h] [ebp-258h]
  float v51; // [esp+24h] [ebp-258h]
  float v52; // [esp+28h] [ebp-254h]
  float v53; // [esp+28h] [ebp-254h]
  float v54; // [esp+28h] [ebp-254h]
  NiObject *v55; // [esp+2Ch] [ebp-250h]
  int v56; // [esp+30h] [ebp-24Ch]
  float v57; // [esp+44h] [ebp-238h]
  float v58[5]; // [esp+48h] [ebp-234h] BYREF
  char v59; // [esp+5Ch] [ebp-220h]
  char v60; // [esp+5Dh] [ebp-21Fh]
  char *v61; // [esp+60h] [ebp-21Ch]
  int v62; // [esp+64h] [ebp-218h]
  int v63; // [esp+68h] [ebp-214h]
  _DWORD v64[5]; // [esp+6Ch] [ebp-210h] BYREF
  int v65; // [esp+80h] [ebp-1FCh]
  char *v66; // [esp+84h] [ebp-1F8h]
  int v67; // [esp+88h] [ebp-1F4h]
  int v68; // [esp+8Ch] [ebp-1F0h]
  float v69[2]; // [esp+90h] [ebp-1ECh] BYREF
  _DWORD v70[5]; // [esp+98h] [ebp-1E4h]
  float v71[3]; // [esp+B8h] [ebp-1C4h] BYREF
  void **v72; // [esp+C4h] [ebp-1B8h] BYREF
  int v73; // [esp+C8h] [ebp-1B4h]
  char *v74; // [esp+CCh] [ebp-1B0h]
  int v75; // [esp+D0h] [ebp-1ACh]
  unsigned int v76; // [esp+D4h] [ebp-1A8h]
  char v77; // [esp+D8h] [ebp-1A4h] BYREF
  __m128 v78; // [esp+1DCh] [ebp-A0h] BYREF
  __m128 v79; // [esp+1ECh] [ebp-90h] BYREF
  __m128 v80; // [esp+1FCh] [ebp-80h]
  __int128 v81; // [esp+20Ch] [ebp-70h] BYREF
  __m128 v82; // [esp+21Ch] [ebp-60h]
  int v83; // [esp+22Ch] [ebp-50h]
  int v84; // [esp+230h] [ebp-4Ch]
  int v85; // [esp+234h] [ebp-48h]
  _DWORD v86[5]; // [esp+238h] [ebp-44h] BYREF
  __m128 v87; // [esp+24Ch] [ebp-30h]
  unsigned int v88; // [esp+278h] [ebp-4h]

  v4 = a1[0x37];
  if ( v4 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 4))(v4, a1);
  if ( sub_563F90((float *)a1, a3) )
  {
    v5 = sub_564A80(a1);
    v55 = v5;
    if ( v5 )
    {
      if ( v5->__vftable[1].Unk_03(v5) )
      {
        v6 = (const char *)sub_7875C0(*(_DWORD **)(a1[0x37] + 0xC));
        v7 = strstr(v6, off_A65A20);
        if ( v7 )
          v42 = v7[3] - 0x30;
        else
          v42 = iCollFreq;
        v72 = &hkAllCdBodyPairCollector::`vftable';
        v74 = &v77;
        v8 = (double)v42 * flt_B3A024;
        v76 = 0x80000010;
        v75 = 0;
        LOBYTE(v73) = 0;
        v57 = v8 * fCostant_100;
        v88 = 0;
        sub_5639A0(v5, (int)&v72);
        v56 = 0;
        if ( v75 > 0 )
        {
          v43 = 0;
          do
          {
            v9 = *(_DWORD *)&v74[v43 + 8];
            if ( *(_BYTE *)(v9 + 0x18) == 2 )
              v10 = (_DWORD *)(v9 + *(_DWORD *)(v9 + 0x10));
            else
              v10 = 0;
            if ( *(_BYTE *)(v9 + 0x18) == 1 )
              v11 = v9 + *(_DWORD *)(v9 + 0x10);
            else
              v11 = 0;
            if ( v10 )
            {
              v12 = (MobileObject *)sub_891130(0x3E8, v10);
              if ( v12 )
              {
                CharProxy = MobileObject_GetCharProxy(v12);
                if ( CharProxy )
                {
                  v49 = Rand6();
                  v52 = Rand6();
                  v44 = Rand6();
                  v14 = v74;
                  v80.m128_f32[0] = v49;
                  v15 = *(_DWORD *)(*(_DWORD *)&v74[v43 + 8] + 8);
                  v80.m128_f32[1] = v52;
                  v80.m128_f32[2] = v44;
                  v80.m128_f32[3] = 0.0;
                  v16 = _mm_mul_ps(v80, v80);
                  v17 = _mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0];
                  v18 = _mm_shuffle_ps(v16, v16, 0xAA);
                  v18.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0] + v17);
                  v19 = _mm_mul_ps(v80, _mm_shuffle_ps(v18, v18, 0));
                  v20 = *(_OWORD *)(v15 + 0x30);
                  v82 = v19;
                  v82.m128_f32[3] = 0.0;
                  v80 = v19;
                  *(_OWORD *)&v86[1] = v20;
                  v81 = v20;
                  v83 = sub_494EF0(v55);
                  v21 = *(void (__thiscall **)(char *, __int128 *))(*((_DWORD *)CharProxy + 0x7C) + 8);
                  v85 = *(_DWORD *)&v14[v43 + 8];
                  v86[0] = 0;
                  v84 = 0;
                  v21((char *)CharProxy + 0x1F0, &v81);
                  v22 = *((char **)CharProxy + 2);
                  *(float *)&v64[4] = 1.0;
                  LOWORD(v65) = 0x704;
                  if ( v22 )
                  {
                    v23 = (__m128 *)sub_8AC0A0(v22);
                    sub_43F3E0(v69, v23);
                  }
                  *(float *)&v64[3] = sub_404C90(v69);
                  v66 = (char *)v10 + (_DWORD)v55;
                  v24 = sub_43F3E0(v69, (__m128 *)&v86[1]);
                  *(float *)v64 = *v24;
                  *(float *)&v64[1] = v24[1];
                  *(float *)&v64[2] = v24[2];
                  v67 = 0;
                  v68 = 0;
                  sub_6B0C70(a2, COERCE_FLOAT(v64));
                }
              }
            }
            else if ( v11 )
            {
              if ( v57 >= (double)Rand3(0x64) )
              {
                v25 = *(__m128 **)(v11 + 0x50);
                v26 = v25[0xE];
                v27 = _mm_mul_ps(v25[0xD], v25[0xD]);
                v87 = v26;
                *(__m128 *)&v70[1] = v27;
                if ( (float)(_mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0])) > 1.0 )
                {
                  v47 = (1.0 - (double)Rand2(dword_B3A00C, dword_B3A014) / fCostant_100)
                      * fsqrt(
                          _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]));
                  v45 = Rand7();
                  v53 = Rand7();
                  v50 = Rand7() - dbl_A3C770;
                  v78.m128_f32[0] = v45;
                  v78.m128_f32[1] = v53;
                  v78.m128_f32[2] = v50;
                  v78.m128_f32[3] = 0.0;
                  v28 = _mm_mul_ps(v78, v78);
                  v29 = _mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0];
                  v30 = _mm_shuffle_ps(v28, v28, 0xAA);
                  v30.m128_f32[0] = v30.m128_f32[0] + v29;
                  v31 = 0;
                  v30.m128_f32[0] = 1.0 / fsqrt(v30.m128_f32[0]);
                  v31.m128_f32[0] = v47;
                  v78 = _mm_mul_ps(_mm_mul_ps(v78, _mm_shuffle_ps(v30, v30, 0)), _mm_shuffle_ps(v31, v31, 0));
                  sub_8A6410(v11);
                  (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x54))(
                    *(_DWORD *)(v11 + 0x50),
                    &v78);
                  v27 = *(__m128 *)&v70[1];
                  v26 = v87;
                }
                v32 = _mm_mul_ps(v26, v26);
                if ( (float)(_mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0])) > 1.0 )
                {
                  v51 = ((double)Rand3(0x14) / fCostant_100 + dbl_A65A18)
                      * fsqrt(
                          _mm_shuffle_ps(v32, v32, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v32, v32, 0x55).m128_f32[0] + v32.m128_f32[0]));
                  v48 = Rand7();
                  v46 = Rand7();
                  v54 = Rand7() - dbl_A3C770;
                  v79.m128_f32[0] = v48;
                  v79.m128_f32[1] = v46;
                  v79.m128_f32[2] = v54;
                  v79.m128_f32[3] = 0.0;
                  v33 = _mm_mul_ps(v79, v79);
                  v34 = _mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0];
                  v35 = _mm_shuffle_ps(v33, v33, 0xAA);
                  v35.m128_f32[0] = v35.m128_f32[0] + v34;
                  v36 = 0;
                  v35.m128_f32[0] = 1.0 / fsqrt(v35.m128_f32[0]);
                  v36.m128_f32[0] = v51;
                  v79 = _mm_mul_ps(_mm_mul_ps(v79, _mm_shuffle_ps(v35, v35, 0)), _mm_shuffle_ps(v36, v36, 0));
                  sub_8A6410(v11);
                  (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x58))(
                    *(_DWORD *)(v11 + 0x50),
                    &v79);
                  v27 = *(__m128 *)&v70[1];
                }
                v37 = **(_DWORD **)&v74[v43 + 8];
                if ( v37 )
                  v38 = *(_DWORD *)(v37 + 8);
                else
                  v38 = 0;
                v59 = 4;
                if ( v38 )
                  v60 = *(_BYTE *)(v38 + 0x10);
                else
                  v60 = 0;
                v39 = *(__m128 **)(v11 + 0x50);
                v58[4] = 1.0;
                v58[3] = fsqrt(
                           _mm_shuffle_ps(v27, v27, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v27, v27, 0x55).m128_f32[0] + v27.m128_f32[0]))
                       * dbl_A372E0;
                v61 = (char *)v55 + v11;
                v40 = sub_43F3E0(v71, v39 + 4);
                v58[0] = *v40;
                v41 = *(_DWORD *)(v11 + 0xC);
                v58[1] = v40[1];
                v58[2] = v40[2];
                v62 = v41;
                v63 = 0;
                sub_6B0C70(a2, COERCE_FLOAT(v58));
              }
            }
            v43 += 0x10;
            ++v56;
          }
          while ( v56 < v75 );
        }
        v88 = 0xFFFFFFFF;
        hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v72);
      }
    }
  }
}
