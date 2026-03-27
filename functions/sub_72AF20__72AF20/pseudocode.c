void __thiscall sub_72AF20(
        _DWORD *this,
        int a2,
        int a3,
        unsigned int a4,
        float *a5,
        float *a6,
        float *a7,
        float *a8,
        int a9)
{
  NiTransform *v9; // eax
  int v10; // ebx
  int v11; // edi
  unsigned int v12; // esi
  float *v13; // edx
  unsigned int v14; // edi
  int v15; // esi
  float *v16; // eax
  float *v17; // esi
  float *v18; // ecx
  _DWORD *v19; // ecx
  NiTransform *v20; // eax
  int v21; // esi
  unsigned int v22; // edx
  unsigned __int16 v23; // ax
  int v24; // ecx
  int v25; // eax
  double v26; // st2
  double v27; // st1
  int v28; // edi
  float *v29; // eax
  float *v30; // ecx
  unsigned int v31; // edx
  _DWORD *v32; // ecx
  NiTransform *v33; // eax
  int v34; // edi
  unsigned int v35; // esi
  unsigned __int16 v36; // ax
  int v37; // ecx
  int v38; // eax
  float *v39; // edi
  float *v40; // edx
  double v41; // st6
  float *v42; // edi
  unsigned int v43; // ecx
  float *k; // eax
  int *v45; // ebp
  unsigned int v46; // ebx
  NiTransform *v47; // eax
  int v48; // esi
  unsigned int m; // edx
  unsigned __int16 v50; // ax
  float *v51; // eax
  double v52; // st6
  double v53; // st7
  NiTransform *v54; // [esp+0h] [ebp-1C8h]
  NiTransform *v55; // [esp+0h] [ebp-1C8h]
  unsigned int v56; // [esp+14h] [ebp-1B4h]
  float *v57; // [esp+14h] [ebp-1B4h]
  float *v58; // [esp+14h] [ebp-1B4h]
  int v59; // [esp+18h] [ebp-1B0h]
  int v60; // [esp+18h] [ebp-1B0h]
  unsigned int v61; // [esp+18h] [ebp-1B0h]
  _DWORD *i; // [esp+1Ch] [ebp-1ACh]
  _DWORD *j; // [esp+1Ch] [ebp-1ACh]
  int v64; // [esp+20h] [ebp-1A8h]
  unsigned int v65; // [esp+20h] [ebp-1A8h]
  unsigned int v66; // [esp+20h] [ebp-1A8h]
  int v67; // [esp+24h] [ebp-1A4h]
  float v68; // [esp+24h] [ebp-1A4h]
  float v69; // [esp+28h] [ebp-1A0h]
  int v70; // [esp+28h] [ebp-1A0h]
  float v71; // [esp+28h] [ebp-1A0h]
  unsigned int v72; // [esp+2Ch] [ebp-19Ch]
  float v73; // [esp+30h] [ebp-198h]
  float v74; // [esp+30h] [ebp-198h]
  float v75; // [esp+30h] [ebp-198h]
  float v76; // [esp+34h] [ebp-194h]
  float v77; // [esp+34h] [ebp-194h]
  float v78; // [esp+34h] [ebp-194h]
  float v79; // [esp+38h] [ebp-190h]
  float v80; // [esp+38h] [ebp-190h]
  float v81; // [esp+38h] [ebp-190h]
  int v82; // [esp+3Ch] [ebp-18Ch]
  float *v83; // [esp+3Ch] [ebp-18Ch]
  float v84; // [esp+40h] [ebp-188h]
  float v85; // [esp+40h] [ebp-188h]
  float v86; // [esp+44h] [ebp-184h]
  float v87; // [esp+44h] [ebp-184h]
  float v88; // [esp+48h] [ebp-180h]
  float v89; // [esp+48h] [ebp-180h]
  float v91; // [esp+50h] [ebp-178h]
  float v92; // [esp+50h] [ebp-178h]
  float v93; // [esp+54h] [ebp-174h]
  float v94; // [esp+54h] [ebp-174h]
  float v95; // [esp+58h] [ebp-170h]
  float v96; // [esp+58h] [ebp-170h]
  float v97; // [esp+5Ch] [ebp-16Ch]
  float v98; // [esp+5Ch] [ebp-16Ch]
  float v99; // [esp+60h] [ebp-168h]
  float v100; // [esp+60h] [ebp-168h]
  float v101; // [esp+64h] [ebp-164h]
  float v102; // [esp+64h] [ebp-164h]
  NiTransform v103; // [esp+68h] [ebp-160h] BYREF
  int v104; // [esp+9Ch] [ebp-12Ch] BYREF
  float v105; // [esp+A0h] [ebp-128h]
  float v106; // [esp+A4h] [ebp-124h]
  float v107; // [esp+A8h] [ebp-120h]
  float v108; // [esp+ACh] [ebp-11Ch]
  float v109; // [esp+B0h] [ebp-118h]
  float v110; // [esp+B4h] [ebp-114h]
  float v111; // [esp+B8h] [ebp-110h]
  float v112; // [esp+BCh] [ebp-10Ch]
  float *v113; // [esp+C0h] [ebp-108h]
  float v114; // [esp+C4h] [ebp-104h]
  float v115; // [esp+C8h] [ebp-100h]
  float v116; // [esp+CCh] [ebp-FCh]
  int v117; // [esp+D0h] [ebp-F8h]
  float v118; // [esp+D4h] [ebp-F4h]
  float v119; // [esp+D8h] [ebp-F0h]
  float v120; // [esp+DCh] [ebp-ECh]
  float v121; // [esp+E0h] [ebp-E8h]
  float v122; // [esp+E4h] [ebp-E4h]
  float v123; // [esp+E8h] [ebp-E0h]
  float v124; // [esp+ECh] [ebp-DCh]
  float v125; // [esp+F0h] [ebp-D8h]
  float v126; // [esp+F4h] [ebp-D4h]
  NiTransform v127; // [esp+F8h] [ebp-D0h] BYREF
  NiTransform v128; // [esp+12Ch] [ebp-9Ch] BYREF
  NiTransform v129; // [esp+160h] [ebp-68h] BYREF
  NiTransform v130; // [esp+194h] [ebp-34h] BYREF

  sub_718A80((float *)(*(this + 4) + 0x64), &v128);
  v9 = sub_53D7A0((NiTransform *)(*(this + 2) + 0xC), &v103, &v128);
  v10 = *(this + 2);
  qmemcpy(&v127, v9, sizeof(v127));
  v11 = *(_DWORD *)(v10 + 0x44);
  v12 = *(_DWORD *)(v10 + 0x40);
  v64 = v11;
  v72 = v12;
  if ( a3 && a6 )
  {
    v13 = a7;
    if ( a7 && a8 )
    {
      v14 = a4;
      v15 = 0xC * a4;
      v82 = 0xC * a4 + a3;
      v67 = 0xC * a4 + v82;
      v16 = a5;
      if ( a9 == 0xC )
      {
        _memset(a5, 0, 0xC * a4);
        _memset(a6, 0, v15);
        _memset(a7, 0, v15);
        _memset(a8, 0, v15);
      }
      else
      {
        v17 = a8;
        v18 = a6;
        if ( a4 )
        {
          v56 = a4;
          do
          {
            *v16 = Vector3_InitValue_;
            v16[1] = *(&Vector3_InitValue_ + 1);
            v16[2] = dword_B3F9B0;
            *v18 = Vector3_InitValue_;
            v18[1] = *(&Vector3_InitValue_ + 1);
            v16 = (float *)((char *)v16 + a9);
            v18[2] = dword_B3F9B0;
            v18 = (float *)((char *)v18 + a9);
            *v13 = Vector3_InitValue_;
            v13[1] = *(&Vector3_InitValue_ + 1);
            v13[2] = dword_B3F9B0;
            v13 = (float *)((char *)v13 + a9);
            *v17 = Vector3_InitValue_;
            v17[1] = *(&Vector3_InitValue_ + 1);
            v17[2] = dword_B3F9B0;
            v17 = (float *)((char *)v17 + a9);
            --v56;
          }
          while ( v56 );
          v14 = a4;
        }
      }
      v59 = 0;
      if ( v72 )
      {
        v19 = (_DWORD *)(v64 + 0x44);
        for ( i = (_DWORD *)(v64 + 0x44); ; v19 = i )
        {
          v65 = *((unsigned __int16 *)v19 + 2);
          v54 = (NiTransform *)(v19 + 0xFFFFFFEF);
          v20 = sub_53D7A0(&v127, &v130, (NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v59) + 0x64));
          qmemcpy(&v103, sub_53D7A0(v20, &v129, v54), sizeof(v103));
          v21 = *i;
          v117 = *i;
          sub_710190((float *)&v103, (float *)&v104, v103.scale);
          v22 = 0;
          if ( v65 )
          {
            while ( 1 )
            {
              v23 = *(_WORD *)(v21 + 8 * v22);
              v69 = *(float *)(v21 + 8 * v22 + 4);
              v24 = a9 * v23;
              v25 = 0xC * v23;
              v57 = (float *)(v25 + a2 + 8);
              v118 = v105 * *(float *)(v25 + a2 + 4) + *(float *)&v104 * *(float *)(v25 + a2) + v106 * *v57 + v103.pos.x;
              v119 = v108 * *(float *)(v25 + a2 + 4) + v107 * *(float *)(v25 + a2) + v109 * *v57 + v103.pos.y;
              v58 = (float *)(v82 + v25 + 8);
              v120 = v111 * *(float *)(v25 + a2 + 4)
                   + v110 * *(float *)(v25 + a2)
                   + v112 * *(float *)(v25 + a2 + 8)
                   + v103.pos.z;
              v124 = v103.rot.data[0][0] * *(float *)(v25 + a3)
                   + v103.rot.data[0][1] * *(float *)(v25 + a3 + 4)
                   + v103.rot.data[0][2] * *(float *)(v25 + a3 + 8);
              v125 = v103.rot.data[1][0] * *(float *)(v25 + a3)
                   + v103.rot.data[1][1] * *(float *)(v25 + a3 + 4)
                   + v103.rot.data[1][2] * *(float *)(v25 + a3 + 8);
              v126 = v103.rot.data[2][0] * *(float *)(v25 + a3)
                   + v103.rot.data[2][1] * *(float *)(v25 + a3 + 4)
                   + v103.rot.data[2][2] * *(float *)(v25 + a3 + 8);
              v97 = v103.rot.data[0][1] * *(float *)(v82 + v25 + 4)
                  + v103.rot.data[0][0] * *(float *)(v82 + v25)
                  + v103.rot.data[0][2] * *v58;
              v99 = v103.rot.data[1][1] * *(float *)(v82 + v25 + 4)
                  + v103.rot.data[1][0] * *(float *)(v82 + v25)
                  + v103.rot.data[1][2] * *v58;
              v26 = v103.rot.data[2][1] * *(float *)(v82 + v25 + 4) + v103.rot.data[2][0] * *(float *)(v82 + v25);
              v27 = v103.rot.data[2][2] * *v58;
              v113 = (float *)(v67 + v25 + 8);
              v101 = v26 + v27;
              v91 = v103.rot.data[0][2] * *v113
                  + v103.rot.data[0][1] * *(float *)(v67 + v25 + 4)
                  + v103.rot.data[0][0] * *(float *)(v67 + v25);
              v93 = v103.rot.data[1][1] * *(float *)(v67 + v25 + 4)
                  + v103.rot.data[1][0] * *(float *)(v67 + v25)
                  + v103.rot.data[1][2] * *v113;
              v95 = v103.rot.data[2][0] * *(float *)(v67 + v25)
                  + v103.rot.data[2][1] * *(float *)(v67 + v25 + 4)
                  + v103.rot.data[2][2] * *v113;
              v114 = v118 * v69;
              v115 = v119 * v69;
              v116 = v120 * v69;
              *(float *)((char *)a5 + v24) = v114 + *(float *)((char *)a5 + v24);
              ++v22;
              *(float *)((char *)a5 + v24 + 4) = v115 + *(float *)((char *)a5 + v24 + 4);
              *(float *)((char *)a5 + v24 + 8) = *(float *)((char *)a5 + v24 + 8) + v116;
              v121 = v124 * v69;
              v122 = v125 * v69;
              v123 = v126 * v69;
              *(float *)((char *)a6 + v24) = v121 + *(float *)((char *)a6 + v24);
              *(float *)((char *)a6 + v24 + 4) = v122 + *(float *)((char *)a6 + v24 + 4);
              *(float *)((char *)a6 + v24 + 8) = v123 + *(float *)((char *)a6 + v24 + 8);
              v84 = v97 * v69;
              v86 = v99 * v69;
              v88 = v101 * v69;
              *(float *)((char *)a7 + v24) = *(float *)((char *)a7 + v24) + v84;
              *(float *)((char *)a7 + v24 + 4) = v86 + *(float *)((char *)a7 + v24 + 4);
              *(float *)((char *)a7 + v24 + 8) = v88 + *(float *)((char *)a7 + v24 + 8);
              v73 = v91 * v69;
              v76 = v93 * v69;
              v79 = v69 * v95;
              *(float *)((char *)a8 + v24) = *(float *)((char *)a8 + v24) + v73;
              *(float *)((char *)a8 + v24 + 4) = v76 + *(float *)((char *)a8 + v24 + 4);
              *(float *)((char *)a8 + v24 + 8) = v79 + *(float *)((char *)a8 + v24 + 8);
              if ( v22 >= v65 )
                break;
              v21 = v117;
            }
          }
          i += 0x13;
          if ( ++v59 >= v72 )
            break;
        }
        v14 = a4;
      }
      sub_725890(a6, v14, a9);
      sub_725890(a7, v14, a9);
      sub_725890(a8, v14, a9);
    }
    else
    {
      v28 = a9;
      v29 = a5;
      if ( a9 == 0xC )
      {
        _memset(a5, 0, 0xC * a4);
        _memset(a6, 0, 0xC * a4);
      }
      else
      {
        v30 = a6;
        if ( a4 )
        {
          v31 = a4;
          do
          {
            *v29 = Vector3_InitValue_;
            v29[1] = *(&Vector3_InitValue_ + 1);
            v29[2] = dword_B3F9B0;
            *v30 = Vector3_InitValue_;
            v30[1] = *(&Vector3_InitValue_ + 1);
            v30[2] = dword_B3F9B0;
            v29 = (float *)((char *)v29 + a9);
            v30 = (float *)((char *)v30 + a9);
            --v31;
          }
          while ( v31 );
        }
      }
      v60 = 0;
      if ( v12 )
      {
        v32 = (_DWORD *)(v64 + 0x44);
        for ( j = (_DWORD *)(v64 + 0x44); ; v32 = j )
        {
          v66 = *((unsigned __int16 *)v32 + 2);
          v55 = (NiTransform *)(v32 + 0xFFFFFFEF);
          v33 = sub_53D7A0(&v127, &v129, (NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v60) + 0x64));
          qmemcpy(&v103, sub_53D7A0(v33, &v130, v55), sizeof(v103));
          v34 = *j;
          v70 = *j;
          sub_710190((float *)&v103, (float *)&v104, v103.scale);
          v35 = 0;
          if ( v66 )
          {
            while ( 1 )
            {
              v36 = *(_WORD *)(v34 + 8 * v35);
              v68 = *(float *)(v34 + 8 * v35 + 4);
              v37 = a9 * v36;
              v38 = 0xC * v36;
              v39 = (float *)(v38 + a2 + 8);
              v74 = v105 * *(float *)(v38 + a2 + 4) + *(float *)&v104 * *(float *)(v38 + a2) + v106 * *v39 + v103.pos.x;
              v77 = v108 * *(float *)(v38 + a2 + 4) + v107 * *(float *)(v38 + a2) + v109 * *v39 + v103.pos.y;
              v40 = (float *)(v38 + a3 + 4);
              v41 = v112 * *v39;
              v42 = (float *)(v38 + a3 + 8);
              v80 = v111 * *(float *)(v38 + a2 + 4) + v110 * *(float *)(v38 + a2) + v41 + v103.pos.z;
              v85 = v103.rot.data[0][0] * *(float *)(v38 + a3) + v103.rot.data[0][1] * *v40 + v103.rot.data[0][2] * *v42;
              v87 = v103.rot.data[1][0] * *(float *)(v38 + a3) + v103.rot.data[1][1] * *v40 + v103.rot.data[1][2] * *v42;
              v89 = v103.rot.data[2][0] * *(float *)(v38 + a3) + v103.rot.data[2][1] * *v40 + v103.rot.data[2][2] * *v42;
              v92 = v74 * v68;
              v94 = v77 * v68;
              v96 = v80 * v68;
              ++v35;
              *(float *)((char *)a5 + v37) = v92 + *(float *)((char *)a5 + v37);
              *(float *)((char *)a5 + v37 + 4) = v94 + *(float *)((char *)a5 + v37 + 4);
              *(float *)((char *)a5 + v37 + 8) = v96 + *(float *)((char *)a5 + v37 + 8);
              v98 = v85 * v68;
              v100 = v87 * v68;
              v102 = v68 * v89;
              *(float *)((char *)a6 + v37) = v98 + *(float *)((char *)a6 + v37);
              *(float *)((char *)a6 + v37 + 4) = *(float *)((char *)a6 + v37 + 4) + v100;
              *(float *)((char *)a6 + v37 + 8) = v102 + *(float *)((char *)a6 + v37 + 8);
              if ( v35 >= v66 )
                break;
              v34 = v70;
            }
          }
          j += 0x13;
          if ( ++v60 >= v72 )
            break;
        }
        v28 = a9;
      }
      sub_725890(a6, a4, v28);
    }
  }
  else
  {
    if ( a9 == 0xC )
    {
      _memset(a5, 0, 0xC * a4);
    }
    else
    {
      v43 = a4;
      for ( k = a5; v43; --v43 )
      {
        *k = Vector3_InitValue_;
        k[1] = *(&Vector3_InitValue_ + 1);
        k[2] = dword_B3F9B0;
        k = (float *)((char *)k + a9);
      }
    }
    v61 = 0;
    if ( v12 )
    {
      v45 = (int *)(v11 + 0x44);
      do
      {
        v46 = *((unsigned __int16 *)v45 + 2);
        v47 = sub_53D7A0(&v127, &v129, (NiTransform *)(*(_DWORD *)(*(this + 5) + 4 * v61) + 0x64));
        qmemcpy(&v103, sub_53D7A0(v47, &v130, (NiTransform *)(v45 + 0xFFFFFFEF)), sizeof(v103));
        sub_710190((float *)&v103, (float *)&v104, v103.scale);
        v48 = *v45;
        for ( m = 0; m < v46; ++m )
        {
          v50 = *(_WORD *)(v48 + 8 * m);
          v71 = *(float *)(v48 + 8 * m + 4);
          v83 = (float *)((char *)a5 + a9 * v50);
          v51 = (float *)(a2 + 0xC * v50);
          v75 = v105 * v51[1] + *(float *)&v104 * *v51 + v106 * v51[2] + v103.pos.x;
          v78 = v108 * v51[1] + v107 * *v51 + v109 * v51[2] + v103.pos.y;
          v81 = v111 * v51[1] + v110 * *v51 + v112 * v51[2] + v103.pos.z;
          v52 = v78 * v71 + v83[1];
          *v83 = v75 * v71 + *v83;
          v53 = v81 * v71 + v83[2];
          v83[1] = v52;
          v83[2] = v53;
        }
        v45 += 0x13;
        ++v61;
      }
      while ( v61 < v72 );
    }
  }
}
