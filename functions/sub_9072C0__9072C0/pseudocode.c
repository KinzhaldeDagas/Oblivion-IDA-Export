int __thiscall sub_9072C0(__m128 *this, __m128 **a2, _DWORD *a3, __m128 *a4)
{
  _DWORD *v5; // edi
  int v6; // edx
  int v7; // edi
  bool v8; // zf
  __int32 v9; // edi
  __int32 *v10; // esi
  int v11; // eax
  char *v12; // ecx
  char *i; // ebx
  _DWORD *v14; // edx
  unsigned int v15; // edx
  signed int v16; // eax
  int v17; // ecx
  _DWORD *v18; // ecx
  __int32 v19; // eax
  char *v20; // edi
  char *v21; // ebx
  int v22; // edi
  int v23; // ebx
  int v24; // edi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // edi
  _DWORD *v29; // edx
  __m128 *v30; // edi
  __m128 *v31; // ecx
  _DWORD *v32; // edi
  char *v33; // edi
  int v34; // ecx
  int v35; // ebx
  int v36; // eax
  int v37; // ebx
  int v38; // eax
  __int32 v39; // ecx
  int (__stdcall ***v40)(char); // eax
  int v41; // eax
  _DWORD *v42; // edi
  int v43; // esi
  _DWORD *ThreadLocalStoragePointer; // eax
  _DWORD *v45; // eax
  int v46; // esi
  unsigned int v47; // edx
  _DWORD *v48; // eax
  int v49; // eax
  int v50; // ecx
  bool v51; // cc
  int v52; // esi
  int v53; // ecx
  _DWORD *v54; // eax
  int v55; // esi
  int v56; // edx
  int v57; // eax
  int (__thiscall ***v58)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD); // ecx
  int v59; // esi
  int v60; // eax
  __int32 v61; // ecx
  int v62; // eax
  int v63; // eax
  int v64; // esi
  int v65; // eax
  int (__thiscall ***v66)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD); // ecx
  __int32 v67; // edi
  int v68; // esi
  int v69; // eax
  __int32 v70; // ecx
  __int32 *v71; // esi
  int v72; // edx
  int v73; // eax
  int v74; // ecx
  int v75; // ecx
  _DWORD *v76; // eax
  _DWORD *v77; // esi
  _DWORD *v78; // eax
  _DWORD *v79; // ecx
  _DWORD *v80; // edi
  int v81; // esi
  _DWORD *v82; // ecx
  _DWORD *v83; // eax
  int v84; // ecx
  int result; // eax
  int v86; // edx
  __int32 v87; // [esp+2Ch] [ebp-494h]
  char *v88; // [esp+2Ch] [ebp-494h]
  char *v89; // [esp+2Ch] [ebp-494h]
  char *v90; // [esp+30h] [ebp-490h]
  char *v91; // [esp+30h] [ebp-490h]
  _DWORD *v92; // [esp+30h] [ebp-490h]
  char *v93; // [esp+34h] [ebp-48Ch]
  __int32 v94; // [esp+34h] [ebp-48Ch]
  _DWORD *v95; // [esp+34h] [ebp-48Ch]
  __int32 v96; // [esp+34h] [ebp-48Ch]
  int v97; // [esp+38h] [ebp-488h]
  int v98; // [esp+38h] [ebp-488h]
  __m128 *v99; // [esp+38h] [ebp-488h]
  int v100; // [esp+38h] [ebp-488h]
  int v101; // [esp+3Ch] [ebp-484h] BYREF
  int v102; // [esp+40h] [ebp-480h]
  __m128 *v103; // [esp+44h] [ebp-47Ch]
  char *v104; // [esp+48h] [ebp-478h]
  _DWORD *v105; // [esp+4Ch] [ebp-474h]
  _DWORD *v106; // [esp+50h] [ebp-470h] BYREF
  int v107; // [esp+54h] [ebp-46Ch]
  signed int v108; // [esp+58h] [ebp-468h]
  _DWORD *v109; // [esp+5Ch] [ebp-464h]
  __m128 v110[2]; // [esp+60h] [ebp-460h] BYREF
  char *v111; // [esp+80h] [ebp-440h] BYREF
  int v112; // [esp+84h] [ebp-43Ch]
  int v113; // [esp+88h] [ebp-438h]
  char v114; // [esp+8Ch] [ebp-434h] BYREF
  int v115; // [esp+290h] [ebp-230h]
  int v116; // [esp+294h] [ebp-22Ch] BYREF
  int v117; // [esp+298h] [ebp-228h]
  int v118; // [esp+29Ch] [ebp-224h]
  _DWORD *v119; // [esp+2A0h] [ebp-220h]
  _BYTE v120[524]; // [esp+2B0h] [ebp-210h] BYREF

  v103 = this;
  sub_9067E0(a2, (int)a3, a4, v110);
  *(this + 2) = v110[0];
  *(this + 3) = v110[1];
  v5 = (_DWORD *)*a3;
  v111 = &v114;
  v112 = 0;
  v113 = 0x80000080;
  (*(void (__thiscall **)(_DWORD *, __m128 *, char **))(*v5 + 0x24))(v5, v110, &v111);
  v6 = v112;
  v7 = v5[3];
  LOBYTE(v102) = 0;
  if ( v112 > 1 )
  {
    sub_8F6580((int)v111, 0, v112 - 1, v102);
    v6 = v112;
  }
  v119 = a3;
  v118 = a3[2];
  v8 = byte_BA81CD == 0;
  v115 = v7;
  if ( v8 )
  {
    LOBYTE(v102) = 0;
    if ( v6 > 1 )
    {
      sub_8F6580((int)v111, 0, v6 - 1, v102);
      v6 = v112;
    }
    v41 = this->m128_i32[2];
    v42 = (_DWORD *)this->m128_i32[3];
    v43 = *((_DWORD *)this + 4);
    v102 = v41;
    v105 = &v42[3 * v43];
    v89 = v111;
    v106 = 0;
    v107 = 0;
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer;
    v104 = &v111[4 * v6];
    v100 = ThreadLocalStoragePointer[TlsIndex];
    v45 = *(_DWORD **)(v100 + 0x19C);
    v46 = v6;
    v108 = 0x80000000;
    if ( !v45 )
      v45 = (_DWORD *)dword_BA7D9C;
    v47 = (0xC * v6 + 0x10) & 0xFFFFFFF0;
    v95 = (_DWORD *)v45[8];
    if ( (unsigned int)v95 + v47 > v45[0xB] )
    {
      v48 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v45 + 0xC))(v45, v47);
    }
    else
    {
      v45[8] = (char *)v95 + v47;
      v48 = v95;
    }
    v106 = v48;
    v108 = v46 | 0x80000000;
    v109 = v48;
    v49 = v112;
    v50 = v46 & 0x3FFFFFFF;
    v51 = (v46 & 0x3FFFFFFF) < v112;
    v52 = v112;
    if ( v51 )
    {
      v53 = 2 * v50;
      if ( v112 < v53 )
        v49 = v53;
      sub_8A6E40((const void **)&v106, v49, 0xC);
    }
    v92 = v106;
    v54 = v105;
    v107 = v52;
    if ( v42 != v105 )
    {
      while ( v89 != v104 )
      {
        v55 = *(_DWORD *)v89;
        if ( *(_DWORD *)v89 == *v42 )
        {
          *v92 = *v42;
          v92[1] = v42[1];
          v56 = v42[2];
          v42 += 3;
          v92[2] = v56;
          v92 += 3;
          v89 += 4;
        }
        else if ( *(_DWORD *)v89 >= *v42 )
        {
          v62 = v42[2];
          if ( v62 )
            (*(void (**)(void))(*(_DWORD *)v62 + 0x18))();
          v42 += 3;
        }
        else
        {
          v57 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v115 + 0x28))(v115, v55, v120);
          v58 = (int (__thiscall ***)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1];
          v116 = v57;
          v117 = v55;
          if ( *(_BYTE *)(**v58)(v58, (char *)&v101 + 3, a4, a2, &v116, v115, *(_DWORD *)v89) )
          {
            v96 = a4->m128_i32[0];
            v59 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2);
            v60 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116);
            if ( a4->m128_i8[0xC] )
              v61 = v96 + 0x590;
            else
              v61 = v96 + 0x190;
            v92[2] = (*(int (__cdecl **)(__m128 **, int *, __m128 *, int))(v96
                                                                         + 0x14
                                                                         * *(unsigned __int8 *)(v61 + 0x20 * v59 + v60)
                                                                         + 0x990))(
                       a2,
                       &v116,
                       a4,
                       v102);
          }
          else
          {
            v92[2] = sub_8E0970();
          }
          *v92 = *(_DWORD *)v89;
          v92 += 3;
          v89 += 4;
        }
        v54 = v105;
        if ( v42 == v105 )
          goto LABEL_73;
      }
      if ( v42 != v54 )
      {
        do
        {
          v63 = v42[2];
          if ( v63 )
            (*(void (**)(void))(*(_DWORD *)v63 + 0x18))();
          v42 += 3;
        }
        while ( v42 != v105 );
      }
    }
LABEL_73:
    while ( v89 != v104 )
    {
      v64 = *(_DWORD *)v89;
      v65 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v115 + 0x28))(v115, *(_DWORD *)v89, v120);
      v66 = (int (__thiscall ***)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1];
      v116 = v65;
      v117 = v64;
      if ( *(_BYTE *)(**v66)(v66, (char *)&v101 + 3, a4, a2, &v116, v115, *(_DWORD *)v89) )
      {
        v67 = a4->m128_i32[0];
        v68 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2);
        v69 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116);
        v70 = v67 + 0x590;
        if ( !a4->m128_i8[0xC] )
          v70 = v67 + 0x190;
        v92[2] = (*(int (__cdecl **)(__m128 **, int *, __m128 *, int))(v67
                                                                     + 0x14
                                                                     * *(unsigned __int8 *)(v70 + 0x20 * v68 + v69)
                                                                     + 0x990))(
                   a2,
                   &v116,
                   a4,
                   v102);
      }
      else
      {
        v92[2] = sub_8E0970();
      }
      *v92 = *(_DWORD *)v89;
      v92 += 3;
      v89 += 4;
    }
    v71 = (__int32 *)v103;
    v72 = v107;
    v73 = v103[1].m128_i32[1] & 0x3FFFFFFF;
    if ( v73 < v107 )
    {
      if ( v103[1].m128_i32[1] >= 0 )
      {
        v74 = *(_DWORD *)(v100 + 0x19C);
        if ( !v74 )
          v74 = dword_BA7D9C;
        sub_8A75D0(v74, (_DWORD *)v103->m128_i32[3], 0xC * v73, 0x14);
      }
      v75 = *(_DWORD *)(v100 + 0x19C);
      if ( !v75 )
        v75 = dword_BA7D9C;
      v76 = sub_8A7560(v75, 0xC * v107, 0x14);
      v72 = v107;
      v71[3] = (__int32)v76;
      v71[5] = v72 | v71[5] & 0x40000000;
    }
    v71[4] = v72;
    v77 = (_DWORD *)v71[3];
    if ( v72 > 0 )
    {
      v78 = v106;
      v79 = v77;
      do
      {
        v80 = v79;
        *v79 = *v78;
        v79[1] = v78[1];
        v81 = v78[2];
        v78 += 3;
        v79 += 3;
        --v72;
        v80[2] = v81;
      }
      while ( v72 );
    }
    v82 = *(_DWORD **)(v100 + 0x19C);
    v83 = v109;
    if ( !v82 )
      v82 = (_DWORD *)dword_BA7D9C;
    v8 = v109 == (_DWORD *)v82[0xA];
    v82[8] = v109;
    if ( v8 )
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v82 + 0x10))(v82, v83);
    if ( v108 >= 0 )
    {
      v84 = *(_DWORD *)(v100 + 0x19C);
      if ( !v84 )
        v84 = dword_BA7D9C;
      sub_8A75D0(v84, v106, 0xC * (v108 & 0x3FFFFFFF), 0x14);
    }
    v12 = v111;
  }
  else
  {
    v9 = v103->m128_i32[3];
    v10 = &v103->m128_i32[3];
    v11 = 3 * v103[1].m128_i32[0];
    v105 = (_DWORD *)v103->m128_i32[2];
    v87 = v9 + 4 * v11;
    v12 = v111;
    v90 = &v111[4 * v6];
    for ( i = v111; v9 != v87; v9 += 0xC )
    {
      if ( i == v90 || *(_DWORD *)v9 != *(_DWORD *)i )
      {
        i = v12;
        v93 = v12;
        if ( v12 == v90 )
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 8) + 0x18))(*(_DWORD *)(v9 + 8));
          v14 = (_DWORD *)*v10;
          --v10[1];
          v15 = (int)((unsigned __int64)(0x2AAAAAABLL * (v9 - (int)v14)) >> 0x20) >> 1;
          v16 = v15 + (v15 >> 0x1F);
          if ( v16 < v10[1] )
          {
            v17 = 0xC * v16;
            v97 = 0xC * v16;
            do
            {
              v18 = (_DWORD *)(*v10 + v17);
              *v18 = v18[3];
              v18[1] = v18[4];
              v18[2] = v18[5];
              ++v16;
              v17 = v97 + 0xC;
              v97 += 0xC;
            }
            while ( v16 < v10[1] );
            i = v93;
          }
          v6 = v112;
          v12 = v111;
          v9 -= 0xC;
          v87 -= 0xC;
        }
        else
        {
          while ( *(_DWORD *)v9 != *(_DWORD *)i )
          {
            i += 4;
            if ( i == v90 )
            {
              v93 = i;
              goto LABEL_12;
            }
          }
          i += 4;
        }
      }
      else
      {
        i += 4;
      }
    }
    v19 = v10[1];
    if ( v6 != v19 )
    {
      v20 = (char *)*v10;
      v98 = *v10 + 0xC * v19;
      v21 = v12;
      v88 = v12;
      v91 = &v12[4 * v6];
      if ( v12 != v91 )
      {
        do
        {
          if ( v20 == (char *)v98 || *(_DWORD *)v20 != *(_DWORD *)v21 )
          {
            v22 = v21 - v12;
            v23 = v19 + 1;
            v24 = v22 >> 2;
            v103 = (__m128 *)(v19 - v24);
            v25 = v10[2] & 0x3FFFFFFF;
            v104 = (char *)v23;
            if ( v25 < v23 )
            {
              v26 = 2 * v25;
              if ( v23 >= v26 )
                v26 = v23;
              sub_8A6E40((const void **)v10, v26, 0xC);
            }
            v27 = 0xC * v24;
            v28 = 0xC * v24 + *v10;
            v102 = v28 + 0xC;
            if ( (int)&v103[0xFFFFFFFF].m128_i32[3] + 3 >= 0 )
            {
              v29 = (_DWORD *)(v28 + 0xC + 0xC * ((_DWORD)v103 + 0xFFFFFFFF));
              v30 = (__m128 *)(v28 - v102);
              v31 = v103;
              v103 = v30;
              v99 = v31;
              while ( 1 )
              {
                v32 = (__int32 *)((char *)v30->m128_i32 + (_DWORD)v29);
                *v29 = *v32;
                v29[1] = v32[1];
                v29[2] = v32[2];
                v29 += 0xFFFFFFFD;
                v99 = (__m128 *)((char *)v99 + 0xFFFFFFFF);
                if ( !v99 )
                  break;
                v30 = v103;
              }
              v23 = (int)v104;
            }
            v33 = (char *)*v10;
            v34 = v115;
            v10[1] = v23;
            v35 = *(_DWORD *)v88;
            v20 = &v33[v27];
            v36 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v34 + 0x28))(v34, *(_DWORD *)v88, v120);
            v117 = v35;
            v116 = v36;
            if ( *(_BYTE *)(**(int (__thiscall ***)(__int32, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1])(
                             a4->m128_i32[1],
                             (char *)&v101 + 3,
                             a4,
                             a2,
                             &v116,
                             v115,
                             *(_DWORD *)v88) )
            {
              v94 = a4->m128_i32[0];
              v37 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2);
              v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116);
              if ( a4->m128_i8[0xC] )
                v39 = v94 + 0x590;
              else
                v39 = v94 + 0x190;
              v40 = (int (__stdcall ***)(char))(*(int (__cdecl **)(__m128 **, int *, __m128 *, _DWORD *))(v94 + 0x14 * *(unsigned __int8 *)(v39 + 0x20 * v37 + v38) + 0x990))(
                                                 a2,
                                                 &v116,
                                                 a4,
                                                 v105);
            }
            else
            {
              v40 = sub_8E0970();
            }
            v21 = v88;
            *((_DWORD *)v20 + 2) = v40;
            *(_DWORD *)v20 = *(_DWORD *)v88;
            v19 = v10[1];
            v12 = v111;
            v98 = *v10 + 0xC * v19;
          }
          v21 += 4;
          v20 += 0xC;
          v88 = v21;
        }
        while ( v21 != v91 );
      }
    }
  }
  result = v113;
  if ( v113 >= 0 )
  {
    v86 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
    if ( !v86 )
      v86 = dword_BA7D9C;
    return sub_8A75D0(v86, v12, 4 * v113, 0x14);
  }
  return result;
}
