void __thiscall sub_537F10(int this, float a2)
{
  bool v3; // zf
  int (*GetPos)(void); // edx
  float *v5; // eax
  double v6; // rt1
  bool v7; // bl
  void (__thiscall ***v8)(void *, int); // esi
  int *v9; // edi
  void (__thiscall ***v10)(void *, int); // esi
  int v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  int *v14; // edi
  float *v15; // ebx
  int v16; // ecx
  __m128 v17; // xmm0
  unsigned int v18; // eax
  double v19; // st7
  __m128 *v20; // ecx
  double v21; // st6
  double v22; // st4
  double v23; // st6
  double v24; // st7
  double v25; // st7
  double v26; // st7
  __m128 v27; // xmm0
  __m128 v28; // xmm0
  double v29; // st6
  double v30; // st5
  int v31; // ecx
  double v32; // st7
  int v33; // ebx
  double v34; // st7
  void (__thiscall *v35)(int *, __m128 *); // edx
  __m128 v36; // xmm4
  double v37; // st5
  double v38; // st6
  __m128 *v39; // eax
  __m128 v40; // xmm0
  __m128 v41; // xmm3
  __m128 v42; // xmm5
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  __m128 v47; // xmm0
  double v48; // st7
  float v49; // [esp+44h] [ebp-178h]
  float v50; // [esp+44h] [ebp-178h]
  float v51; // [esp+44h] [ebp-178h]
  float v52; // [esp+44h] [ebp-178h]
  float v53; // [esp+44h] [ebp-178h]
  float v54; // [esp+44h] [ebp-178h]
  float v55; // [esp+44h] [ebp-178h]
  float v56; // [esp+44h] [ebp-178h]
  float v57; // [esp+44h] [ebp-178h]
  float v58; // [esp+44h] [ebp-178h]
  float v59; // [esp+44h] [ebp-178h]
  float v60; // [esp+48h] [ebp-174h]
  float v61; // [esp+48h] [ebp-174h]
  float v62; // [esp+48h] [ebp-174h]
  float v63; // [esp+48h] [ebp-174h]
  float v64; // [esp+48h] [ebp-174h]
  float v65; // [esp+48h] [ebp-174h]
  float *v66; // [esp+48h] [ebp-174h]
  float v67; // [esp+48h] [ebp-174h]
  float v68; // [esp+48h] [ebp-174h]
  float v69; // [esp+48h] [ebp-174h]
  float v70; // [esp+4Ch] [ebp-170h]
  float v71; // [esp+4Ch] [ebp-170h]
  float v72; // [esp+4Ch] [ebp-170h]
  char v73; // [esp+53h] [ebp-169h]
  NodeVoid *v74; // [esp+54h] [ebp-168h]
  float v75; // [esp+58h] [ebp-164h]
  int v76; // [esp+5Ch] [ebp-160h]
  float v77; // [esp+64h] [ebp-158h]
  int v78; // [esp+68h] [ebp-154h] BYREF
  int v79; // [esp+6Ch] [ebp-150h]
  float *v80; // [esp+70h] [ebp-14Ch]
  float v81; // [esp+74h] [ebp-148h]
  void *outData[4]; // [esp+7Ch] [ebp-140h] BYREF
  void *v83; // [esp+8Ch] [ebp-130h] BYREF
  float v84[3]; // [esp+90h] [ebp-12Ch] BYREF
  __m128 v85; // [esp+9Ch] [ebp-120h] BYREF
  __m128 v86; // [esp+ACh] [ebp-110h] BYREF
  __m128 v87; // [esp+BCh] [ebp-100h]
  __m128 v88; // [esp+CCh] [ebp-F0h] BYREF
  __m128 v89; // [esp+DCh] [ebp-E0h] BYREF
  char v90[8]; // [esp+ECh] [ebp-D0h] BYREF
  float v91; // [esp+F4h] [ebp-C8h]
  float v92; // [esp+104h] [ebp-B8h]
  __m128 v93; // [esp+10Ch] [ebp-B0h]
  __m128 v94; // [esp+11Ch] [ebp-A0h]
  __m128 v95; // [esp+12Ch] [ebp-90h] BYREF
  __m128 v96; // [esp+13Ch] [ebp-80h]
  __m128 v97; // [esp+14Ch] [ebp-70h] BYREF
  __m128 v98; // [esp+15Ch] [ebp-60h] BYREF
  __m128 v99; // [esp+16Ch] [ebp-50h] BYREF
  __m128 v100; // [esp+17Ch] [ebp-40h]
  __m128 v101[2]; // [esp+18Ch] [ebp-30h] BYREF

  v3 = *(_BYTE *)(this + 8) == 0; /*0x537f2e*/
  v80 = (float *)this; /*0x537f33*/
  v76 = 0; /*0x537f37*/
  if ( !v3 )
  {
    *(float *)(this + 0x14) = *(float *)(this + 0x14) - a2; /*0x537f4b*/
    GetPos = (int (*)(void))reference->vtbl->super.super.super.GetPos; /*0x537f5c*/
    v49 = MEMORY[0xB37A58][0x22] * MEMORY[0xB37A58][0x22]; /*0x537f6c*/
    v77 = v49 * hkFactor; /*0x537f7e*/
    *(float *)&outData[3] = hkFactor * MEMORY[0xB37A58][0x24]; /*0x537f88*/
    v5 = (float *)GetPos(); /*0x537f8c*/
    v74 = (NodeVoid *)(this + 0xC); /*0x537f99*/
    v6 = hkFactor; /*0x537f9f*/
    v93.m128_f32[0] = *v5 * v6; /*0x537fa1*/
    v93.m128_f32[1] = v5[1] * v6; /*0x537fad*/
    v93.m128_f32[2] = v6 * v5[2]; /*0x537fb7*/
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 ) /*0x538062*/
            {
              while ( 1 ) /*0x537fc0*/
              {
                v7 = 0; /*0x537fde*/
                if ( v74 ) /*0x537fc6*/
                {
                  v76 |= 1u; /*0x537fd4*/
                  if ( *NodeVoid_GetDataAddRef(v74, &outData[2]) ) /*0x537fd9*/
                    v7 = 1; /*0x537fc6*/
                }
                if ( (v76 & 1) != 0 ) /*0x537fe9*/
                {
                  v8 = (void (__thiscall ***)(void *, int))outData[2]; /*0x537feb*/
                  v76 &= ~1u; /*0x537fef*/
                  if ( outData[2] ) /*0x537ff6*/
                  {
                    if ( !InterlockedDecrement((volatile LONG *)outData[2] + 1) ) /*0x537ffc*/
                    {
                      if ( v8 ) /*0x538008*/
                        (**v8)(v8, 1); /*0x538012*/
                    }
                  }
                }
                if ( !v7 ) /*0x538016*/
                  return; /*0x538016*/
                v9 = (int *)*NodeVoid_GetDataAddRef(v74, &v83); /*0x538028*/
                if ( v83 ) /*0x538030*/
                {
                  v10 = (void (__thiscall ***)(void *, int))v83; /*0x538032*/
                  if ( !InterlockedDecrement((volatile LONG *)v83 + 1) ) /*0x538038*/
                    (**v10)(v10, 1); /*0x53804e*/
                }
                v11 = v9[2]; /*0x538050*/
                if ( v11 ) /*0x538055*/
                {
                  if ( !*(_BYTE *)(v11 + 0x92) ) /*0x53805b*/
                    break; /*0x53805b*/
                }
LABEL_74:
                v74 = v74->next; /*0x53882d*/
              }
              v89 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x40); /*0x538073*/
              v12 = _mm_sub_ps(v89, v93); /*0x53807b*/
              v13 = _mm_mul_ps(v12, v12); /*0x538083*/
              v81 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0] /*0x53809c*/
                  + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
              if ( v81 <= (double)v77 ) /*0x5380ad*/
                break; /*0x5380ad*/
              if ( (v9[6] & 8) != 0 ) /*0x5380b8*/
              {
                if ( *sub_8A63F0((_DWORD *)v11, (_BYTE *)&v78 + 3) ) /*0x5380c6*/
                {
                  v14 = (int *)v9[2]; /*0x5380cb*/
                  if ( v14 ) /*0x5380d0*/
                    sub_8A6440(v14); /*0x5380d4*/
                }
              }
              v74 = v74->next; /*0x5380e0*/
            }
            v15 = v80; /*0x5380e9*/
            if ( *((_DWORD *)v80 + 8) <= 1u )
            {
              v19 = sub_5377E0(v80, 0, 0); /*0x53815b*/
              v17 = v89; /*0x538160*/
            }
            else
            {
              HavokVector_ToWorldVector(v84, &v89); /*0x538100*/
              v79 = (int)v84[0]; /*0x53810c*/
              v16 = *((_DWORD *)v15 + 8); /*0x53811c*/
              v17 = v89; /*0x538129*/
              v18 = (v79 >> 0xC) + v16 * (((int)v84[1] >> 0xC) - *((_DWORD *)v15 + 0xA)) - *((_DWORD *)v15 + 9); /*0x53813a*/
              v19 = v18 >= v16 * v16 ? flt_A3B888 : *(float *)(*((_DWORD *)v15 + 6) + 4 * v18);
            }
            v75 = v19; /*0x538168*/
            v81 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]; /*0x538174*/
            if ( v81 <= v75 + *(float *)&outData[3] ) /*0x538189*/
              break; /*0x538189*/
            v74 = v74->next; /*0x538192*/
          }
          (*(void (__thiscall **)(int *, char *))(*v9 + 0xB0))(v9, v90); /*0x5381ad*/
          if ( v75 >= (double)v91 ) /*0x5381c3*/
            break; /*0x5381c3*/
          if ( (v9[6] & 8) == 0 ) /*0x5387f7*/
          {
            v9[6] &= ~8u; /*0x538827*/
            goto LABEL_74; /*0x538827*/
          }
          v59 = v75 * dbl_A372E0; /*0x538802*/
          sub_5378B0(v15, v9, v59); /*0x53880e*/
          v9[6] &= ~8u; /*0x538817*/
          v74 = v74->next; /*0x53881e*/
        }
        v20 = *(__m128 **)(v11 + 0x50); /*0x5381d2*/
        v94 = *(__m128 *)(*(_DWORD *)(v11 + 8) + 0x20); /*0x5381d5*/
        v100 = v20[0xD]; /*0x5381e4*/
        v50 = sub_89DA90(v20->m128_f32); /*0x5381f1*/
        v60 = v92 - v91; /*0x538209*/
        v21 = v60; /*0x53820d*/
        v61 = dbl_A3C770 * v60 + v91; /*0x53821b*/
        v22 = v21; /*0x53822b*/
        v23 = v61; /*0x53822b*/
        v24 = v75 - v61; /*0x538235*/
        v62 = v91 + v22 * dbl_A563D8; /*0x538237*/
        v63 = v24 / (v62 - v23); /*0x538241*/
        if ( v63 > 0.0 ) /*0x538250*/
          break; /*0x538250*/
        v74 = v74->next; /*0x538259*/
      }
      v70 = sub_5362F0((int)v15, (int)v9, *(float *)&v11, (int)v9); /*0x538268*/
      v25 = v63; /*0x53826c*/
      v73 = 1; /*0x538279*/
      if ( flt_B118E0 > (double)v63 && v70 > 0.0 ) /*0x538296*/
        break; /*0x538296*/
LABEL_45:
      v3 = *(_DWORD *)(v11 + 0x6C) + *(_DWORD *)(v11 + 0x78) == 0; /*0x53831f*/
      v71 = -v70; /*0x53832b*/
      v27 = 0; /*0x53832f*/
      v65 = v71 * v50; /*0x53833a*/
      v27.m128_f32[0] = v65; /*0x538344*/
      v99 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v94); /*0x538357*/
      if ( v3 ) /*0x53835f*/
      {
        sub_8A3E00(v9, v101); /*0x53836f*/
        v87.m128_f32[0] = 0.0; /*0x53837e*/
        v87.m128_f32[1] = 0.0; /*0x53838d*/
        v87.m128_f32[2] = 0.0; /*0x538394*/
        v28 = _mm_sub_ps(v101[1], v101[0]); /*0x53839b*/
        v87.m128_f32[3] = 0.0; /*0x53839e*/
        v86 = v28; /*0x5383a5*/
        v29 = v28.m128_f32[1]; /*0x5383b4*/
        v30 = v28.m128_f32[2]; /*0x5383bf*/
        if ( v28.m128_f32[1] <= (double)v28.m128_f32[0] ) /*0x5383c9*/
        {
          if ( v30 <= v28.m128_f32[0] ) /*0x5383e9*/
            v31 = 0; /*0x5383f2*/
          else
            v31 = 2; /*0x5383eb*/
        }
        else if ( v30 <= v29 ) /*0x5383d2*/
        {
          v31 = 1; /*0x5383db*/
        }
        else
        {
          v31 = 2; /*0x5383d4*/
        }
        v32 = v28.m128_f32[2]; /*0x5383f4*/
        if ( v28.m128_f32[0] <= v29 ) /*0x5383fd*/
        {
          if ( v28.m128_f32[0] <= v32 ) /*0x538421*/
            v33 = 0; /*0x53842a*/
          else
            v33 = 2; /*0x538423*/
        }
        else if ( v29 <= v32 ) /*0x538408*/
        {
          v33 = 1; /*0x538411*/
        }
        else
        {
          v33 = 2; /*0x53840a*/
        }
        v66 = &v86.m128_f32[v31]; /*0x538441*/
        if ( v86.m128_f32[v33] * kFaceGenVariationScale1_5 < *v66 ) /*0x538452*/
        {
          v34 = sub_537770(v71); /*0x538460*/
          v35 = *(void (__thiscall **)(int *, __m128 *))(*v9 + 0x90); /*0x538474*/
          v87.m128_f32[v33] = v34 * (*v66 / v86.m128_f32[v33] * dbl_A2FC80); /*0x53848f*/
          v35(v9, &v95); /*0x538496*/
          v36 = 0; /*0x5384a9*/
          v37 = dbl_A3D0C0; /*0x5384ac*/
          v38 = v95.m128_f32[3] * v37; /*0x5384b5*/
          v39 = (__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60); /*0x5384c9*/
          v67 = v95.m128_f32[3] * v38 - dbl_A2F928; /*0x5384d2*/
          v36.m128_f32[0] = v67; /*0x5384de*/
          v96 = v95; /*0x5384ea*/
          v96.m128_f32[3] = 0.0; /*0x5384f2*/
          v40 = _mm_mul_ps(v96, v87); /*0x538504*/
          v81 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0] /*0x53851d*/
              + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
          v41 = 0; /*0x538529*/
          v42 = 0; /*0x53852e*/
          v68 = v37 * v81; /*0x538531*/
          v42.m128_f32[0] = v68; /*0x53853b*/
          v69 = v38; /*0x53853f*/
          v41.m128_f32[0] = v69; /*0x538549*/
          v88 = _mm_add_ps( /*0x538585*/
                  _mm_mul_ps(
                    _mm_sub_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v96, v96, 0xC9), _mm_shuffle_ps(v87, v87, 0xD2)),
                      _mm_mul_ps(_mm_shuffle_ps(v96, v96, 0xD2), _mm_shuffle_ps(v87, v87, 0xC9))),
                    _mm_shuffle_ps(v41, v41, 0)),
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v96), _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v87)));
          v88 = _mm_add_ps(*v39, v88); /*0x538593*/
          sub_8A78E0((LPCRITICAL_SECTION *)unk_BA7DA0, (int)v39, (int)&v88, 0xFF7FFF00, 0); /*0x5385b1*/
          v15 = v80; /*0x5385b6*/
          goto LABEL_65; /*0x5385ba*/
        }
        v43 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60); /*0x5385bf*/
        v15 = v80; /*0x5385c3*/
      }
      else
      {
        v43 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60); /*0x5385cc*/
      }
      v88 = v43; /*0x5385d0*/
LABEL_65:
      sub_8A6410(v11); /*0x5385d8*/
      (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x68))(LODWORD(a2), &v99, &v88); /*0x5385fe*/
      v44 = 0; /*0x538604*/
      v51 = v50 * dbl_A3D360; /*0x53860f*/
      v44.m128_f32[0] = v51; /*0x538619*/
      v97 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v94); /*0x53862c*/
      sub_8A6410(v11); /*0x538634*/
      (*(void (__stdcall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x6C))(LODWORD(a2), &v97); /*0x538650*/
      v85 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0xD0); /*0x538661*/
      v72 = v85.m128_f32[2]; /*0x53866a*/
      v85.m128_f32[2] = 0.0; /*0x538670*/
      if ( v73 ) /*0x538674*/
      {
        v52 = MEMORY[0xB37A58][0x28] * dbl_A3D360 * a2; /*0x538685*/
        v53 = exp(v52); /*0x538692*/
        v72 = v53 * v72; /*0x53869e*/
      }
      v45 = _mm_mul_ps(v85, v85); /*0x5386a7*/
      v81 = fsqrt( /*0x5386c4*/
              _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]));
      if ( MEMORY[0xB37A58][0x20] < (double)v81 ) /*0x5386db*/
      {
        v54 = MEMORY[0xB37A58][0x26] * dbl_A3D360 * a2; /*0x5386ec*/
        v55 = exp(v54); /*0x5386f9*/
        v46 = 0; /*0x538701*/
        v46.m128_f32[0] = v55; /*0x53870e*/
        v85 = _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v85); /*0x53871e*/
      }
      v85.m128_f32[2] = v72; /*0x538729*/
      sub_8A6410(v11); /*0x53872d*/
      (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x54))(*(_DWORD *)(v11 + 0x50), &v85); /*0x53873f*/
      v56 = MEMORY[0xB37A58][0x2A] * dbl_A3D360 * a2; /*0x538750*/
      v57 = exp(v56); /*0x53875d*/
      v47 = 0; /*0x53876c*/
      v47.m128_f32[0] = v57; /*0x538775*/
      v98 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0xE0)); /*0x53878c*/
      sub_8A6410(v11); /*0x538794*/
      (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x58))(*(_DWORD *)(v11 + 0x50), &v98); /*0x5387ab*/
      if ( (v9[6] & 8) != 0 ) /*0x5387b8*/
        goto LABEL_74; /*0x5387b8*/
      v48 = v75 * dbl_A372E0; /*0x5387bf*/
      v9[6] |= 8u; /*0x5387ca*/
      v58 = v48; /*0x5387cd*/
      sub_5378B0(v15, v9, v58); /*0x5387d9*/
      v74 = v74->next; /*0x5387e5*/
    }
    if ( flt_B118DC >= v25 ) /*0x5382a9*/
    {
      if ( flt_B118D4 >= v25 ) /*0x5382c2*/
      {
        if ( unk_B365A0 >= v25 ) /*0x5382db*/
          goto LABEL_43; /*0x5382db*/
        v26 = flt_B118D0; /*0x5382dd*/
      }
      else
      {
        v26 = unk_B365A4; /*0x5382c6*/
      }
    }
    else
    {
      v26 = flt_B118D8; /*0x5382ad*/
    }
    v70 = v26; /*0x5382e3*/
LABEL_43:
    v81 = _mm_shuffle_ps(v100, v100, 0xAA).m128_f32[0]; /*0x5382e7*/
    v64 = fabs(v81); /*0x5382ff*/
    if ( flt_B118CC > (double)v64 ) /*0x538314*/
      v73 = 0; /*0x538316*/
    goto LABEL_45; /*0x538316*/
  }
}
