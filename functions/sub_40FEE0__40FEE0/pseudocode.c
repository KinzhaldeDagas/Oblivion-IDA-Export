FreeEntry *__cdecl sub_40FEE0(FreeEntry *a1, FreeEntry *a2, FreeEntry *a3, FreeEntry *a4, FreeEntry *a5, FreeEntry *a6)
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

  v7 = (unsigned int)a2 % (unsigned int)a5;
  v30 = (unsigned int)a2 / (unsigned int)a5;
  v29 = v7;
  v27 = sub_40F640(v7);
  v26 = (unsigned int)a3 / (unsigned int)a5;
  v28 = sub_40F640((unsigned int)a3 % (unsigned int)a5);
  HIDWORD(v24) = 1;
  v8 = ((unsigned int)a5 + (int)a3 - 1) / (unsigned int)a5 * (((unsigned int)a2 + (int)a5 - 1) / (unsigned int)a5);
  LODWORD(v24) = 4 * v8 + 0x48;
  v9 = j_MemoryHeap_Alloc(&FormHeap, v8, v24, v25);
  v10 = v9;
  if ( v9 )
  {
    _memset(v9, 0, 0x48);
    v10[1].next = a2;
    v10[1].prev = a4;
    v10[5].next = (FreeEntry *)v27;
    v10->prev = a1;
    v10[6].prev = (FreeEntry *)v28;
    v10[2].prev = a3;
    v10[6].next = (FreeEntry *)v29;
    v10[4].next = (FreeEntry *)v30;
    v10[4].prev = (FreeEntry *)v8;
    v10[7].prev = (FreeEntry *)((unsigned int)a3 % (unsigned int)a5);
    v11 = 0;
    v10[3].next = (FreeEntry *)(((_DWORD)a4 * (_DWORD)a2 + 0xF) & 0xFFFFFFF0);
    v10[8].prev = v10 + 9;
    v10[5].prev = (FreeEntry *)v26;
    v10[7].next = a5;
    v10->next = a6;
    for ( i = (int *)&v10[9]; v11 < v10[5].prev; v11 = (FreeEntry *)((char *)v11 + 1) )
    {
      for ( j = 0; j < v10[4].next; ++i )
      {
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, (int)v10[7].next, (int)v10[7].next);
        j = (FreeEntry *)((char *)j + 1);
      }
      next = (int)v10[5].next;
      if ( next )
        *i++ = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, next, (int)v10[7].next);
    }
    if ( v10[6].prev )
    {
      for ( k = 0; k < v10[4].next; ++i )
      {
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, (int)v10[7].next, (int)v10[6].prev);
        k = (FreeEntry *)((char *)k + 1);
      }
      v16 = (int)v10[5].next;
      if ( v16 )
        *i = sub_40F6A0((int)a1, (int)v10->next, (int)v10[3].next, (int)v10[1].prev, v16, (int)v10[6].prev);
    }
    v17 = 0;
    v18 = 0;
    if ( !v10[4].prev )
    {
LABEL_17:
      v10[3].prev = 0;
      return v10;
    }
    prev = v10[8].prev;
    while ( prev->prev )
    {
      v18 = (FreeEntry *)((char *)v18 + 1);
      prev = (FreeEntry *)((char *)prev + 4);
      if ( v18 >= v10[4].prev )
        goto LABEL_17;
    }
    do
    {
      v21 = v10[8].prev;
      v22 = *((_DWORD *)&v21->prev + (_DWORD)v17) == 0;
      v23 = &v21->prev + (_DWORD)v17;
      if ( !v22 )
      {
        ((void (__stdcall *)(FreeEntry *))(*v23)->prev[1].prev)(*v23);
        *((_DWORD *)&v10[8].prev->prev + (_DWORD)v17) = 0;
      }
      v17 = (FreeEntry *)((char *)v17 + 1);
    }
    while ( v17 < v10[4].prev );
    MemoryHeap_Free_checked(v10);
  }
  return 0;
}
