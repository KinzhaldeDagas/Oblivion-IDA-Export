double __userpurge sub_7FB6F0@<st0>(
        char *a1@<ecx>,
        double result@<st0>,
        float a3,
        NiSkinInstance *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        NiTransform *a9,
        int a10)
{
  int v11; // esi
  BOOL v13; // eax
  int v14; // edi
  bool v15; // zf
  NiSkinInstance *v16; // esi
  float *v17; // ebx
  _DWORD *v18; // eax
  float v19; // edi
  double v20; // st6
  double v21; // st5
  float *v22; // eax
  double v23; // st6
  int v24; // edx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // eax
  int v28; // edi
  int v29; // ebx
  int v30; // eax
  float *v31; // esi
  float v32; // ecx
  double v33; // st6
  float v34; // eax
  float v35; // edx
  float *v36; // esi
  int v37; // edi
  float v38; // edx
  float v39; // eax
  float v40; // ecx
  float v41; // edx
  double v42; // st6
  int v43; // eax
  double v44; // st6
  float v45; // ecx
  float v46; // edx
  float v47; // ecx
  int v48; // edx
  double v49; // st5
  double v50; // st4
  double v51; // st3
  double v52; // st6
  double v53; // st5
  double v54; // st4
  double v55; // st3
  float v56; // edx
  float v57; // eax
  float v58; // ecx
  double v59; // st6
  float v60; // eax
  float v61; // ecx
  double v62; // st6
  int v63; // edx
  double v64; // st6
  int v65; // eax
  double v66; // st6
  int v67; // ecx
  double v68; // st6
  int v69; // edx
  double v70; // st6
  int v71; // eax
  double v72; // st6
  int v73; // ecx
  double v74; // st6
  int v75; // edx
  double v76; // st6
  int v77; // eax
  double v78; // st6
  int v79; // ecx
  double v80; // st6
  int v81; // edx
  double v82; // st6
  int v83; // eax
  int v84; // ecx
  int v85; // edx
  int v86; // eax
  int v87; // ecx
  int v88; // edx
  int v89; // eax
  int v90; // ecx
  int v91; // edx
  int v92; // ecx
  IDirect3DDevice9 *device; // ebx
  int *v94; // ecx
  int v95; // eax
  float *v96; // ebx
  int v97; // eax
  double v98; // st5
  double v99; // st6
  double v100; // st4
  int v101; // edi
  float *v102; // esi
  float v103; // edx
  float v104; // eax
  float v105; // eax
  float v106; // ecx
  float v107; // edx
  int v108; // ecx
  char *v109; // edi
  const float *v110; // edi
  int i; // esi
  float v112; // [esp+64h] [ebp-25Ch] BYREF
  int v113; // [esp+68h] [ebp-258h]
  int v114; // [esp+6Ch] [ebp-254h]
  float v115; // [esp+70h] [ebp-250h]
  bool v116; // [esp+77h] [ebp-249h]
  float v117; // [esp+78h] [ebp-248h] BYREF
  float v118; // [esp+7Ch] [ebp-244h]
  float v119; // [esp+80h] [ebp-240h]
  float v120; // [esp+84h] [ebp-23Ch]
  float scale; // [esp+88h] [ebp-238h]
  float v122; // [esp+8Ch] [ebp-234h] BYREF
  int v123; // [esp+90h] [ebp-230h]
  float v124; // [esp+94h] [ebp-22Ch] BYREF
  float v125; // [esp+98h] [ebp-228h]
  float v126; // [esp+9Ch] [ebp-224h]
  float v127; // [esp+A0h] [ebp-220h] BYREF
  float v128; // [esp+A4h] [ebp-21Ch]
  float v129; // [esp+A8h] [ebp-218h]
  float v130; // [esp+ACh] [ebp-214h]
  float v131; // [esp+B0h] [ebp-210h] BYREF
  float v132; // [esp+B4h] [ebp-20Ch]
  float v133; // [esp+B8h] [ebp-208h]
  int v134; // [esp+BCh] [ebp-204h]
  _BYTE v135[64]; // [esp+C0h] [ebp-200h] BYREF
  float v136[19]; // [esp+100h] [ebp-1C0h] BYREF
  float v137; // [esp+14Ch] [ebp-174h] BYREF
  float v138; // [esp+150h] [ebp-170h]
  float v139; // [esp+154h] [ebp-16Ch]
  float v140; // [esp+158h] [ebp-168h] BYREF
  float v141; // [esp+15Ch] [ebp-164h]
  float v142; // [esp+160h] [ebp-160h]
  float v143; // [esp+164h] [ebp-15Ch]
  float v144; // [esp+168h] [ebp-158h]
  float v145; // [esp+16Ch] [ebp-154h]
  float v146; // [esp+170h] [ebp-150h]
  float v147; // [esp+174h] [ebp-14Ch]
  float v148; // [esp+178h] [ebp-148h]
  float v149; // [esp+17Ch] [ebp-144h]
  float v150; // [esp+180h] [ebp-140h]
  float v151; // [esp+184h] [ebp-13Ch]
  float v152; // [esp+188h] [ebp-138h]
  float v153; // [esp+18Ch] [ebp-134h]
  float v154; // [esp+190h] [ebp-130h]
  float v155; // [esp+194h] [ebp-12Ch]
  float v156; // [esp+198h] [ebp-128h] BYREF
  float v157; // [esp+19Ch] [ebp-124h]
  float v158; // [esp+1A0h] [ebp-120h]
  float v159; // [esp+1A4h] [ebp-11Ch]
  float v160; // [esp+1A8h] [ebp-118h]
  float v161; // [esp+1ACh] [ebp-114h]
  float v162; // [esp+1B0h] [ebp-110h]
  float v163; // [esp+1B4h] [ebp-10Ch]
  float v164; // [esp+1B8h] [ebp-108h]
  float v165; // [esp+1BCh] [ebp-104h]
  float v166; // [esp+1C0h] [ebp-100h]
  float v167; // [esp+1C4h] [ebp-FCh]
  float v168; // [esp+1C8h] [ebp-F8h]
  float v169; // [esp+1CCh] [ebp-F4h]
  float v170; // [esp+1D0h] [ebp-F0h]
  float v171; // [esp+1D4h] [ebp-ECh]
  IDirect3DDevice9 *v172; // [esp+1D8h] [ebp-E8h]
  int v173; // [esp+1DCh] [ebp-E4h]
  _BYTE v174[64]; // [esp+1E0h] [ebp-E0h] BYREF
  char v175[96]; // [esp+220h] [ebp-A0h] BYREF
  _BYTE v176[64]; // [esp+280h] [ebp-40h] BYREF

  v11 = *(_DWORD *)(a7 + 0x18);
  v120 = *(float *)&a1;
  if ( v11 )
    v13 = (*(int (__thiscall **)(int))(*(_DWORD *)v11 + 0x54))(v11) == 0xA;
  else
    v13 = 0;
  v14 = v13 ? v11 : 0;
  v15 = (*(_BYTE *)(v14 + 0x1C) & 2) == 0;
  v123 = dword_B42E90;
  v116 = !v15;
  if ( v15 )
  {
    v17 = (float *)a9;
    v16 = a4;
  }
  else
  {
    if ( !a5 )
      return result;
    v15 = *((_DWORD *)a1 + 0xD) == 0;
    v16 = a4;
    v17 = (float *)a9;
    if ( v15 )
      NiDX9Renderer::CalculateBoneMatrixes(dword_B43104, a4, a9, 0, 3, 1);
    (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(LODWORD(v120) + 0x18) + 0x30))(
      *(_DWORD *)(LODWORD(v120) + 0x18),
      *(unsigned __int16 *)(a5 + 0x24));
  }
  sub_765480(*(NiDX9Renderer **)(LODWORD(v120) + 0x14), v17, 0);
  if ( LOWORD(dword_B42EAC) == 5 )
  {
    v18 = sub_405AD0(**(_DWORD ***)(dword_B42EB8 + 0xC), &v122);
    v19 = v122;
    v120 = *(float *)(*v18 + 0xF8);
    if ( v122 != 0.0 && !InterlockedDecrement((volatile LONG *)(LODWORD(v122) + 4)) && v19 != 0.0 )
      (**(void (__thiscall ***)(_DWORD, int))LODWORD(v19))(LODWORD(v19), 1);
    if ( !v16 )
      v120 = v120 / v17[0xC];
    flt_B47014 = v120;
  }
  else
  {
    v20 = 0.0;
    v21 = 1.0;
    if ( !*(_BYTE *)(v14 + 0x100) )
    {
      v15 = !v116;
      *(_BYTE *)(v14 + 0x100) = 1;
      v170 = 0.0;
      v169 = 0.0;
      v168 = 0.0;
      v167 = 0.0;
      v165 = 0.0;
      v164 = 0.0;
      v163 = 0.0;
      v162 = 0.0;
      v160 = 0.0;
      v159 = 0.0;
      v158 = 0.0;
      v157 = 0.0;
      v154 = 0.0;
      v153 = 0.0;
      v152 = 0.0;
      v151 = 0.0;
      v149 = 0.0;
      v148 = 0.0;
      v147 = 0.0;
      v146 = 0.0;
      v144 = 0.0;
      v143 = 0.0;
      v142 = 0.0;
      v141 = 0.0;
      v171 = 1.0;
      v166 = 1.0;
      v161 = 1.0;
      v156 = 1.0;
      v155 = 1.0;
      v150 = 1.0;
      v145 = 1.0;
      v140 = 1.0;
      if ( v15 || !v16 )
      {
        sub_718A80(v17, (NiTransform *)v135);
        v156 = *(float *)v135 * *(float *)&v135[0x30];
        v157 = *(float *)&v135[0xC] * *(float *)&v135[0x30];
        v158 = *(float *)&v135[0x18] * *(float *)&v135[0x30];
        v160 = *(float *)&v135[4] * *(float *)&v135[0x30];
        v161 = *(float *)&v135[0x10] * *(float *)&v135[0x30];
        v162 = *(float *)&v135[0x1C] * *(float *)&v135[0x30];
        v164 = *(float *)&v135[8] * *(float *)&v135[0x30];
        v165 = *(float *)&v135[0x14] * *(float *)&v135[0x30];
        v166 = *(float *)&v135[0x30] * *(float *)&v135[0x20];
        v168 = *(float *)&v135[0x24];
        v169 = *(float *)&v135[0x28];
        v170 = *(float *)&v135[0x2C];
        v23 = 1.0;
        v171 = 1.0;
      }
      else
      {
        v22 = *((float **)v16 + 0xA);
        v140 = *v22;
        v141 = v22[1];
        v142 = v22[2];
        v144 = v22[4];
        v145 = v22[5];
        v146 = v22[6];
        v148 = v22[8];
        v149 = v22[9];
        v150 = v22[0xA];
        v152 = v22[0xC] + CameraWorldTranslate;
        v153 = v22[0xD] + flt_B3F930;
        v154 = v22[0xE] + flt_B3F934;
        v143 = v22[3];
        v147 = v22[7];
        v151 = v22[0xB];
        v155 = v22[0xF];
        D3DXMatrixInverse_0(&v156, 0, &v140);
        v23 = 1.0;
      }
      if ( BYTE2(dword_B4696C) )
      {
        v24 = dword_B42EB8;
        v25 = *(_DWORD *)(dword_B42EB8 + 0xC);
        if ( !v25 || *(_BYTE *)(*(_DWORD *)v25 + 0xF5) || v123 >= 0x147 && v123 <= 0x14D )
        {
          qmemcpy(v136, (const void *)(*(_DWORD *)(LODWORD(v120) + 0x14) + 0x940), 0x40u);
          D3DXMatrixTranspose_0(v136, v136);
          flt_B46D68 = v136[0];
          flt_B46D6C = v136[1];
          flt_B46D70 = v136[2];
          flt_B46D74 = v136[3];
          flt_B46D78 = v136[4];
          flt_B46D7C = v136[5];
          flt_B46D80 = v136[6];
          flt_B46D84 = v136[7];
          flt_B46D88 = v136[8];
          flt_B46D8C = v136[9];
          flt_B46D90 = v136[0xA];
          flt_B46D94 = v136[0xB];
          flt_B46D98 = v136[0xC];
          flt_B46D9C = v136[0xD];
          flt_B46DA0 = v136[0xE];
          flt_B46DA4 = v136[0xF];
        }
        else
        {
          *(float *)&v135[0x38] = 0.0;
          *(float *)&v135[0x34] = 0.0;
          *(float *)&v135[0x30] = 0.0;
          *(float *)&v135[0x2C] = 0.0;
          *(float *)&v135[0x24] = 0.0;
          *(float *)&v135[0x20] = 0.0;
          *(float *)&v135[0x1C] = 0.0;
          *(float *)&v135[0x18] = 0.0;
          *(float *)&v135[0x10] = 0.0;
          *(float *)&v135[0xC] = 0.0;
          *(float *)&v135[8] = 0.0;
          *(float *)&v135[4] = 0.0;
          v136[0xE] = 0.0;
          v136[0xD] = 0.0;
          v136[0xC] = 0.0;
          v136[0xB] = 0.0;
          v136[9] = 0.0;
          v136[8] = 0.0;
          v136[7] = 0.0;
          v136[6] = 0.0;
          v136[4] = 0.0;
          v136[3] = 0.0;
          v136[2] = 0.0;
          v136[1] = 0.0;
          *(float *)&v135[0x3C] = v23;
          *(float *)&v135[0x28] = v23;
          *(float *)&v135[0x14] = v23;
          *(float *)v135 = v23;
          v136[0xF] = v23;
          v136[0xA] = v23;
          v136[5] = v23;
          v136[0] = v23;
          if ( v16 )
          {
            qmemcpy(v135, *((const void **)v16 + 0xA), sizeof(v135));
          }
          else
          {
            sub_7640A0((float *)v135, v17);
            v24 = dword_B42EB8;
          }
          v26 = dword_B42E90 - 0x14E;
          *(float *)&v135[0x30] = CameraWorldTranslate + *(float *)&v135[0x30];
          *(float *)&v135[0x34] = flt_B3F930 + *(float *)&v135[0x34];
          *(float *)&v135[0x38] = flt_B3F934 + *(float *)&v135[0x38];
          if ( v26 > 3 )
            v27 = *(_DWORD *)(*(_DWORD *)(v24 + 0xC) + 4);
          else
            v27 = **(_DWORD **)(v24 + 0xC);
          D3DXMatrixMultiply_0(v174, v135, v27 + 0x10);
          qmemcpy(v136, v174, 0x40u);
          D3DXMatrixTranspose_0(v136, v136);
          qmemcpy(&flt_B46D68, v136, 0x40u);
        }
        v16 = a4;
        v23 = 1.0;
      }
      if ( v123 < 0x152 || v123 > 0x153 )
      {
        v28 = 0;
        v29 = Double_To_SInt32(result);
        *(float *)&v30 = COERCE_FLOAT(Double_To_SInt32(result));
        v122 = *(float *)&v30;
        if ( (v123 < 0x14E || v123 > 0x151) && v29 > 0 )
        {
          v31 = (float *)&unk_B47018;
          v28 = v29;
          v130 = 0.0;
          do
          {
            v112 = -*v31;
            *(float *)&v113 = -v31[1];
            *(float *)&v114 = -v31[2];
            v124 = v112;
            v125 = *(float *)&v113;
            v126 = *(float *)&v114;
            D3DXVec3TransformNormal_0(&v137, &v124, &v156);
            D3DXVec3Normalize_0(&v124, &v137);
            v117 = v124;
            v131 = v124;
            v118 = v125;
            v132 = v125;
            v119 = v126;
            v133 = v126;
            result = sub_43F350(&v131);
            v31 += 8;
            --v29;
            v127 = v131;
            v128 = v132;
            v32 = v132;
            v33 = v133;
            v31[0xFFFFFFF8] = v131;
            v34 = v130;
            v129 = v33;
            v35 = v129;
            v31[0xFFFFFFF9] = v32;
            v31[0xFFFFFFFA] = v35;
            v31[0xFFFFFFFB] = v34;
          }
          while ( v29 );
          v23 = 1.0;
          *(float *)&v30 = v122;
        }
        if ( v30 > 0 )
        {
          v36 = (float *)((char *)&unk_B47018 + 0x20 * v28);
          v37 = v30;
          do
          {
            v38 = v36[1];
            v39 = v36[2];
            v127 = *v36;
            v40 = v36[3];
            v131 = v127;
            v128 = v38;
            v129 = v39;
            v132 = v38;
            v133 = v39;
            v130 = v40;
            D3DXVec3TransformCoord_0(&v137, &v131, &v156);
            v117 = v137;
            v118 = v138;
            v124 = v137;
            v119 = v139;
            v125 = v138;
            v122 = v130;
            v126 = v139;
            if ( !a4 )
            {
              if ( v123 == 0x14E || v123 == 0x14F )
              {
                scale = a9->scale;
                v124 = v137 * scale;
                v125 = scale * v125;
                v126 = scale * v126;
              }
              else
              {
                v122 = v130 / a9->scale;
              }
            }
            v36 += 8;
            --v37;
            v112 = v124;
            *(float *)&v113 = v125;
            v41 = v125;
            v42 = v126;
            v36[0xFFFFFFF8] = v124;
            *(float *)&v114 = v42;
            v43 = v114;
            v44 = v122;
            v36[0xFFFFFFF9] = v41;
            v115 = v44;
            v45 = v115;
            *((_DWORD *)v36 + 0xFFFFFFFA) = v43;
            v36[0xFFFFFFFB] = v45;
          }
          while ( v37 );
          v23 = 1.0;
        }
        v16 = a4;
        v17 = (float *)a9;
      }
      v46 = *(float *)&dword_B46658;
      v47 = *(float *)&dword_B46660;
      v132 = *(float *)&dword_B4665C;
      v131 = v46;
      v48 = dword_B46664;
      v133 = v47;
      v134 = v48;
      if ( (unsigned int)(v123 - 0x147) > 6 )
      {
        v137 = v131;
        v138 = v132;
        v139 = v133;
        D3DXVec3TransformCoord_0(&v117, &v137, &v156);
        v52 = v117;
        v53 = v118;
        *(float *)&dword_B46DA8 = v117;
        *(float *)&v113 = v53;
        v54 = v119;
        dword_B46DAC = v113;
        *(float *)&v114 = v54;
        dword_B46DB0 = v114;
        v55 = v52;
        v23 = 1.0;
        v112 = v55;
        *(float *)&dword_B46DB4 = 1.0;
        *(float *)&v113 = v53;
        *(float *)&dword_B46F88 = v112;
        dword_B46F8C = v113;
        *(float *)&v114 = v54;
        dword_B46F90 = v114;
        v115 = 1.0;
        *(float *)&dword_B46F94 = 1.0;
      }
      else
      {
        v117 = v131 - CameraWorldTranslate;
        v118 = v132 - flt_B3F930;
        v119 = v133 - flt_B3F934;
        v49 = v117;
        v50 = v118;
        *(float *)&dword_B46DA8 = v117;
        *(float *)&v113 = v50;
        v51 = v119;
        dword_B46DAC = v113;
        *(float *)&v114 = v51;
        dword_B46DB0 = v114;
        v115 = v23;
        *(float *)&dword_B46DB4 = v115;
        v112 = v49;
        *(float *)&dword_B46F88 = v112;
        *(float *)&v113 = v50;
        dword_B46F8C = v113;
        *(float *)&v114 = v51;
        dword_B46F90 = v114;
        v115 = v23;
        *(float *)&dword_B46F94 = v115;
      }
      v21 = v23;
      v20 = 0.0;
    }
    if ( BYTE1(dword_B46978) )
    {
      if ( v116 && v16 )
      {
        v56 = CameraWorldTranslate;
        *(float *)v135 = v21;
        v57 = flt_B3F930;
        v58 = flt_B3F934;
        *(float *)&v135[4] = v20;
        *(float *)&v135[8] = *(float *)&v135[4];
        v117 = v56;
        v118 = v57;
        *(float *)&v135[0xC] = v56;
        v119 = v58;
        *(float *)&v135[0x10] = *(float *)&v135[4];
        *(float *)&v135[0x18] = *(float *)&v135[4];
        *(float *)&v135[0x14] = v21;
        *(float *)&v135[0x1C] = v57;
        *(float *)&v135[0x20] = *(float *)&v135[4];
        *(float *)&v135[0x24] = *(float *)&v135[4];
        *(float *)&v135[0x28] = *(float *)&v135[0x14];
        *(float *)&v135[0x2C] = v58;
        v59 = v21;
        *(float *)&v135[0x30] = *(float *)&v135[4];
        *(float *)&v135[0x34] = *(float *)&v135[4];
        *(float *)&v135[0x38] = *(float *)&v135[4];
      }
      else
      {
        *(float *)v135 = *v17;
        *(float *)&v135[4] = v17[1];
        *(float *)&v135[8] = v17[2];
        *(float *)&v135[0xC] = v17[9];
        *(float *)&v135[0x10] = v17[3];
        *(float *)&v135[0x14] = v17[4];
        *(float *)&v135[0x18] = v17[5];
        *(float *)&v135[0x1C] = v17[0xA];
        *(float *)&v135[0x20] = v17[6];
        *(float *)&v135[0x24] = v17[7];
        *(float *)&v135[0x28] = v17[8];
        *(float *)&v135[0x2C] = v17[0xB];
        *(float *)&v135[0x30] = v20;
        *(float *)&v135[0x34] = v20;
        *(float *)&v135[0x38] = v20;
        v59 = v17[0xC];
      }
      *(float *)&v135[0x3C] = v59;
      qmemcpy(v136, v135, 0x40u);
      v115 = v136[3];
      v60 = v136[1];
      v61 = v136[2];
      v112 = v136[4];
      v62 = v136[5];
      dword_B46E18 = LODWORD(v136[0]);
      v63 = LODWORD(v115);
      *(float *)&v113 = v62;
      v64 = v136[6];
      *(float *)&dword_B46E1C = v60;
      v65 = LODWORD(v112);
      *(float *)&v114 = v64;
      v66 = v136[7];
      *(float *)&dword_B46E20 = v61;
      v67 = v113;
      v115 = v66;
      v68 = v136[8];
      dword_B46E24 = v63;
      v69 = v114;
      v112 = v68;
      v70 = v136[9];
      dword_B46E28 = v65;
      v71 = LODWORD(v115);
      *(float *)&v113 = v70;
      v72 = v136[0xA];
      dword_B46E2C = v67;
      v73 = LODWORD(v112);
      *(float *)&v114 = v72;
      v74 = v136[0xB];
      dword_B46E30 = v69;
      v75 = v113;
      v115 = v74;
      v76 = v136[0xC];
      dword_B46E34 = v71;
      v77 = v114;
      v112 = v76;
      v78 = v136[0xD];
      dword_B46E38 = v73;
      v79 = LODWORD(v115);
      *(float *)&v113 = v78;
      v80 = v136[0xE];
      dword_B46E3C = v75;
      v81 = LODWORD(v112);
      *(float *)&v114 = v80;
      v82 = v136[0xF];
      dword_B46E40 = v77;
      v83 = v113;
      v115 = v82;
      dword_B46E44 = v79;
      v84 = v114;
      dword_B46E48 = v81;
      v85 = LODWORD(v115);
      dword_B46E4C = v83;
      v86 = LODWORD(flt_B44EE8);
      dword_B46E50 = v84;
      v87 = LODWORD(flt_B44EEC);
      dword_B46E54 = v85;
      v88 = dword_B44EF0;
      dword_B46E58 = v86;
      v89 = LODWORD(flt_B44EF4);
      dword_B46E5C = v87;
      v90 = LODWORD(flt_B44EF8);
      dword_B46E60 = v88;
      v91 = LODWORD(flt_B44EFC);
      dword_B46E64 = v89;
      dword_B46E68 = v90;
      dword_B46E6C = v91;
      v92 = LODWORD(flt_B44F04);
      v16 = a4;
      dword_B46E70 = dword_B44F00;
      dword_B46E74 = v92;
    }
    if ( HIBYTE(dword_B4697C) )
    {
      if ( v16 )
      {
        qmemcpy(v136, *((const void **)v16 + 0xA), 0x40u);
        D3DXMatrixTranspose_0(v136, v136);
        qmemcpy(&unk_B46E78, v136, 0x40u);
      }
    }
    device = dword_B43104->member.device;
    v172 = device;
    if ( (unsigned int)(v123 - 0x14E) <= 3 )
    {
      v94 = *(int **)(dword_B42EB8 + 0xC);
      v95 = *v94;
      v15 = *(_BYTE *)(*v94 + 0x214) == 0;
      v173 = *v94;
      if ( v15 )
      {
        v96 = (float *)(v95 + 0x150);
        v97 = *(_DWORD *)(LODWORD(v120) + 0x14);
        qmemcpy(v136, (const void *)(v97 + 0x980), 0x40u);
        v98 = flt_B3F930;
        v99 = CameraWorldTranslate;
        v100 = flt_B3F934;
        scale = v136[8] * v100 + v136[0] * v99 + v136[4] * v98;
        v136[0xC] = -scale;
        scale = v136[5] * v98 + v136[1] * v99 + v136[9] * v100;
        v136[0xD] = -scale;
        scale = v99 * v136[2] + v98 * v136[6] + v100 * v136[0xA];
        v136[0xE] = -scale;
        qmemcpy(v174, (const void *)(v97 + 0x9C0), sizeof(v174));
        D3DXMatrixMultiply_0(v135, v136, v174);
        D3DXMatrixInverse_0(v176, 0, v135);
        D3DXMatrixTranspose_0(v135, v176);
        LODWORD(v122) = &v175[4] - (char *)v96;
        v101 = 0;
        v102 = v96;
        LODWORD(v120) = &v175[8] - (char *)v96;
        v123 = &v175[0xC] - (char *)v96;
        LODWORD(scale) = v175 - (char *)v96;
        do
        {
          v103 = v102[1];
          v104 = v102[2];
          v117 = *v102;
          v112 = v117;
          v118 = v103;
          v119 = v104;
          *(float *)&v113 = v103;
          *(float *)&v114 = v104;
          v115 = -v102[3];
          D3DXPlaneNormalize_0(&v112, &v112);
          D3DXPlaneTransform_0(&v127, &v112, v135);
          v105 = scale;
          v106 = v122;
          *(float *)((char *)v102 + LODWORD(scale)) = v127;
          v107 = v120;
          *(float *)((char *)v102 + LODWORD(v106)) = v128;
          v108 = v123;
          *(float *)((char *)v102 + LODWORD(v107)) = v129;
          result = v130;
          *(float *)((char *)v102 + v108) = v130;
          v172->lpVtbl->SetClipPlane(v172, v101++, (float *)((char *)v102 + LODWORD(v105)));
          v102 += 4;
        }
        while ( v101 < 6 );
        v109 = (char *)(v173 + 0x1B4);
        *(_BYTE *)(v173 + 0x214) = 1;
        qmemcpy(v109, v175, 0x60u);
      }
      else
      {
        v110 = (const float *)(v95 + 0x1B4);
        for ( i = 0; i < 6; ++i )
        {
          device->lpVtbl->SetClipPlane(device, i, v110);
          v110 += 4;
        }
      }
    }
  }
  return result;
}
