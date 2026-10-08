FreeEntry *__userpurge MemoryHeap_Allocate@<eax>(_DWORD *this@<ecx>, char a2@<bpl>, size_t Size, int a4)
{
  unsigned int v6; // ebx
  int v7; // ecx
  MemoryPool *v8; // ecx
  FreeEntry *v9; // edi
  unsigned int v10; // edi
  int v11; // eax
  _DWORD *v12; // ebp
  int v13; // eax
  _DWORD *v14; // edi
  int v15; // eax
  bool v16; // zf
  int v17; // edx
  _DWORD *v18; // ecx
  int v19; // edx
  _DWORD *v20; // ecx
  _DWORD *v21; // edi
  int v22; // ebx
  int v23; // eax
  FreeEntry *v24; // esi
  _DWORD *v25; // ebp
  _DWORD *v26; // edi
  int v27; // eax
  int v28; // eax
  bool v29; // cc
  size_t v31; // [esp-4h] [ebp-8h]

  if ( !*(this + 3) ) /*0x401aa3*/
  {
    LODWORD(v31) = Size; /*0x401aad*/
    return (FreeEntry *)malloc(v31); /*0x401ab7*/
  }
  v6 = Size; /*0x401abb*/
  if ( (unsigned int)Size < 8 )                 // Initialized MemoryHeap allocations smaller than 8 bytes, including SCDA length zero, are promoted to 8 bytes before allocation. /*0x401ac2*/
  {
    LODWORD(Size) = 8; /*0x401ac4*/
    v6 = 8; /*0x401acc*/
  }
  v7 = *(this + 1); /*0x401ad0*/
  if ( ((v7 - 1) & v6) != 0 ) /*0x401ad8*/
  {
    LODWORD(Size) = ~(v7 - 1) & (v6 + v7); /*0x401ae0*/
    v6 = Size; /*0x401ae4*/
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)"MemoryHeap::Allocate"); /*0x401af1*/
  if ( !*((_BYTE *)this + 0x16C) && v6 <= 0x200 ) /*0x401b05*/
  {
    v8 = (MemoryPool *)MEMORY[0xB33080][v6 >> 2]; /*0x401b0c*/
    if ( v8 ) /*0x401b15*/
    {
      v9 = MemoryPool_Allocate(v8); /*0x401b1c*/
      if ( v9 ) /*0x401b20*/
      {
        NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x401b27*/
        return v9; /*0x401b31*/
      }
    }
  }
  v10 = *(this + 1); /*0x401b34*/
  v11 = v6 / v10 - 1; /*0x401b3e*/
  if ( v11 < *(this + 0xC) ) /*0x401b44*/
    v12 = (_DWORD *)(*(this + 0xD) + 8 * v11); /*0x401b4e*/
  else
    v12 = this + 0xF; /*0x401b46*/
  if ( v12[1] ) /*0x401b51*/
    goto LABEL_44; /*0x401b55*/
  if ( v12 != this + 0xF ) /*0x401b60*/
  {
    v13 = *(this + 2) / v10; /*0x401b6d*/
    v14 = (_DWORD *)*(this + 0xE); /*0x401b6f*/
    v12 += 2 * v13; /*0x401b72*/
    if ( v12 > v14 ) /*0x401b78*/
    {
LABEL_42:
      v12 = this + 0xF; /*0x401c06*/
      goto LABEL_43; /*0x401c06*/
    }
    v15 = MemoryHeap_SizeToBinIndex(this, v6 + *(this + 2)); /*0x401b83*/
    v16 = v15 == 0x10; /*0x401b88*/
    if ( v15 < 0x10 ) /*0x401b8b*/
    {
      v17 = *(this + 0x11); /*0x401b8d*/
      v18 = (_DWORD *)(v17 + 8 * v15); /*0x401b90*/
      while ( !*v18 ) /*0x401b96*/
      {
        ++v15; /*0x401b98*/
        v18 += 2; /*0x401b9b*/
        if ( v15 >= 0x10 ) /*0x401ba1*/
          goto LABEL_25; /*0x401ba1*/
      }
      if ( *(_DWORD *)(v17 + 8 * v15 + 4) > (unsigned int)v12 ) /*0x401bab*/
        v12 = *(_DWORD **)(v17 + 8 * v15 + 4); /*0x401bad*/
LABEL_25:
      v16 = v15 == 0x10; /*0x401baf*/
    }
    if ( v16 ) /*0x401bb2*/
      v12 = this + 0xF; /*0x401bb4*/
    if ( v12 != this + 0xF ) /*0x401bbc*/
    {
      if ( v12[1] ) /*0x401bbe*/
        goto LABEL_44; /*0x401bc2*/
      while ( v12 != v14 ) /*0x401bc6*/
      {
        if ( v15 < 0xF && (v19 = *(this + 0x11), v12 == *(_DWORD **)(v19 + 8 * v15 + 0xC)) ) /*0x401bd4*/
        {
          ++v15; /*0x401bd6*/
          v12 = v14; /*0x401bdc*/
          if ( v15 < 0x10 ) /*0x401bde*/
          {
            v20 = (_DWORD *)(v19 + 8 * v15); /*0x401be0*/
            while ( !*v20 ) /*0x401be6*/
            {
              ++v15; /*0x401be8*/
              v20 += 2; /*0x401beb*/
              if ( v15 >= 0x10 ) /*0x401bf1*/
                goto LABEL_40; /*0x401bf1*/
            }
            v12 = *(_DWORD **)(v19 + 8 * v15 + 4); /*0x401bf5*/
          }
        }
        else
        {
          v12 += 2; /*0x401bfb*/
        }
LABEL_40:
        if ( v12[1] ) /*0x401bfe*/
          goto LABEL_43; /*0x401c02*/
      }
      goto LABEL_42; /*0x401bc6*/
    }
  }
LABEL_43:
  if ( !v12[1] ) /*0x401c0d*/
    goto LABEL_49; /*0x401c0d*/
LABEL_44:
  v21 = (_DWORD *)*v12; /*0x401c0f*/
  if ( !*v12 ) /*0x401c14*/
  {
LABEL_49:
    v23 = *(this + 4); /*0x401c41*/
    if ( v23 + v6 + 8 <= *(this + 3) ) /*0x401c4b*/
    {
      v26 = (_DWORD *)(v23 + *(this + 6)); /*0x401cec*/
      v26[1] = v6; /*0x401cee*/
      *v26 = 0; /*0x401cf1*/
      v27 = *(this + 9); /*0x401cf7*/
      if ( v27 ) /*0x401cfc*/
        *v26 = v27; /*0x401cfe*/
      else
        *(this + 8) = v26; /*0x401d02*/
      ++*(this + 7); /*0x401d05*/
      *(this + 4) += v6 + 8; /*0x401d0c*/
      v28 = *(this + 4); /*0x401d0f*/
      v29 = v28 <= *(this + 5); /*0x401d12*/
      *(this + 9) = v26; /*0x401d15*/
      if ( !v29 ) /*0x401d18*/
        *(this + 5) = v28; /*0x401d1a*/
      NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x401d22*/
      return (FreeEntry *)(v26 + 2); /*0x401d28*/
    }
    else
    {
      v24 = sub_401830(this, (char)v12, v6, SBYTE4(Size), a2); /*0x401c65*/
      NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x401c67*/
      return v24; /*0x401c6f*/
    }
  }
  while ( 1 ) /*0x401c23*/
  {
    v22 = v21[1] & 0xFFFFFFF; /*0x401c23*/
    if ( v22 == (_DWORD)Size || v22 - (int)Size >= *(this + 2) ) /*0x401c34*/
      break; /*0x401c34*/
    v21 = (_DWORD *)v21[3]; /*0x401c36*/
    if ( !v21 ) /*0x401c3b*/
    {
      v6 = Size; /*0x401c3d*/
      goto LABEL_49; /*0x401c3d*/
    }
  }
  MemoryHeap_RemoveFreeEntry(this, v12, v21); /*0x401c79*/
  if ( v22 != (_DWORD)Size ) /*0x401c84*/
  {
    v25 = (_DWORD *)((char *)v21 + Size + 8); /*0x401c88*/
    v25[2] = 0; /*0x401c91*/
    v25[3] = 0; /*0x401c94*/
    v25[1] = v22 - Size - 8; /*0x401c97*/
    *v25 = v21; /*0x401c9a*/
    if ( v21 == (_DWORD *)*(this + 9) ) /*0x401ca0*/
      *(this + 9) = v25; /*0x401ca2*/
    else
      *(_DWORD *)((char *)v21 + (v21[1] & 0xFFFFFFF) + 8) = v25; /*0x401caf*/
    ++*(this + 7); /*0x401cb3*/
    MemoryHeap_InsertFreeEntry(this, (_DWORD *)((char *)v21 + Size + 8)); /*0x401cba*/
    MemoryHeap_CoalesceFreeEntry(this, (_DWORD *)((char *)v21 + Size + 8)); /*0x401cc2*/
  }
  v21[1] = Size | v21[1] & 0xF0000000; /*0x401cd2*/
  NiLeaveCriticalSection_0(&HeapCriticalSection); /*0x401cda*/
  return (FreeEntry *)(v21 + 2); /*0x401ab6*/
}
