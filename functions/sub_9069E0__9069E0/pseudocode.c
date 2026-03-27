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

  v100 = (__m128 *)a2[2];
  v98 = *(__m128 **)(a3 + 8);
  v118 = this;
  sub_8B1FF0(v125, v98, v100);
  v99 = *(float *)(a4 + 8) * flt_A3D65C + *(float *)(a4 + 8);
  (*(void (__stdcall **)(__m128 *, _DWORD, __m128 *))(*(_DWORD *)*a2 + 0xC))(v125, LODWORD(v99), &v119);
  LOBYTE(v5) = byte_B2FDE0;
  if ( byte_B2FDE0 )
  {
    v6 = v120;
    if ( ((unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(*(this + 2), v119))
        & (unsigned __int8)_mm_movemask_ps(_mm_cmple_ps(v120, *(this + 3)))
        & 7) == 7 )
      return v5;
    *(this + 2) = v119;
    *(this + 3) = v6;
  }
  v7 = *(_DWORD **)a3;
  v121 = &v124;
  v122 = 0;
  v123 = 0x80000080;
  (*(void (__thiscall **)(_DWORD *, __m128 *, char **))(*v7 + 0x24))(v7, &v119, &v121);
  v8 = v122;
  v9 = *(_DWORD *)(dword_BA7D98 + 0x14) + *(_DWORD *)(dword_BA7D98 + 0x28);
  v10 = *(_DWORD *)(dword_BA7D98 + 8);
  if ( v10 > v9 )
    v11 = v10 - v9;
  else
    v11 = 0;
  if ( (v122 - *((_DWORD *)this + 4)) << 7 <= v11 )
  {
    v14 = v7[3];
    v130 = a3;
    v129 = *(_DWORD *)(a3 + 8);
    v15 = byte_BA81CD == 0;
    v126 = v14;
    if ( v15 )
    {
      LOBYTE(v117) = 0;
      if ( v122 > 1 )
      {
        sub_8F6580((int)v121, 0, v122 - 1, v117);
        v8 = v122;
      }
      v48 = (char *)this->m128_i32[3];
      v49 = TlsIndex;
      v50 = 3 * *((_DWORD *)this + 4);
      v111 = this->m128_i32[2];
      v51 = &v48[4 * v50];
      v103 = v121;
      v112 = &v121[4 * v8];
      v52 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v49);
      v110 = v51;
      v107 = v52;
      v53 = *(_DWORD **)(v52 + 0x19C);
      v54 = v8;
      v113 = 0;
      v114 = 0;
      v115 = 0x80000000;
      if ( !v53 )
        v53 = (_DWORD *)dword_BA7D9C;
      v55 = (_DWORD *)v53[8];
      v56 = (0xC * v8 + 0x10) & 0xFFFFFFF0;
      if ( (unsigned int)v55 + v56 > v53[0xB] )
      {
        v57 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v53 + 0xC))(v53, v56);
      }
      else
      {
        v53[8] = (char *)v55 + v56;
        v57 = v55;
      }
      v113 = v57;
      v115 = v54 | 0x80000000;
      v116 = v57;
      v58 = v122;
      v59 = v54 & 0x3FFFFFFF;
      v60 = (v54 & 0x3FFFFFFF) < v122;
      v61 = v122;
      if ( v60 )
      {
        v62 = 2 * v59;
        if ( v122 < v62 )
          v58 = v62;
        sub_8A6E40((const void **)&v113, v58, 0xC);
      }
      v63 = v110;
      v64 = v113;
      v114 = v61;
      if ( v48 != v110 )
      {
        while ( v103 != v112 )
        {
          v65 = *(_DWORD *)v103;
          if ( *(_DWORD *)v103 == *(_DWORD *)v48 )
          {
            v66 = v64;
            *v64 = *(_DWORD *)v48;
            v64[1] = *((_DWORD *)v48 + 1);
            v67 = *((_DWORD *)v48 + 2);
            v64 += 3;
            v48 += 0xC;
            v66[2] = v67;
            v103 += 4;
          }
          else if ( *(_DWORD *)v103 >= *(_DWORD *)v48 )
          {
            v74 = *((_DWORD *)v48 + 2);
            if ( v74 )
              (*(void (**)(void))(*(_DWORD *)v74 + 0x18))();
            v48 += 0xC;
          }
          else
          {
            v68 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v126 + 0x28))(v126, v65, v131);
            v128 = v65;
            v127 = v68;
            if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))(
                             *(_DWORD *)(a4 + 4),
                             (char *)&v108 + 3,
                             a4,
                             a2,
                             &v127,
                             v126,
                             *(_DWORD *)v103) )
            {
              v69 = *a2;
              v109 = *(char **)a4;
              v70 = (*(int (__thiscall **)(int))(*(_DWORD *)v69 + 8))(v69);
              v71 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127);
              if ( *(_BYTE *)(a4 + 0xC) )
                v72 = v109 + 0x590;
              else
                v72 = v109 + 0x190;
              v73 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, __int32))&v109[0x14 * *((unsigned __int8 *)&v72[8 * v70] + v71) + 0x990])(
                                                 a2,
                                                 &v127,
                                                 a4,
                                                 v111);
            }
            else
            {
              v73 = sub_8E0970();
            }
            v64[2] = v73;
            *v64 = *(_DWORD *)v103;
            v64 += 3;
            v103 += 4;
          }
          v63 = v110;
          if ( v48 == v110 )
            goto LABEL_82;
        }
        if ( v48 != v63 )
        {
          do
          {
            v75 = *((_DWORD *)v48 + 2);
            if ( v75 )
              (*(void (**)(void))(*(_DWORD *)v75 + 0x18))();
            v48 += 0xC;
          }
          while ( v48 != v110 );
        }
      }
LABEL_82:
      while ( v103 != v112 )
      {
        v76 = *(_DWORD *)v103;
        v77 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v126 + 0x28))(v126, *(_DWORD *)v103, v131);
        v128 = v76;
        v127 = v77;
        if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))(
                         *(_DWORD *)(a4 + 4),
                         (char *)&v108 + 3,
                         a4,
                         a2,
                         &v127,
                         v126,
                         *(_DWORD *)v103) )
        {
          v78 = *(char **)a4;
          v79 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 8))(*a2);
          v80 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127);
          v81 = v78 + 0x590;
          if ( !*(_BYTE *)(a4 + 0xC) )
            v81 = v78 + 0x190;
          v82 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, __int32))&v78[0x14
                                                                                                 * *((unsigned __int8 *)&v81[8 * v79] + v80)
                                                                                                 + 0x990])(
                                             a2,
                                             &v127,
                                             a4,
                                             v111);
        }
        else
        {
          v82 = sub_8E0970();
        }
        v64[2] = v82;
        *v64 = *(_DWORD *)v103;
        v64 += 3;
        v103 += 4;
      }
      v83 = (__int32 *)v118;
      v84 = v114;
      v85 = v118[1].m128_i32[1] & 0x3FFFFFFF;
      if ( v85 < v114 )
      {
        if ( v118[1].m128_i32[1] >= 0 )
        {
          v86 = *(_DWORD *)(v107 + 0x19C);
          if ( !v86 )
            v86 = dword_BA7D9C;
          sub_8A75D0(v86, (_DWORD *)v118->m128_i32[3], 0xC * v85, 0x14);
        }
        v87 = *(_DWORD *)(v107 + 0x19C);
        if ( !v87 )
          v87 = dword_BA7D9C;
        v88 = sub_8A7560(v87, 0xC * v114, 0x14);
        v84 = v114;
        v83[3] = (__int32)v88;
        v83[5] = v84 | v83[5] & 0x40000000;
      }
      v83[4] = v84;
      v89 = (_DWORD *)v83[3];
      if ( v84 > 0 )
      {
        v90 = v113;
        v91 = v89;
        do
        {
          v92 = v91;
          *v91 = *v90;
          v91[1] = v90[1];
          v93 = v90[2];
          v90 += 3;
          v91 += 3;
          --v84;
          v92[2] = v93;
        }
        while ( v84 );
      }
      v94 = *(_DWORD **)(v107 + 0x19C);
      v95 = v116;
      if ( !v94 )
        v94 = (_DWORD *)dword_BA7D9C;
      v15 = v116 == (_DWORD *)v94[0xA];
      v94[8] = v116;
      if ( v15 )
        (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v94 + 0x10))(v94, v95);
      if ( v115 >= 0 )
      {
        v96 = *(_DWORD *)(v107 + 0x19C);
        if ( !v96 )
          v96 = dword_BA7D9C;
        sub_8A75D0(v96, v113, 0xC * (v115 & 0x3FFFFFFF), 0x14);
      }
      v13 = v121;
    }
    else
    {
      v16 = this->m128_i32[3];
      v117 = this->m128_i32[2];
      v17 = *((_DWORD *)this + 4);
      v18 = &this->m128_i32[3];
      v13 = v121;
      v101 = v16 + 0xC * v17;
      v110 = &v121[4 * v122];
      for ( i = v121; v16 != v101; v16 += 0xC )
      {
        if ( i == v110 || *(_DWORD *)v16 != *(_DWORD *)i )
        {
          i = v13;
          v109 = v13;
          if ( v13 == v110 )
          {
LABEL_21:
            (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v16 + 8) + 0x18))(*(_DWORD *)(v16 + 8));
            v20 = *v18;
            --v18[1];
            v21 = (int)((unsigned __int64)(0x2AAAAAABLL * (v16 - v20)) >> 0x20) >> 1;
            v22 = v21 + (v21 >> 0x1F);
            if ( v22 < v18[1] )
            {
              v23 = 0xC * v22;
              v104 = 0xC * v22;
              do
              {
                v24 = (_DWORD *)(*v18 + v23);
                *v24 = v24[3];
                v24[1] = v24[4];
                v24[2] = v24[5];
                ++v22;
                v23 = v104 + 0xC;
                v104 += 0xC;
              }
              while ( v22 < v18[1] );
              i = v109;
            }
            v8 = v122;
            v13 = v121;
            v16 -= 0xC;
            v101 -= 0xC;
          }
          else
          {
            while ( *(_DWORD *)v16 != *(_DWORD *)i )
            {
              i += 4;
              if ( i == v110 )
              {
                v109 = i;
                goto LABEL_21;
              }
            }
            v109 = i;
            i += 4;
          }
        }
        else
        {
          i += 4;
        }
      }
      v25 = v18[1];
      if ( v8 != v25 )
      {
        v26 = (char *)*v18;
        v105 = *v18 + 0xC * v25;
        v27 = v13;
        v102 = v13;
        v110 = &v13[4 * v8];
        if ( v13 != v110 )
        {
          do
          {
            if ( v26 == (char *)v105 || *(_DWORD *)v26 != *(_DWORD *)v27 )
            {
              v28 = v27 - v13;
              v29 = v25 + 1;
              v30 = v28 >> 2;
              v111 = v25 - v30;
              v31 = v18[2] & 0x3FFFFFFF;
              v112 = (char *)v29;
              if ( v31 < v29 )
              {
                v32 = 2 * v31;
                if ( v29 >= v32 )
                  v32 = v29;
                sub_8A6E40((const void **)v18, v32, 0xC);
              }
              v33 = 0xC * v30;
              v34 = *v18 + 0xC * v30;
              if ( v111 - 1 >= 0 )
              {
                v35 = (_DWORD *)(v34 + 0xC + 0xC * (v111 - 1));
                v36 = 0xFFFFFFF4;
                v37 = v111;
                v111 = 0xFFFFFFF4;
                v106 = v37;
                while ( 1 )
                {
                  v38 = (_DWORD *)((char *)v35 + v36);
                  *v35 = *v38;
                  v35[1] = v38[1];
                  v35[2] = v38[2];
                  v35 += 0xFFFFFFFD;
                  if ( !--v106 )
                    break;
                  v36 = v111;
                }
                v29 = (__int32)v112;
              }
              v39 = (char *)*v18;
              v40 = v126;
              v18[1] = v29;
              v41 = *(_DWORD *)v102;
              v26 = &v39[v33];
              v42 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v40 + 0x28))(v40, *(_DWORD *)v102, v131);
              v128 = v41;
              v127 = v42;
              if ( *(_BYTE *)(***(int (__thiscall ****)(_DWORD, char *, int, _DWORD *, int *, int, _DWORD))(a4 + 4))(
                               *(_DWORD *)(a4 + 4),
                               (char *)&v108 + 3,
                               a4,
                               a2,
                               &v127,
                               v126,
                               *(_DWORD *)v102) )
              {
                v43 = *a2;
                v109 = *(char **)a4;
                v44 = (*(int (__thiscall **)(int))(*(_DWORD *)v43 + 8))(v43);
                v45 = (*(int (__thiscall **)(int))(*(_DWORD *)v127 + 8))(v127);
                if ( *(_BYTE *)(a4 + 0xC) )
                  v46 = v109 + 0x590;
                else
                  v46 = v109 + 0x190;
                v47 = (int (__stdcall ***)(char))(*(int (__cdecl **)(_DWORD *, int *, int, int))&v109[0x14 * *((unsigned __int8 *)&v46[8 * v44] + v45) + 0x990])(
                                                   a2,
                                                   &v127,
                                                   a4,
                                                   v117);
              }
              else
              {
                v47 = sub_8E0970();
              }
              v27 = v102;
              *((_DWORD *)v26 + 2) = v47;
              *(_DWORD *)v26 = *(_DWORD *)v102;
              v25 = v18[1];
              v105 = *v18 + 0xC * v25;
              v13 = v121;
            }
            v27 += 4;
            v26 += 0xC;
            v102 = v27;
          }
          while ( v27 != v110 );
        }
      }
    }
    v5 = v123;
    if ( v123 >= 0 )
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v12 )
        v12 = dword_BA7D9C;
      goto LABEL_112;
    }
  }
  else
  {
    *(_DWORD *)(dword_BA7D98 + 4) = 1;
    v5 = v123;
    if ( v123 >= 0 )
    {
      v12 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
      if ( !v12 )
        v12 = dword_BA7D9C;
      v13 = v121;
LABEL_112:
      LOBYTE(v5) = sub_8A75D0(v12, v13, 4 * v5, 0x14);
    }
  }
  return v5;
}
