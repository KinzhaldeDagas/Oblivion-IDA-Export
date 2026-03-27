void __thiscall sub_79FD10(void **this, int a2)
{
  int v3; // eax
  double v4; // st7
  double v5; // st7
  bool v6; // zf
  double v7; // st7
  double v8; // st7
  double v9; // st6
  int v10; // eax
  int v11; // eax
  unsigned int v12; // esi
  float *v13; // esi
  double v14; // st7
  int v15; // edi
  unsigned int v16; // ecx
  int v17; // esi
  float *v18; // eax
  float *v19; // edx
  double v20; // st6
  int v21; // eax
  double v22; // rt0
  float *v23; // eax
  unsigned int *v24; // ecx
  float v25; // edx
  char **v26; // ecx
  unsigned int v27; // ecx
  float *v28; // eax
  double v29; // st6
  unsigned int *v30; // ecx
  int v31; // eax
  int v32; // eax
  bool v33; // cf
  int v34; // ecx
  int v35; // edx
  int v36; // esi
  float *v37; // edi
  float *v38; // eax
  char *v39; // esi
  unsigned int v40; // esi
  unsigned int **v41; // edi
  unsigned int v42; // esi
  unsigned __int16 v43; // ax
  double v44; // st7
  unsigned int v45; // eax
  float v46; // eax
  double v47; // st7
  char **v48; // ecx
  unsigned int *v49; // ebx
  unsigned int *v50; // esi
  float v51; // [esp+4h] [ebp-138h]
  int v52; // [esp+18h] [ebp-124h]
  float v53; // [esp+18h] [ebp-124h]
  float v54; // [esp+18h] [ebp-124h]
  float v55; // [esp+18h] [ebp-124h]
  float v56; // [esp+18h] [ebp-124h]
  float v57; // [esp+18h] [ebp-124h]
  float v58; // [esp+18h] [ebp-124h]
  float v59; // [esp+18h] [ebp-124h]
  float v60; // [esp+18h] [ebp-124h]
  float v61; // [esp+18h] [ebp-124h]
  int v62; // [esp+18h] [ebp-124h]
  _DWORD *v63; // [esp+18h] [ebp-124h]
  float *v64; // [esp+18h] [ebp-124h]
  unsigned int i; // [esp+1Ch] [ebp-120h]
  unsigned int v66; // [esp+1Ch] [ebp-120h]
  float v67; // [esp+20h] [ebp-11Ch]
  float v68; // [esp+20h] [ebp-11Ch]
  float v69; // [esp+20h] [ebp-11Ch]
  float v70; // [esp+20h] [ebp-11Ch]
  float v71; // [esp+20h] [ebp-11Ch]
  float v72; // [esp+20h] [ebp-11Ch]
  float v73; // [esp+20h] [ebp-11Ch]
  float v74; // [esp+20h] [ebp-11Ch]
  int v75; // [esp+24h] [ebp-118h] BYREF
  int v76; // [esp+28h] [ebp-114h]
  float v77; // [esp+2Ch] [ebp-110h]
  int v78; // [esp+30h] [ebp-10Ch] BYREF
  float v79; // [esp+38h] [ebp-104h]
  int v80; // [esp+3Ch] [ebp-100h] BYREF
  int v81; // [esp+40h] [ebp-FCh]
  int v82; // [esp+44h] [ebp-F8h]
  int v83; // [esp+48h] [ebp-F4h]
  float v84; // [esp+50h] [ebp-ECh]
  unsigned int **v85; // [esp+54h] [ebp-E8h]
  int v86; // [esp+58h] [ebp-E4h] BYREF
  float v87; // [esp+5Ch] [ebp-E0h]
  void *Src; // [esp+60h] [ebp-DCh]
  int v89; // [esp+64h] [ebp-D8h]
  float v90; // [esp+6Ch] [ebp-D0h]
  void *v91; // [esp+70h] [ebp-CCh]
  int v92; // [esp+74h] [ebp-C8h]
  int v93; // [esp+78h] [ebp-C4h] BYREF
  int v94; // [esp+7Ch] [ebp-C0h]
  unsigned int v95; // [esp+80h] [ebp-BCh] BYREF
  unsigned int *v96; // [esp+84h] [ebp-B8h]
  unsigned int *v97; // [esp+88h] [ebp-B4h]
  int v98; // [esp+8Ch] [ebp-B0h]
  unsigned int v99; // [esp+90h] [ebp-ACh] BYREF
  unsigned int v100; // [esp+94h] [ebp-A8h]
  int v101; // [esp+98h] [ebp-A4h]
  int v102; // [esp+9Ch] [ebp-A0h]
  unsigned int v103; // [esp+A0h] [ebp-9Ch] BYREF
  unsigned int v104; // [esp+A4h] [ebp-98h]
  int v105; // [esp+A8h] [ebp-94h]
  int v106; // [esp+ACh] [ebp-90h]
  float v107; // [esp+B0h] [ebp-8Ch] BYREF
  float v108; // [esp+B4h] [ebp-88h]
  float v109; // [esp+B8h] [ebp-84h]
  float v110[9]; // [esp+BCh] [ebp-80h] BYREF
  float v111; // [esp+E0h] [ebp-5Ch] BYREF
  float v112; // [esp+E4h] [ebp-58h]
  float v113; // [esp+E8h] [ebp-54h]
  float v114[9]; // [esp+ECh] [ebp-50h] BYREF
  int v115[3]; // [esp+110h] [ebp-2Ch] BYREF
  float v116[5]; // [esp+11Ch] [ebp-20h] BYREF
  int v117; // [esp+138h] [ebp-4h]

  v85 = (unsigned int **)this;
  if ( *this )
  {
    if ( *(this + 1) )
    {
      v100 = 0;
      v101 = 0;
      v102 = 0;
      v117 = 1;
      v104 = 0;
      v105 = 0;
      v106 = 0;
      sub_79DA10(this, a2, &v99, &v103);
      if ( v100 )
        v3 = (int)(v101 - v100) / 0xC;
      else
        v3 = 0;
      *(_DWORD *)(a2 + 0x2C) = v3;
      *(_DWORD *)(a2 + 0x28) = *((unsigned __int16 *)*this + 0x11);
      for ( i = 0; i < sub_799EE0((_DWORD *)a2); ++i )
      {
        v4 = (double)(int)i;
        if ( (int)i < 0 )
          v4 = v4 + flt_A2FC78;
        *(float *)&v78 = v4;
        *(float *)&v80 = COERCE_FLOAT(sub_799EE0((_DWORD *)a2));
        v5 = (double)v80;
        if ( v80 < 0 )
          v5 = v5 + flt_A2FC78;
        v6 = *(_DWORD *)(a2 + 0x2C) == 0;
        v7 = v5 - dbl_A2F928;
        *(float *)&v75 = 0.0;
        *(float *)&v80 = *(float *)&v78 / v7;
        if ( !v6 )
        {
          v81 = 0x38 * i;
          *(float *)&v78 = 0.0;
          do
          {
            v8 = (double)v75;
            if ( v75 < 0 )
              v8 = v8 + flt_A2FC78;
            v9 = (double)*(int *)(a2 + 0x2C);
            if ( *(int *)(a2 + 0x2C) < 0 )
              v9 = v9 + flt_A2FC78;
            v10 = *(_DWORD *)(a2 + 4);
            *(float *)&v52 = v8 / (v9 - dbl_A2F928);
            if ( !v10 || i >= (*(_DWORD *)(a2 + 8) - v10) / 0x38 )
              _invalid_parameter_noinfo();
            v11 = *(_DWORD *)(a2 + 4);
            qmemcpy(v110, (const void *)(v81 + v11 + 0xC), sizeof(v110));
            if ( i )
            {
              v12 = i - 1;
              if ( !v11 || v12 >= (*(_DWORD *)(a2 + 8) - v11) / 0x38 )
                _invalid_parameter_noinfo();
              v13 = (float *)(*(_DWORD *)(a2 + 4) + 0x38 * v12 + 0xC);
            }
            else
            {
              v13 = v110;
            }
            v14 = *(float *)(a2 + 0x1C);
            qmemcpy(v114, v13, sizeof(v114));
            v51 = v14;
            sub_793A00(v110, v51);
            sub_793A00(v114, *(float *)(a2 + 0x1C));
            if ( !v100 || (v15 = v101, v16 = v100, v75 >= (unsigned int)((int)(v101 - v100) / 0xC)) )
            {
              _invalid_parameter_noinfo();
              v15 = v101;
              v16 = v100;
            }
            v17 = v78;
            *(float *)&v83 = v110[3] * *(float *)(v16 + v78 + 4)
                           + v110[0] * *(float *)(v16 + v78)
                           + v110[6] * *(float *)(v16 + v78 + 8);
            *(float *)&v82 = v110[4] * *(float *)(v16 + v78 + 4)
                           + v110[1] * *(float *)(v16 + v78)
                           + v110[7] * *(float *)(v16 + v78 + 8);
            *(float *)&v76 = v110[5] * *(float *)(v16 + v78 + 4)
                           + v110[2] * *(float *)(v16 + v78)
                           + v110[8] * *(float *)(v16 + v78 + 8);
            if ( !v16 || v75 >= (unsigned int)((int)(v15 - v16) / 0xC) )
            {
              _invalid_parameter_noinfo();
              v16 = v100;
            }
            v18 = (float *)(v16 + v78 + 4);
            v19 = (float *)(v16 + v78 + 8);
            *(float *)&v78 = v114[3] * *v18 + v114[0] * *(float *)(v16 + v78) + v114[6] * *v19;
            v84 = v114[1] * *(float *)(v16 + v17) + v114[4] * *v18 + v114[7] * *v19;
            v20 = v114[5] * *v18;
            v21 = *(_DWORD *)(a2 + 4);
            v79 = v114[2] * *(float *)(v16 + v17) + v20 + v114[8] * *v19;
            v77 = *(float *)&v78 + *(float *)&v83;
            *(float *)&v83 = v84 + *(float *)&v82;
            v82 = v83;
            *(float *)&v78 = v79 + *(float *)&v76;
            v76 = v78;
            v22 = dbl_A2FAA0;
            v67 = v77 * v22;
            v79 = *(float *)&v83 * v22;
            *(float *)&v76 = v22 * *(float *)&v78;
            if ( !v21 || i >= (*(_DWORD *)(a2 + 8) - v21) / 0x38 )
              _invalid_parameter_noinfo();
            v23 = (float *)(v81 + *(_DWORD *)(a2 + 4));
            v68 = *v23 + v67;
            v79 = v23[1] + v79;
            *(float *)&v76 = v23[2] + *(float *)&v76;
            *(float *)v115 = v68;
            *(float *)&v115[1] = v79;
            v115[2] = v76;
            v69 = *(float *)&v83 * *(float *)&v83 + v77 * v77 + *(float *)&v78 * *(float *)&v78;
            v70 = sqrt(v69);
            v24 = *v85;
            v71 = 1.0 / v70;
            v111 = v77 * v71;
            v112 = *(float *)&v83 * v71;
            v113 = v71 * *(float *)&v78;
            sub_796260((char *)v24, v115);
            LOWORD(v25) = *(unsigned __int8 *)(a2 + 0x18);
            v26 = (char **)*v85;
            v93 = v52;
            v94 = v80;
            sub_796320(v26, (float *)&v93, v25);
            v27 = v104;
            if ( !v104 || v75 >= (unsigned int)((int)(v105 - v104) / 0xC) )
            {
              _invalid_parameter_noinfo();
              v27 = v104;
            }
            v72 = *(float *)(v27 + v17) * v110[0]
                + v110[3] * *(float *)(v27 + v17 + 4)
                + v110[6] * *(float *)(v27 + v17 + 8);
            v79 = v110[1] * *(float *)(v27 + v17)
                + v110[4] * *(float *)(v27 + v17 + 4)
                + v110[7] * *(float *)(v27 + v17 + 8);
            v84 = v110[2] * *(float *)(v27 + v17)
                + v110[5] * *(float *)(v27 + v17 + 4)
                + v110[8] * *(float *)(v27 + v17 + 8);
            if ( !v27 || v75 >= (unsigned int)((int)(v105 - v27) / 0xC) )
            {
              _invalid_parameter_noinfo();
              v27 = v104;
            }
            v28 = (float *)(v27 + v17 + 8);
            v53 = v114[3] * *(float *)(v27 + v17 + 4) + v114[0] * *(float *)(v27 + v17) + v114[6] * *v28;
            *(float *)&v76 = v114[4] * *(float *)(v27 + v17 + 4) + v114[1] * *(float *)(v27 + v17) + v114[7] * *v28;
            *(float *)&v82 = v114[5] * *(float *)(v27 + v17 + 4) + v114[2] * *(float *)(v27 + v17) + v114[8] * *v28;
            v54 = v53 + v72;
            v73 = *(float *)&v76 + v79;
            *(float *)&v76 = *(float *)&v82 + v84;
            v29 = dbl_A2FAA0;
            *(float *)&v78 = v54 * v29;
            *(float *)&v83 = v73 * v29;
            v77 = v29 * *(float *)&v76;
            v55 = *(float *)&v83 * *(float *)&v83 + *(float *)&v78 * *(float *)&v78 + v77 * v77;
            v56 = sqrt(v55);
            v57 = 1.0 / v56;
            v107 = *(float *)&v78 * v57;
            v108 = *(float *)&v83 * v57;
            v109 = v57 * v77;
            v116[3] = 1.0;
            v116[2] = 1.0;
            v116[1] = 1.0;
            v116[0] = 1.0;
            sub_796230(*v85, v116);
            sub_7962F0((char *)*v85, (int *)&v107);
            sub_796590((char *)*v85, (int *)&v111);
            *(float *)&v78 = v108 * v113 - v109 * v112;
            *(float *)&v83 = v109 * v111 - v113 * v107;
            v77 = v112 * v107 - v108 * v111;
            v58 = *(float *)&v78 * *(float *)&v78 + *(float *)&v83 * *(float *)&v83 + v77 * v77;
            v59 = sqrt(v58);
            v30 = *v85;
            v60 = 1.0 / v59;
            *(float *)&v86 = *(float *)&v78 * v60;
            v87 = *(float *)&v83 * v60;
            *(float *)&Src = v60 * v77;
            sub_7965E0((char *)v30, &v86);
            if ( *((_BYTE *)*v85 + 8) )
            {
              v31 = *(_DWORD *)(a2 + 4);
              if ( !v31 || i >= (*(_DWORD *)(a2 + 8) - v31) / 0x38 )
                _invalid_parameter_noinfo();
              v78 = *(int *)(a2 + 4);
              if ( *(float *)&v78 == 0.0 || i >= (*(_DWORD *)(a2 + 8) - v78) / 0x38 )
                _invalid_parameter_noinfo();
              sub_796540(*v85, COERCE_INT(*(float *)(*(_DWORD *)(a2 + 4) + v81 + 0x30)), *(_BYTE *)(v81 + v78 + 0x34));
            }
            v32 = v75;
            ++*((_WORD *)*v85 + 0x11);
            v33 = (unsigned int)++v32 < *(_DWORD *)(a2 + 0x2C);
            v75 = v32;
            v78 = v17 + 0xC;
          }
          while ( v33 );
        }
      }
      v90 = 0.0;
      v91 = 0;
      v92 = 0;
      v96 = 0;
      v97 = 0;
      v98 = 0;
      v6 = *(_DWORD *)(a2 + 0x2C) == 0;
      LOBYTE(v117) = 3;
      if ( !v6 )
      {
        *(float *)&v80 = 0.0;
        v87 = 0.0;
        *(float *)&v75 = 0.0;
        *(float *)&Src = 0.0;
        v89 = 0;
        LOBYTE(v117) = 4;
        sub_7996F0((unsigned int *)&v86, (unsigned int **)&v93, (unsigned int *)&v86, 0, &v80);
        v81 = 1;
        if ( (unsigned int)sub_799EE0((_DWORD *)a2) > 1 )
        {
          do
          {
            v34 = *(_DWORD *)(a2 + 0x2C);
            v35 = *(_DWORD *)(a2 + 0x28);
            v36 = v35 + v34 * (v81 - 1);
            v37 = (float *)sub_794730(*v85, v35 + v34 * v81);
            v38 = (float *)sub_794730(*v85, v36);
            v39 = (char *)Src;
            v79 = *v37;
            v74 = v37[1];
            v84 = v37[2];
            v76 = *(int *)v38;
            v61 = v38[1];
            v82 = *((int *)v38 + 2);
            *(float *)&v62 = (v61 - v74) * (v61 - v74)
                           + (*(float *)&v76 - v79) * (*(float *)&v76 - v79)
                           + (*(float *)&v82 - v84) * (*(float *)&v82 - v84);
            *(float *)&v75 = COERCE_FLOAT((v62 >> 1) + 0x1FC00000) + *(float *)&v75;
            if ( v87 == 0.0 || ((int)Src - LODWORD(v87)) >> 2 >= (unsigned int)((v89 - LODWORD(v87)) >> 2) )
            {
              if ( LODWORD(v87) > (unsigned int)Src )
                _invalid_parameter_noinfo();
              sub_7996F0((unsigned int *)&v86, (unsigned int **)&v78, (unsigned int *)&v86, v39, &v75);
            }
            else
            {
              *(float *)Src = *(float *)&v75;
              Src = v39 + 4;
            }
            v40 = ++v81;
          }
          while ( v40 < sub_799EE0((_DWORD *)a2) );
        }
        sub_79F670(&v95, (int)&v86);
      }
      v66 = 0;
      if ( *(_DWORD *)(a2 + 0x2C) )
      {
        v41 = v85;
        do
        {
          v42 = 1;
          if ( (unsigned int)sub_799EE0((_DWORD *)a2) > 1 )
          {
            v80 = 0x10 * v66;
            do
            {
              v43 = *(_WORD *)(a2 + 0x28) + v66 + v42 * *(_WORD *)(a2 + 0x2C);
              *((_WORD *)*v41 + 0x11) = v43;
              v44 = *(float *)sub_794760(*v41, v43);
              v45 = (unsigned int)v96;
              *(float *)&v93 = v44;
              if ( !v96 || v66 >= ((char *)v97 - (char *)v96) >> 4 )
              {
                _invalid_parameter_noinfo();
                v45 = (unsigned int)v96;
              }
              v63 = (_DWORD *)(v45 + v80 + 4);
              if ( !*v63 || v42 >= (*(_DWORD *)(v45 + v80 + 8) - *v63) >> 2 )
                _invalid_parameter_noinfo();
              v46 = v90;
              v64 = (float *)(*v63 + 4 * v42);
              if ( v90 == 0.0 || v66 >= ((int)v91 - LODWORD(v90)) >> 2 )
              {
                _invalid_parameter_noinfo();
                v46 = v90;
              }
              v47 = *v64 / *(float *)(LODWORD(v46) + 4 * v66);
              LOWORD(v46) = *(unsigned __int8 *)(a2 + 0x18);
              v48 = (char **)*v41;
              *(float *)&v94 = v47 * dbl_A3F460;
              sub_796320(v48, (float *)&v93, v46);
              ++*((_WORD *)*v41 + 0x11);
              ++v42;
            }
            while ( v42 < sub_799EE0((_DWORD *)a2) );
          }
          ++v66;
        }
        while ( v66 < *(_DWORD *)(a2 + 0x2C) );
      }
      if ( v96 )
      {
        v49 = v97;
        if ( v96 != v97 )
        {
          v50 = v96 + 1;
          do
          {
            if ( *v50 )
              FormHeapFree(*v50);
            *v50 = 0;
            v50[1] = 0;
            v50[2] = 0;
            v50 += 4;
          }
          while ( v50 + 0xFFFFFFFF != v49 );
        }
        FormHeapFree((unsigned int)v96);
      }
      v96 = 0;
      v97 = 0;
      v98 = 0;
      if ( v90 != 0.0 )
        FormHeapFree(LODWORD(v90));
      v90 = 0.0;
      v91 = 0;
      v92 = 0;
      if ( v104 )
        FormHeapFree(v104);
      v104 = 0;
      v105 = 0;
      v106 = 0;
      if ( v100 )
        FormHeapFree(v100);
    }
  }
}
