PlayerCharacter *__thiscall sub_538EC0(_DWORD *this, float *a2, float *a3, float a4, float *a5, _BYTE *a6)
{
  PlayerCharacter *result; // eax
  bool v8; // zf
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  double v13; // st6
  char v14; // bl
  double v15; // st7
  _DWORD *v16; // edi
  int v17; // esi
  char v18; // al
  PlayerCharacter *v19; // edi
  int v20; // ebx
  char *v21; // eax
  _DWORD *v22; // esi
  int v23; // eax
  char *v24; // edi
  char v25; // bl
  bool v26; // cc
  _DWORD *v27; // ecx
  int v28; // ecx
  __m128 *v29; // eax
  PlayerCharacter *v30; // ebx
  int v31; // eax
  int v32; // esi
  __m128 v33; // xmm1
  __m128 v34; // xmm3
  __m128 v35; // xmm4
  __m128 v36; // xmm0
  float v37; // xmm2_4
  float v38; // xmm5_4
  __m128 v39; // xmm0
  __m128 v40; // xmm2
  __m128 v41; // xmm0
  __m128 v42; // xmm0
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  double v45; // st6
  __m128 v46; // xmm3
  UInt32 v47; // eax
  void (__thiscall *v48)(int, bhkWorldRayCastData *); // edx
  int v49; // eax
  PlayerCharacter *v50; // eax
  __m128 v51; // xmm0
  int v52; // edi
  int **v53; // edx
  PlayerCharacter *v54; // eax
  float *v55; // esi
  PlayerCharacter *v56; // ebx
  int v57; // eax
  int v58; // eax
  _BYTE *v59; // ecx
  int v60; // edx
  int v61; // [esp+18h] [ebp-588h]
  char v62; // [esp+37h] [ebp-569h]
  PlayerCharacter *v63; // [esp+38h] [ebp-568h]
  PlayerCharacter *v64; // [esp+3Ch] [ebp-564h]
  float v65; // [esp+40h] [ebp-560h]
  float v66; // [esp+40h] [ebp-560h]
  PlayerCharacter *v67; // [esp+40h] [ebp-560h]
  float v68; // [esp+44h] [ebp-55Ch]
  float v69; // [esp+44h] [ebp-55Ch]
  int v70; // [esp+44h] [ebp-55Ch]
  PlayerCharacter *v71; // [esp+48h] [ebp-558h]
  float v72; // [esp+48h] [ebp-558h]
  float v73; // [esp+4Ch] [ebp-554h]
  float v74; // [esp+4Ch] [ebp-554h]
  float v75; // [esp+50h] [ebp-550h]
  float v76; // [esp+50h] [ebp-550h]
  int v77; // [esp+50h] [ebp-550h]
  PlayerCharacter *v78; // [esp+58h] [ebp-548h]
  float v79; // [esp+5Ch] [ebp-544h]
  float v80; // [esp+60h] [ebp-540h]
  int v81; // [esp+64h] [ebp-53Ch]
  int v82; // [esp+68h] [ebp-538h] BYREF
  int v83; // [esp+6Ch] [ebp-534h]
  int v84; // [esp+70h] [ebp-530h]
  int v85; // [esp+74h] [ebp-52Ch]
  int v86; // [esp+78h] [ebp-528h] BYREF
  _BYTE *v87; // [esp+7Ch] [ebp-524h]
  _DWORD *v88; // [esp+80h] [ebp-520h]
  int v89; // [esp+84h] [ebp-51Ch]
  char *v90; // [esp+88h] [ebp-518h]
  int v91; // [esp+8Ch] [ebp-514h]
  int v92; // [esp+90h] [ebp-510h]
  int v93; // [esp+94h] [ebp-50Ch]
  int v94; // [esp+98h] [ebp-508h] BYREF
  int v95; // [esp+9Ch] [ebp-504h] BYREF
  int v96[4]; // [esp+A0h] [ebp-500h] BYREF
  int v97; // [esp+B0h] [ebp-4F0h]
  int **v98; // [esp+BCh] [ebp-4E4h]
  __int16 v99; // [esp+C2h] [ebp-4DEh]
  __m128 v100; // [esp+D0h] [ebp-4D0h] BYREF
  float v101; // [esp+E0h] [ebp-4C0h]
  float v102; // [esp+E4h] [ebp-4BCh]
  __m128 v103; // [esp+F0h] [ebp-4B0h] BYREF
  __m128 v104; // [esp+100h] [ebp-4A0h] BYREF
  __m128 v105; // [esp+110h] [ebp-490h]
  __m128 v106; // [esp+120h] [ebp-480h] BYREF
  __m128 v107; // [esp+130h] [ebp-470h] BYREF
  __int128 v108; // [esp+140h] [ebp-460h]
  __m128 v109[4]; // [esp+150h] [ebp-450h] BYREF
  bhkWorldRayCastData v110; // [esp+190h] [ebp-410h] BYREF
  __m128 v111; // [esp+210h] [ebp-390h]
  int v112[4]; // [esp+240h] [ebp-360h] BYREF
  char *v113; // [esp+250h] [ebp-350h]
  int v114; // [esp+254h] [ebp-34Ch]
  unsigned int v115; // [esp+258h] [ebp-348h]
  char v116; // [esp+260h] [ebp-340h] BYREF
  float v117[107]; // [esp+3E0h] [ebp-1C0h] BYREF
  unsigned int v118; // [esp+59Ch] [ebp-4h]

  result = 0;
  dword_B365A8 = 0;
  v8 = *((_BYTE *)this + 4) == 0;
  v88 = this;
  v93 = (int)a2;
  v92 = (int)a3;
  v87 = a6;
  v64 = 0;
  if ( !v8 )
  {
    *(float *)&v112[1] = flt_A563E4;
    v112[0] = (int)&hkAllCdPointCollector::`vftable';
    v113 = &v116;
    v115 = 0x80000008;
    v114 = 0;
    v9 = *this;
    v8 = *this == 0;
    v118 = 0;
    v89 = 0;
    if ( !v8 )
    {
      v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v9 + 0x58))(v9);
      if ( v10 )
        v11 = *(_DWORD *)(v10 + 0x2B0);
      else
        v11 = 0;
      v89 = v11;
    }
    v68 = *a3 * a4;
    v75 = a3[1] * a4;
    v65 = a4 * a3[2];
    v69 = *a2 + v68;
    v76 = a2[1] + v75;
    v12 = v65 + a2[2];
    *v87 = 0;
    v66 = v12;
    *a5 = flt_A563E4;
    sub_959BC0(v96);
    dword_B3A6E4 = 0xDAD;
    v13 = hkFactor;
    v14 = 0;
    v15 = *a2 * v13;
    LOBYTE(v118) = 1;
    LOWORD(v97) = 0x100;
    v103.m128_f32[0] = v15;
    v103.m128_f32[1] = a2[1] * v13;
    v8 = *this == 0;
    v103.m128_f32[2] = a2[2] * v13;
    v104.m128_f32[0] = v69 * v13;
    v104.m128_f32[1] = v76 * v13;
    v104.m128_f32[2] = v13 * v66;
    if ( !v8 )
    {
      v102 = flt_A34BA0;
      v101 = v102;
      v100 = v104;
      sub_538920();
      v16 = (_DWORD *)*this;
      if ( v16 )
      {
        v17 = v16[2];
        if ( v17 )
        {
          sub_89F570(v16);
          (*(void (__thiscall **)(int, __m128 *, __m128 *, int *, _DWORD))(*(_DWORD *)v17 + 0x30))(
            v17,
            &v103,
            &v100,
            v112,
            0);
          sub_89F570(v16);
        }
      }
      if ( v114 > 0 )
      {
        sub_8AF890(v112);
        v14 = 1;
      }
    }
    v18 = useFuzzyPicking;
    v73 = flt_A563E4;
    v19 = 0;
    v80 = v73;
    v79 = v73;
    v67 = 0;
    v78 = 0;
    v85 = 0;
    v62 = v18;
    v84 = 0;
    v83 = 0;
    v81 = 0;
    if ( v14 )
    {
      v71 = 0;
      v63 = 0;
      v90 = 0;
      v77 = 0;
      if ( v114 > 0 )
      {
        v20 = 0;
        v70 = 0;
        do
        {
          v21 = v113;
          dword_B3A6E4 = 0xDAF;
          v22 = *(_DWORD **)&v21[v20 + 0x28];
          v111 = *(__m128 *)&v21[v20];
          if ( !v22 )
            goto LABEL_61;
          dword_B3A6E4 = 0xDB0;
          sub_4806E0((int)v22);
          dword_B3A6E4 = 0xDB1;
          if ( v23 )
            v63 = sub_4DC270(v23);
          if ( !v63 || v63 == TESDataHandler_g_PlayerRef )
            goto LABEL_61;
          if ( *((_BYTE *)v22 + 0x18) == 1 )
            v24 = (char *)v22 + v22[4];
          else
            v24 = 0;
          v25 = 0;
          v91 = v22[7] & 0x3F;
          if ( v91 == 1 )
          {
            if ( *v22 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*v22 + 8))(*v22) == 0x18 )
LABEL_29:
              v25 = 1;
          }
          else if ( (unsigned int)(v91 - 4) <= 2 )
          {
            goto LABEL_29;
          }
          if ( v24 && v24 != v90 && v25 )
          {
            v26 = v83 < dword_B11918;
            v90 = v24;
            if ( v26 )
            {
              v27 = (_DWORD *)*v88;
              ++v83;
              *(_QWORD *)&v108 = 0;
              v28 = *sub_497340(v27, &v95);
              v29 = *((__m128 **)v24 + 0x14);
              LODWORD(v108) = v28;
              v109[0] = v29[1];
              v109[1] = v29[2];
              v109[2] = v29[3];
              v109[3] = v29[4];
              sub_88FD10(&v106, v109, &v103);
              sub_88FD10(&v107, v109, &v104);
              v102 = 1.0;
              (*(void (__thiscall **)(_DWORD, char *, __m128 *, __m128 *))(*(_DWORD *)*v22 + 0x14))(
                *v22,
                (char *)&v82 + 3,
                &v106,
                &v100);
              if ( *sub_538A70(v100.m128_f32, (bool *)&v86 + 3) )
              {
                v30 = v63;
                if ( v73 > (double)v102 )
                {
                  v73 = v102;
                  v67 = v63;
                }
                goto LABEL_42;
              }
            }
          }
          else
          {
            dword_B3A6E4 = 0xDB2;
            if ( v71 != v63 )
            {
              if ( v63->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v63) )
              {
                if ( v81 < dword_B11920 )
                {
                  ++v81;
                  v31 = (int)v63->vtbl->super.super.super.GetNiNode((TESObjectREFR *)v63);
                  sub_481890((int)v96, (float *)v93, (float *)v92, a4, v31, 0);
                }
              }
            }
          }
          v30 = v63;
LABEL_42:
          switch ( v91 )
          {
            case 1:
            case 0xD:
            case 0x11:
            case 0x12:
              break;
            case 6:
              if ( v24 )
                goto LABEL_44;
              break;
            default:
LABEL_44:
              if ( v62 )
              {
                v32 = v89;
                if ( v89 )
                {
                  v33 = _mm_sub_ps(v104, v103);
                  v34 = _mm_sub_ps(v111, v103);
                  v35 = (__m128)LODWORD(flt_A3D65C);
                  v36 = _mm_mul_ps(v33, v33);
                  v36.m128_f32[0] = _mm_shuffle_ps(v36, v36, 0xAA).m128_f32[0]
                                  + (float)(_mm_shuffle_ps(v36, v36, 0x55).m128_f32[0] + v36.m128_f32[0]);
                  v37 = 1.0 / fsqrt(v36.m128_f32[0]);
                  v38 = *(float *)&dword_A46C30 - (float)((float)(v36.m128_f32[0] * v37) * v37);
                  v35.m128_f32[0] = v35.m128_f32[0] * v37;
                  v39 = v35;
                  v39.m128_f32[0] = v35.m128_f32[0] * v38;
                  v40 = _mm_mul_ps(_mm_shuffle_ps(v39, v39, 0), v33);
                  v41 = _mm_mul_ps(v40, v34);
                  v33.m128_f32[0] = _mm_shuffle_ps(v41, v41, 0x55).m128_f32[0] + v41.m128_f32[0];
                  v42 = _mm_shuffle_ps(v41, v41, 0xAA);
                  v42.m128_f32[0] = v42.m128_f32[0] + v33.m128_f32[0];
                  v43 = _mm_sub_ps(v34, _mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v40));
                  v44 = _mm_mul_ps(v43, v43);
                  v100.m128_i32[0] = fsqrt(
                                       _mm_shuffle_ps(v44, v44, 0xAA).m128_f32[0]
                                     + (float)(_mm_shuffle_ps(v44, v44, 0x55).m128_f32[0] + v44.m128_f32[0]));
                  v45 = dbl_A372E0;
                  v105 = v34;
                  v72 = v100.m128_f32[0] * v45;
                  if ( v79 > (double)v72 && v84 < dword_B11910 )
                  {
                    if ( v78 && v78 == v30 )
                    {
                      v46 = _mm_mul_ps(v34, v34);
                      v100.m128_i32[0] = fsqrt(
                                           _mm_shuffle_ps(v46, v46, 0xAA).m128_f32[0]
                                         + (float)(_mm_shuffle_ps(v46, v46, 0x55).m128_f32[0] + v46.m128_f32[0]));
                      v80 = v45 * v100.m128_f32[0];
                      v79 = v72;
                    }
                    else
                    {
                      ++v84;
                      bhkWorldRayCastData::Init(&v110);
                      v47 = *sub_497340((_DWORD *)*v88, &v94);
                      v110.WorldRayCastInput.From = (hkVector4)v103;
                      v110.unk60 = stru_BA7A40;
                      v110.WorldRayCastInput.FilterInfo = v47;
                      v110.WorldRayCastInput.To = (hkVector4)v111;
                      sub_538C00(v117);
                      v48 = *(void (__thiscall **)(int, bhkWorldRayCastData *))(*(_DWORD *)v32 + 0x88);
                      v110.RayHitCollector2 = (hkRayHitCollector *)v117;
                      LOBYTE(v118) = 2;
                      v110.RayHitCollector1 = 0;
                      v48(v32, &v110);
                      if ( SLODWORD(v117[5]) <= 0
                        || (sub_4806E0(*(_DWORD *)(LODWORD(v117[4]) + 0x20)), v49)
                        && (v50 = sub_4DC270(v49)) != 0
                        && v50 == v30 )
                      {
                        v51 = _mm_mul_ps(v105, v105);
                        v100.m128_i32[0] = fsqrt(
                                             _mm_shuffle_ps(v51, v51, 0xAA).m128_f32[0]
                                           + (float)(_mm_shuffle_ps(v51, v51, 0x55).m128_f32[0] + v51.m128_f32[0]));
                        v78 = v30;
                        v80 = v100.m128_f32[0] * dbl_A372E0;
                        v79 = v72;
                        if ( v24 )
                          v52 = *((_DWORD *)v24 + 3);
                        else
                          v52 = 0;
                        v85 = v52;
                      }
                      LOBYTE(v118) = 1;
                      sub_538C80(v117);
                    }
                  }
                }
              }
              break;
          }
          v19 = v67;
          v71 = v30;
          v20 = v70;
LABEL_61:
          v20 += 0x30;
          v26 = ++v77 < v114;
          v70 = v20;
        }
        while ( v26 );
      }
    }
    v74 = v73 * a4;
    if ( v99 )
    {
      v53 = v98;
      dword_B3A6E4 = 0xDB6;
      v61 = **v53;
      dword_B3A6E4 = 0xDB7;
      v54 = sub_4DC270(v61);
      v55 = a5;
      dword_B3A6E4 = 0xDB8;
      v64 = v54;
      *a5 = *((float *)*v98 + 5);
      dword_B3A6E4 = 0xDB9;
      if ( v74 < (double)*a5 )
      {
        *a5 = v74;
        v64 = v19;
      }
    }
    else
    {
      if ( v19 )
      {
        *a5 = v74;
        v64 = v19;
      }
      v55 = a5;
    }
    v56 = v64;
    dword_B3A6E4 = 0xDBA;
    if ( !v62 )
      goto LABEL_81;
    if ( v64 && v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64) )
    {
      v57 = (unsigned __int8)v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64)->member.type - 0x1A;
      if ( v57 )
      {
        v58 = v57 - 2;
        if ( v58 && v58 != 2 )
          goto LABEL_81;
      }
      else if ( (*(_DWORD *)&v64->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v64)[5].member.type & 2) != 0 )
      {
LABEL_81:
        LOBYTE(v118) = 0;
        sub_959EC0(v96);
        v118 = 0xFFFFFFFF;
        hkAllCdPointCollector::~hkAllCdPointCollector((hkAllCdPointCollector *)v112);
        return v56;
      }
    }
    if ( v78 )
    {
      if ( v64 != v78 )
      {
        v59 = v87;
        v60 = v85;
        *v55 = v80;
        *v59 = 1;
        dword_B365A8 = v60;
        v56 = v78;
      }
    }
    goto LABEL_81;
  }
  return result;
}
