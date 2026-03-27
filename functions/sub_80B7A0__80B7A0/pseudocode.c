int __thiscall sub_80B7A0(
        void *this,
        float *a2,
        const void **a3,
        int a4,
        int a5,
        int a6,
        int a7,
        NiTransform *a8,
        int a9)
{
  _DWORD *v9; // ebx
  int v10; // eax
  _DWORD *v11; // ebp
  float *v12; // eax
  int v13; // edx
  int v14; // ecx
  float *v15; // edi
  float *v16; // esi
  float *v17; // ebx
  double v18; // st7
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  float v22; // ecx
  float v23; // edx
  int v24; // eax
  double v25; // st7
  double v26; // st7
  float v27; // edx
  float v28; // ecx
  float v29; // eax
  float v30; // edx
  float v31; // ecx
  int v32; // edx
  void (__thiscall ***v33)(_DWORD, int); // ebp
  float *v34; // ebp
  float v35; // edx
  float v36; // eax
  double v37; // st6
  double v38; // st7
  double v39; // st5
  double v40; // st7
  double v41; // st6
  float v42; // ecx
  float v43; // edx
  double v44; // st6
  double v45; // st5
  double v46; // st4
  double v47; // st3
  double v48; // st2
  bool v49; // c0
  bool v50; // c3
  long double v51; // st2
  float v52; // ecx
  float v53; // edx
  int v54; // eax
  double v55; // st1
  long double v56; // st7
  double v57; // st2
  double v58; // st4
  double v59; // st6
  double v60; // rt2
  long double v61; // st4
  double v62; // st7
  double v63; // rt1
  double v64; // st7
  double v65; // st7
  float v66; // edx
  float v67; // eax
  double v68; // st7
  float v69; // ecx
  float *v70; // eax
  int v71; // eax
  bool v72; // zf
  int v74; // [esp+Ch] [ebp-F8h]
  void (__thiscall ***v75)(_DWORD, int); // [esp+Ch] [ebp-F8h]
  float v76; // [esp+Ch] [ebp-F8h]
  float v77; // [esp+Ch] [ebp-F8h]
  float v78; // [esp+10h] [ebp-F4h]
  float v79; // [esp+10h] [ebp-F4h]
  float v80; // [esp+10h] [ebp-F4h]
  float v81; // [esp+10h] [ebp-F4h]
  float v82; // [esp+10h] [ebp-F4h]
  float v83; // [esp+10h] [ebp-F4h]
  float v84; // [esp+10h] [ebp-F4h]
  float v85; // [esp+10h] [ebp-F4h]
  float v86; // [esp+14h] [ebp-F0h]
  float v87; // [esp+14h] [ebp-F0h]
  float v88; // [esp+14h] [ebp-F0h]
  float v89; // [esp+14h] [ebp-F0h]
  float v90; // [esp+18h] [ebp-ECh] BYREF
  float v91; // [esp+1Ch] [ebp-E8h]
  float v92; // [esp+20h] [ebp-E4h]
  float *v93; // [esp+24h] [ebp-E0h]
  float v94; // [esp+28h] [ebp-DCh]
  float v95; // [esp+2Ch] [ebp-D8h]
  float v96; // [esp+30h] [ebp-D4h]
  float v97; // [esp+34h] [ebp-D0h]
  float v98; // [esp+38h] [ebp-CCh] BYREF
  float v99; // [esp+3Ch] [ebp-C8h]
  float v100; // [esp+40h] [ebp-C4h]
  float v101; // [esp+44h] [ebp-C0h]
  float v102; // [esp+48h] [ebp-BCh]
  float v103; // [esp+4Ch] [ebp-B8h]
  float v104; // [esp+50h] [ebp-B4h] BYREF
  float v105; // [esp+54h] [ebp-B0h]
  float v106; // [esp+58h] [ebp-ACh]
  int v107; // [esp+5Ch] [ebp-A8h]
  float v108; // [esp+60h] [ebp-A4h]
  float v109; // [esp+64h] [ebp-A0h]
  float v110; // [esp+68h] [ebp-9Ch]
  int v111; // [esp+6Ch] [ebp-98h]
  float v112; // [esp+70h] [ebp-94h] BYREF
  float v113; // [esp+74h] [ebp-90h]
  float v114; // [esp+78h] [ebp-8Ch]
  float v115; // [esp+7Ch] [ebp-88h]
  float v116; // [esp+80h] [ebp-84h]
  float v117; // [esp+84h] [ebp-80h]
  float v118; // [esp+88h] [ebp-7Ch]
  float v119; // [esp+8Ch] [ebp-78h]
  float v120; // [esp+90h] [ebp-74h]
  float v121; // [esp+94h] [ebp-70h]
  float v122; // [esp+98h] [ebp-6Ch]
  float v123; // [esp+9Ch] [ebp-68h]
  int v124; // [esp+A0h] [ebp-64h] BYREF
  float v125; // [esp+A4h] [ebp-60h]
  float v126; // [esp+A8h] [ebp-5Ch]
  float v127; // [esp+ACh] [ebp-58h]
  float v128; // [esp+B0h] [ebp-54h]
  float v129; // [esp+B4h] [ebp-50h]
  float v130; // [esp+B8h] [ebp-4Ch]
  int v131; // [esp+BCh] [ebp-48h]
  _DWORD v132[2]; // [esp+C0h] [ebp-44h] BYREF
  float v133; // [esp+C8h] [ebp-3Ch]
  float v134; // [esp+CCh] [ebp-38h]
  float v135; // [esp+D0h] [ebp-34h]
  float v136; // [esp+D4h] [ebp-30h]
  float v137; // [esp+D8h] [ebp-2Ch]
  float v138; // [esp+DCh] [ebp-28h]
  float v139; // [esp+E0h] [ebp-24h]
  float v140; // [esp+E4h] [ebp-20h]
  float v141; // [esp+E8h] [ebp-1Ch]
  float v142; // [esp+ECh] [ebp-18h]
  _DWORD *v143; // [esp+F0h] [ebp-14h]
  float v144; // [esp+F4h] [ebp-10h]
  float v145; // [esp+F8h] [ebp-Ch]
  float v146; // [esp+FCh] [ebp-8h]
  int v147; // [esp+100h] [ebp-4h]

  v9 = *(_DWORD **)(a6 + 0x18);
  v131 = (int)this;
  v143 = v9;
  if ( v9 && ShaderPackage >= 2 )
  {
    sub_7ED160(v9);
    v10 = v9[7];
    v74 = 1;
    if ( (v10 & 0x800) != 0 )
      v74 = 2;
    if ( (v10 & 0x1000) != 0 )
      ++v74;
    v11 = sub_7ED160(v9);
    v12 = a2;
    v13 = *((int *)a2 + 0x23);
    v94 = a2[0x22];
    v14 = *((int *)a2 + 0x24);
    v95 = *(float *)&v13;
    v96 = *(float *)&v14;
    if ( v74 > 0 )
    {
      v15 = (float *)(v9 + 0x4A);
      v16 = &flt_B46528;
      v93 = (float *)(v9 + 0x47);
      v17 = (float *)(v9 + 0x3E);
      v111 = v74;
      while ( 1 )
      {
        v18 = dbl_A2FC70;
        if ( !v11 )
        {
          *v17 = Vector3_InitValue_;
          v70 = v93;
          v17[1] = *(&Vector3_InitValue_ + 1);
          v17[2] = dword_B3F9B0;
          *v70 = 0.0;
          *(_DWORD *)v15 = dword_B25AD0;
          *((_DWORD *)v15 + 1) = dword_B25AD4;
          *((_DWORD *)v15 + 2) = dword_B25AD8;
          *((_DWORD *)v15 + 3) = dword_B25ADC;
          goto LABEL_45;
        }
        if ( *((_BYTE *)v11 + 0xFC) )
        {
          v19 = (float *)*sub_405AD0(v11, v132);
          v20 = v19[0x23];
          v90 = v19[0x22];
          v21 = v19[0x24];
          v91 = v20;
          v92 = v21;
          if ( v132[0] )
          {
            v75 = (void (__thiscall ***)(_DWORD, int))v132[0];
            if ( !InterlockedDecrement((volatile LONG *)(v132[0] + 4)) )
              (**v75)(v75, 1);
          }
        }
        else
        {
          v22 = v16[0x21];
          v23 = v16[0x22];
          v144 = v16[0x20];
          v145 = v22;
          v146 = v23;
          v24 = *((_DWORD *)v16 + 0x23);
          v115 = v144 * v18;
          v147 = v24;
          v116 = v22 * v18;
          v117 = v18 * v23;
          v101 = v115 + v94;
          v102 = v95 + v116;
          v103 = v96 + v117;
          *(float *)&v132[1] = v101;
          v25 = v102;
          *v16 = v101;
          v133 = v25;
          v26 = v103;
          v16[1] = v133;
          v27 = v101;
          v134 = v26;
          v135 = flt_A3F3D8;
          v28 = v135;
          v16[2] = v134;
          v29 = v102;
          v16[3] = v28;
          v90 = v27;
          v91 = v29;
          v92 = v103;
        }
        v30 = v16[0xFFFFFFE0];
        v31 = v16[0xFFFFFFE2];
        v105 = v16[0xFFFFFFE1];
        v104 = v30;
        v32 = *((_DWORD *)v16 + 0xFFFFFFE3);
        v106 = v31;
        v107 = v32;
        v76 = *(float *)(*sub_405AD0(v11, &v124) + 0xF8);
        if ( v124 )
        {
          v33 = (void (__thiscall ***)(_DWORD, int))v124;
          if ( !InterlockedDecrement((volatile LONG *)(v124 + 4)) )
            (**v33)(v33, 1);
        }
        v34 = v93;
        if ( 0.0 == *v93 )
        {
          v35 = v91;
          v36 = v92;
          *v17 = v90;
          v17[1] = v35;
          v17[2] = v36;
          *v34 = v76;
        }
        else
        {
          if ( !sub_8AA390(v17, &v90) && v76 == *v34 && !sub_632310(v15, &v104) )
            goto LABEL_43;
          v78 = v76 - *v34;
          v112 = v90 - v94;
          v113 = v91 - v95;
          v114 = v92 - v96;
          v97 = sub_43F350(&v112) / v76;
          v98 = *v17 - v94;
          v99 = v17[1] - v95;
          v100 = v17[2] - v96;
          sub_43F350(&v98);
          v37 = v98;
          v108 = v112 - v98;
          v109 = v113 - v99;
          v110 = v114 - v100;
          v38 = v100;
          v39 = v99;
          v86 = v113 * v99 + v112 * v98 + v114 * v100;
          if ( v86 < dbl_A94368 )
            goto LABEL_42;
          v87 = v108 * v108 + v109 * v109 + v110 * v110;
          v88 = sqrt(v87);
          v40 = flt_A45FF4;
          if ( v40 < v88 )
          {
            v38 = v100;
            v39 = v99;
            v37 = v98;
LABEL_42:
            v63 = dbl_A38538;
            v128 = v108 * v63;
            v129 = v109 * v63;
            v130 = v63 * v110;
            v136 = v37 + v128;
            v137 = v39 + v129;
            v138 = v38 + v130;
            v118 = v136 * v97;
            v119 = v137 * v97;
            v120 = v97 * v138;
            v97 = *v34;
            v121 = v118 * v97;
            v122 = v119 * v97;
            v123 = v97 * v120;
            v125 = v121 + v94;
            v64 = v122;
            *v17 = v125;
            v126 = v64 + v95;
            v65 = v123;
            v17[1] = v126;
            v127 = v65 + v96;
            v17[2] = v127;
            goto LABEL_43;
          }
          v41 = v78;
          v42 = v91;
          v43 = v92;
          v79 = fabs(v78);
          *v17 = v90;
          v17[1] = v42;
          v17[2] = v43;
          if ( v79 <= v40 )
          {
            *v34 = v76;
            v80 = v104 - *v15;
            v44 = v105;
            v89 = v105 - v15[1];
            v45 = v106;
            v77 = v106 - v15[2];
            v46 = v80;
            v81 = fabs(v80);
            v47 = v81;
            v48 = dbl_A2FC80;
            if ( v48 < v81 || (v82 = fabs(v89), v82 > v48) )
            {
              v51 = v89;
LABEL_32:
              v55 = dbl_A30068;
              if ( v55 >= v47 )
              {
                *v15 = v104;
                v58 = dbl_A38538;
                v56 = v51;
              }
              else
              {
                v56 = v51;
                v57 = v46 * dbl_A38538 + *v15;
                v58 = dbl_A38538;
                *v15 = v57;
              }
              v84 = fabs(v56);
              if ( v84 <= v55 )
              {
                v15[1] = v44;
                v62 = v58;
                v59 = v55;
              }
              else
              {
                v59 = v55;
                v60 = v58;
                v61 = v56 * v58 + v15[1];
                v62 = v60;
                v15[1] = v61;
              }
              v85 = fabs(v77);
              if ( v85 <= v59 )
                v15[2] = v45;
              else
                v15[2] = v62 * v77 + v15[2];
              goto LABEL_43;
            }
            v83 = fabs(v77);
            v49 = v83 < v48;
            v50 = v83 == v48;
            v51 = v89;
            if ( !v49 && !v50 )
              goto LABEL_32;
            v52 = v105;
            v53 = v106;
            *v15 = v104;
            v54 = v107;
            v15[1] = v52;
            v15[2] = v53;
            *((_DWORD *)v15 + 3) = v54;
          }
          else
          {
            *v34 = v41 * dbl_A38538 + *v34;
          }
        }
LABEL_43:
        v139 = *v17;
        v140 = v17[1];
        v66 = v140;
        v141 = v17[2];
        v67 = v141;
        v68 = *v34;
        *v16 = v139;
        v16[1] = v66;
        v142 = v68;
        v69 = v142;
        v16[2] = v67;
        v16[3] = v69;
        v16[0xFFFFFFE0] = *v15;
        v16[0xFFFFFFE1] = v15[1];
        v16[0xFFFFFFE2] = v15[2];
        v16[0xFFFFFFE3] = v15[3];
LABEL_45:
        v71 = sub_7ED180(v143);
        ++v93;
        v17 += 3;
        v16 += 4;
        v15 += 4;
        v72 = v111-- == 1;
        v11 = (_DWORD *)v71;
        if ( v72 )
          goto LABEL_46;
      }
    }
  }
  else
  {
LABEL_46:
    v12 = a2;
  }
  return sub_7C9230(v131, (int)a3, *(float *)&v12, a3, a4, a5, a6, a7, a8, a9);
}
