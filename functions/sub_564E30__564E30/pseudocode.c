// BSTreeNode runtime collision/contact update path: throttled by 0x563F90, queries collision pairs, applies impulses/events for actors/contacting refs.
void __userpurge sub_564E30(_DWORD *a1@<ecx>, double a2@<st2>, float a3)
{
  int v4; // ecx
  NiObject *v5; // ebx
  const char *UserData; // eax
  char *v7; // eax
  double v8; // st7
  int v9; // eax
  int *v10; // ebx
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
  __m128 *LinearVelocityPtr; // eax
  double v24; // st7
  float *v25; // eax
  __m128 *v26; // eax
  __m128 v27; // xmm1
  __m128 v28; // xmm0
  __m128 v29; // xmm0
  float v30; // xmm2_4
  __m128 v31; // xmm0
  __m128 v32; // xmm2
  __m128 v33; // xmm1
  __m128 v34; // xmm0
  float v35; // xmm2_4
  __m128 v36; // xmm0
  __m128 v37; // xmm2
  int v38; // eax
  int v39; // eax
  __m128 *v40; // eax
  double v41; // st7
  float *v42; // eax
  int v43; // ecx
  int v44; // [esp+18h] [ebp-264h]
  int v45; // [esp+18h] [ebp-264h]
  float v46; // [esp+1Ch] [ebp-260h]
  float v47; // [esp+1Ch] [ebp-260h]
  float v48; // [esp+1Ch] [ebp-260h]
  float v49; // [esp+20h] [ebp-25Ch]
  float v50; // [esp+20h] [ebp-25Ch]
  float v51; // [esp+24h] [ebp-258h]
  float v52; // [esp+24h] [ebp-258h]
  float v53; // [esp+24h] [ebp-258h]
  float v54; // [esp+28h] [ebp-254h]
  float v55; // [esp+28h] [ebp-254h]
  float v56; // [esp+28h] [ebp-254h]
  NiObject *v57; // [esp+2Ch] [ebp-250h]
  int v58; // [esp+30h] [ebp-24Ch]
  float v59; // [esp+44h] [ebp-238h]
  float v60[5]; // [esp+48h] [ebp-234h] BYREF
  char v61; // [esp+5Ch] [ebp-220h]
  char v62; // [esp+5Dh] [ebp-21Fh]
  char *v63; // [esp+60h] [ebp-21Ch]
  int v64; // [esp+64h] [ebp-218h]
  int v65; // [esp+68h] [ebp-214h]
  _DWORD v66[5]; // [esp+6Ch] [ebp-210h] BYREF
  int v67; // [esp+80h] [ebp-1FCh]
  char *v68; // [esp+84h] [ebp-1F8h]
  int v69; // [esp+88h] [ebp-1F4h]
  int v70; // [esp+8Ch] [ebp-1F0h]
  float v71[2]; // [esp+90h] [ebp-1ECh] BYREF
  _DWORD v72[5]; // [esp+98h] [ebp-1E4h]
  float v73[3]; // [esp+B8h] [ebp-1C4h] BYREF
  void **v74; // [esp+C4h] [ebp-1B8h] BYREF
  int v75; // [esp+C8h] [ebp-1B4h]
  char *v76; // [esp+CCh] [ebp-1B0h]
  int v77; // [esp+D0h] [ebp-1ACh]
  unsigned int v78; // [esp+D4h] [ebp-1A8h]
  char v79; // [esp+D8h] [ebp-1A4h] BYREF
  __m128 v80; // [esp+1DCh] [ebp-A0h] BYREF
  __m128 v81; // [esp+1ECh] [ebp-90h] BYREF
  __m128 v82; // [esp+1FCh] [ebp-80h]
  __int128 v83; // [esp+20Ch] [ebp-70h] BYREF
  __m128 v84; // [esp+21Ch] [ebp-60h]
  int v85; // [esp+22Ch] [ebp-50h]
  int v86; // [esp+230h] [ebp-4Ch]
  int v87; // [esp+234h] [ebp-48h]
  _DWORD v88[5]; // [esp+238h] [ebp-44h] BYREF
  __m128 v89; // [esp+24Ch] [ebp-30h]
  unsigned int v90; // [esp+278h] [ebp-4h]

  v4 = a1[0x37]; /*0x564e72*/
  if ( v4 ) /*0x564e7c*/
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v4 + 4))(v4, a1); /*0x564e84*/
  if ( sub_563F90((float *)a1, a3) ) /*0x564e8f*/
  {
    v5 = sub_564A80(a1); /*0x564ea3*/
    v57 = v5; /*0x564ea7*/
    if ( v5 ) /*0x564eab*/
    {
      if ( v5->__vftable[1].Unk_03(v5) ) /*0x564eb8*/
      {
        UserData = CSpeedTreeRT__GetUserData(*(const OB_CSpeedTreeRT_010201A0 **)(a1[0x37] + 0xC)); /*0x564ed0*/
        v7 = strstr(UserData, off_A65A20); /*0x564ed6*/
        if ( v7 ) /*0x564ee0*/
          v44 = v7[3] - 0x30; /*0x564ee9*/
        else
          v44 = MEMORY[0xB3A004]; /*0x564ef5*/
        v74 = &hkAllCdBodyPairCollector::`vftable'; /*0x564f04*/
        v76 = &v79; /*0x564f0f*/
        v8 = (double)v44 * unk_B3A024[0]; /*0x564f16*/
        v78 = 0x80000010; /*0x564f1c*/
        v77 = 0; /*0x564f27*/
        LOBYTE(v75) = 0; /*0x564f2e*/
        v59 = v8 * fCostant_100; /*0x564f3c*/
        v90 = 0; /*0x564f4a*/
        sub_5639A0(v5, (int)&v74); /*0x564f51*/
        v58 = 0; /*0x564f5d*/
        if ( v77 > 0 ) /*0x564f61*/
        {
          v45 = 0; /*0x564f67*/
          do /*0x5654c8*/
          {
            v9 = *(_DWORD *)&v76[v45 + 8]; /*0x564f7b*/
            if ( *(_BYTE *)(v9 + 0x18) == 2 ) /*0x564f83*/
              v10 = (int *)(v9 + *(_DWORD *)(v9 + 0x10)); /*0x564f88*/
            else
              v10 = 0; /*0x564f8c*/
            if ( *(_BYTE *)(v9 + 0x18) == 1 ) /*0x564f92*/
              v11 = v9 + *(_DWORD *)(v9 + 0x10); /*0x564f97*/
            else
              v11 = 0; /*0x564f9b*/
            if ( v10 ) /*0x564f9f*/
            {
              v12 = (MobileObject *)sub_891130(0x3E8, v10); /*0x564fab*/
              if ( v12 ) /*0x564fb5*/
              {
                CharProxy = MobileObject_GetCharProxy(v12); /*0x564fc2*/
                if ( CharProxy ) /*0x564fc6*/
                {
                  v51 = Rand6(); /*0x564fd1*/
                  v54 = Rand6(); /*0x564fda*/
                  v46 = Rand6(); /*0x564fe3*/
                  v14 = v76; /*0x564fef*/
                  v82.m128_f32[0] = v51; /*0x564ff6*/
                  v15 = *(_DWORD *)(*(_DWORD *)&v76[v45 + 8] + 8); /*0x565005*/
                  v82.m128_f32[1] = v54; /*0x565008*/
                  v82.m128_f32[2] = v46; /*0x565017*/
                  v82.m128_f32[3] = 0.0; /*0x565020*/
                  v16 = _mm_mul_ps(v82, v82); /*0x565032*/
                  v17 = _mm_shuffle_ps(v16, v16, 0x55).m128_f32[0] + v16.m128_f32[0]; /*0x56503c*/
                  v18 = _mm_shuffle_ps(v16, v16, 0xAA); /*0x565040*/
                  v18.m128_f32[0] = 1.0 / fsqrt(v18.m128_f32[0] + v17); /*0x565048*/
                  v19 = _mm_mul_ps(v82, _mm_shuffle_ps(v18, v18, 0)); /*0x565050*/
                  v20 = *(_OWORD *)(v15 + 0x30); /*0x565053*/
                  v84 = v19; /*0x565057*/
                  v84.m128_f32[3] = 0.0; /*0x56505f*/
                  v82 = v19; /*0x565066*/
                  *(_OWORD *)&v88[1] = v20; /*0x56506e*/
                  v83 = v20; /*0x565076*/
                  v85 = sub_494EF0(v57); /*0x565087*/
                  v21 = *(void (__thiscall **)(char *, __int128 *))(*((_DWORD *)CharProxy + 0x7C) + 8); /*0x565098*/
                  v87 = *(_DWORD *)&v14[v45 + 8]; /*0x5650a1*/
                  v88[0] = 0; /*0x5650b2*/
                  v86 = 0; /*0x5650b9*/
                  v21((char *)CharProxy + 0x1F0, &v83); /*0x5650c0*/
                  v22 = *((char **)CharProxy + 2); /*0x5650c4*/
                  *(float *)&v66[4] = 1.0; /*0x5650c7*/
                  LOWORD(v67) = 0x704; /*0x5650cd*/
                  if ( v22 ) /*0x5650d7*/
                  {
                    LinearVelocityPtr = (__m128 *)bhkWorldObject_GetLinearVelocityPtr(v22); /*0x5650d9*/
                    HavokVector_ToWorldVector(v71, LinearVelocityPtr); /*0x5650e7*/
                  }
                  v24 = NiPoint3_Length(v71); /*0x5650f6*/
                  *(float *)&v66[3] = v24; /*0x5650fb*/
                  v68 = (char *)v10 + (_DWORD)v57; /*0x565115*/
                  v25 = HavokVector_ToWorldVector(v71, (__m128 *)&v88[1]); /*0x56511c*/
                  *(float *)v66 = *v25; /*0x565123*/
                  *(float *)&v66[1] = v25[1]; /*0x56512a*/
                  *(float *)&v66[2] = v25[2]; /*0x565136*/
                  v69 = 0; /*0x56513a*/
                  v70 = 0; /*0x565141*/
                  sub_6B0C70(a2, v24, COERCE_FLOAT(v66)); /*0x565148*/
                }
              }
            }
            else if ( v11 ) /*0x565159*/
            {
              if ( v59 >= (double)Game_RandomIntBelow(0x64) ) /*0x56517c*/
              {
                v26 = *(__m128 **)(v11 + 0x50); /*0x565182*/
                v27 = v26[0xE]; /*0x56518e*/
                v28 = _mm_mul_ps(v26[0xD], v26[0xD]); /*0x565195*/
                v89 = v27; /*0x5651b8*/
                *(__m128 *)&v72[1] = v28; /*0x5651c0*/
                if ( (float)(_mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0] /*0x5651cd*/
                           + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0])) > 1.0 )
                {
                  v49 = (1.0 - (double)Game_RandomIntInRange(stru_B3A00C, stru_B3A014) / fCostant_100) /*0x56521b*/
                      * fsqrt(
                          _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]));
                  v47 = Rand7(); /*0x565224*/
                  v55 = Rand7(); /*0x56522d*/
                  v52 = Rand7() - dbl_A3C770; /*0x565244*/
                  v80.m128_f32[0] = v47; /*0x56524c*/
                  v80.m128_f32[1] = v55; /*0x565257*/
                  v80.m128_f32[2] = v52; /*0x565262*/
                  v80.m128_f32[3] = 0.0; /*0x56526b*/
                  v29 = _mm_mul_ps(v80, v80); /*0x56527d*/
                  v30 = _mm_shuffle_ps(v29, v29, 0x55).m128_f32[0] + v29.m128_f32[0]; /*0x565287*/
                  v31 = _mm_shuffle_ps(v29, v29, 0xAA); /*0x56528b*/
                  v31.m128_f32[0] = v31.m128_f32[0] + v30; /*0x56528f*/
                  v32 = 0; /*0x565293*/
                  v31.m128_f32[0] = 1.0 / fsqrt(v31.m128_f32[0]); /*0x565296*/
                  v32.m128_f32[0] = v49; /*0x56529e*/
                  v80 = _mm_mul_ps(_mm_mul_ps(v80, _mm_shuffle_ps(v31, v31, 0)), _mm_shuffle_ps(v32, v32, 0)); /*0x5652ac*/
                  sub_8A6410(v11); /*0x5652b4*/
                  (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x54))( /*0x5652c9*/
                    *(_DWORD *)(v11 + 0x50),
                    &v80);
                  v28 = *(__m128 *)&v72[1]; /*0x5652cb*/
                  v27 = v89; /*0x5652d3*/
                }
                v33 = _mm_mul_ps(v27, v27); /*0x5652dd*/
                if ( (float)(_mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x565305*/
                           + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0])) > 1.0 )
                {
                  v53 = ((double)Game_RandomIntBelow(0x14) / fCostant_100 + dbl_A65A18) /*0x56534a*/
                      * fsqrt(
                          _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]));
                  v50 = Rand7(); /*0x565353*/
                  v48 = Rand7(); /*0x56535c*/
                  v56 = Rand7() - dbl_A3C770; /*0x565373*/
                  v81.m128_f32[0] = v50; /*0x56537b*/
                  v81.m128_f32[1] = v48; /*0x565386*/
                  v81.m128_f32[2] = v56; /*0x565391*/
                  v81.m128_f32[3] = 0.0; /*0x56539a*/
                  v34 = _mm_mul_ps(v81, v81); /*0x5653ac*/
                  v35 = _mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]; /*0x5653b6*/
                  v36 = _mm_shuffle_ps(v34, v34, 0xAA); /*0x5653ba*/
                  v36.m128_f32[0] = v36.m128_f32[0] + v35; /*0x5653be*/
                  v37 = 0; /*0x5653c2*/
                  v36.m128_f32[0] = 1.0 / fsqrt(v36.m128_f32[0]); /*0x5653c5*/
                  v37.m128_f32[0] = v53; /*0x5653cd*/
                  v81 = _mm_mul_ps(_mm_mul_ps(v81, _mm_shuffle_ps(v36, v36, 0)), _mm_shuffle_ps(v37, v37, 0)); /*0x5653db*/
                  sub_8A6410(v11); /*0x5653e3*/
                  (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x58))( /*0x5653f8*/
                    *(_DWORD *)(v11 + 0x50),
                    &v81);
                  v28 = *(__m128 *)&v72[1]; /*0x5653fa*/
                }
                v38 = **(_DWORD **)&v76[v45 + 8]; /*0x565411*/
                if ( v38 ) /*0x565415*/
                  v39 = *(_DWORD *)(v38 + 8); /*0x565417*/
                else
                  v39 = 0; /*0x56541c*/
                v61 = 4; /*0x565420*/
                if ( v39 ) /*0x565425*/
                  v62 = *(_BYTE *)(v39 + 0x10); /*0x56542a*/
                else
                  v62 = 0; /*0x565430*/
                v40 = *(__m128 **)(v11 + 0x50); /*0x565437*/
                v60[4] = 1.0; /*0x56543e*/
                v41 = fsqrt( /*0x565463*/
                        _mm_shuffle_ps(v28, v28, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v28, v28, 0x55).m128_f32[0] + v28.m128_f32[0]))
                    * dbl_A372E0;
                v60[3] = v41; /*0x565477*/
                v63 = (char *)v57 + v11; /*0x56547c*/
                v42 = HavokVector_ToWorldVector(v73, v40 + 4); /*0x565480*/
                v60[0] = *v42; /*0x565487*/
                v43 = *(_DWORD *)(v11 + 0xC); /*0x56548e*/
                v60[1] = v42[1]; /*0x565491*/
                v60[2] = v42[2]; /*0x56549d*/
                v64 = v43; /*0x5654a1*/
                v65 = 0; /*0x5654a5*/
                sub_6B0C70(a2, v41, COERCE_FLOAT(v60)); /*0x5654a9*/
              }
            }
            v45 += 0x10; /*0x5654b5*/
            ++v58; /*0x5654c4*/
          }
          while ( v58 < v77 ); /*0x5654c8*/
        }
        v90 = 0xFFFFFFFF; /*0x5654d5*/
        hkAllCdBodyPairCollector::~hkAllCdBodyPairCollector((hkAllCdBodyPairCollector *)&v74); /*0x5654e0*/
      }
    }
  }
}
