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
  __int32 v41; // eax
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

  v103 = this; /*0x9072ee*/
  sub_9067E0(a2, (int)a3, a4, v110); /*0x9072f2*/
  *(this + 2) = v110[0]; /*0x9072fc*/
  *(this + 3) = v110[1]; /*0x90730c*/
  v5 = (_DWORD *)*a3; /*0x907310*/
  v111 = &v114; /*0x907312*/
  v112 = 0; /*0x90731f*/
  v113 = 0x80000080; /*0x907327*/
  (*(void (__thiscall **)(_DWORD *, __m128 *, char **))(*v5 + 0x24))(v5, v110, &v111); /*0x907334*/
  v6 = v112; /*0x907337*/
  v7 = v5[3]; /*0x90733e*/
  LOBYTE(v102) = 0; /*0x907341*/
  if ( v112 > 1 ) /*0x907346*/
  {
    sub_8F6580((int)v111, 0, v112 - 1, v102); /*0x907356*/
    v6 = v112; /*0x90735b*/
  }
  v119 = a3; /*0x907365*/
  v118 = a3[2]; /*0x90736f*/
  v8 = unk_BA81CD == 0; /*0x90737b*/
  v115 = v7; /*0x90737d*/
  if ( v8 ) /*0x907384*/
  {
    LOBYTE(v102) = 0; /*0x90766c*/
    if ( v6 > 1 ) /*0x907671*/
    {
      sub_8F6580((int)v111, 0, v6 - 1, v102); /*0x907681*/
      v6 = v112; /*0x907686*/
    }
    v41 = this->m128_i32[2]; /*0x90768d*/
    v42 = (_DWORD *)this->m128_i32[3]; /*0x907690*/
    v43 = *((_DWORD *)this + 4); /*0x907693*/
    v102 = v41; /*0x907696*/
    v105 = &v42[3 * v43]; /*0x9076a0*/
    v89 = v111; /*0x9076ab*/
    v106 = 0; /*0x9076b1*/
    v107 = 0; /*0x9076b5*/
    ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x9076b9*/
    v104 = &v111[4 * v6]; /*0x9076bf*/
    v100 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x9076cc*/
    v45 = *(_DWORD **)(v100 + 0x19C); /*0x9076d0*/
    v46 = v6; /*0x9076d8*/
    v108 = 0x80000000; /*0x9076da*/
    if ( !v45 ) /*0x9076e2*/
      v45 = (_DWORD *)unk_BA7D9C; /*0x9076e4*/
    v47 = (0xC * v6 + 0x10) & 0xFFFFFFF0; /*0x9076f6*/
    v95 = (_DWORD *)v45[8]; /*0x9076f9*/
    if ( (unsigned int)v95 + v47 > v45[0xB] ) /*0x907702*/
    {
      v48 = (_DWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v45 + 0xC))(v45, v47); /*0x90771a*/
    }
    else
    {
      v45[8] = (char *)v95 + v47; /*0x907704*/
      v48 = v95; /*0x907707*/
    }
    v106 = v48; /*0x907725*/
    v108 = v46 | 0x80000000; /*0x907729*/
    v109 = v48; /*0x90772d*/
    v49 = v112; /*0x907731*/
    v50 = v46 & 0x3FFFFFFF; /*0x907735*/
    v51 = (v46 & 0x3FFFFFFF) < v112; /*0x90773b*/
    v52 = v112; /*0x90773d*/
    if ( v51 ) /*0x90773f*/
    {
      v53 = 2 * v50; /*0x907741*/
      if ( v112 < v53 ) /*0x907745*/
        v49 = v53; /*0x907747*/
      sub_8A6E40((const void **)&v106, v49, 0xC); /*0x907751*/
    }
    v92 = v106; /*0x90775d*/
    v54 = v105; /*0x907761*/
    v107 = v52; /*0x907767*/
    if ( v42 != v105 ) /*0x90776b*/
    {
      while ( v89 != v104 ) /*0x907779*/
      {
        v55 = *(_DWORD *)v89; /*0x90777f*/
        if ( *(_DWORD *)v89 == *v42 ) /*0x907785*/
        {
          *v92 = *v42; /*0x90778f*/
          v92[1] = v42[1]; /*0x907794*/
          v56 = v42[2]; /*0x907797*/
          v42 += 3; /*0x90779f*/
          v92[2] = v56; /*0x9077a5*/
          v92 += 3; /*0x9077a8*/
          v89 += 4; /*0x9077ac*/
        }
        else if ( *(_DWORD *)v89 >= *v42 ) /*0x9077b5*/
        {
          v62 = v42[2]; /*0x9078a1*/
          if ( v62 ) /*0x9078a6*/
            (*(void (**)(void))(*(_DWORD *)v62 + 0x18))(); /*0x9078ac*/
          v42 += 3; /*0x9078af*/
        }
        else
        {
          v57 = (*(int (__thiscall **)(int, int, _BYTE *))(*(_DWORD *)v115 + 0x28))(v115, v55, v120); /*0x9077cd*/
          v58 = (int (__thiscall ***)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1]; /*0x9077d4*/
          v116 = v57; /*0x9077d7*/
          v117 = v55; /*0x9077de*/
          if ( *(_BYTE *)(**v58)(v58, (char *)&v101 + 3, a4, a2, &v116, v115, *(_DWORD *)v89) ) /*0x907806*/
          {
            v96 = a4->m128_i32[0]; /*0x907814*/
            v59 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2); /*0x907822*/
            v60 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116); /*0x907826*/
            if ( a4->m128_i8[0xC] ) /*0x907829*/
              v61 = v96 + 0x590; /*0x907834*/
            else
              v61 = v96 + 0x190; /*0x90783c*/
            v92[2] = (*(int (__cdecl **)(__m128 **, int *, __m128 *, int))(v96 /*0x907874*/
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
            v92[2] = sub_8E0970(); /*0x907882*/
          }
          *v92 = *(_DWORD *)v89; /*0x90788f*/
          v92 += 3; /*0x907897*/
          v89 += 4; /*0x90789b*/
        }
        v54 = v105; /*0x9078b2*/
        if ( v42 == v105 ) /*0x9078b8*/
          goto LABEL_73; /*0x9078b8*/
      }
      if ( v42 != v54 ) /*0x9078c2*/
      {
        do /*0x9078db*/
        {
          v63 = v42[2]; /*0x9078c4*/
          if ( v63 ) /*0x9078c9*/
            (*(void (**)(void))(*(_DWORD *)v63 + 0x18))(); /*0x9078cf*/
          v42 += 3; /*0x9078d6*/
        }
        while ( v42 != v105 ); /*0x9078db*/
      }
    }
LABEL_73:
    while ( v89 != v104 ) /*0x9078e5*/
    {
      v64 = *(_DWORD *)v89; /*0x9078f4*/
      v65 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v115 + 0x28))(v115, *(_DWORD *)v89, v120); /*0x907908*/
      v66 = (int (__thiscall ***)(_DWORD, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1]; /*0x90790b*/
      v116 = v65; /*0x90790e*/
      v117 = v64; /*0x907915*/
      if ( *(_BYTE *)(**v66)(v66, (char *)&v101 + 3, a4, a2, &v116, v115, *(_DWORD *)v89) ) /*0x90793d*/
      {
        v67 = a4->m128_i32[0]; /*0x907949*/
        v68 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2); /*0x907955*/
        v69 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116); /*0x907959*/
        v70 = v67 + 0x590; /*0x907961*/
        if ( !a4->m128_i8[0xC] ) /*0x90795c*/
          v70 = v67 + 0x190; /*0x907969*/
        v92[2] = (*(int (__cdecl **)(__m128 **, int *, __m128 *, int))(v67 /*0x90799d*/
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
        v92[2] = sub_8E0970(); /*0x9079ab*/
      }
      *v92 = *(_DWORD *)v89; /*0x9079b8*/
      v92 += 3; /*0x9079bd*/
      v89 += 4; /*0x9079ca*/
    }
    v71 = (__int32 *)v103; /*0x9079d4*/
    v72 = v107; /*0x9079db*/
    v73 = v103[1].m128_i32[1] & 0x3FFFFFFF; /*0x9079e1*/
    if ( v73 < v107 ) /*0x9079e8*/
    {
      if ( v103[1].m128_i32[1] >= 0 ) /*0x9079ec*/
      {
        v74 = *(_DWORD *)(v100 + 0x19C); /*0x9079f2*/
        if ( !v74 ) /*0x9079fa*/
          v74 = unk_BA7D9C; /*0x9079fc*/
        sub_8A75D0(v74, (_DWORD *)v103->m128_i32[3], 0xC * v73, 0x14); /*0x907a0f*/
      }
      v75 = *(_DWORD *)(v100 + 0x19C); /*0x907a18*/
      if ( !v75 ) /*0x907a20*/
        v75 = unk_BA7D9C; /*0x907a22*/
      v76 = sub_8A7560(v75, 0xC * v107, 0x14); /*0x907a35*/
      v72 = v107; /*0x907a3a*/
      v71[3] = (__int32)v76; /*0x907a3e*/
      v71[5] = v72 | v71[5] & 0x40000000; /*0x907a4b*/
    }
    v71[4] = v72; /*0x907a50*/
    v77 = (_DWORD *)v71[3]; /*0x907a53*/
    if ( v72 > 0 ) /*0x907a56*/
    {
      v78 = v106; /*0x907a58*/
      v79 = v77; /*0x907a5c*/
      do /*0x907a7b*/
      {
        v80 = v79; /*0x907a64*/
        *v79 = *v78; /*0x907a66*/
        v79[1] = v78[1]; /*0x907a6b*/
        v81 = v78[2]; /*0x907a6e*/
        v78 += 3; /*0x907a71*/
        v79 += 3; /*0x907a74*/
        --v72; /*0x907a77*/
        v80[2] = v81; /*0x907a78*/
      }
      while ( v72 ); /*0x907a7b*/
    }
    v82 = *(_DWORD **)(v100 + 0x19C); /*0x907a81*/
    v83 = v109; /*0x907a89*/
    if ( !v82 ) /*0x907a8d*/
      v82 = (_DWORD *)unk_BA7D9C; /*0x907a8f*/
    v8 = v109 == (_DWORD *)v82[0xA]; /*0x907a95*/
    v82[8] = v109; /*0x907a98*/
    if ( v8 ) /*0x907a9b*/
      (*(void (__thiscall **)(_DWORD *, _DWORD *))(*v82 + 0x10))(v82, v83); /*0x907aa0*/
    if ( v108 >= 0 ) /*0x907aa9*/
    {
      v84 = *(_DWORD *)(v100 + 0x19C); /*0x907aab*/
      if ( !v84 ) /*0x907ab3*/
        v84 = unk_BA7D9C; /*0x907ab5*/
      sub_8A75D0(v84, v106, 0xC * (v108 & 0x3FFFFFFF), 0x14); /*0x907ace*/
    }
    v12 = v111; /*0x907ad3*/
  }
  else
  {
    v9 = v103->m128_i32[3]; /*0x907394*/
    v10 = &v103->m128_i32[3]; /*0x907397*/
    v11 = 3 * v103[1].m128_i32[0]; /*0x90739a*/
    v105 = (_DWORD *)v103->m128_i32[2]; /*0x90739d*/
    v87 = v9 + 4 * v11; /*0x9073a4*/
    v12 = v111; /*0x9073a8*/
    v90 = &v111[4 * v6]; /*0x9073af*/
    for ( i = v111; v9 != v87; v9 += 0xC ) /*0x9073b9*/
    {
      if ( i == v90 || *(_DWORD *)v9 != *(_DWORD *)i ) /*0x9073ca*/
      {
        i = v12; /*0x9073d8*/
        v93 = v12; /*0x9073da*/
        if ( v12 == v90 ) /*0x9073de*/
        {
LABEL_12:
          (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v9 + 8) + 0x18))(*(_DWORD *)(v9 + 8)); /*0x9073f9*/
          v14 = (_DWORD *)*v10; /*0x907404*/
          --v10[1]; /*0x907407*/
          v15 = (int)((unsigned __int64)(0x2AAAAAABLL * (v9 - (int)v14)) >> 0x20) >> 1; /*0x907418*/
          v16 = v15 + (v15 >> 0x1F); /*0x90741f*/
          if ( v16 < v10[1] ) /*0x907423*/
          {
            v17 = 0xC * v16; /*0x907428*/
            v97 = 0xC * v16; /*0x90742b*/
            do /*0x907458*/
            {
              v18 = (_DWORD *)(*v10 + v17); /*0x907432*/
              *v18 = v18[3]; /*0x907439*/
              v18[1] = v18[4]; /*0x90743e*/
              v18[2] = v18[5]; /*0x907444*/
              ++v16; /*0x90744e*/
              v17 = v97 + 0xC; /*0x90744f*/
              v97 += 0xC; /*0x907454*/
            }
            while ( v16 < v10[1] ); /*0x907458*/
            i = v93; /*0x90745a*/
          }
          v6 = v112; /*0x907462*/
          v12 = v111; /*0x907466*/
          v9 -= 0xC; /*0x90746a*/
          v87 -= 0xC; /*0x907470*/
        }
        else
        {
          while ( *(_DWORD *)v9 != *(_DWORD *)i ) /*0x9073e4*/
          {
            i += 4; /*0x9073ee*/
            if ( i == v90 ) /*0x9073f3*/
            {
              v93 = i; /*0x9073f5*/
              goto LABEL_12; /*0x9073f5*/
            }
          }
          i += 4; /*0x907526*/
        }
      }
      else
      {
        i += 4; /*0x9073cc*/
      }
    }
    v19 = v10[1]; /*0x907483*/
    if ( v6 != v19 ) /*0x907488*/
    {
      v20 = (char *)*v10; /*0x90748e*/
      v98 = *v10 + 0xC * v19; /*0x90749b*/
      v21 = v12; /*0x90749f*/
      v88 = v12; /*0x9074a1*/
      v91 = &v12[4 * v6]; /*0x9074a5*/
      if ( v12 != v91 ) /*0x9074a9*/
      {
        do /*0x90765e*/
        {
          if ( v20 == (char *)v98 || *(_DWORD *)v20 != *(_DWORD *)v21 ) /*0x9074ba*/
          {
            v22 = v21 - v12; /*0x9074c2*/
            v23 = v19 + 1; /*0x9074c4*/
            v24 = v22 >> 2; /*0x9074c7*/
            v103 = (__m128 *)(v19 - v24); /*0x9074cc*/
            v25 = v10[2] & 0x3FFFFFFF; /*0x9074d3*/
            v104 = (char *)v23; /*0x9074da*/
            if ( v25 < v23 ) /*0x9074de*/
            {
              v26 = 2 * v25; /*0x9074e0*/
              if ( v23 >= v26 ) /*0x9074e4*/
                v26 = v23; /*0x9074e6*/
              sub_8A6E40((const void **)v10, v26, 0xC); /*0x9074ec*/
            }
            v27 = 0xC * v24; /*0x9074f9*/
            v28 = 0xC * v24 + *v10; /*0x9074fc*/
            v102 = v28 + 0xC; /*0x907507*/
            if ( (int)&v103[0xFFFFFFFF].m128_i32[3] + 3 >= 0 ) /*0x90750b*/
            {
              v29 = (_DWORD *)(v28 + 0xC + 0xC * ((_DWORD)v103 + 0xFFFFFFFF)); /*0x907510*/
              v30 = (__m128 *)(v28 - v102); /*0x907513*/
              v31 = v103; /*0x907517*/
              v103 = v30; /*0x907518*/
              v99 = v31; /*0x90751c*/
              while ( 1 ) /*0x907532*/
              {
                v32 = (__int32 *)((char *)v30->m128_i32 + (_DWORD)v29); /*0x907532*/
                *v29 = *v32; /*0x907538*/
                v29[1] = v32[1]; /*0x90753d*/
                v29[2] = v32[2]; /*0x907543*/
                v29 += 0xFFFFFFFD; /*0x90754a*/
                v99 = (__m128 *)((char *)v99 + 0xFFFFFFFF); /*0x90754e*/
                if ( !v99 ) /*0x907552*/
                  break; /*0x907552*/
                v30 = v103; /*0x90752e*/
              }
              v23 = (int)v104; /*0x907554*/
            }
            v33 = (char *)*v10; /*0x90755c*/
            v34 = v115; /*0x90755e*/
            v10[1] = v23; /*0x907565*/
            v35 = *(_DWORD *)v88; /*0x907568*/
            v20 = &v33[v27]; /*0x907572*/
            v36 = (*(int (__thiscall **)(int, _DWORD, _BYTE *))(*(_DWORD *)v34 + 0x28))(v34, *(_DWORD *)v88, v120); /*0x907577*/
            v117 = v35; /*0x90757a*/
            v116 = v36; /*0x907585*/
            if ( *(_BYTE *)(**(int (__thiscall ***)(__int32, char *, __m128 *, __m128 **, int *, int, _DWORD))a4->m128_i32[1])( /*0x9075b3*/
                             a4->m128_i32[1],
                             (char *)&v101 + 3,
                             a4,
                             a2,
                             &v116,
                             v115,
                             *(_DWORD *)v88) )
            {
              v94 = a4->m128_i32[0]; /*0x9075c1*/
              v37 = (*(int (__thiscall **)(_DWORD))((*a2)->m128_i32[0] + 8))(*a2); /*0x9075d1*/
              v38 = (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116); /*0x9075d5*/
              if ( a4->m128_i8[0xC] ) /*0x9075db*/
                v39 = v94 + 0x590; /*0x9075e6*/
              else
                v39 = v94 + 0x190; /*0x9075ee*/
              v40 = (int (__stdcall ***)(char))(*(int (__cdecl **)(__m128 **, int *, __m128 *, _DWORD *))(v94 + 0x14 * *(unsigned __int8 *)(v39 + 0x20 * v37 + v38) + 0x990))( /*0x907620*/
                                                 a2,
                                                 &v116,
                                                 a4,
                                                 v105);
            }
            else
            {
              v40 = sub_8E0970(); /*0x907627*/
            }
            v21 = v88; /*0x90762c*/
            *((_DWORD *)v20 + 2) = v40; /*0x907630*/
            *(_DWORD *)v20 = *(_DWORD *)v88; /*0x907639*/
            v19 = v10[1]; /*0x90763b*/
            v12 = v111; /*0x907646*/
            v98 = *v10 + 0xC * v19; /*0x90764a*/
          }
          v21 += 4; /*0x907652*/
          v20 += 0xC; /*0x907655*/
          v88 = v21; /*0x90765a*/
        }
        while ( v21 != v91 ); /*0x90765e*/
      }
    }
  }
  result = v113; /*0x907ad7*/
  if ( v113 >= 0 ) /*0x907add*/
  {
    v86 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x907aef*/
    if ( !v86 ) /*0x907af7*/
      v86 = unk_BA7D9C; /*0x907af9*/
    return sub_8A75D0(v86, v12, 4 * v113, 0x14); /*0x907b0d*/
  }
  return result; /*0x907b12*/
}
