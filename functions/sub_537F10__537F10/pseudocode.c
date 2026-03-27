void __thiscall sub_537F10(int this, float a2)
{
  bool v3; // zf
  int (*GetPos)(void); // edx
  float *v5; // eax
  double v6; // rt1
  bool v7; // bl
  void (__thiscall ***v8)(_DWORD, int); // esi
  int *v9; // edi
  void (__thiscall ***v10)(_DWORD, int); // esi
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
  int *v74; // [esp+54h] [ebp-168h]
  float v75; // [esp+58h] [ebp-164h]
  int v76; // [esp+5Ch] [ebp-160h]
  float v77; // [esp+64h] [ebp-158h]
  int v78; // [esp+68h] [ebp-154h] BYREF
  int v79; // [esp+6Ch] [ebp-150h]
  float *v80; // [esp+70h] [ebp-14Ch]
  float v81; // [esp+74h] [ebp-148h]
  int v82; // [esp+84h] [ebp-138h] BYREF
  float v83; // [esp+88h] [ebp-134h]
  int v84; // [esp+8Ch] [ebp-130h] BYREF
  float v85[3]; // [esp+90h] [ebp-12Ch] BYREF
  __m128 v86; // [esp+9Ch] [ebp-120h] BYREF
  __m128 v87; // [esp+ACh] [ebp-110h] BYREF
  __m128 v88; // [esp+BCh] [ebp-100h]
  __m128 v89; // [esp+CCh] [ebp-F0h] BYREF
  __m128 v90; // [esp+DCh] [ebp-E0h] BYREF
  char v91[8]; // [esp+ECh] [ebp-D0h] BYREF
  float v92; // [esp+F4h] [ebp-C8h]
  float v93; // [esp+104h] [ebp-B8h]
  __m128 v94; // [esp+10Ch] [ebp-B0h]
  __m128 v95; // [esp+11Ch] [ebp-A0h]
  __m128 v96; // [esp+12Ch] [ebp-90h] BYREF
  __m128 v97; // [esp+13Ch] [ebp-80h]
  __m128 v98; // [esp+14Ch] [ebp-70h] BYREF
  __m128 v99; // [esp+15Ch] [ebp-60h] BYREF
  __m128 v100; // [esp+16Ch] [ebp-50h] BYREF
  __m128 v101; // [esp+17Ch] [ebp-40h]
  __m128 v102[2]; // [esp+18Ch] [ebp-30h] BYREF

  v3 = *(_BYTE *)(this + 8) == 0;
  v80 = (float *)this;
  v76 = 0;
  if ( !v3 )
  {
    *(float *)(this + 0x14) = *(float *)(this + 0x14) - a2;
    GetPos = (int (*)(void))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos;
    v49 = flt_B37AE0 * flt_B37AE0;
    v77 = v49 * hkFactor;
    v83 = hkFactor * flt_B37AE8;
    v5 = (float *)GetPos();
    v74 = (int *)(this + 0xC);
    v6 = hkFactor;
    v94.m128_f32[0] = *v5 * v6;
    v94.m128_f32[1] = v5[1] * v6;
    v94.m128_f32[2] = v6 * v5[2];
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              while ( 1 )
              {
                v7 = 0;
                if ( v74 )
                {
                  v76 |= 1u;
                  if ( *sub_677C70(v74, &v82) )
                    v7 = 1;
                }
                if ( (v76 & 1) != 0 )
                {
                  v8 = (void (__thiscall ***)(_DWORD, int))v82;
                  v76 &= ~1u;
                  if ( v82 )
                  {
                    if ( !InterlockedDecrement((volatile LONG *)(v82 + 4)) )
                    {
                      if ( v8 )
                        (**v8)(v8, 1);
                    }
                  }
                }
                if ( !v7 )
                  return;
                v9 = (int *)*sub_677C70(v74, &v84);
                if ( v84 )
                {
                  v10 = (void (__thiscall ***)(_DWORD, int))v84;
                  if ( !InterlockedDecrement((volatile LONG *)(v84 + 4)) )
                    (**v10)(v10, 1);
                }
                v11 = v9[2];
                if ( v11 )
                {
                  if ( !*(_BYTE *)(v11 + 0x92) )
                    break;
                }
LABEL_74:
                v74 = (int *)v74[1];
              }
              v90 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x40);
              v12 = _mm_sub_ps(v90, v94);
              v13 = _mm_mul_ps(v12, v12);
              v81 = _mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]);
              if ( v81 <= (double)v77 )
                break;
              if ( (v9[6] & 8) != 0 )
              {
                if ( *sub_8A63F0((_DWORD *)v11, (_BYTE *)&v78 + 3) )
                {
                  v14 = (int *)v9[2];
                  if ( v14 )
                    sub_8A6440(v14);
                }
              }
              v74 = (int *)v74[1];
            }
            v15 = v80;
            if ( *((_DWORD *)v80 + 8) <= 1u )
            {
              v19 = sub_5377E0(v80, 0, 0);
              v17 = v90;
            }
            else
            {
              sub_43F3E0(v85, &v90);
              v79 = (int)v85[0];
              v16 = *((_DWORD *)v15 + 8);
              v17 = v90;
              v18 = (v79 >> 0xC) + v16 * (((int)v85[1] >> 0xC) - *((_DWORD *)v15 + 0xA)) - *((_DWORD *)v15 + 9);
              v19 = v18 >= v16 * v16 ? flt_A3B888 : *(float *)(*((_DWORD *)v15 + 6) + 4 * v18);
            }
            v75 = v19;
            v81 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0];
            if ( v81 <= v75 + v83 )
              break;
            v74 = (int *)v74[1];
          }
          (*(void (__thiscall **)(int *, char *))(*v9 + 0xB0))(v9, v91);
          if ( v75 >= (double)v92 )
            break;
          if ( (v9[6] & 8) == 0 )
          {
            v9[6] &= ~8u;
            goto LABEL_74;
          }
          v59 = v75 * dbl_A372E0;
          sub_5378B0(v15, v9, v59);
          v9[6] &= ~8u;
          v74 = (int *)v74[1];
        }
        v20 = *(__m128 **)(v11 + 0x50);
        v95 = *(__m128 *)(*(_DWORD *)(v11 + 8) + 0x20);
        v101 = v20[0xD];
        v50 = sub_89DA90(v20->m128_f32);
        v60 = v93 - v92;
        v21 = v60;
        v61 = dbl_A3C770 * v60 + v92;
        v22 = v21;
        v23 = v61;
        v24 = v75 - v61;
        v62 = v92 + v22 * dbl_A563D8;
        v63 = v24 / (v62 - v23);
        if ( v63 > 0.0 )
          break;
        v74 = (int *)v74[1];
      }
      v70 = sub_5362F0((int)v15, (int)v9, *(float *)&v11, (int)v9);
      v25 = v63;
      v73 = 1;
      if ( flt_B118E0 > (double)v63 && v70 > 0.0 )
        break;
LABEL_45:
      v3 = *(_DWORD *)(v11 + 0x6C) + *(_DWORD *)(v11 + 0x78) == 0;
      v71 = -v70;
      v27 = 0;
      v65 = v71 * v50;
      v27.m128_f32[0] = v65;
      v100 = _mm_mul_ps(_mm_shuffle_ps(v27, v27, 0), v95);
      if ( v3 )
      {
        sub_8A3E00(v9, v102);
        v88.m128_f32[0] = 0.0;
        v88.m128_f32[1] = 0.0;
        v88.m128_f32[2] = 0.0;
        v28 = _mm_sub_ps(v102[1], v102[0]);
        v88.m128_f32[3] = 0.0;
        v87 = v28;
        v29 = v28.m128_f32[1];
        v30 = v28.m128_f32[2];
        if ( v28.m128_f32[1] <= (double)v28.m128_f32[0] )
        {
          if ( v30 <= v28.m128_f32[0] )
            v31 = 0;
          else
            v31 = 2;
        }
        else if ( v30 <= v29 )
        {
          v31 = 1;
        }
        else
        {
          v31 = 2;
        }
        v32 = v28.m128_f32[2];
        if ( v28.m128_f32[0] <= v29 )
        {
          if ( v28.m128_f32[0] <= v32 )
            v33 = 0;
          else
            v33 = 2;
        }
        else if ( v29 <= v32 )
        {
          v33 = 1;
        }
        else
        {
          v33 = 2;
        }
        v66 = &v87.m128_f32[v31];
        if ( v87.m128_f32[v33] * dbl_A563D0 < *v66 )
        {
          v34 = sub_537770(v71);
          v35 = *(void (__thiscall **)(int *, __m128 *))(*v9 + 0x90);
          v88.m128_f32[v33] = v34 * (*v66 / v87.m128_f32[v33] * dbl_A2FC80);
          v35(v9, &v96);
          v36 = 0;
          v37 = dbl_A3D0C0;
          v38 = v96.m128_f32[3] * v37;
          v39 = (__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60);
          v67 = v96.m128_f32[3] * v38 - dbl_A2F928;
          v36.m128_f32[0] = v67;
          v97 = v96;
          v97.m128_f32[3] = 0.0;
          v40 = _mm_mul_ps(v97, v88);
          v81 = _mm_shuffle_ps(v40, v40, 0xAA).m128_f32[0]
              + (float)(_mm_shuffle_ps(v40, v40, 0x55).m128_f32[0] + v40.m128_f32[0]);
          v41 = 0;
          v42 = 0;
          v68 = v37 * v81;
          v42.m128_f32[0] = v68;
          v69 = v38;
          v41.m128_f32[0] = v69;
          v89 = _mm_add_ps(
                  _mm_mul_ps(
                    _mm_sub_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v97, v97, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                      _mm_mul_ps(_mm_shuffle_ps(v97, v97, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9))),
                    _mm_shuffle_ps(v41, v41, 0)),
                  _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v42, v42, 0), v97), _mm_mul_ps(_mm_shuffle_ps(v36, v36, 0), v88)));
          v89 = _mm_add_ps(*v39, v89);
          sub_8A78E0((LPCRITICAL_SECTION *)dword_BA7DA0, (int)v39, (int)&v89, 0xFF7FFF00, 0);
          v15 = v80;
          goto LABEL_65;
        }
        v43 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60);
        v15 = v80;
      }
      else
      {
        v43 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0x60);
      }
      v89 = v43;
LABEL_65:
      sub_8A6410(v11);
      (*(void (__stdcall **)(_DWORD, __m128 *, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x68))(LODWORD(a2), &v100, &v89);
      v44 = 0;
      v51 = v50 * dbl_A3D360;
      v44.m128_f32[0] = v51;
      v98 = _mm_mul_ps(_mm_shuffle_ps(v44, v44, 0), v95);
      sub_8A6410(v11);
      (*(void (__stdcall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x6C))(LODWORD(a2), &v98);
      v86 = *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0xD0);
      v72 = v86.m128_f32[2];
      v86.m128_f32[2] = 0.0;
      if ( v73 )
      {
        v52 = fSubmergedLinearDampingV * dbl_A3D360 * a2;
        v53 = exp(v52);
        v72 = v53 * v72;
      }
      v45 = _mm_mul_ps(v86, v86);
      v81 = fsqrt(
              _mm_shuffle_ps(v45, v45, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v45, v45, 0x55).m128_f32[0] + v45.m128_f32[0]));
      if ( flt_B37AD8 < (double)v81 )
      {
        v54 = flt_B37AF0 * dbl_A3D360 * a2;
        v55 = exp(v54);
        v46 = 0;
        v46.m128_f32[0] = v55;
        v86 = _mm_mul_ps(_mm_shuffle_ps(v46, v46, 0), v86);
      }
      v86.m128_f32[2] = v72;
      sub_8A6410(v11);
      (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x54))(*(_DWORD *)(v11 + 0x50), &v86);
      v56 = fSubmergedAngularDamping * dbl_A3D360 * a2;
      v57 = exp(v56);
      v47 = 0;
      v47.m128_f32[0] = v57;
      v99 = _mm_mul_ps(_mm_shuffle_ps(v47, v47, 0), *(__m128 *)(*(_DWORD *)(v11 + 0x50) + 0xE0));
      sub_8A6410(v11);
      (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v11 + 0x50) + 0x58))(*(_DWORD *)(v11 + 0x50), &v99);
      if ( (v9[6] & 8) != 0 )
        goto LABEL_74;
      v48 = v75 * dbl_A372E0;
      v9[6] |= 8u;
      v58 = v48;
      sub_5378B0(v15, v9, v58);
      v74 = (int *)v74[1];
    }
    if ( flt_B118DC >= v25 )
    {
      if ( flt_B118D4 >= v25 )
      {
        if ( flt_B365A0 >= v25 )
          goto LABEL_43;
        v26 = flt_B118D0;
      }
      else
      {
        v26 = flt_B365A4;
      }
    }
    else
    {
      v26 = flt_B118D8;
    }
    v70 = v26;
LABEL_43:
    v81 = _mm_shuffle_ps(v101, v101, 0xAA).m128_f32[0];
    v64 = fabs(v81);
    if ( flt_B118CC > (double)v64 )
      v73 = 0;
    goto LABEL_45;
  }
}
