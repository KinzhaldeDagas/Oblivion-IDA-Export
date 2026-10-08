int __thiscall sub_91A000(float *this, int a2, int a3)
{
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v5; // ecx
  int v6; // eax
  int v7; // esi
  _DWORD *v8; // edi
  unsigned __int64 v9; // rax
  int v10; // eax
  int v11; // ecx
  _DWORD *v12; // edi
  unsigned __int64 v13; // rax
  int v14; // edx
  int v15; // ebx
  float *v16; // esi
  int v17; // edi
  int v18; // ebx
  int v19; // eax
  _WORD *v20; // edi
  void (__thiscall ***v21)(_DWORD, _DWORD); // edi
  int v22; // eax
  _WORD *v23; // edi
  int v24; // edi
  int v25; // ebx
  int v26; // ecx
  double v27; // st7
  long double v28; // st7
  long double v29; // st6
  long double v30; // st6
  long double v31; // st5
  long double v32; // st5
  long double v33; // st5
  int v34; // edx
  int v35; // ecx
  __m128 *v36; // eax
  __m128 v37; // xmm0
  _OWORD *v38; // ecx
  _DWORD *v39; // edi
  int v40; // ebx
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  int v44; // eax
  int v45; // edi
  _DWORD *v46; // ecx
  unsigned __int64 v47; // rax
  int v48; // ebx
  int v49; // edi
  int v50; // ebx
  int v51; // eax
  _WORD *v52; // edi
  int v53; // ecx
  char *v54; // eax
  int v55; // edx
  __int16 v56; // di
  void (__thiscall ***v57)(_DWORD, _DWORD); // edi
  int v58; // eax
  _WORD *v59; // edi
  int v60; // edi
  int v61; // eax
  int v62; // eax
  int v63; // ecx
  _DWORD *v64; // esi
  int v65; // edi
  int v66; // eax
  int v67; // ebx
  _DWORD *v68; // ecx
  unsigned __int64 v69; // rax
  int v70; // eax
  int v71; // ebx
  _DWORD *v72; // ecx
  unsigned __int64 v73; // rax
  int result; // eax
  int v75; // ecx
  int v76; // [esp+10h] [ebp-C0h]
  int v77; // [esp+10h] [ebp-C0h]
  int v78; // [esp+10h] [ebp-C0h]
  float v79; // [esp+10h] [ebp-C0h]
  float v80; // [esp+10h] [ebp-C0h]
  int v81; // [esp+10h] [ebp-C0h]
  int v82; // [esp+10h] [ebp-C0h]
  int v83; // [esp+10h] [ebp-C0h]
  int v84; // [esp+14h] [ebp-BCh]
  int v85; // [esp+14h] [ebp-BCh]
  int v86; // [esp+18h] [ebp-B8h]
  int v87; // [esp+18h] [ebp-B8h]
  float *v88; // [esp+1Ch] [ebp-B4h]
  _DWORD *v89; // [esp+20h] [ebp-B0h] BYREF
  int v90; // [esp+24h] [ebp-ACh]
  float v91; // [esp+28h] [ebp-A8h]
  float v92; // [esp+2Ch] [ebp-A4h]
  __int128 v93; // [esp+30h] [ebp-A0h] BYREF
  __m128 v94; // [esp+40h] [ebp-90h] BYREF
  float v95[10]; // [esp+50h] [ebp-80h] BYREF
  float v96; // [esp+78h] [ebp-58h]
  __m128 v97; // [esp+80h] [ebp-50h] BYREF
  __m128 v98[3]; // [esp+90h] [ebp-40h] BYREF
  __m128 v99; // [esp+C0h] [ebp-10h]

  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91a00d*/
  v5 = MEMORY[0xBA9DE4]; /*0x91a017*/
  v6 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91a01d*/
  v88 = this; /*0x91a02d*/
  if ( *(_DWORD *)(v6 + 0x1A4) < *(_DWORD *)(v6 + 0x1A8) ) /*0x91a031*/
  {
    v7 = ThreadLocalStoragePointer[MEMORY[0xBA9DE4]]; /*0x91a033*/
    v8 = *(_DWORD **)(v6 + 0x1A4); /*0x91a035*/
    *v8 = "TthkRigidBodyInertiaViewer"; /*0x91a03b*/
    v9 = __rdtsc(); /*0x91a041*/
    v8[1] = v9; /*0x91a04b*/
    *(_DWORD *)(v7 + 0x1A4) = v8 + 3; /*0x91a051*/
    this = v88; /*0x91a057*/
  }
  v10 = ThreadLocalStoragePointer[v5]; /*0x91a05b*/
  if ( *(_DWORD *)(v10 + 0x1A4) < *(_DWORD *)(v10 + 0x1A8) ) /*0x91a06a*/
  {
    v11 = ThreadLocalStoragePointer[v5]; /*0x91a06c*/
    v12 = *(_DWORD **)(v10 + 0x1A4); /*0x91a06e*/
    *v12 = "TtgetProps"; /*0x91a074*/
    v13 = __rdtsc(); /*0x91a07a*/
    v12[1] = v13; /*0x91a084*/
    *(_DWORD *)(v11 + 0x1A4) = v12 + 3; /*0x91a08a*/
  }
  v14 = *((_DWORD *)this + 2); /*0x91a090*/
  v15 = *((_DWORD *)this + 5); /*0x91a093*/
  v16 = this + 4; /*0x91a096*/
  v84 = v14; /*0x91a09b*/
  if ( v14 >= v15 )
  {
    v86 = *((_DWORD *)v16 + 2); /*0x91a0c9*/
    if ( v14 > (v86 & 0x3FFFFFFF) )
    {
      v19 = 2 * (v86 & 0x3FFFFFFF); /*0x91a0de*/
      if ( v14 >= v19 ) /*0x91a0e2*/
        v19 = v14; /*0x91a0e4*/
      *(float *)&v93 = *v16; /*0x91a0ea*/
      *v16 = 0.0; /*0x91a0ee*/
      v16[1] = 0.0; /*0x91a0f4*/
      v16[2] = -0.0; /*0x91a0fb*/
      if ( v19 > 0 )
        sub_8A6E40((const void **)v16, v19 < 0 ? 0 : v19, 0x70);
      v20 = *(_WORD **)v16; /*0x91a11c*/
      if ( v15 > 0 ) /*0x91a11e*/
      {
        LODWORD(v92) = v93 - (_DWORD)v20; /*0x91a126*/
        v76 = v15; /*0x91a12a*/
        do /*0x91a14e*/
        {
          if ( v20 ) /*0x91a132*/
            sub_919F20(v20, (int)v20 + LODWORD(v92)); /*0x91a13d*/
          v20 += 0x38; /*0x91a146*/
          --v76; /*0x91a14a*/
        }
        while ( v76 ); /*0x91a14e*/
      }
      *((_DWORD *)v16 + 1) = v15; /*0x91a152*/
      if ( v15 > 0 ) /*0x91a155*/
      {
        v21 = (void (__thiscall ***)(_DWORD, _DWORD))v93; /*0x91a157*/
        v77 = v15; /*0x91a15b*/
        do /*0x91a174*/
        {
          (**v21)(v21, 0); /*0x91a166*/
          v21 += 0x1C; /*0x91a16c*/
          --v77; /*0x91a170*/
        }
        while ( v77 ); /*0x91a174*/
      }
      if ( v86 >= 0 ) /*0x91a17c*/
      {
        v22 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91a18d*/
        if ( !v22 ) /*0x91a195*/
          v22 = unk_BA7D9C; /*0x91a197*/
        sub_8A75D0(v22, (_DWORD *)v93, 0x70 * (v86 & 0x3FFFFFFF), 0x14); /*0x91a1af*/
      }
    }
    if ( v15 < v84 ) /*0x91a1bc*/
    {
      v23 = (_WORD *)(*(_DWORD *)v16 + 0x70 * v15); /*0x91a1c3*/
      v78 = v84 - v15; /*0x91a1c9*/
      do /*0x91a1e7*/
      {
        if ( v23 ) /*0x91a1d2*/
          sub_949D00(v23); /*0x91a1d6*/
        v23 += 0x38; /*0x91a1df*/
        --v78; /*0x91a1e3*/
      }
      while ( v78 ); /*0x91a1e7*/
    }
  }
  else
  {
    v17 = 0x70 * v14; /*0x91a0a5*/
    v18 = v15 - v14; /*0x91a0a8*/
    do /*0x91a0bf*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(_DWORD *)v16 + v17))(v17 + *(_DWORD *)v16, 0); /*0x91a0b9*/
      v17 += 0x70; /*0x91a0bb*/
      --v18; /*0x91a0be*/
    }
    while ( v18 ); /*0x91a0bf*/
  }
  *((_DWORD *)v16 + 1) = v84; /*0x91a1f1*/
  v24 = 0; /*0x91a1f7*/
  v85 = 0; /*0x91a1fb*/
  if ( *((int *)v88 + 2) > 0 ) /*0x91a1ff*/
  {
    v25 = 0; /*0x91a205*/
    do /*0x91a3cd*/
    {
      v79 = sub_89DA90((float *)*(_DWORD *)(*(_DWORD *)(*((_DWORD *)v88 + 1) + 4 * v24) + 0x50)); /*0x91a222*/
      if ( v79 != *(float *)&SrcStr ) /*0x91a237*/
      {
        v26 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)v88 + 1) + 4 * v24) + 0x50); /*0x91a247*/
        (*(void (__thiscall **)(int, float *))(*(_DWORD *)v26 + 0x28))(v26, v95); /*0x91a251*/
        v80 = fConstant_1 / v79; /*0x91a25e*/
        v27 = (v95[0] - v95[5] + v96) * v80 * flt_A5977C; /*0x91a272*/
        v92 = v27; /*0x91a278*/
        if ( v27 >= *(float *)&SrcStr ) /*0x91a287*/
          v28 = sqrt(v92); /*0x91a295*/
        else
          v28 = *(float *)&SrcStr; /*0x91a289*/
        v29 = v95[0] * v80 * flt_A2F918 - v92; /*0x91a2a5*/
        if ( v29 >= *(float *)&SrcStr ) /*0x91a2b4*/
          v30 = sqrt(v29); /*0x91a2c0*/
        else
          v30 = *(float *)&SrcStr; /*0x91a2b8*/
        v31 = v96 * v80 * flt_A2F918 - v92; /*0x91a2d0*/
        if ( v31 >= *(float *)&SrcStr ) /*0x91a2df*/
          v32 = sqrt(v31); /*0x91a2eb*/
        else
          v32 = *(float *)&SrcStr; /*0x91a2e3*/
        v33 = v32 * flt_A9D394; /*0x91a2ed*/
        v34 = *((_DWORD *)v88 + 1); /*0x91a2f7*/
        HIDWORD(v93) = 0; /*0x91a2fa*/
        *(float *)&v93 = v33; /*0x91a302*/
        v35 = v34 + 4 * v24; /*0x91a306*/
        *((float *)&v93 + 1) = v28 * flt_A9D394; /*0x91a311*/
        *((float *)&v93 + 2) = v30 * flt_A9D394; /*0x91a31b*/
        v36 = *(__m128 **)(*(_DWORD *)v35 + 0x50); /*0x91a321*/
        v37 = v36[1]; /*0x91a324*/
        ++v36; /*0x91a328*/
        v98[0] = v37; /*0x91a32b*/
        v98[1] = v36[1]; /*0x91a337*/
        v98[2] = v36[2]; /*0x91a343*/
        v99 = v36[3]; /*0x91a34f*/
        v97 = *(__m128 *)(*(_DWORD *)(*(_DWORD *)v35 + 0x50) + 0x90); /*0x91a377*/
        hkBasis_TransformVector(&v94, v98, &v97); /*0x91a37f*/
        v38 = (_OWORD *)(v25 + *(_DWORD *)v16); /*0x91a397*/
        ++v85; /*0x91a3a1*/
        v94 = _mm_add_ps(v94, v99); /*0x91a3ae*/
        v99 = v94; /*0x91a3b3*/
        v25 += 0x70; /*0x91a3bb*/
        sub_949D50(v38, &v93, v98); /*0x91a3be*/
      }
      ++v24; /*0x91a3ca*/
    }
    while ( v24 < *((_DWORD *)v88 + 2) ); /*0x91a3cd*/
  }
  v39 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91a3d3*/
  v40 = MEMORY[0xBA9DE4]; /*0x91a3da*/
  v41 = v39[MEMORY[0xBA9DE4]]; /*0x91a3e0*/
  if ( *(_DWORD *)(v41 + 0x1A4) < *(_DWORD *)(v41 + 0x1A8) ) /*0x91a3ef*/
  {
    v42 = *(_DWORD **)(v41 + 0x1A4); /*0x91a3f1*/
    *v42 = "Et"; /*0x91a3f7*/
    v43 = __rdtsc(); /*0x91a3fd*/
    v42[1] = v43; /*0x91a407*/
    *(_DWORD *)(v39[v40] + 0x1A4) = v42 + 3; /*0x91a410*/
  }
  v44 = v39[v40]; /*0x91a416*/
  if ( *(_DWORD *)(v44 + 0x1A4) < *(_DWORD *)(v44 + 0x1A8) ) /*0x91a425*/
  {
    v45 = v39[v40]; /*0x91a427*/
    v46 = *(_DWORD **)(v44 + 0x1A4); /*0x91a429*/
    *v46 = "TtsendProps"; /*0x91a42f*/
    v47 = __rdtsc(); /*0x91a435*/
    v46[1] = v47; /*0x91a43f*/
    *(_DWORD *)(v45 + 0x1A4) = v46 + 3; /*0x91a445*/
  }
  v48 = *((_DWORD *)v16 + 1); /*0x91a44b*/
  if ( v85 >= v48 )
  {
    v87 = *((_DWORD *)v16 + 2); /*0x91a47a*/
    if ( v85 > (v87 & 0x3FFFFFFF) )
    {
      v51 = 2 * (v87 & 0x3FFFFFFF); /*0x91a48f*/
      if ( v85 >= v51 ) /*0x91a493*/
        v51 = v85; /*0x91a495*/
      *(float *)&v93 = *v16; /*0x91a49b*/
      *v16 = 0.0; /*0x91a49f*/
      v16[1] = 0.0; /*0x91a4a5*/
      v16[2] = -0.0; /*0x91a4ac*/
      if ( v51 > 0 )
        sub_8A6E40((const void **)v16, v51 < 0 ? 0 : v51, 0x70);
      v52 = *(_WORD **)v16; /*0x91a4cd*/
      if ( v48 > 0 ) /*0x91a4cf*/
      {
        v53 = v93 + 0x40; /*0x91a4d5*/
        v54 = (char *)(v52 + 0x10); /*0x91a4d8*/
        v55 = v93 - (_DWORD)v52; /*0x91a4db*/
        v81 = v48; /*0x91a4dd*/
        do /*0x91a54e*/
        {
          if ( v54 != (char *)0x20 ) /*0x91a4e6*/
          {
            *((_DWORD *)v54 + 0xFFFFFFF8) = &hkReferencedObject::`vftable'; /*0x91a4e8*/
            *((_WORD *)v54 + 0xFFFFFFF2) = *(_WORD *)(v53 - 0x3C); /*0x91a4f3*/
            v56 = *(_WORD *)(v53 - 0x3A); /*0x91a4f7*/
            *((_DWORD *)v54 + 0xFFFFFFF8) = &off_A9B2F4; /*0x91a4fb*/
            *((_WORD *)v54 + 0xFFFFFFF3) = v56; /*0x91a502*/
            *((_OWORD *)v54 + 0xFFFFFFFF) = *(_OWORD *)(v53 - 0x30); /*0x91a50a*/
            *(_OWORD *)v54 = *(_OWORD *)&v54[v55]; /*0x91a512*/
            *((_OWORD *)v54 + 1) = *(_OWORD *)(v53 - 0x10); /*0x91a519*/
            *((_OWORD *)v54 + 2) = *(_OWORD *)v53; /*0x91a520*/
            *((_DWORD *)v54 + 0xC) = *(_DWORD *)(v53 + 0x10); /*0x91a527*/
            *((_DWORD *)v54 + 0xD) = *(_DWORD *)(v53 + 0x14); /*0x91a52d*/
            *((_DWORD *)v54 + 0xFFFFFFF8) = &off_A9D378; /*0x91a530*/
            *((_OWORD *)v54 + 4) = *(_OWORD *)(v53 + 0x20); /*0x91a53b*/
          }
          v54 += 0x70; /*0x91a543*/
          v53 += 0x70; /*0x91a546*/
          --v81; /*0x91a54a*/
        }
        while ( v81 ); /*0x91a54e*/
      }
      *((_DWORD *)v16 + 1) = v48; /*0x91a552*/
      if ( v48 > 0 ) /*0x91a555*/
      {
        v57 = (void (__thiscall ***)(_DWORD, _DWORD))v93; /*0x91a557*/
        v82 = v48; /*0x91a55b*/
        do /*0x91a574*/
        {
          (**v57)(v57, 0); /*0x91a566*/
          v57 += 0x1C; /*0x91a56c*/
          --v82; /*0x91a570*/
        }
        while ( v82 ); /*0x91a574*/
      }
      if ( v87 >= 0 ) /*0x91a57c*/
      {
        v58 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x91a58d*/
        if ( !v58 ) /*0x91a595*/
          v58 = unk_BA7D9C; /*0x91a597*/
        sub_8A75D0(v58, (_DWORD *)v93, 0x70 * (v87 & 0x3FFFFFFF), 0x14); /*0x91a5af*/
      }
    }
    if ( v48 < v85 ) /*0x91a5bc*/
    {
      v59 = (_WORD *)(*(_DWORD *)v16 + 0x70 * v48); /*0x91a5c3*/
      v83 = v85 - v48; /*0x91a5c9*/
      do /*0x91a5e7*/
      {
        if ( v59 ) /*0x91a5d2*/
          sub_949D00(v59); /*0x91a5d6*/
        v59 += 0x38; /*0x91a5df*/
        --v83; /*0x91a5e3*/
      }
      while ( v83 ); /*0x91a5e7*/
    }
  }
  else
  {
    v49 = 0x70 * v85; /*0x91a458*/
    v50 = v48 - v85; /*0x91a45b*/
    do /*0x91a470*/
    {
      (**(void (__thiscall ***)(int, _DWORD))(*(_DWORD *)v16 + v49))(*(_DWORD *)v16 + v49, 0); /*0x91a46a*/
      v49 += 0x70; /*0x91a46c*/
      --v50; /*0x91a46f*/
    }
    while ( v50 ); /*0x91a470*/
  }
  *((_DWORD *)v16 + 1) = v85; /*0x91a5f1*/
  v60 = *((_DWORD *)v88 + 5); /*0x91a5f4*/
  v61 = 0; /*0x91a5f7*/
  v89 = 0; /*0x91a5fb*/
  v90 = 0; /*0x91a5ff*/
  v91 = -0.0; /*0x91a603*/
  if ( v60 > 0 ) /*0x91a60b*/
  {
    LOBYTE(v61) = v60 < 0; /*0x91a60f*/
    sub_8A6E40((const void **)&v89, v60 & (v61 - 1), 4); /*0x91a61d*/
  }
  v62 = *((_DWORD *)v88 + 5) - 1; /*0x91a628*/
  v90 = v60; /*0x91a629*/
  if ( v62 >= 0 ) /*0x91a62d*/
  {
    v63 = 0x70 * v62; /*0x91a631*/
    do /*0x91a645*/
    {
      v89[v62--] = v63 + *(_DWORD *)v16; /*0x91a63c*/
      v63 -= 0x70; /*0x91a640*/
    }
    while ( v62 >= 0 ); /*0x91a645*/
  }
  (*(void (__thiscall **)(_DWORD, _DWORD **, unsigned int, int))(**((_DWORD **)v88 + 0xFFFFFFFB) + 0x24))( /*0x91a660*/
    *((_DWORD *)v88 + 0xFFFFFFFB),
    &v89,
    0xFFFF00FF,
    unk_BA841C);
  v64 = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x91a663*/
  v65 = MEMORY[0xBA9DE4]; /*0x91a66a*/
  v66 = v64[MEMORY[0xBA9DE4]]; /*0x91a670*/
  if ( *(_DWORD *)(v66 + 0x1A4) < *(_DWORD *)(v66 + 0x1A8) ) /*0x91a67f*/
  {
    v67 = v64[MEMORY[0xBA9DE4]]; /*0x91a681*/
    v68 = *(_DWORD **)(v66 + 0x1A4); /*0x91a683*/
    *v68 = "Et"; /*0x91a689*/
    v69 = __rdtsc(); /*0x91a68f*/
    v68[1] = v69; /*0x91a699*/
    *(_DWORD *)(v67 + 0x1A4) = v68 + 3; /*0x91a69f*/
  }
  v70 = v64[v65]; /*0x91a6a5*/
  if ( *(_DWORD *)(v70 + 0x1A4) < *(_DWORD *)(v70 + 0x1A8) ) /*0x91a6b4*/
  {
    v71 = v64[v65]; /*0x91a6b6*/
    v72 = *(_DWORD **)(v70 + 0x1A4); /*0x91a6b8*/
    *v72 = "Et"; /*0x91a6be*/
    v73 = __rdtsc(); /*0x91a6c4*/
    v72[1] = v73; /*0x91a6ce*/
    *(_DWORD *)(v71 + 0x1A4) = v72 + 3; /*0x91a6d4*/
  }
  result = LODWORD(v91); /*0x91a6da*/
  if ( v91 >= 0.0 ) /*0x91a6e0*/
  {
    v75 = *(_DWORD *)(v64[v65] + 0x19C); /*0x91a6e5*/
    if ( !v75 ) /*0x91a6ed*/
      v75 = unk_BA7D9C; /*0x91a6ef*/
    return sub_8A75D0(v75, v89, 4 * LODWORD(v91), 0x14); /*0x91a705*/
  }
  return result; /*0x91a70a*/
}
