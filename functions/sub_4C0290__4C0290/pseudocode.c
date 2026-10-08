void __usercall sub_4C0290(_DWORD *this@<ecx>, int a2@<edi>)
{
  _DWORD *v2; // ebx
  int v3; // ebp
  int i; // esi
  _DWORD *v5; // edi
  int v6; // eax
  unsigned int v7; // edi
  unsigned int j; // esi
  FreeEntry *v9; // ebx
  double v10; // st6
  double v11; // st5
  double v12; // rt0
  unsigned int v13; // eax
  int v14; // ecx
  bool v15; // zf
  _DWORD *v16; // ecx
  double v17; // rt1
  double v18; // st5
  double v19; // st6
  double v20; // rt2
  double v21; // rtt
  float v22; // ebp
  unsigned int v23; // ecx
  int v24; // esi
  float *v25; // edx
  size_t v26; // [esp-14h] [ebp-30h]
  int v27; // [esp-Ch] [ebp-28h]
  float v28; // [esp+4h] [ebp-18h]
  float v29; // [esp+4h] [ebp-18h]
  float v30; // [esp+8h] [ebp-14h]
  int v31; // [esp+Ch] [ebp-10h]
  int v33; // [esp+14h] [ebp-8h]
  float v34; // [esp+18h] [ebp-4h]
  float v35; // [esp+18h] [ebp-4h]

  v2 = this; /*0x4c0294*/
  if ( !*(this + 9) ) /*0x4c029e*/
    return; /*0x4c029e*/
  v3 = 0x30; /*0x4c02a6*/
  v27 = a2; /*0x4c02ab*/
  v30 = 0.0; /*0x4c02ac*/
  v33 = 0x30; /*0x4c02b4*/
  while ( 2 ) /*0x4c02c8*/
  {
    for ( i = 0; i < 8; ++i ) /*0x4c02c8*/
    {
      v5 = (_DWORD *)(*(_DWORD *)(v2[9] + v3) + 4 * i); /*0x4c02da*/
      if ( *v5 ) /*0x4c02d6*/
      {
        v34 = sub_4BF550(v2, LOBYTE(v30), i) / dbl_A45EA8; /*0x4c02f2*/
        if ( v34 < (double)flt_A37080 ) /*0x4c0305*/
          *v5 = 0; /*0x4c0307*/
      }
    }
    v6 = *(_DWORD *)(v2[9] + v3); /*0x4c0318*/
    v7 = 8; /*0x4c031b*/
    for ( j = 0; j < v7; ++j ) /*0x4c0320*/
    {
      for ( ; !*(_DWORD *)(v6 + 4 * j); --v7 ) /*0x4c0322*/
      {
        if ( j >= v7 ) /*0x4c032a*/
          break; /*0x4c032a*/
        sub_4BF2F0(v2, LOBYTE(v30), j); /*0x4c0334*/
        v6 = *(_DWORD *)(v2[9] + v3); /*0x4c033c*/
      }
    }
    HIDWORD(v26) = 1; /*0x4c034f*/
    LODWORD(v26) = 4 * v7 + 4; /*0x4c0358*/
    v9 = j_MemoryHeap_Alloc(&FormHeap, v3, v26, v27); /*0x4c0364*/
    _memset((int)v9, 0, 4 * v7 + 4); /*0x4c0369*/
    v10 = 1.0; /*0x4c0370*/
    v11 = 0.0; /*0x4c0375*/
    v31 = 0; /*0x4c0377*/
    while ( 1 ) /*0x4c0383*/
    {
      v13 = 0; /*0x4c0383*/
      v28 = v11; /*0x4c0385*/
      if ( !v7 ) /*0x4c038b*/
        goto LABEL_26; /*0x4c038b*/
      do /*0x4c03f5*/
      {
        v35 = v11; /*0x4c0391*/
        if ( LOBYTE(v30) < 4u && (unsigned __int16)v31 < 0x121u && (unsigned __int16)v13 < 8u ) /*0x4c03ad*/
        {
          v14 = *(this + 9); /*0x4c03b3*/
          if ( v14 ) /*0x4c03b8*/
          {
            v15 = *(_DWORD *)(v14 + 4 * LOBYTE(v30) + 0x40) == 0; /*0x4c03bd*/
            v16 = (_DWORD *)(v14 + 4 * LOBYTE(v30) + 0x40); /*0x4c03c2*/
            if ( !v15 ) /*0x4c03c6*/
              v35 = *(float *)(*(_DWORD *)(*v16 + 4 * (unsigned __int16)v31) + 4 * (unsigned __int16)v13); /*0x4c03d6*/
          }
        }
        ++v13; /*0x4c03de*/
        *((float *)v9 + v13 - 1) = *((float *)v9 + v13 - 1) + v35; /*0x4c03e9*/
        v28 = v35 + v28; /*0x4c03f1*/
      }
      while ( v13 < v7 ); /*0x4c03f5*/
      v17 = v11; /*0x4c03f7*/
      v18 = v10; /*0x4c03f7*/
      v19 = v17; /*0x4c03f7*/
      if ( v18 > v28 ) /*0x4c0402*/
      {
        v20 = v18; /*0x4c0404*/
        v11 = v19; /*0x4c0404*/
        v10 = v20; /*0x4c0404*/
LABEL_26:
        *((float *)&v9->prev + v7) = 1.0 - v28 + *((float *)&v9->prev + v7); /*0x4c0406*/
        v21 = v11; /*0x4c0412*/
        v18 = v10; /*0x4c0412*/
        v19 = v21; /*0x4c0412*/
      }
      if ( ++v31 >= 0x121 ) /*0x4c0424*/
        break; /*0x4c0424*/
      v12 = v18; /*0x4c0381*/
      v11 = v19; /*0x4c0381*/
      v10 = v12; /*0x4c0381*/
    }
    v22 = NAN; /*0x4c042c*/
    v23 = 0; /*0x4c0431*/
    v29 = *((float *)&v9->prev + v7); /*0x4c043b*/
    if ( (int)v7 >= 4 ) /*0x4c043f*/
    {
      v24 = 2; /*0x4c0445*/
      v25 = (float *)&v9[1]; /*0x4c044a*/
      do /*0x4c04c2*/
      {
        if ( v29 < (double)v25[0xFFFFFFFE] ) /*0x4c045e*/
        {
          v22 = *(float *)&v23; /*0x4c0463*/
          v29 = v25[0xFFFFFFFE]; /*0x4c0465*/
        }
        if ( v29 < (double)v25[0xFFFFFFFF] ) /*0x4c0477*/
        {
          LODWORD(v22) = v24 - 1; /*0x4c047c*/
          v29 = v25[0xFFFFFFFF]; /*0x4c047f*/
        }
        if ( v29 < (double)*v25 ) /*0x4c0490*/
        {
          v22 = *(float *)&v24; /*0x4c0494*/
          v29 = *v25; /*0x4c0496*/
        }
        if ( v29 < (double)v25[1] ) /*0x4c04a8*/
        {
          LODWORD(v22) = v24 + 1; /*0x4c04ad*/
          v29 = v25[1]; /*0x4c04b0*/
        }
        v23 += 4; /*0x4c04b4*/
        v25 += 4; /*0x4c04ba*/
        v24 += 4; /*0x4c04bd*/
      }
      while ( v23 < v7 - 3 ); /*0x4c04c2*/
    }
    for ( ; v23 < v7; ++v23 ) /*0x4c04c6*/
    {
      if ( v29 < (double)*((float *)&v9->prev + v23) ) /*0x4c04de*/
      {
        v22 = *(float *)&v23; /*0x4c04e3*/
        v29 = *((float *)&v9->prev + v23); /*0x4c04e5*/
      }
    }
    if ( v22 != NAN ) /*0x4c04f3*/
      sub_4BF440(this, v30, v22); /*0x4c04ff*/
    MemoryHeap_Free_checked(v9); /*0x4c050a*/
    ++LODWORD(v30); /*0x4c0513*/
    v33 += 4; /*0x4c051e*/
    if ( v33 < 0x40 ) /*0x4c0522*/
    {
      v2 = this; /*0x4c02c0*/
      v3 = v33; /*0x4c02c4*/
      continue; /*0x4c02c4*/
    }
    break;
  }
}
