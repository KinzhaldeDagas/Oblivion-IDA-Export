FreeEntry *__cdecl sub_40FEE0(
        FreeEntry *a1,
        unsigned int a2,
        unsigned int a3,
        FreeEntry *a4,
        unsigned int a5,
        FreeEntry *a6)
{
  unsigned int v7; // edx
  unsigned int v8; // ebp
  FreeEntry *v9; // eax
  FreeEntry *v10; // esi
  FreeEntry *v11; // ebp
  int *i; // edi
  FreeEntry *j; // ebx
  int next; // eax
  FreeEntry *k; // ebx
  int v16; // eax
  FreeEntry *v17; // edi
  FreeEntry *v18; // eax
  FreeEntry *prev; // ecx
  FreeEntry *v21; // eax
  bool v22; // zf
  FreeEntry **v23; // eax
  size_t v24; // [esp-8h] [ebp-2Ch]
  int v25; // [esp+0h] [ebp-24h]
  unsigned int v26; // [esp+10h] [ebp-14h]
  unsigned int v27; // [esp+14h] [ebp-10h]
  unsigned int v28; // [esp+18h] [ebp-Ch]
  unsigned int v29; // [esp+1Ch] [ebp-8h]
  unsigned int v30; // [esp+38h] [ebp+14h]

  v7 = a2 % a5; /*0x40fef1*/
  v30 = a2 / a5; /*0x40ff02*/
  v29 = v7; /*0x40ff08*/
  v27 = sub_40F640(v7); /*0x40ff15*/
  v26 = a3 / a5; /*0x40ff1f*/
  v28 = sub_40F640(a3 % a5); /*0x40ff2e*/
  HIDWORD(v24) = 1; /*0x40ff3c*/
  v8 = (a3 + a5 - 1) / a5 * ((a5 + a2 - 1) / a5); /*0x40ff4b*/
  LODWORD(v24) = 4 * v8 + 0x48; /*0x40ff55*/
  v9 = j_MemoryHeap_Alloc(&FormHeap, v8, v24, v25); /*0x40ff56*/
  v10 = v9; /*0x40ff5b*/
  if ( v9 ) /*0x40ff5f*/
  {
    _memset((int)v9, 0, 0x48u); /*0x40ff6a*/
    v10[1].next = (FreeEntry *)a2; /*0x40ff77*/
    v10[1].prev = a4; /*0x40ff7e*/
    v10[5].next = (FreeEntry *)v27; /*0x40ff85*/
    v10->prev = a1; /*0x40ff8c*/
    v10[6].prev = (FreeEntry *)v28; /*0x40ff92*/
    v10[2].prev = (FreeEntry *)a3; /*0x40ff99*/
    v10[6].next = (FreeEntry *)v29; /*0x40ffa0*/
    v10[4].next = (FreeEntry *)v30; /*0x40ffa7*/
    v10[4].prev = (FreeEntry *)v8; /*0x40ffb1*/
    v10[7].prev = (FreeEntry *)(a3 % a5); /*0x40ffb4*/
    v11 = 0; /*0x40ffbe*/
    v10[3].next = (FreeEntry *)(((_DWORD)a4 * a2 + 0xF) & 0xFFFFFFF0); /*0x40ffc2*/
    v10[8].prev = v10 + 9; /*0x40ffc5*/
    v10[5].prev = (FreeEntry *)v26; /*0x40ffc8*/
    v10[7].next = (FreeEntry *)a5; /*0x40ffcb*/
    v10->next = a6; /*0x40ffce*/
    for ( i = (int *)&v10[9]; v11 < v10[5].prev; v11 = (FreeEntry *)((char *)v11 + 1) ) /*0x40ffd3*/
    {
      for ( j = 0; j < v10[4].next; ++i ) /*0x40ffd7*/
      {
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, (int)v10[7].next, (int)v10[7].next); /*0x40fffb*/
        j = (FreeEntry *)((char *)j + 1); /*0x40fffd*/
      }
      next = (int)v10[5].next; /*0x41000b*/
      if ( next ) /*0x410010*/
        *i++ = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, next, (int)v10[7].next); /*0x410030*/
    }
    if ( v10[6].prev ) /*0x41003d*/
    {
      for ( k = 0; k < v10[4].next; ++i ) /*0x410045*/
      {
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, (int)v10[7].next, (int)v10[6].prev); /*0x41006e*/
        k = (FreeEntry *)((char *)k + 1); /*0x410070*/
      }
      v16 = (int)v10[5].next; /*0x41007e*/
      if ( v16 ) /*0x410083*/
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, v16, (int)v10[6].prev); /*0x4100a3*/
    }
    v17 = 0; /*0x4100a5*/
    v18 = 0; /*0x4100a7*/
    if ( !v10[4].prev ) /*0x4100ac*/
    {
LABEL_17:
      v10[3].prev = 0; /*0x4100c0*/
      return v10; /*0x4100cc*/
    }
    prev = v10[8].prev; /*0x4100ae*/
    while ( prev->prev ) /*0x4100b3*/
    {
      v18 = (FreeEntry *)((char *)v18 + 1); /*0x4100b5*/
      prev = (FreeEntry *)((char *)prev + 4); /*0x4100b8*/
      if ( v18 >= v10[4].prev ) /*0x4100be*/
        goto LABEL_17; /*0x4100be*/
    }
    do /*0x4100f6*/
    {
      v21 = v10[8].prev; /*0x4100d0*/
      v22 = *((_DWORD *)&v21->prev + (_DWORD)v17) == 0; /*0x4100d3*/
      v23 = &v21->prev + (_DWORD)v17; /*0x4100d7*/
      if ( !v22 ) /*0x4100da*/
      {
        ((void (__stdcall *)(FreeEntry *))(*v23)->prev[1].prev)(*v23); /*0x4100e4*/
        *((_DWORD *)&v10[8].prev->prev + (_DWORD)v17) = 0; /*0x4100e9*/
      }
      v17 = (FreeEntry *)((char *)v17 + 1); /*0x4100f0*/
    }
    while ( v17 < v10[4].prev ); /*0x4100f6*/
    MemoryHeap_Free_checked(v10); /*0x4100fe*/
  }
  return 0; /*0x4100c3*/
}
