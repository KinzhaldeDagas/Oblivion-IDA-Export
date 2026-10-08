char __thiscall sub_9069E0(__m128 *this, _DWORD *a2, int a3, int a4)
{
  int v5; // eax
  __m128 v6; // xmm0
  _DWORD *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // ebx
  int v11; // ebx
  int v12; // ecx
  char *v13; // edx
  int v14; // edx
  bool v15; // zf
  __int32 v16; // edi
  int v17; // eax
  __int32 *v18; // esi
  char *i; // ebx
  __int32 v20; // edx
  unsigned int v21; // edx
  signed int v22; // eax
  int v23; // ecx
  _DWORD *v24; // ecx
  __int32 v25; // eax
  char *v26; // edi
  char *v27; // ebx
  int v28; // edi
  __int32 v29; // ebx
  int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // edi
  _DWORD *v35; // edx
  unsigned int v36; // edi
  __int32 v37; // ecx
  _DWORD *v38; // edi
  char *v39; // edi
  int v40; // ecx
  int v41; // ebx
  int v42; // eax
  int v43; // ecx
  int v44; // ebx
  int v45; // eax
  _DWORD *v46; // ecx
  int (__stdcall ***v47)(char); // eax
  char *v48; // edi
  int v49; // ebx
  int v50; // eax
  char *v51; // edx
  int v52; // eax
  _DWORD *v53; // eax
  int v54; // esi
  _DWORD *v55; // edx
  unsigned int v56; // ecx
  _DWORD *v57; // eax
  int v58; // eax
  int v59; // ecx
  bool v60; // cc
  int v61; // esi
  int v62; // ecx
  char *v63; // eax
  _DWORD *v64; // ebx
  int v65; // esi
  _DWORD *v66; // eax
  int v67; // edx
  int v68; // eax
  int v69; // ecx
  int v70; // esi
  int v71; // eax
  _DWORD *v72; // ecx
  int (__stdcall ***v73)(char); // eax
  int v74; // eax
  int v75; // eax
  int v76; // esi
  int v77; // eax
  char *v78; // edi
  int v79; // esi
  int v80; // eax
  _DWORD *v81; // ecx
  int (__stdcall ***v82)(char); // eax
  __int32 *v83; // esi
  int v84; // edx
  int v85; // eax
  int v86; // ecx
  int v87; // ecx
  _DWORD *v88; // eax
  _DWORD *v89; // esi
  _DWORD *v90; // eax
  _DWORD *v91; // ecx
  _DWORD *v92; // edi
  int v93; // esi
  _DWORD *v94; // ecx
  _DWORD *v95; // eax
  int v96; // ecx
  __m128 *v98; // [esp+24h] [ebp-4E8h]
  float v99; // [esp+24h] [ebp-4E8h]
  __m128 *v100; // [esp+28h] [ebp-4E4h]
  __int32 v101; // [esp+38h] [ebp-4D4h]
  char *v102; // [esp+38h] [ebp-4D4h]
  char *v103; // [esp+38h] [ebp-4D4h]
  int v104; // [esp+3Ch] [ebp-4D0h]
  int v105; // [esp+3Ch] [ebp-4D0h]
  __int32 v106; // [esp+3Ch] [ebp-4D0h]
  int v107; // [esp+3Ch] [ebp-4D0h]
  int v108; // [esp+40h] [ebp-4CCh] BYREF
  char *v109; // [esp+44h] [ebp-4C8h]
  char *v110; // [esp+48h] [ebp-4C4h]
  __int32 v111; // [esp+4Ch] [ebp-4C0h]
  char *v112; // [esp+50h] [ebp-4BCh]
  _DWORD *v113; // [esp+54h] [ebp-4B8h] BYREF
  int v114; // [esp+58h] [ebp-4B4h]
  signed int v115; // [esp+5Ch] [ebp-4B0h]
  _DWORD *v116; // [esp+60h] [ebp-4ACh]
  int v117; // [esp+64h] [ebp-4A8h]
  __m128 *v118; // [esp+68h] [ebp-4A4h]
  __m128 v119; // [esp+6Ch] [ebp-4A0h] BYREF
  __m128 v120; // [esp+7Ch] [ebp-490h]
  char *v121; // [esp+8Ch] [ebp-480h] BYREF
  int v122; // [esp+90h] [ebp-47Ch]
  int v123; // [esp+94h] [ebp-478h]
  char v124; // [esp+98h] [ebp-474h] BYREF
  __m128 v125[4]; // [esp+29Ch] [ebp-270h] BYREF
  int v126; // [esp+2DCh] [ebp-230h]
  int v127; // [esp+2E0h] [ebp-22Ch] BYREF
  int v128; // [esp+2E4h] [ebp-228h]
  int v129; // [esp+2E8h] [ebp-224h]
  int v130; // [esp+2ECh] [ebp-220h]
  _BYTE v131[524]; // [esp+2FCh] [ebp-210h] BYREF

  v100 = (__m128 *)a2[2]; /*0x906a09*/
  v98 = *(__m128 **)(a3 + 8); /*0x906a0a*/
  v118 = this; /*0x906a12*/
  sub_8B1FF0(v125, v98, v100); /*0x906a16*/
  v99 = *(float *)(a4 + 8) * kHeadBodyNormalMatchRadius + *(float *)(a4 + 8); /*0x906a3b*/
  (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v125, LODWORD(v99), &v119); /*0x906a3f*/
  LOBYTE(v5) = byte_B2FDE0; /*0x906a42*/
  if ( byte_B2FDE0 ) /*0x906a42*/
  {
    v6 = v120; /*0x906a4f*/
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*(this + 2), v119)) /*0x906a76*/
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v120, *(this + 3)))
        & 7) == 7 )
      return v5; /*0x906a76*/
    *(this + 2) = v119; /*0x906a7c*/
    *(this + 3) = v6; /*0x906a80*/
  }
  v7 = *(_DWORD **)a3; /*0x906a84*/
  v121 = &v124; /*0x906a8a*/
  v122 = 0; /*0x906a97*/
  v123 = 0x80000080; /*0x906a9f*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, char **))(*v7 + 0x24))(v7, &v119, &v121); /*0x906aac*/
  v8 = v122; /*0x906aaf*/
  v9 = *(_DWORD *)(unk_BA7D98 + 0x14) + *(_DWORD *)(unk_BA7D98 + 0x28); /*0x906ac3*/
  v10 = *(_DWORD *)(unk_BA7D98 + 8); /*0x906ac6*/
  if ( v10 > v9 ) /*0x906ace*/
    v11 = v10 - v9; /*0x906ad4*/
  else
    v11 = 0; /*0x906ad0*/
  if ( (v122 - *((_DWORD *)this + 4)) << 7 <= v11 ) /*0x906ad8*/
  {
    v14 = v7[3]; /*0x906b1f*/
    v130 = a3; /*0x906b22*/
    v129 = *(_DWORD *)(a3 + 8); /*0x906b2c*/
    v15 = unk_BA81CD == 0; /*0x906b38*/
    v126 = v14; /*0x906b3a*/
    if ( v15 ) /*0x906b41*/
    {
      LOBYTE(v117) = 0; /*0x906e2c*/
      if ( v122 > 1 ) /*0x906e31*/
      {
        sub_8F6580((int)v121, 0, v122 - 1, v117); /*0x906e41*/
        v8 = v122; /*0x906e46*/
      }
      v48 = (char *)this->m128_i32[3]; /*0x906e50*/
      v49 = MEMORY[0xBA9DE4]; /*0x906e56*/
      v50 = 3 * *((_DWORD *)this + 4); /*0x906e5c*/
      v111 = this->m128_i32[2]; /*0x906e5f*/
      v51 = &v48[4 * v50]; /*0x906e63*/
      v103 = v121; /*0x906e6a*/
      v112 = &v121[4 * v8]; /*0x906e71*/
      v52 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v49); /*0x906e7b*/
      v110 = v51; /*0x906e7e*/
      v107 = v52; /*0x906e84*/
      v53 = *(_DWORD **)(v52 + 0x19C); /*0x906e88*/
      v54 = v8; /*0x906e90*/
      v113 = 0; /*0x906e92*/
      v114 = 0; /*0x906e96*/
      v115 = 0x80000000; /*0x906e9a*/
      if ( !v53 ) /*0x906ea2*/
        v53 = (_DWORD *)unk_BA7D9C; /*0x906ea4*/
      v55 = (_DWORD *)v53[8]; /*0x906ea9*/
      v56 = (0xC * v8 + 0x10) & 0xFFFFFFF0; /*0x906eb6*/
      if ( (unsigned int)v55 + v56 > v53[0xB] ) /*0x906ebf*/
      {
        v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v53 + 0xC))(v53, v56); /*0x906ecd*/
      }
      else
      {
        v53[8] = (char *)v55 + v56; /*0x906ec1*/
        v57 = v55; /*0x906ec4*/
      }
      v113 = v57; /*0x906ed8*/
      v115 = v54 | 0x80000000; /*0x906edc*/
      v116 = v57; /*0x906ee0*/
      v58 = v122; /*0x906ee4*/
      v59 = v54 & 0x3FFFFFFF; /*0x906ee8*/
      v60 = (v54 & 0x3FFFFFFF) < v122; /*0x906eee*/
      v61 = v122; /*0x906ef0*/
      if ( v60 ) /*0x906ef2*/
      {
        v62 = 2 * v59; /*0x906ef4*/
        if ( v122 < v62 ) /*0x906ef8*/
          v58 = v62; /*0x906efa*/
        sub_8A6E40((const void **)&v113, v58, 0xC); /*0x906f04*/
      }
      v63 = v110; /*0x906f0c*/
      v64 = v113; /*0x906f12*/
      v114 = v61; /*0x906f16*/
      if ( v48 != v110 ) /*0x906f1a*/
      {
        while ( v103 != v112 ) /*0x906f28*/
        {
          v65 = *(_DWORD *)v103; /*0x906f2e*/
          if ( *(_DWORD *)v103 == *(_DWORD *)v48 ) /*0x906f34*/
          {
            v66 = v64; /*0x906f3a*/
            *v64 = *(_DWORD *)v48; /*0x906f3c*/
            v64[1] = *((_DWORD *)v48 + 1); /*0x906f41*/
            v67 = *((_DWORD *)v48 + 2); /*0x906f44*/
            v64 += 3; /*0x906f47*/
            v48 += 0xC; /*0x906f4a*/
            v66[2] = v67; /*0x906f50*/
            v103 += 4; /*0x906f53*/
          }
          else if ( *(_DWORD *)v103 >= *(_DWORD *)v48 ) /*0x906f5c*/
          {
            v74 = *((_DWORD *)v48 + 2); /*0x907040*/
            if ( v74 ) /*0x907045*/
              (*(void (**)(void))(*(_DWORD *)v74 + 0x18))(); /*0x90704b*/
            v48 += 0xC; /*0x90704e*/
          }
          else
          {
            v68 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v126 + 0x28))(v126, v65, v131); /*0x906f74*/
            v128 = v65; /*0x906f77*/
            v127 = v68; /*0x906f82*/
            if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))( /*0x906fb0*/
                             *(_DWORD *)(a4 + 4),
                             (char *)&v108 + 3,
                             a4,
                             a2,
                             &v127,
                             v126,
                             *(_DWORD *)v103) )
            {
              v69 = *a2; /*0x906fbc*/
              v109 = *(char **)a4; /*0x906fbe*/
              v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 8))(v69); /*0x906fce*/
              v71 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127); /*0x906fd2*/
              if ( *(_BYTE *)(a4 + 0xC) ) /*0x906fd8*/
                v72 = v109 + 0x590; /*0x906fe3*/
              else
                v72 = v109 + 0x190; /*0x906feb*/
              v73 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, __int32))&v109[0x14 * *((unsigned __int8 *)&v72[8 * v70] + v71) + 0x990])( /*0x90701d*/
                                                 a2,
                                                 &v127,
                                                 a4,
                                                 v111);
            }
            else
            {
              v73 = sub_8E0970(); /*0x907024*/
            }
            v64[2] = v73; /*0x907029*/
            *v64 = *(_DWORD *)v103; /*0x907032*/
            v64 += 3; /*0x907034*/
            v103 += 4; /*0x90703a*/
          }
          v63 = v110; /*0x907051*/
          if ( v48 == v110 ) /*0x907057*/
            goto LABEL_82; /*0x907057*/
        }
        if ( v48 != v63 ) /*0x907061*/
        {
          do /*0x90707a*/
          {
            v75 = *((_DWORD *)v48 + 2); /*0x907063*/
            if ( v75 ) /*0x907068*/
              (*(void (**)(void))(*(_DWORD *)v75 + 0x18))(); /*0x90706e*/
            v48 += 0xC; /*0x907075*/
          }
          while ( v48 != v110 ); /*0x90707a*/
        }
      }
LABEL_82:
      while ( v103 != v112 ) /*0x907084*/
      {
        v76 = *(_DWORD *)v103; /*0x907094*/
        v77 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v126 + 0x28))(v126, *(_DWORD *)v103, v131); /*0x9070a8*/
        v128 = v76; /*0x9070ab*/
        v127 = v77; /*0x9070b2*/
        if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))( /*0x9070e0*/
                         *(_DWORD *)(a4 + 4),
                         (char *)&v108 + 3,
                         a4,
                         a2,
                         &v127,
                         v126,
                         *(_DWORD *)v103) )
        {
          v78 = *(char **)a4; /*0x9070e8*/
          v79 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2); /*0x9070fc*/
          v80 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127); /*0x9070fe*/
          v81 = v78 + 0x590; /*0x907109*/
          if ( !*(_BYTE *)(a4 + 0xC) ) /*0x907104*/
            v81 = v78 + 0x190; /*0x907111*/
          v82 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, __int32))&v78[0x14 /*0x90713c*/
                                                                                                 * *((unsigned __int8 *)&v81[8 * v79] + v80)
                                                                                                 + 0x990])(
                                             a2,
                                             &v127,
                                             a4,
                                             v111);
        }
        else
        {
          v82 = sub_8E0970(); /*0x907143*/
        }
        v64[2] = v82; /*0x907148*/
        *v64 = *(_DWORD *)v103; /*0x907151*/
        v64 += 3; /*0x90715a*/
        v103 += 4; /*0x90715f*/
      }
      v83 = (__int32 *)v118; /*0x907169*/
      v84 = v114; /*0x907170*/
      v85 = v118[1].m128_i32[1] & 0x3FFFFFFF; /*0x907176*/
      if ( v85 < v114 ) /*0x90717d*/
      {
        if ( v118[1].m128_i32[1] >= 0 ) /*0x907181*/
        {
          v86 = *(_DWORD *)(v107 + 0x19C); /*0x907187*/
          if ( !v86 ) /*0x90718f*/
            v86 = unk_BA7D9C; /*0x907191*/
          sub_8A75D0(v86, (_DWORD *)v118->m128_i32[3], 0xC * v85, 0x14); /*0x9071a4*/
        }
        v87 = *(_DWORD *)(v107 + 0x19C); /*0x9071ad*/
        if ( !v87 ) /*0x9071b5*/
          v87 = unk_BA7D9C; /*0x9071b7*/
        v88 = sub_8A7560(v87, 0xC * v114, 0x14); /*0x9071ca*/
        v84 = v114; /*0x9071cf*/
        v83[3] = (__int32)v88; /*0x9071d3*/
        v83[5] = v84 | v83[5] & 0x40000000; /*0x9071e0*/
      }
      v83[4] = v84; /*0x9071e5*/
      v89 = (_DWORD *)v83[3]; /*0x9071e8*/
      if ( v84 > 0 ) /*0x9071eb*/
      {
        v90 = v113; /*0x9071ed*/
        v91 = v89; /*0x9071f1*/
        do /*0x90720e*/
        {
          v92 = v91; /*0x9071f7*/
          *v91 = *v90; /*0x9071f9*/
          v91[1] = v90[1]; /*0x9071fe*/
          v93 = v90[2]; /*0x907201*/
          v90 += 3; /*0x907204*/
          v91 += 3; /*0x907207*/
          --v84; /*0x90720a*/
          v92[2] = v93; /*0x90720b*/
        }
        while ( v84 ); /*0x90720e*/
      }
      v94 = *(_DWORD **)(v107 + 0x19C); /*0x907214*/
      v95 = v116; /*0x90721c*/
      if ( !v94 ) /*0x907220*/
        v94 = (_DWORD *)unk_BA7D9C; /*0x907222*/
      v15 = v116 == (_DWORD *)v94[0xA]; /*0x907228*/
      v94[8] = v116; /*0x90722b*/
      if ( v15 ) /*0x90722e*/
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v94 + 0x10))(v94, v95); /*0x907233*/
      if ( v115 >= 0 ) /*0x90723c*/
      {
        v96 = *(_DWORD *)(v107 + 0x19C); /*0x90723e*/
        if ( !v96 ) /*0x907246*/
          v96 = unk_BA7D9C; /*0x907248*/
        sub_8A75D0(v96, v113, 0xC * (v115 & 0x3FFFFFFF), 0x14); /*0x907261*/
      }
      v13 = v121; /*0x907266*/
    }
    else
    {
      v16 = this->m128_i32[3]; /*0x906b4a*/
      v117 = this->m128_i32[2]; /*0x906b4d*/
      v17 = *((_DWORD *)this + 4); /*0x906b51*/
      v18 = &this->m128_i32[3]; /*0x906b54*/
      v13 = v121; /*0x906b5d*/
      v101 = v16 + 0xC * v17; /*0x906b61*/
      v110 = &v121[4 * v122]; /*0x906b68*/
      for ( i = v121; v16 != v101; v16 += 0xC ) /*0x906b72*/
      {
        if ( i == v110 || *(_DWORD *)v16 != *(_DWORD *)i ) /*0x906b82*/
        {
          i = v13; /*0x906b90*/
          v109 = v13; /*0x906b92*/
          if ( v13 == v110 ) /*0x906b96*/
          {
LABEL_21:
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 8) + 0x18))(*(_DWORD *)(v16 + 8)); /*0x906bb9*/
            v20 = *v18; /*0x906bc4*/
            --v18[1]; /*0x906bc7*/
            v21 = (int)((unsigned __int64)(0x2AAAAAABLL * (v16 - v20)) >> 0x20) >> 1; /*0x906bd8*/
            v22 = v21 + (v21 >> 0x1F); /*0x906bdf*/
            if ( v22 < v18[1] ) /*0x906be3*/
            {
              v23 = 0xC * v22; /*0x906be8*/
              v104 = 0xC * v22; /*0x906beb*/
              do /*0x906c18*/
              {
                v24 = (_DWORD *)(*v18 + v23); /*0x906bf2*/
                *v24 = v24[3]; /*0x906bf9*/
                v24[1] = v24[4]; /*0x906bfe*/
                v24[2] = v24[5]; /*0x906c04*/
                ++v22; /*0x906c0e*/
                v23 = v104 + 0xC; /*0x906c0f*/
                v104 += 0xC; /*0x906c14*/
              }
              while ( v22 < v18[1] ); /*0x906c18*/
              i = v109; /*0x906c1a*/
            }
            v8 = v122; /*0x906c22*/
            v13 = v121; /*0x906c26*/
            v16 -= 0xC; /*0x906c2a*/
            v101 -= 0xC; /*0x906c30*/
          }
          else
          {
            while ( *(_DWORD *)v16 != *(_DWORD *)i ) /*0x906ba4*/
            {
              i += 4; /*0x906bae*/
              if ( i == v110 ) /*0x906bb3*/
              {
                v109 = i; /*0x906bb5*/
                goto LABEL_21; /*0x906bb5*/
              }
            }
            v109 = i; /*0x906ce2*/
            i += 4; /*0x906ce6*/
          }
        }
        else
        {
          i += 4; /*0x906b84*/
        }
      }
      v25 = v18[1]; /*0x906c43*/
      if ( v8 != v25 ) /*0x906c48*/
      {
        v26 = (char *)*v18; /*0x906c4e*/
        v105 = *v18 + 0xC * v25; /*0x906c5b*/
        v27 = v13; /*0x906c5f*/
        v102 = v13; /*0x906c61*/
        v110 = &v13[4 * v8]; /*0x906c65*/
        if ( v13 != v110 ) /*0x906c69*/
        {
          do /*0x906e1e*/
          {
            if ( v26 == (char *)v105 || *(_DWORD *)v26 != *(_DWORD *)v27 ) /*0x906c7a*/
            {
              v28 = v27 - v13; /*0x906c82*/
              v29 = v25 + 1; /*0x906c84*/
              v30 = v28 >> 2; /*0x906c87*/
              v111 = v25 - v30; /*0x906c8c*/
              v31 = v18[2] & 0x3FFFFFFF; /*0x906c93*/
              v112 = (char *)v29; /*0x906c9a*/
              if ( v31 < v29 ) /*0x906c9e*/
              {
                v32 = 2 * v31; /*0x906ca0*/
                if ( v29 >= v32 ) /*0x906ca4*/
                  v32 = v29; /*0x906ca6*/
                sub_8A6E40((const void **)v18, v32, 0xC); /*0x906cac*/
              }
              v33 = 0xC * v30; /*0x906cbd*/
              v34 = *v18 + 0xC * v30; /*0x906cc1*/
              if ( v111 - 1 >= 0 ) /*0x906ccb*/
              {
                v35 = (_DWORD *)(v34 + 0xC + 0xC * (v111 - 1)); /*0x906cd0*/
                v36 = 0xFFFFFFF4; /*0x906cd3*/
                v37 = v111; /*0x906cd7*/
                v111 = 0xFFFFFFF4; /*0x906cd8*/
                v106 = v37; /*0x906cdc*/
                while ( 1 ) /*0x906cf2*/
                {
                  v38 = (_DWORD *)((char *)v35 + v36); /*0x906cf2*/
                  *v35 = *v38; /*0x906cf8*/
                  v35[1] = v38[1]; /*0x906cfd*/
                  v35[2] = v38[2]; /*0x906d03*/
                  v35 += 0xFFFFFFFD; /*0x906d0a*/
                  if ( !--v106 ) /*0x906d12*/
                    break; /*0x906d12*/
                  v36 = v111; /*0x906cee*/
                }
                v29 = (__int32)v112; /*0x906d14*/
              }
              v39 = (char *)*v18; /*0x906d1c*/
              v40 = v126; /*0x906d1e*/
              v18[1] = v29; /*0x906d25*/
              v41 = *(_DWORD *)v102; /*0x906d28*/
              v26 = &v39[v33]; /*0x906d32*/
              v42 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v40 + 0x28))(v40, *(_DWORD *)v102, v131); /*0x906d37*/
              v128 = v41; /*0x906d3a*/
              v127 = v42; /*0x906d45*/
              if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))( /*0x906d73*/
                               *(_DWORD *)(a4 + 4),
                               (char *)&v108 + 3,
                               a4,
                               a2,
                               &v127,
                               v126,
                               *(_DWORD *)v102) )
              {
                v43 = *a2; /*0x906d7f*/
                v109 = *(char **)a4; /*0x906d81*/
                v44 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 8))(v43); /*0x906d91*/
                v45 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127); /*0x906d95*/
                if ( *(_BYTE *)(a4 + 0xC) ) /*0x906d9b*/
                  v46 = v109 + 0x590; /*0x906da6*/
                else
                  v46 = v109 + 0x190; /*0x906dae*/
                v47 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, int))&v109[0x14 * *((unsigned __int8 *)&v46[8 * v44] + v45) + 0x990])( /*0x906de0*/
                                                   a2,
                                                   &v127,
                                                   a4,
                                                   v117);
              }
              else
              {
                v47 = sub_8E0970(); /*0x906de7*/
              }
              v27 = v102; /*0x906dec*/
              *((_DWORD *)v26 + 2) = v47; /*0x906df0*/
              *(_DWORD *)v26 = *(_DWORD *)v102; /*0x906df9*/
              v25 = v18[1]; /*0x906dfb*/
              v105 = *v18 + 0xC * v25; /*0x906e06*/
              v13 = v121; /*0x906e0a*/
            }
            v27 += 4; /*0x906e12*/
            v26 += 0xC; /*0x906e15*/
            v102 = v27; /*0x906e1a*/
          }
          while ( v27 != v110 ); /*0x906e1e*/
        }
      }
    }
    v5 = v123; /*0x90726a*/
    if ( v123 >= 0 ) /*0x907270*/
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x907282*/
      if ( !v12 ) /*0x90728a*/
        v12 = unk_BA7D9C; /*0x90728c*/
      goto LABEL_112; /*0x90728c*/
    }
  }
  else
  {
    *(_DWORD *)(unk_BA7D98 + 4) = 1; /*0x906ae0*/
    v5 = v123; /*0x906ae7*/
    if ( v123 >= 0 ) /*0x906aed*/
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x906b03*/
      if ( !v12 ) /*0x906b0b*/
        v12 = unk_BA7D9C; /*0x906b0d*/
      v13 = v121; /*0x906b13*/
LABEL_112:
      LOBYTE(v5) = sub_8A75D0(v12, v13, 4 * v5, 0x14); /*0x907292*/
    }
  }
  return v5; /*0x9072a3*/
}
