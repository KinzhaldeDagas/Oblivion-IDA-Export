int __thiscall sub_919490(int this, int a2, int a3)
{
  int v3; // eax
  int v4; // edi
  _DWORD *v5; // esi
  unsigned __int64 v6; // rax
  int v7; // eax
  int v8; // edi
  const void **v9; // ebx
  int v10; // esi
  int v11; // edi
  _WORD *v12; // esi
  char *v13; // eax
  char *v14; // esi
  int v15; // eax
  _WORD *v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // ecx
  int v22; // ebx
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  int v25; // esi
  _DWORD *v26; // esi
  int i; // edi
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // edi
  const void **v35; // ebx
  int v36; // esi
  int v37; // edi
  _WORD *v38; // esi
  char *v39; // eax
  char *v40; // esi
  int v41; // eax
  _WORD *v42; // esi
  int v43; // esi
  int v44; // eax
  int v45; // ecx
  int v46; // ebx
  __m128 v47; // xmm0
  __m128 v48; // xmm1
  _DWORD *v49; // esi
  double v50; // st7
  int j; // edi
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  _DWORD *ThreadLocalStoragePointer; // ecx
  unsigned __int64 v57; // rax
  int v58; // esi
  _DWORD *v59; // ecx
  int v61; // [esp+30h] [ebp-90h]
  int v62; // [esp+30h] [ebp-90h]
  int v63; // [esp+30h] [ebp-90h]
  int v64; // [esp+30h] [ebp-90h]
  int v65; // [esp+30h] [ebp-90h]
  int v66; // [esp+30h] [ebp-90h]
  char *v67; // [esp+34h] [ebp-8Ch]
  char *v68; // [esp+34h] [ebp-8Ch]
  float v69; // [esp+34h] [ebp-8Ch]
  int v70; // [esp+38h] [ebp-88h]
  int v71; // [esp+38h] [ebp-88h]
  int v72; // [esp+38h] [ebp-88h]
  int v73; // [esp+38h] [ebp-88h]
  int v74; // [esp+3Ch] [ebp-84h]
  int v75; // [esp+3Ch] [ebp-84h]
  int v76; // [esp+3Ch] [ebp-84h]
  int v77; // [esp+3Ch] [ebp-84h]
  const void *v79[8]; // [esp+44h] [ebp-7Ch] BYREF
  char *v80; // [esp+64h] [ebp-5Ch] BYREF
  int v81; // [esp+68h] [ebp-58h]
  int v82; // [esp+6Ch] [ebp-54h]
  __m128 v83; // [esp+70h] [ebp-50h] BYREF
  __m128 v84; // [esp+80h] [ebp-40h]
  __m128 v85; // [esp+90h] [ebp-30h]
  __m128 v86; // [esp+A0h] [ebp-20h] BYREF
  __m128 v87; // [esp+B0h] [ebp-10h]

  v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x9194ab*/
  if ( *(_DWORD *)(v3 + 0x1A4) < *(_DWORD *)(v3 + 0x1A8) ) /*0x9194c1*/
  {
    v4 = v3; /*0x9194c3*/
    v5 = *(_DWORD **)(v3 + 0x1A4); /*0x9194c5*/
    *v5 = "TthkSimulationIslandViewer"; /*0x9194cb*/
    v6 = __rdtsc(); /*0x9194d1*/
    v5[1] = v6; /*0x9194db*/
    *(_DWORD *)(v4 + 0x1A4) = v5 + 3; /*0x9194e1*/
  }
  if ( *(_BYTE *)(this + 4) )
  {
    v7 = *(_DWORD *)(a2 + 0x3C); /*0x9194f5*/
    v61 = v7; /*0x9194ff*/
    if ( v7 > *(_DWORD *)(this + 0x18) )
    {
      v8 = *(_DWORD *)(this + 0x18); /*0x919509*/
      v9 = (const void **)(this + 0x14); /*0x91950c*/
      if ( v7 >= v8 )
      {
        v74 = *(_DWORD *)(this + 0x1C); /*0x91953d*/
        if ( v7 > (v74 & 0x3FFFFFFF) )
        {
          if ( v7 < 2 * (v74 & 0x3FFFFFFF) ) /*0x919553*/
            v7 = 2 * (v74 & 0x3FFFFFFF); /*0x919555*/
          v79[3] = *v9; /*0x91955b*/
          *v9 = 0; /*0x91955f*/
          *(_DWORD *)(this + 0x18) = 0; /*0x919565*/
          *(_DWORD *)(this + 0x1C) = 0x80000000; /*0x91956c*/
          if ( v7 > 0 )
            sub_8A6E40(v9, v7 < 0 ? 0 : v7, 0x80);
          v12 = *v9; /*0x919590*/
          if ( v8 > 0 ) /*0x919592*/
          {
            v13 = (char *)((char *)v79[3] - (char *)v12); /*0x919598*/
            v67 = (char *)((char *)v79[3] - (char *)v12); /*0x91959a*/
            v70 = v8; /*0x91959e*/
            do /*0x9195c3*/
            {
              if ( v12 ) /*0x9195a4*/
              {
                sub_9193A0(v12, (int)&v13[(_DWORD)v12]); /*0x9195ab*/
                v13 = v67; /*0x9195b0*/
              }
              v12 += 0x40; /*0x9195b8*/
              --v70; /*0x9195bf*/
            }
            while ( v70 ); /*0x9195c3*/
          }
          *(_DWORD *)(this + 0x18) = v8; /*0x9195c7*/
          if ( v8 > 0 ) /*0x9195ca*/
          {
            v14 = (char *)v79[3]; /*0x9195cc*/
            v71 = v8; /*0x9195d0*/
            do /*0x9195eb*/
            {
              (**(void (__thiscall ***)(const void *, _DWORD))v14)(v14, 0); /*0x9195da*/
              v14 += 0x80; /*0x9195e0*/
              --v71; /*0x9195e7*/
            }
            while ( v71 ); /*0x9195eb*/
          }
          if ( v74 >= 0 ) /*0x9195f3*/
          {
            v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x919605*/
            if ( !v15 ) /*0x91960d*/
              v15 = unk_BA7D9C; /*0x91960f*/
            sub_8A75D0(v15, (_DWORD *)v79[3], v74 << 7, 0x14); /*0x91962b*/
          }
        }
        if ( v8 < v61 ) /*0x919638*/
        {
          v16 = (char *)*v9 + 0x80 * v8; /*0x91963f*/
          v75 = v61 - v8; /*0x919645*/
          do /*0x91966a*/
          {
            if ( v16 ) /*0x919652*/
              sub_949300(v16); /*0x919656*/
            v16 += 0x40; /*0x91965f*/
            --v75; /*0x919666*/
          }
          while ( v75 ); /*0x91966a*/
        }
      }
      else
      {
        v10 = v7 << 7; /*0x919515*/
        v11 = v8 - v7; /*0x919518*/
        do /*0x919533*/
        {
          (**(void (__thiscall ***)(int, _DWORD))((char *)*v9 + v10))((int)*v9 + v10, 0); /*0x91952a*/
          v10 += 0x80; /*0x91952c*/
          --v11; /*0x919532*/
        }
        while ( v11 ); /*0x919533*/
      }
      *(_DWORD *)(this + 0x18) = v61; /*0x919670*/
    }
    v17 = *(_DWORD *)(a2 + 0x3C); /*0x919676*/
    v18 = 0; /*0x919679*/
    v79[0] = 0; /*0x91967d*/
    v79[1] = 0; /*0x919681*/
    v79[2] = (const void *)0x80000000; /*0x919685*/
    if ( v17 > 0 ) /*0x91968d*/
    {
      LOBYTE(v18) = v17 < 0; /*0x919691*/
      sub_8A6E40(v79, v17 & (v18 - 1), 4); /*0x91969f*/
    }
    v19 = 0; /*0x9196aa*/
    v79[1] = (const void *)v17; /*0x9196ac*/
    v20 = *(_DWORD *)(a2 + 0x3C); /*0x9196b0*/
    v80 = 0; /*0x9196b5*/
    v81 = 0; /*0x9196b9*/
    v82 = 0x80000000; /*0x9196bd*/
    if ( v20 > 0 ) /*0x9196c5*/
    {
      LOBYTE(v19) = v20 < 0; /*0x9196c9*/
      sub_8A6E40((const void **)&v80, v20 & (v19 - 1), 0x20); /*0x9196d7*/
    }
    v21 = *(_DWORD *)(a2 + 0x3C); /*0x9196e2*/
    v22 = 0; /*0x9196e5*/
    v81 = v20; /*0x9196e9*/
    if ( v21 > 0 ) /*0x9196ed*/
    {
      v23 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0); /*0x919711*/
      v24 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x919715*/
      v84 = v23; /*0x919719*/
      v85 = v24; /*0x91971e*/
      v62 = 0; /*0x919723*/
      v72 = 0; /*0x919727*/
      while ( 1 ) /*0x91973d*/
      {
        v25 = *(_DWORD *)(*(_DWORD *)(a2 + 0x38) + 4 * v22); /*0x91973d*/
        *(__m128 *)&v80[v72 + 0x10] = v23; /*0x919748*/
        *(__m128 *)&v80[v72] = v24; /*0x919751*/
        v26 = (_DWORD *)(v25 + 0x34); /*0x919755*/
        *(__m128 *)&v79[3] = v23; /*0x919758*/
        v83 = v24; /*0x91975d*/
        for ( i = 0; i < v26[1]; ++i ) /*0x919769*/
        {
          v28 = *(_DWORD *)(*v26 + 4 * i); /*0x919772*/
          v29 = *(_DWORD *)(v28 + 0x14); /*0x919775*/
          v30 = v28 + 0x14; /*0x919778*/
          if ( v29 ) /*0x91977d*/
          {
            (*(void (__thiscall **)(_DWORD, int, __m128 *))(**(_DWORD **)(a2 + 0x64) + 0x24))( /*0x919799*/
              *(_DWORD *)(a2 + 0x64),
              v30 + 0x14,
              &v86);
            *(__m128 *)&v79[3] = _mm_max_ps(*(__m128 *)&v79[3], v87); /*0x9197b4*/
            v83 = _mm_min_ps(v83, v86); /*0x9197c1*/
          }
        }
        sub_9492E0((_OWORD *)(v62 + *(_DWORD *)(this + 0x14)), &v83, &v79[3]); /*0x9197e5*/
        v72 += 0x20; /*0x9197fa*/
        *((_DWORD *)v79[0] + v22++) = v62 + *(_DWORD *)(this + 0x14); /*0x919801*/
        v62 += 0x80; /*0x919810*/
        if ( v22 >= *(_DWORD *)(a2 + 0x3C) ) /*0x919814*/
          break; /*0x919814*/
        v23 = v84; /*0x91972d*/
        v24 = v85; /*0x919732*/
      }
    }
    (*(void (__thiscall **)(_DWORD, const void **, unsigned int, int))(**(_DWORD **)(this - 0x10) + 0x24))( /*0x919833*/
      *(_DWORD *)(this - 0x10),
      v79,
      0xFF0000FF,
      unk_BA8418);
    if ( v82 >= 0 ) /*0x91983c*/
    {
      v31 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91984e*/
      if ( !v31 ) /*0x919856*/
        v31 = unk_BA7D9C; /*0x919858*/
      sub_8A75D0(v31, v80, 0x20 * v82, 0x14); /*0x91986e*/
    }
    if ( (int)v79[2] >= 0 ) /*0x919879*/
    {
      v32 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91988b*/
      if ( !v32 ) /*0x919893*/
        v32 = unk_BA7D9C; /*0x919895*/
      sub_8A75D0(v32, (_DWORD *)v79[0], 4 * (int)v79[2], 0x14); /*0x9198ab*/
    }
  }
  if ( *(_BYTE *)(this + 5) )
  {
    v33 = *(_DWORD *)(a2 + 0x48); /*0x9198c2*/
    v73 = v33; /*0x9198cc*/
    if ( v33 > *(_DWORD *)(this + 0xC) )
    {
      v34 = *(_DWORD *)(this + 0xC); /*0x9198d6*/
      v35 = (const void **)(this + 8); /*0x9198d9*/
      if ( v33 >= v34 )
      {
        v76 = *(_DWORD *)(this + 0x10); /*0x919904*/
        if ( v33 > (v76 & 0x3FFFFFFF) )
        {
          if ( v33 < 2 * (v76 & 0x3FFFFFFF) ) /*0x91991a*/
            v33 = 2 * (v76 & 0x3FFFFFFF); /*0x91991c*/
          v79[3] = *v35; /*0x919922*/
          *v35 = 0; /*0x919926*/
          *(_DWORD *)(this + 0xC) = 0; /*0x91992c*/
          *(_DWORD *)(this + 0x10) = 0x80000000; /*0x919933*/
          if ( v33 > 0 )
            sub_8A6E40(v35, v33 < 0 ? 0 : v33, 0x80);
          v38 = *v35; /*0x919957*/
          if ( v34 > 0 ) /*0x919959*/
          {
            v39 = (char *)((char *)v79[3] - (char *)v38); /*0x91995f*/
            v68 = (char *)((char *)v79[3] - (char *)v38); /*0x919961*/
            v63 = v34; /*0x919965*/
            do /*0x919991*/
            {
              if ( v38 ) /*0x919972*/
              {
                sub_9193A0(v38, (int)&v39[(_DWORD)v38]); /*0x919979*/
                v39 = v68; /*0x91997e*/
              }
              v38 += 0x40; /*0x919986*/
              --v63; /*0x91998d*/
            }
            while ( v63 ); /*0x919991*/
          }
          *(_DWORD *)(this + 0xC) = v34; /*0x919995*/
          if ( v34 > 0 ) /*0x919998*/
          {
            v40 = (char *)v79[3]; /*0x91999a*/
            v64 = v34; /*0x91999e*/
            do /*0x9199b9*/
            {
              (**(void (__thiscall ***)(const void *, _DWORD))v40)(v40, 0); /*0x9199a8*/
              v40 += 0x80; /*0x9199ae*/
              --v64; /*0x9199b5*/
            }
            while ( v64 ); /*0x9199b9*/
          }
          if ( v76 >= 0 ) /*0x9199c1*/
          {
            v41 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x9199d3*/
            if ( !v41 ) /*0x9199db*/
              v41 = unk_BA7D9C; /*0x9199dd*/
            sub_8A75D0(v41, (_DWORD *)v79[3], v76 << 7, 0x14); /*0x9199f9*/
          }
        }
        if ( v34 < v73 ) /*0x919a06*/
        {
          v42 = (char *)*v35 + 0x80 * v34; /*0x919a0d*/
          v65 = v73 - v34; /*0x919a13*/
          do /*0x919a31*/
          {
            if ( v42 ) /*0x919a19*/
              sub_949300(v42); /*0x919a1d*/
            v42 += 0x40; /*0x919a26*/
            --v65; /*0x919a2d*/
          }
          while ( v65 ); /*0x919a31*/
        }
      }
      else
      {
        v36 = v33 << 7; /*0x9198e2*/
        v37 = v34 - v33; /*0x9198e5*/
        do /*0x9198fa*/
        {
          (**(void (__thiscall ***)(int, _DWORD))((char *)*v35 + v36))((int)*v35 + v36, 0); /*0x9198f1*/
          v36 += 0x80; /*0x9198f3*/
          --v37; /*0x9198f9*/
        }
        while ( v37 ); /*0x9198fa*/
      }
      *(_DWORD *)(this + 0xC) = v73; /*0x919a37*/
    }
    v43 = *(_DWORD *)(a2 + 0x48); /*0x919a3d*/
    v44 = 0; /*0x919a40*/
    v79[0] = 0; /*0x919a44*/
    v79[1] = 0; /*0x919a48*/
    v79[2] = (const void *)0x80000000; /*0x919a4c*/
    if ( v43 > 0 ) /*0x919a54*/
    {
      LOBYTE(v44) = v43 < 0; /*0x919a58*/
      sub_8A6E40(v79, v43 & (v44 - 1), 4); /*0x919a66*/
    }
    v45 = *(_DWORD *)(a2 + 0x48); /*0x919a71*/
    v46 = 0; /*0x919a74*/
    v79[1] = (const void *)v43; /*0x919a78*/
    v66 = 0; /*0x919a7c*/
    if ( v45 > 0 ) /*0x919a80*/
    {
      v47 = _mm_shuffle_ps((__m128)0xFF7FFFFF, (__m128)0xFF7FFFFF, 0); /*0x919aa2*/
      v48 = _mm_shuffle_ps((__m128)0x7F7FFFFFu, (__m128)0x7F7FFFFFu, 0); /*0x919aa6*/
      v85 = v47; /*0x919aaa*/
      v84 = v48; /*0x919aaf*/
      v77 = 0; /*0x919ab4*/
      while ( 1 ) /*0x919ad3*/
      {
        v49 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(a2 + 0x44) + 4 * v46) + 0x34); /*0x919ad3*/
        v50 = *(float *)(*(_DWORD *)(a2 + 0x74) + 8) * kHeadBodyNormalMatchRadius; /*0x919ad6*/
        v83 = v47; /*0x919adc*/
        *(__m128 *)&v79[3] = v48; /*0x919ae1*/
        for ( j = 0; j < v49[1]; ++j ) /*0x919af1*/
        {
          v52 = *(_DWORD *)(*v49 + 4 * j); /*0x919af5*/
          v53 = *(_DWORD *)(v52 + 0x14); /*0x919af8*/
          v54 = v52 + 0x14; /*0x919afb*/
          if ( v53 ) /*0x919b00*/
          {
            v69 = v50; /*0x919aeb*/
            (*(void (__thiscall **)(int, _DWORD, _DWORD, __m128 *))(*(_DWORD *)v53 + 0xC))( /*0x919b15*/
              v53,
              *(_DWORD *)(v54 + 8),
              LODWORD(v69),
              &v86);
            v46 = v66; /*0x919b25*/
            v83 = _mm_max_ps(v83, v87); /*0x919b34*/
            *(__m128 *)&v79[3] = _mm_min_ps(*(__m128 *)&v79[3], v86); /*0x919b41*/
          }
        }
        sub_9492E0((_OWORD *)(v77 + *(_DWORD *)(this + 8)), &v79[3], &v83); /*0x919b65*/
        *((_DWORD *)v79[0] + v46++) = v77 + *(_DWORD *)(this + 8); /*0x919b76*/
        v66 = v46; /*0x919b85*/
        v77 += 0x80; /*0x919b89*/
        if ( v46 >= *(_DWORD *)(a2 + 0x48) ) /*0x919b8d*/
          break; /*0x919b8d*/
        v47 = v85; /*0x919aba*/
        v48 = v84; /*0x919abf*/
      }
    }
    (*(void (__thiscall **)(_DWORD, const void **, unsigned int, int))(**(_DWORD **)(this - 0x10) + 0x24))( /*0x919bac*/
      *(_DWORD *)(this - 0x10),
      v79,
      0xFF008000,
      unk_BA8418);
    if ( (int)v79[2] >= 0 ) /*0x919bb5*/
    {
      v55 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x919bc7*/
      if ( !v55 ) /*0x919bcf*/
        v55 = unk_BA7D9C; /*0x919bd1*/
      sub_8A75D0(v55, (_DWORD *)v79[0], 4 * (int)v79[2], 0x14); /*0x919be7*/
    }
  }
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x919bec*/
  LODWORD(v57) = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x919bf9*/
  if ( *(_DWORD *)(v57 + 0x1A4) < *(_DWORD *)(v57 + 0x1A8) ) /*0x919c08*/
  {
    v58 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x919c0a*/
    v59 = *(_DWORD **)(v57 + 0x1A4); /*0x919c0c*/
    *v59 = "Et"; /*0x919c12*/
    v57 = __rdtsc(); /*0x919c18*/
    v59[1] = v57; /*0x919c22*/
    *(_DWORD *)(v58 + 0x1A4) = v59 + 3; /*0x919c28*/
  }
  return v57; /*0x919c2e*/
}
