void __thiscall sub_750BC0(float *this, float a2, int a3)
{
  int v4; // eax
  NiTransform *v5; // eax
  float v6; // ecx
  float v7; // edx
  float v8; // eax
  int v9; // eax
  unsigned __int16 v10; // dx
  int v11; // esi
  float *v12; // edi
  int v13; // ebx
  int v14; // esi
  float *v15; // edi
  int v16; // ebx
  int v17; // esi
  float *v18; // edi
  double v19; // st7
  bool v20; // zf
  int v21; // esi
  float *v22; // edi
  double v23; // st7
  double v24; // st7
  int v25; // ecx
  int v26; // eax
  double v27; // st5
  double v28; // st4
  double v29; // st3
  double v30; // st2
  int v31; // esi
  int v32; // edi
  int v33; // esi
  float *v34; // edi
  double v35; // st6
  double v36; // st5
  double v37; // st4
  bool v38; // c0
  double v39; // st7
  double v40; // st7
  int v41; // esi
  float *v42; // edi
  double v43; // st6
  double v44; // st7
  float v45; // [esp+10h] [ebp-1A0h]
  float v46; // [esp+10h] [ebp-1A0h]
  float v47; // [esp+10h] [ebp-1A0h]
  float v48; // [esp+10h] [ebp-1A0h]
  float v49; // [esp+10h] [ebp-1A0h]
  float v50; // [esp+10h] [ebp-1A0h]
  float v51; // [esp+10h] [ebp-1A0h]
  float v52; // [esp+10h] [ebp-1A0h]
  float v53; // [esp+10h] [ebp-1A0h]
  float v54; // [esp+10h] [ebp-1A0h]
  float v55; // [esp+10h] [ebp-1A0h]
  float v56; // [esp+10h] [ebp-1A0h]
  float v57; // [esp+10h] [ebp-1A0h]
  int v58; // [esp+10h] [ebp-1A0h]
  float v59; // [esp+10h] [ebp-1A0h]
  float v60; // [esp+10h] [ebp-1A0h]
  float v61; // [esp+10h] [ebp-1A0h]
  float v62; // [esp+10h] [ebp-1A0h]
  float v63; // [esp+10h] [ebp-1A0h]
  float v64; // [esp+14h] [ebp-19Ch]
  int v65; // [esp+14h] [ebp-19Ch]
  int v66; // [esp+14h] [ebp-19Ch]
  float v67; // [esp+14h] [ebp-19Ch]
  float v68; // [esp+14h] [ebp-19Ch]
  float v69; // [esp+14h] [ebp-19Ch]
  float v70; // [esp+14h] [ebp-19Ch]
  int v71; // [esp+14h] [ebp-19Ch]
  double v72; // [esp+18h] [ebp-198h] BYREF
  float v73; // [esp+20h] [ebp-190h]
  float v74; // [esp+2Ch] [ebp-184h]
  float v75; // [esp+30h] [ebp-180h]
  float v76; // [esp+34h] [ebp-17Ch]
  double v77; // [esp+38h] [ebp-178h] BYREF
  float v78; // [esp+40h] [ebp-170h]
  double v79; // [esp+48h] [ebp-168h]
  double v80; // [esp+50h] [ebp-160h]
  double v81; // [esp+58h] [ebp-158h]
  double v82; // [esp+60h] [ebp-150h]
  double v83; // [esp+68h] [ebp-148h]
  double v84; // [esp+70h] [ebp-140h]
  float v85; // [esp+78h] [ebp-138h]
  double v86; // [esp+80h] [ebp-130h]
  float v87; // [esp+88h] [ebp-128h]
  double v88; // [esp+90h] [ebp-120h]
  float v89; // [esp+98h] [ebp-118h]
  double v90; // [esp+A0h] [ebp-110h]
  float v91; // [esp+A8h] [ebp-108h]
  NiTransform v92; // [esp+B0h] [ebp-100h] BYREF
  double v93; // [esp+104h] [ebp-ACh]
  float v94; // [esp+10Ch] [ebp-A4h]
  NiTransform v95; // [esp+114h] [ebp-9Ch] BYREF
  float v96[13]; // [esp+148h] [ebp-68h] BYREF
  NiTransform v97; // [esp+17Ch] [ebp-34h] BYREF

  if ( *(_WORD *)(a3 + 0x48) )
  {
    v4 = *((_DWORD *)this + 6);
    if ( v4 )
    {
      qmemcpy(&v95, (const void *)(v4 + 0x64), sizeof(v95));
      qmemcpy(v96, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v96));
      sub_718A80(v96, &v97);
      sub_53D7A0(&v97, (NiTransform *)&v92.scale, &v95);
      v72 = v93;
      v73 = v94;
      v5 = sub_7101F0((NiTransform *)&v92.scale, &v92, (NiPoint3 *)(this + 7));
      v6 = v5->rot.data[0][0];
      v7 = v5->rot.data[0][1];
      v8 = v5->rot.data[0][2];
      v77 = COERCE_DOUBLE(__PAIR64__(LODWORD(v7), LODWORD(v6)));
      v78 = v8;
      sub_43F350((float *)&v77);
      v9 = *((_DWORD *)this + 0xC);
      v10 = *(_WORD *)(a3 + 0x48);
      v64 = *(this + 0xB) * dbl_A863D8;
      if ( v9 )
      {
        if ( v9 == 1 )
        {
          if ( 0.0 == *(this + 0xA) && 0.0 == *(this + 0xD) )
          {
            v11 = *(_DWORD *)(a3 + 0x5C);
            v12 = *(float **)(a3 + 0x1C);
            if ( v10 )
            {
              v13 = v10;
              v83 = *(float *)&v72;
              v82 = *((float *)&v72 + 1);
              v81 = v73;
              v80 = a2;
              v84 = v64;
              do
              {
                *(float *)&v72 = v83 - *v12;
                *((float *)&v72 + 1) = v82 - v12[1];
                v73 = v81 - v12[2];
                sub_43F350((float *)&v72);
                v11 += 0x1C;
                v12 += 3;
                --v13;
                v45 = (v80 - *(float *)(v11 - 8)) * v84;
                *(float *)&v77 = *(float *)&v72 * v45;
                *((float *)&v77 + 1) = *((float *)&v72 + 1) * v45;
                v78 = v45 * v73;
                *(float *)(v11 - 0x1C) = *(float *)&v77 + *(float *)(v11 - 0x1C);
                *(float *)(v11 - 0x18) = *((float *)&v77 + 1) + *(float *)(v11 - 0x18);
                *(float *)(v11 - 0x14) = *(float *)(v11 - 0x14) + v78;
              }
              while ( v13 );
            }
          }
          else if ( 0.0 != *(this + 0xA) || 0.0 == *(this + 0xD) )
          {
            if ( 0.0 == *(this + 0xA) || 0.0 != *(this + 0xD) )
            {
              if ( 0.0 != *(this + 0xA) && 0.0 != *(this + 0xD) )
              {
                v21 = *(_DWORD *)(a3 + 0x5C);
                v22 = *(float **)(a3 + 0x1C);
                if ( v10 )
                {
                  v51 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470;
                  v79 = v51;
                  v83 = *(float *)&v72;
                  v82 = *((float *)&v72 + 1);
                  v81 = v73;
                  v23 = v64;
                  v66 = v10;
                  v74 = *(float *)&v77 * v23;
                  v75 = *((float *)&v77 + 1) * v23;
                  v76 = v23 * v78;
                  v86 = v74;
                  v88 = v75;
                  v90 = v76;
                  v80 = a2;
                  do
                  {
                    *(float *)&v72 = sub_53D480() * v79;
                    *((float *)&v72 + 1) = sub_53D480() * v79;
                    v73 = sub_53D480() * v79;
                    v92.rot.data[0][0] = v83 - *v22;
                    v92.rot.data[0][1] = v82 - v22[1];
                    v92.rot.data[0][2] = v81 - v22[2];
                    v52 = sub_43F350((float *)&v92) * -*(this + 0xA);
                    v53 = exp(v52);
                    v21 += 0x1C;
                    v22 += 3;
                    v20 = v66-- == 1;
                    v74 = v86 * v53;
                    v75 = v88 * v53;
                    v76 = v53 * v90;
                    *(float *)&v77 = v74 + *(float *)&v72;
                    *((float *)&v77 + 1) = v75 + *((float *)&v72 + 1);
                    v78 = v76 + v73;
                    v54 = v80 - *(float *)(v21 - 8);
                    *(float *)&v84 = *(float *)&v77 * v54;
                    *((float *)&v84 + 1) = *((float *)&v77 + 1) * v54;
                    v85 = v54 * v78;
                    *(float *)(v21 - 0x1C) = *(float *)&v84 + *(float *)(v21 - 0x1C);
                    *(float *)(v21 - 0x18) = *(float *)(v21 - 0x18) + *((float *)&v84 + 1);
                    *(float *)(v21 - 0x14) = v85 + *(float *)(v21 - 0x14);
                  }
                  while ( !v20 );
                }
              }
            }
            else
            {
              v17 = *(_DWORD *)(a3 + 0x5C);
              v18 = *(float **)(a3 + 0x1C);
              if ( v10 )
              {
                v83 = *(float *)&v72;
                v82 = *((float *)&v72 + 1);
                v81 = v73;
                v19 = v64;
                v65 = v10;
                v84 = v19;
                v80 = a2;
                do
                {
                  *(float *)&v72 = v83 - *v18;
                  *((float *)&v72 + 1) = v82 - v18[1];
                  v73 = v81 - v18[2];
                  v48 = sub_43F350((float *)&v72) * -*(this + 0xA);
                  v49 = exp(v48);
                  v17 += 0x1C;
                  v18 += 3;
                  v20 = v65-- == 1;
                  v50 = v49 * v84 * (v80 - *(float *)(v17 - 8));
                  v74 = *(float *)&v72 * v50;
                  v75 = *((float *)&v72 + 1) * v50;
                  v76 = v50 * v73;
                  *(float *)(v17 - 0x1C) = v74 + *(float *)(v17 - 0x1C);
                  *(float *)(v17 - 0x18) = v75 + *(float *)(v17 - 0x18);
                  *(float *)(v17 - 0x14) = *(float *)(v17 - 0x14) + v76;
                }
                while ( !v20 );
              }
            }
          }
          else
          {
            v14 = *(_DWORD *)(a3 + 0x5C);
            v15 = *(float **)(a3 + 0x1C);
            v46 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470;
            if ( v10 )
            {
              v16 = v10;
              v83 = *(float *)&v72;
              v82 = *((float *)&v72 + 1);
              v81 = v73;
              v79 = v46;
              v84 = v64;
              v80 = a2;
              do
              {
                *(float *)&v72 = v83 - *v15;
                *((float *)&v72 + 1) = v82 - v15[1];
                v73 = v81 - v15[2];
                sub_43F350((float *)&v77);
                *(float *)&v88 = sub_53D480() * v79;
                *((float *)&v88 + 1) = sub_53D480() * v79;
                v14 += 0x1C;
                v15 += 3;
                --v16;
                v89 = sub_53D480() * v79;
                *(float *)&v86 = *(float *)&v72 * v84;
                *((float *)&v86 + 1) = *((float *)&v72 + 1) * v84;
                v87 = v84 * v73;
                *(float *)&v90 = *(float *)&v86 + *(float *)&v88;
                *((float *)&v90 + 1) = *((float *)&v86 + 1) + *((float *)&v88 + 1);
                v91 = v87 + v89;
                v47 = v80 - *(float *)(v14 - 8);
                v74 = *(float *)&v90 * v47;
                v75 = *((float *)&v90 + 1) * v47;
                v76 = v47 * v91;
                *(float *)(v14 - 0x1C) = *(float *)(v14 - 0x1C) + v74;
                *(float *)(v14 - 0x18) = v75 + *(float *)(v14 - 0x18);
                *(float *)(v14 - 0x14) = v76 + *(float *)(v14 - 0x14);
              }
              while ( v16 );
            }
          }
        }
      }
      else
      {
        v24 = 0.0;
        if ( 0.0 == *(this + 0xA) && 0.0 == *(this + 0xD) )
        {
          v25 = *(_DWORD *)(a3 + 0x5C);
          if ( v10 )
          {
            v26 = v10;
            v27 = *(float *)&v77;
            v28 = *((float *)&v77 + 1);
            v29 = v78;
            do
            {
              v30 = *(float *)(v25 + 0x14);
              v25 += 0x1C;
              --v26;
              v55 = (a2 - v30) * v64;
              v74 = v55 * v27;
              v75 = v55 * v28;
              v76 = v55 * v29;
              *(float *)(v25 - 0x1C) = *(float *)(v25 - 0x1C) + v74;
              *(float *)(v25 - 0x18) = v75 + *(float *)(v25 - 0x18);
              *(float *)(v25 - 0x14) = v76 + *(float *)(v25 - 0x14);
            }
            while ( v26 );
          }
        }
        else if ( 0.0 != *(this + 0xA) || 0.0 == *(this + 0xD) )
        {
          if ( 0.0 == *(this + 0xA) || 0.0 != *(this + 0xD) )
          {
            if ( 0.0 != *(this + 0xA) && 0.0 != *(this + 0xD) )
            {
              v41 = *(_DWORD *)(a3 + 0x5C);
              v42 = *(float **)(a3 + 0x1C);
              if ( v10 )
              {
                v59 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470;
                v79 = v59;
                v83 = *(float *)&v72;
                v82 = *((float *)&v72 + 1);
                v81 = v73;
                v88 = *(float *)&v77;
                v43 = v64;
                v71 = v10;
                v74 = *(float *)&v77 * v43;
                v90 = *((float *)&v77 + 1);
                v75 = *((float *)&v77 + 1) * v43;
                v86 = v78;
                v76 = v43 * v78;
                v84 = v74;
                v77 = v75;
                v72 = v76;
                v80 = a2;
                do
                {
                  v92.pos.x = sub_53D480() * v79;
                  v92.pos.y = sub_53D480() * v79;
                  v92.pos.z = sub_53D480() * v79;
                  v74 = v83 - *v42;
                  v75 = v82 - v42[1];
                  v76 = v81 - v42[2];
                  v60 = v75 * v90 + v74 * v88 + v76 * v86;
                  v44 = v60;
                  if ( v60 >= 0.0 )
                    v61 = v44 * -*(this + 0xA);
                  else
                    v61 = v44 * *(this + 0xA);
                  v62 = exp(v61);
                  v41 += 0x1C;
                  v42 += 3;
                  v20 = v71-- == 1;
                  v92.rot.data[2][0] = v84 * v62;
                  v92.rot.data[2][1] = v77 * v62;
                  v92.rot.data[2][2] = v62 * v72;
                  v92.rot.data[1][0] = v92.rot.data[2][0] + v92.pos.x;
                  v92.rot.data[1][1] = v92.rot.data[2][1] + v92.pos.y;
                  v92.rot.data[1][2] = v92.rot.data[2][2] + v92.pos.z;
                  v63 = v80 - *(float *)(v41 - 8);
                  v92.rot.data[0][0] = v92.rot.data[1][0] * v63;
                  v92.rot.data[0][1] = v92.rot.data[1][1] * v63;
                  v92.rot.data[0][2] = v63 * v92.rot.data[1][2];
                  *(float *)(v41 - 0x1C) = v92.rot.data[0][0] + *(float *)(v41 - 0x1C);
                  *(float *)(v41 - 0x18) = v92.rot.data[0][1] + *(float *)(v41 - 0x18);
                  *(float *)(v41 - 0x14) = *(float *)(v41 - 0x14) + v92.rot.data[0][2];
                }
                while ( !v20 );
              }
            }
          }
          else
          {
            v33 = *(_DWORD *)(a3 + 0x5C);
            v34 = *(float **)(a3 + 0x1C);
            if ( v10 )
            {
              v83 = *(float *)&v72;
              v58 = v10;
              v82 = *((float *)&v72 + 1);
              v81 = v73;
              v80 = a2;
              v84 = v64;
              v35 = *(float *)&v77;
              v88 = *(float *)&v77;
              v36 = *((float *)&v77 + 1);
              v90 = *((float *)&v77 + 1);
              v37 = v78;
              v86 = v78;
              while ( 1 )
              {
                v74 = v83 - *v34;
                v75 = v82 - v34[1];
                v76 = v81 - v34[2];
                v67 = v35 * v74 + v36 * v75 + v37 * v76;
                v38 = v67 < v24;
                v39 = v67;
                v68 = v38 ? v39 * *(this + 0xA) : v39 * -*(this + 0xA);
                v69 = exp(v68);
                v33 += 0x1C;
                v34 += 3;
                v20 = v58-- == 1;
                v70 = (v80 - *(float *)(v33 - 8)) * (v69 * v84);
                v35 = v88;
                *(float *)&v72 = v70 * v88;
                v36 = v90;
                *((float *)&v72 + 1) = v70 * v90;
                v40 = v86;
                v73 = v70 * v86;
                *(float *)(v33 - 0x1C) = *(float *)(v33 - 0x1C) + *(float *)&v72;
                *(float *)(v33 - 0x18) = *((float *)&v72 + 1) + *(float *)(v33 - 0x18);
                *(float *)(v33 - 0x14) = v73 + *(float *)(v33 - 0x14);
                if ( v20 )
                  break;
                v37 = v40;
                v24 = 0.0;
              }
            }
          }
        }
        else
        {
          v31 = *(_DWORD *)(a3 + 0x5C);
          if ( v10 )
          {
            v32 = v10;
            v56 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470;
            v79 = v56;
            v74 = *(float *)&v77 * v64;
            v75 = *((float *)&v77 + 1) * v64;
            v76 = v64 * v78;
            v86 = v74;
            v88 = v75;
            v90 = v76;
            v80 = a2;
            do
            {
              v74 = sub_53D480() * v79;
              v75 = sub_53D480() * v79;
              v31 += 0x1C;
              --v32;
              v76 = sub_53D480() * v79;
              *(float *)&v72 = v74 + v86;
              *((float *)&v72 + 1) = v75 + v88;
              v73 = v76 + v90;
              v57 = v80 - *(float *)(v31 - 8);
              *(float *)&v77 = *(float *)&v72 * v57;
              *((float *)&v77 + 1) = *((float *)&v72 + 1) * v57;
              v78 = v57 * v73;
              *(float *)(v31 - 0x1C) = *(float *)&v77 + *(float *)(v31 - 0x1C);
              *(float *)(v31 - 0x18) = *((float *)&v77 + 1) + *(float *)(v31 - 0x18);
              *(float *)(v31 - 0x14) = v78 + *(float *)(v31 - 0x14);
            }
            while ( v32 );
          }
        }
      }
    }
  }
}
