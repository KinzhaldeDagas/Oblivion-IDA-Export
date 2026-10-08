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
  NiPoint3 pos; // [esp+18h] [ebp-198h] BYREF
  float v73; // [esp+2Ch] [ebp-184h]
  float v74; // [esp+30h] [ebp-180h]
  float v75; // [esp+34h] [ebp-17Ch]
  double v76; // [esp+38h] [ebp-178h] BYREF
  float v77; // [esp+40h] [ebp-170h]
  double v78; // [esp+48h] [ebp-168h]
  double v79; // [esp+50h] [ebp-160h]
  double z; // [esp+58h] [ebp-158h]
  double y; // [esp+60h] [ebp-150h]
  double x; // [esp+68h] [ebp-148h]
  double v83; // [esp+70h] [ebp-140h]
  float v84; // [esp+78h] [ebp-138h]
  double v85; // [esp+80h] [ebp-130h]
  float v86; // [esp+88h] [ebp-128h]
  double v87; // [esp+90h] [ebp-120h]
  float v88; // [esp+98h] [ebp-118h]
  double v89; // [esp+A0h] [ebp-110h]
  float v90; // [esp+A8h] [ebp-108h]
  float v91; // [esp+B0h] [ebp-100h] BYREF
  float v92; // [esp+B4h] [ebp-FCh]
  float v93; // [esp+B8h] [ebp-F8h]
  float v94; // [esp+BCh] [ebp-F4h]
  float v95; // [esp+C0h] [ebp-F0h]
  float v96; // [esp+C4h] [ebp-ECh]
  float v97; // [esp+C8h] [ebp-E8h]
  float v98; // [esp+CCh] [ebp-E4h]
  float v99; // [esp+D0h] [ebp-E0h]
  float v100; // [esp+D4h] [ebp-DCh]
  float v101; // [esp+D8h] [ebp-D8h]
  float v102; // [esp+DCh] [ebp-D4h]
  NiTransform out; // [esp+E0h] [ebp-D0h] BYREF
  NiTransform local; // [esp+114h] [ebp-9Ch] BYREF
  float v105[13]; // [esp+148h] [ebp-68h] BYREF
  NiTransform parent; // [esp+17Ch] [ebp-34h] BYREF

  if ( *(_WORD *)(a3 + 0x48) )
  {
    v4 = *((_DWORD *)this + 6); /*0x750bdf*/
    if ( v4 )
    {
      qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x750bf9*/
      qmemcpy(v105, (const void *)(*((_DWORD *)this + 4) + 0x64), sizeof(v105)); /*0x750c0d*/
      sub_718A80(v105, &parent); /*0x750c1e*/
      NiTransform_Compose(&parent, &out, &local); /*0x750c3a*/
      pos = out.pos; /*0x750c54*/
      v5 = sub_7101F0(&out, (NiTransform *)&v91, (NiPoint3 *)(this + 7)); /*0x750c73*/
      v6 = v5->rot.data[0][0]; /*0x750c78*/
      v7 = v5->rot.data[0][1]; /*0x750c7a*/
      v8 = v5->rot.data[0][2]; /*0x750c7d*/
      v76 = COERCE_DOUBLE(__PAIR64__(LODWORD(v7), LODWORD(v6))); /*0x750c80*/
      v77 = v8; /*0x750c8c*/
      Vector3_NormalizeInPlace((float *)&v76); /*0x750c90*/
      v9 = *((_DWORD *)this + 0xC); /*0x750c9a*/
      v10 = *(_WORD *)(a3 + 0x48); /*0x750ca9*/
      v64 = *(this + 0xB) * dbl_A863D8; /*0x750cad*/
      if ( v9 )
      {
        if ( v9 == 1 ) /*0x750cba*/
        {
          if ( 0.0 == *(this + 0xA) && 0.0 == *(this + 0xD) ) /*0x750cd8*/
          {
            v11 = *(_DWORD *)(a3 + 0x5C); /*0x750ce3*/
            v12 = *(float **)(a3 + 0x1C); /*0x750ce6*/
            if ( v10 ) /*0x750ce9*/
            {
              v13 = v10; /*0x750cf3*/
              x = pos.x; /*0x750cf6*/
              y = pos.y; /*0x750cfe*/
              z = pos.z; /*0x750d06*/
              v79 = a2; /*0x750d0d*/
              v83 = v64; /*0x750d15*/
              do /*0x750d9a*/
              {
                pos.x = x - *v12; /*0x750d23*/
                pos.y = y - v12[1]; /*0x750d2e*/
                pos.z = z - v12[2]; /*0x750d39*/
                Vector3_NormalizeInPlace(&pos.x); /*0x750d3d*/
                v11 += 0x1C; /*0x750d44*/
                v12 += 3; /*0x750d4a*/
                --v13; /*0x750d4d*/
                v45 = (v79 - *(float *)(v11 - 8)) * v83; /*0x750d58*/
                *(float *)&v76 = pos.x * v45; /*0x750d66*/
                *((float *)&v76 + 1) = pos.y * v45; /*0x750d70*/
                v77 = v45 * pos.z; /*0x750d78*/
                *(float *)(v11 - 0x1C) = *(float *)&v76 + *(float *)(v11 - 0x1C); /*0x750d83*/
                *(float *)(v11 - 0x18) = *((float *)&v76 + 1) + *(float *)(v11 - 0x18); /*0x750d8d*/
                *(float *)(v11 - 0x14) = *(float *)(v11 - 0x14) + v77; /*0x750d97*/
              }
              while ( v13 ); /*0x750d9a*/
            }
          }
          else if ( 0.0 != *(this + 0xA) || 0.0 == *(this + 0xD) ) /*0x750dbf*/
          {
            if ( 0.0 == *(this + 0xA) || 0.0 != *(this + 0xD) ) /*0x750f5d*/
            {
              if ( 0.0 != *(this + 0xA) && 0.0 != *(this + 0xD) ) /*0x751066*/
              {
                v21 = *(_DWORD *)(a3 + 0x5C); /*0x751075*/
                v22 = *(float **)(a3 + 0x1C); /*0x751078*/
                if ( v10 ) /*0x751085*/
                {
                  v51 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470; /*0x751081*/
                  v78 = v51; /*0x751092*/
                  x = pos.x; /*0x75109a*/
                  y = pos.y; /*0x7510a2*/
                  z = pos.z; /*0x7510aa*/
                  v23 = v64; /*0x7510ae*/
                  v66 = v10; /*0x7510b2*/
                  v73 = *(float *)&v76 * v23; /*0x7510bc*/
                  v74 = *((float *)&v76 + 1) * v23; /*0x7510c6*/
                  v75 = v23 * v77; /*0x7510ce*/
                  v85 = v73; /*0x7510d6*/
                  v87 = v74; /*0x7510e1*/
                  v89 = v75; /*0x7510ec*/
                  v79 = a2; /*0x7510f6*/
                  do /*0x75121d*/
                  {
                    pos.x = sub_53D480() * v78; /*0x751109*/
                    pos.y = sub_53D480() * v78; /*0x751116*/
                    pos.z = sub_53D480() * v78; /*0x75112a*/
                    v91 = x - *v22; /*0x751134*/
                    v92 = y - v22[1]; /*0x751142*/
                    v93 = z - v22[2]; /*0x751150*/
                    v52 = Vector3_NormalizeInPlace(&v91) * -*(this + 0xA); /*0x751163*/
                    v53 = exp(v52); /*0x751170*/
                    v21 += 0x1C; /*0x751178*/
                    v22 += 3; /*0x75117f*/
                    v20 = v66-- == 1; /*0x751182*/
                    v73 = v85 * v53; /*0x751194*/
                    v74 = v87 * v53; /*0x7511a1*/
                    v75 = v53 * v89; /*0x7511ac*/
                    *(float *)&v76 = v73 + pos.x; /*0x7511b8*/
                    *((float *)&v76 + 1) = v74 + pos.y; /*0x7511c4*/
                    v77 = v75 + pos.z; /*0x7511d0*/
                    v54 = v79 - *(float *)(v21 - 8); /*0x7511db*/
                    *(float *)&v83 = *(float *)&v76 * v54; /*0x7511e9*/
                    *((float *)&v83 + 1) = *((float *)&v76 + 1) * v54; /*0x7511f3*/
                    v84 = v54 * v77; /*0x7511fb*/
                    *(float *)(v21 - 0x1C) = *(float *)&v83 + *(float *)(v21 - 0x1C); /*0x751206*/
                    *(float *)(v21 - 0x18) = *(float *)(v21 - 0x18) + *((float *)&v83 + 1); /*0x751210*/
                    *(float *)(v21 - 0x14) = v84 + *(float *)(v21 - 0x14); /*0x75121a*/
                  }
                  while ( !v20 ); /*0x75121d*/
                }
              }
            }
            else
            {
              v17 = *(_DWORD *)(a3 + 0x5C); /*0x750f68*/
              v18 = *(float **)(a3 + 0x1C); /*0x750f6b*/
              if ( v10 ) /*0x750f6e*/
              {
                x = pos.x; /*0x750f7b*/
                y = pos.y; /*0x750f83*/
                z = pos.z; /*0x750f8b*/
                v19 = v64; /*0x750f8f*/
                v65 = v10; /*0x750f93*/
                v83 = v19; /*0x750f97*/
                v79 = a2; /*0x750f9e*/
                do /*0x751041*/
                {
                  pos.x = x - *v18; /*0x750fac*/
                  pos.y = y - v18[1]; /*0x750fb7*/
                  pos.z = z - v18[2]; /*0x750fc2*/
                  v48 = Vector3_NormalizeInPlace(&pos.x) * -*(this + 0xA); /*0x750fd2*/
                  v49 = exp(v48); /*0x750fdf*/
                  v17 += 0x1C; /*0x750fe7*/
                  v18 += 3; /*0x750fee*/
                  v20 = v65-- == 1; /*0x750ff1*/
                  v50 = v49 * v83 * (v79 - *(float *)(v17 - 8)); /*0x750fff*/
                  v73 = pos.x * v50; /*0x75100d*/
                  v74 = pos.y * v50; /*0x751017*/
                  v75 = v50 * pos.z; /*0x75101f*/
                  *(float *)(v17 - 0x1C) = v73 + *(float *)(v17 - 0x1C); /*0x75102a*/
                  *(float *)(v17 - 0x18) = v74 + *(float *)(v17 - 0x18); /*0x751034*/
                  *(float *)(v17 - 0x14) = *(float *)(v17 - 0x14) + v75; /*0x75103e*/
                }
                while ( !v20 ); /*0x751041*/
              }
            }
          }
          else
          {
            v14 = *(_DWORD *)(a3 + 0x5C); /*0x750dcd*/
            v15 = *(float **)(a3 + 0x1C); /*0x750dd3*/
            v46 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470; /*0x750ddc*/
            if ( v10 ) /*0x750de0*/
            {
              v16 = v10; /*0x750dea*/
              x = pos.x; /*0x750ded*/
              y = pos.y; /*0x750df5*/
              z = pos.z; /*0x750dfd*/
              v78 = v46; /*0x750e05*/
              v83 = v64; /*0x750e0d*/
              v79 = a2; /*0x750e14*/
              do /*0x750f38*/
              {
                pos.x = x - *v15; /*0x750e22*/
                pos.y = y - v15[1]; /*0x750e2d*/
                pos.z = z - v15[2]; /*0x750e38*/
                Vector3_NormalizeInPlace((float *)&v76); /*0x750e3c*/
                *(float *)&v87 = sub_53D480() * v78; /*0x750e4c*/
                *((float *)&v87 + 1) = sub_53D480() * v78; /*0x750e5c*/
                v14 += 0x1C; /*0x750e6c*/
                v15 += 3; /*0x750e6f*/
                --v16; /*0x750e72*/
                v88 = sub_53D480() * v78; /*0x750e75*/
                *(float *)&v85 = pos.x * v83; /*0x750e88*/
                *((float *)&v85 + 1) = pos.y * v83; /*0x750e95*/
                v86 = v83 * pos.z; /*0x750ea0*/
                *(float *)&v89 = *(float *)&v85 + *(float *)&v87; /*0x750eb5*/
                *((float *)&v89 + 1) = *((float *)&v85 + 1) + *((float *)&v87 + 1); /*0x750eca*/
                v90 = v86 + v88; /*0x750edf*/
                v47 = v79 - *(float *)(v14 - 8); /*0x750eed*/
                v73 = *(float *)&v89 * v47; /*0x750efe*/
                v74 = *((float *)&v89 + 1) * v47; /*0x750f0b*/
                v75 = v47 * v90; /*0x750f16*/
                *(float *)(v14 - 0x1C) = *(float *)(v14 - 0x1C) + v73; /*0x750f21*/
                *(float *)(v14 - 0x18) = v74 + *(float *)(v14 - 0x18); /*0x750f2b*/
                *(float *)(v14 - 0x14) = v75 + *(float *)(v14 - 0x14); /*0x750f35*/
              }
              while ( v16 ); /*0x750f38*/
            }
          }
        }
      }
      else
      {
        v24 = 0.0; /*0x75122c*/
        if ( 0.0 == *(this + 0xA) && 0.0 == *(this + 0xD) )
        {
          v25 = *(_DWORD *)(a3 + 0x5C); /*0x75124b*/
          if ( v10 ) /*0x75124e*/
          {
            v26 = v10; /*0x751253*/
            v27 = *(float *)&v76; /*0x75125a*/
            v28 = *((float *)&v76 + 1); /*0x75125e*/
            v29 = v77; /*0x751262*/
            do /*0x7512af*/
            {
              v30 = *(float *)(v25 + 0x14); /*0x751266*/
              v25 += 0x1C; /*0x751269*/
              --v26; /*0x75126c*/
              v55 = (a2 - v30) * v64; /*0x751273*/
              v73 = v55 * v27; /*0x75127f*/
              v74 = v55 * v28; /*0x751287*/
              v75 = v55 * v29; /*0x75128d*/
              *(float *)(v25 - 0x1C) = *(float *)(v25 - 0x1C) + v73; /*0x751298*/
              *(float *)(v25 - 0x18) = v74 + *(float *)(v25 - 0x18); /*0x7512a2*/
              *(float *)(v25 - 0x14) = v75 + *(float *)(v25 - 0x14); /*0x7512ac*/
            }
            while ( v26 ); /*0x7512af*/
          }
        }
        else if ( 0.0 != *(this + 0xA) || 0.0 == *(this + 0xD) )
        {
          if ( 0.0 == *(this + 0xA) || 0.0 != *(this + 0xD) )
          {
            if ( 0.0 != *(this + 0xA) && 0.0 != *(this + 0xD) ) /*0x7515a3*/
            {
              v41 = *(_DWORD *)(a3 + 0x5C); /*0x7515b2*/
              v42 = *(float **)(a3 + 0x1C); /*0x7515b5*/
              if ( v10 ) /*0x7515c2*/
              {
                v59 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470; /*0x7515be*/
                v78 = v59; /*0x7515cf*/
                x = pos.x; /*0x7515d7*/
                y = pos.y; /*0x7515df*/
                z = pos.z; /*0x7515e7*/
                v87 = *(float *)&v76; /*0x7515ef*/
                v43 = v64; /*0x7515f6*/
                v71 = v10; /*0x7515fa*/
                v73 = *(float *)&v76 * v43; /*0x751604*/
                v89 = *((float *)&v76 + 1); /*0x75160c*/
                v74 = *((float *)&v76 + 1) * v43; /*0x751615*/
                v85 = v77; /*0x75161d*/
                v75 = v43 * v77; /*0x751626*/
                v83 = v73; /*0x75162e*/
                v76 = v74; /*0x751636*/
                *(double *)&pos.x = v75; /*0x75163e*/
                v79 = a2; /*0x751645*/
                do /*0x7517eb*/
                {
                  v100 = sub_53D480() * v78; /*0x751659*/
                  v101 = sub_53D480() * v78; /*0x751669*/
                  v102 = sub_53D480() * v78; /*0x751679*/
                  v73 = x - *v42; /*0x751686*/
                  v74 = y - v42[1]; /*0x751691*/
                  v75 = z - v42[2]; /*0x75169c*/
                  v60 = v74 * v89 + v73 * v87 + v75 * v85; /*0x7516c5*/
                  v44 = v60; /*0x7516d3*/
                  if ( v60 >= 0.0 ) /*0x7516d8*/
                    v61 = v44 * -*(this + 0xA); /*0x7516fb*/
                  else
                    v61 = v44 * *(this + 0xA); /*0x7516dd*/
                  v62 = exp(v61); /*0x7516ea*/
                  v41 += 0x1C; /*0x751714*/
                  v42 += 3; /*0x75171b*/
                  v20 = v71-- == 1; /*0x75171e*/
                  v97 = v83 * v62; /*0x751729*/
                  v98 = v76 * v62; /*0x751736*/
                  v99 = v62 * *(double *)&pos.x; /*0x751741*/
                  v94 = v97 + v100; /*0x751756*/
                  v95 = v98 + v101; /*0x75176b*/
                  v96 = v99 + v102; /*0x751780*/
                  v63 = v79 - *(float *)(v41 - 8); /*0x75178e*/
                  v91 = v94 * v63; /*0x75179f*/
                  v92 = v95 * v63; /*0x7517af*/
                  v93 = v63 * v96; /*0x7517bd*/
                  *(float *)(v41 - 0x1C) = v91 + *(float *)(v41 - 0x1C); /*0x7517ce*/
                  *(float *)(v41 - 0x18) = v92 + *(float *)(v41 - 0x18); /*0x7517db*/
                  *(float *)(v41 - 0x14) = *(float *)(v41 - 0x14) + v93; /*0x7517e8*/
                }
                while ( !v20 ); /*0x7517eb*/
              }
            }
          }
          else
          {
            v33 = *(_DWORD *)(a3 + 0x5C); /*0x751421*/
            v34 = *(float **)(a3 + 0x1C); /*0x751424*/
            if ( v10 )
            {
              x = pos.x; /*0x751434*/
              v58 = v10; /*0x751438*/
              y = pos.y; /*0x751440*/
              z = pos.z; /*0x751448*/
              v79 = a2; /*0x75144f*/
              v83 = v64; /*0x751457*/
              v35 = *(float *)&v76; /*0x75145b*/
              v87 = *(float *)&v76; /*0x75145f*/
              v36 = *((float *)&v76 + 1); /*0x751466*/
              v89 = *((float *)&v76 + 1); /*0x75146a*/
              v37 = v77; /*0x751471*/
              v85 = v77; /*0x751475*/
              while ( 1 )
              {
                v73 = x - *v34; /*0x751488*/
                v74 = y - v34[1]; /*0x751493*/
                v75 = z - v34[2]; /*0x75149e*/
                v67 = v35 * v73 + v36 * v74 + v37 * v75; /*0x7514b8*/
                v38 = v67 < v24; /*0x7514c0*/
                v39 = v67; /*0x7514c4*/
                v68 = v38 ? v39 * *(this + 0xA) : v39 * -*(this + 0xA);
                v69 = exp(v68); /*0x7514db*/
                v33 += 0x1C; /*0x751505*/
                v34 += 3; /*0x75150b*/
                v20 = v58-- == 1; /*0x75150e*/
                v70 = (v79 - *(float *)(v33 - 8)) * (v69 * v83); /*0x751521*/
                v35 = v87; /*0x751534*/
                pos.x = v70 * v87; /*0x751536*/
                v36 = v89; /*0x751545*/
                pos.y = v70 * v89; /*0x751547*/
                v40 = v85; /*0x751554*/
                pos.z = v70 * v85; /*0x751556*/
                *(float *)(v33 - 0x1C) = *(float *)(v33 - 0x1C) + pos.x; /*0x751561*/
                *(float *)(v33 - 0x18) = pos.y + *(float *)(v33 - 0x18); /*0x75156b*/
                *(float *)(v33 - 0x14) = pos.z + *(float *)(v33 - 0x14); /*0x751575*/
                if ( v20 ) /*0x751578*/
                  break; /*0x751578*/
                v37 = v40; /*0x751480*/
                v24 = 0.0; /*0x751480*/
              }
            }
          }
        }
        else
        {
          v31 = *(_DWORD *)(a3 + 0x5C); /*0x7512e8*/
          if ( v10 ) /*0x7512f8*/
          {
            v32 = v10; /*0x7512fe*/
            v56 = *(this + 0xE) * *(this + 0xD) * dbl_A3F470; /*0x7512f4*/
            v78 = v56; /*0x751301*/
            v73 = *(float *)&v76 * v64; /*0x75130f*/
            v74 = *((float *)&v76 + 1) * v64; /*0x751319*/
            v75 = v64 * v77; /*0x751321*/
            v85 = v73; /*0x751329*/
            v87 = v74; /*0x751334*/
            v89 = v75; /*0x75133f*/
            v79 = a2; /*0x751349*/
            do /*0x7513f3*/
            {
              v73 = sub_53D480() * v78; /*0x751359*/
              v74 = sub_53D480() * v78; /*0x751366*/
              v31 += 0x1C; /*0x751373*/
              --v32; /*0x751376*/
              v75 = sub_53D480() * v78; /*0x751379*/
              pos.x = v73 + v85; /*0x751388*/
              pos.y = v74 + v87; /*0x751397*/
              pos.z = v75 + v89; /*0x7513a6*/
              v57 = v79 - *(float *)(v31 - 8); /*0x7513b1*/
              *(float *)&v76 = pos.x * v57; /*0x7513bf*/
              *((float *)&v76 + 1) = pos.y * v57; /*0x7513c9*/
              v77 = v57 * pos.z; /*0x7513d1*/
              *(float *)(v31 - 0x1C) = *(float *)&v76 + *(float *)(v31 - 0x1C); /*0x7513dc*/
              *(float *)(v31 - 0x18) = *((float *)&v76 + 1) + *(float *)(v31 - 0x18); /*0x7513e6*/
              *(float *)(v31 - 0x14) = v77 + *(float *)(v31 - 0x14); /*0x7513f0*/
            }
            while ( v32 ); /*0x7513f3*/
          }
        }
      }
    }
  }
}
