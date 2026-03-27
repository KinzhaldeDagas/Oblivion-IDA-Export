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

  v2 = this;
  if ( !*(this + 9) )
    return;
  v3 = 0x30;
  v27 = a2;
  v30 = 0.0;
  v33 = 0x30;
  while ( 2 )
  {
    for ( i = 0; i < 8; ++i )
    {
      v5 = (_DWORD *)(*(_DWORD *)(v2[9] + v3) + 4 * i);
      if ( *v5 )
      {
        v34 = sub_4BF550(v2, LOBYTE(v30), i) / dbl_A45EA8;
        if ( v34 < (double)flt_A37080 )
          *v5 = 0;
      }
    }
    v6 = *(_DWORD *)(v2[9] + v3);
    v7 = 8;
    for ( j = 0; j < v7; ++j )
    {
      for ( ; !*(_DWORD *)(v6 + 4 * j); --v7 )
      {
        if ( j >= v7 )
          break;
        sub_4BF2F0(v2, LOBYTE(v30), j);
        v6 = *(_DWORD *)(v2[9] + v3);
      }
    }
    HIDWORD(v26) = 1;
    LODWORD(v26) = 4 * v7 + 4;
    v9 = j_MemoryHeap_Alloc(&FormHeap, v3, v26, v27);
    _memset(v9, 0, 4 * v7 + 4);
    v10 = 1.0;
    v11 = 0.0;
    v31 = 0;
    while ( 1 )
    {
      v13 = 0;
      v28 = v11;
      if ( !v7 )
        goto LABEL_26;
      do
      {
        v35 = v11;
        if ( LOBYTE(v30) < 4u && (unsigned __int16)v31 < 0x121u && (unsigned __int16)v13 < 8u )
        {
          v14 = *(this + 9);
          if ( v14 )
          {
            v15 = *(_DWORD *)(v14 + 4 * LOBYTE(v30) + 0x40) == 0;
            v16 = (_DWORD *)(v14 + 4 * LOBYTE(v30) + 0x40);
            if ( !v15 )
              v35 = *(float *)(*(_DWORD *)(*v16 + 4 * (unsigned __int16)v31) + 4 * (unsigned __int16)v13);
          }
        }
        ++v13;
        *((float *)v9 + v13 - 1) = *((float *)v9 + v13 - 1) + v35;
        v28 = v35 + v28;
      }
      while ( v13 < v7 );
      v17 = v11;
      v18 = v10;
      v19 = v17;
      if ( v18 > v28 )
      {
        v20 = v18;
        v11 = v19;
        v10 = v20;
LABEL_26:
        *((float *)&v9->prev + v7) = 1.0 - v28 + *((float *)&v9->prev + v7);
        v21 = v11;
        v18 = v10;
        v19 = v21;
      }
      if ( ++v31 >= 0x121 )
        break;
      v12 = v18;
      v11 = v19;
      v10 = v12;
    }
    v22 = NAN;
    v23 = 0;
    v29 = *((float *)&v9->prev + v7);
    if ( (int)v7 >= 4 )
    {
      v24 = 2;
      v25 = (float *)&v9[1];
      do
      {
        if ( v29 < (double)v25[0xFFFFFFFE] )
        {
          v22 = *(float *)&v23;
          v29 = v25[0xFFFFFFFE];
        }
        if ( v29 < (double)v25[0xFFFFFFFF] )
        {
          LODWORD(v22) = v24 - 1;
          v29 = v25[0xFFFFFFFF];
        }
        if ( v29 < (double)*v25 )
        {
          v22 = *(float *)&v24;
          v29 = *v25;
        }
        if ( v29 < (double)v25[1] )
        {
          LODWORD(v22) = v24 + 1;
          v29 = v25[1];
        }
        v23 += 4;
        v25 += 4;
        v24 += 4;
      }
      while ( v23 < v7 - 3 );
    }
    for ( ; v23 < v7; ++v23 )
    {
      if ( v29 < (double)*((float *)&v9->prev + v23) )
      {
        v22 = *(float *)&v23;
        v29 = *((float *)&v9->prev + v23);
      }
    }
    if ( v22 != NAN )
      sub_4BF440(this, v30, v22);
    MemoryHeap_Free_checked(v9);
    ++LODWORD(v30);
    v33 += 4;
    if ( v33 < 0x40 )
    {
      v2 = this;
      v3 = v33;
      continue;
    }
    break;
  }
}
