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
  _DWORD *v24; // esi
  _DWORD *v25; // ebp
  _DWORD *v26; // edi
  int v27; // eax
  int v28; // eax
  bool v29; // cc
  size_t v31; // [esp-4h] [ebp-8h]

  if ( !*(this + 3) )
  {
    LODWORD(v31) = Size;
    return (FreeEntry *)malloc(v31);
  }
  v6 = Size;
  if ( (unsigned int)Size < 8 )
  {
    LODWORD(Size) = 8;
    v6 = 8;
  }
  v7 = *(this + 1);
  if ( ((v7 - 1) & v6) != 0 )
  {
    LODWORD(Size) = ~(v7 - 1) & (v6 + v7);
    v6 = Size;
  }
  NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&HeapCriticalSection, (int)"MemoryHeap::Allocate");
  if ( !*((_BYTE *)this + 0x16C) && v6 <= 0x200 )
  {
    v8 = (MemoryPool *)g_HeapPoolsBySize[v6 >> 2];
    if ( v8 )
    {
      v9 = MemoryPool_Allocate(v8);
      if ( v9 )
      {
        NiLeaveCriticalSection_0(&HeapCriticalSection);
        return v9;
      }
    }
  }
  v10 = *(this + 1);
  v11 = v6 / v10 - 1;
  if ( v11 < *(this + 0xC) )
    v12 = (_DWORD *)(*(this + 0xD) + 8 * v11);
  else
    v12 = this + 0xF;
  if ( v12[1] )
    goto LABEL_44;
  if ( v12 != this + 0xF )
  {
    v13 = *(this + 2) / v10;
    v14 = (_DWORD *)*(this + 0xE);
    v12 += 2 * v13;
    if ( v12 > v14 )
    {
LABEL_42:
      v12 = this + 0xF;
      goto LABEL_43;
    }
    v15 = sub_401230(this, v6 + *(this + 2));
    v16 = v15 == 0x10;
    if ( v15 < 0x10 )
    {
      v17 = *(this + 0x11);
      v18 = (_DWORD *)(v17 + 8 * v15);
      while ( !*v18 )
      {
        ++v15;
        v18 += 2;
        if ( v15 >= 0x10 )
          goto LABEL_25;
      }
      if ( *(_DWORD *)(v17 + 8 * v15 + 4) > (unsigned int)v12 )
        v12 = *(_DWORD **)(v17 + 8 * v15 + 4);
LABEL_25:
      v16 = v15 == 0x10;
    }
    if ( v16 )
      v12 = this + 0xF;
    if ( v12 != this + 0xF )
    {
      if ( v12[1] )
        goto LABEL_44;
      while ( v12 != v14 )
      {
        if ( v15 < 0xF && (v19 = *(this + 0x11), v12 == *(_DWORD **)(v19 + 8 * v15 + 0xC)) )
        {
          ++v15;
          v12 = v14;
          if ( v15 < 0x10 )
          {
            v20 = (_DWORD *)(v19 + 8 * v15);
            while ( !*v20 )
            {
              ++v15;
              v20 += 2;
              if ( v15 >= 0x10 )
                goto LABEL_40;
            }
            v12 = *(_DWORD **)(v19 + 8 * v15 + 4);
          }
        }
        else
        {
          v12 += 2;
        }
LABEL_40:
        if ( v12[1] )
          goto LABEL_43;
      }
      goto LABEL_42;
    }
  }
LABEL_43:
  if ( !v12[1] )
    goto LABEL_49;
LABEL_44:
  v21 = (_DWORD *)*v12;
  if ( !*v12 )
  {
LABEL_49:
    v23 = *(this + 4);
    if ( v23 + v6 + 8 <= *(this + 3) )
    {
      v26 = (_DWORD *)(v23 + *(this + 6));
      v26[1] = v6;
      *v26 = 0;
      v27 = *(this + 9);
      if ( v27 )
        *v26 = v27;
      else
        *(this + 8) = v26;
      ++*(this + 7);
      *(this + 4) += v6 + 8;
      v28 = *(this + 4);
      v29 = v28 <= *(this + 5);
      *(this + 9) = v26;
      if ( !v29 )
        *(this + 5) = v28;
      NiLeaveCriticalSection_0(&HeapCriticalSection);
      return (FreeEntry *)(v26 + 2);
    }
    else
    {
      v24 = sub_401830(this, (char)v12, v6, SBYTE4(Size), a2);
      NiLeaveCriticalSection_0(&HeapCriticalSection);
      return (FreeEntry *)v24;
    }
  }
  while ( 1 )
  {
    v22 = v21[1] & 0xFFFFFFF;
    if ( v22 == (_DWORD)Size || v22 - (int)Size >= *(this + 2) )
      break;
    v21 = (_DWORD *)v21[3];
    if ( !v21 )
    {
      v6 = Size;
      goto LABEL_49;
    }
  }
  sub_401690(this, v12, v21);
  if ( v22 != (_DWORD)Size )
  {
    v25 = (_DWORD *)((char *)v21 + Size + 8);
    v25[2] = 0;
    v25[3] = 0;
    v25[1] = v22 - Size - 8;
    *v25 = v21;
    if ( v21 == (_DWORD *)*(this + 9) )
      *(this + 9) = v25;
    else
      *(_DWORD *)((char *)v21 + (v21[1] & 0xFFFFFFF) + 8) = v25;
    ++*(this + 7);
    sub_4015F0(this, (_DWORD *)((char *)v21 + Size + 8));
    sub_401A30(this, (_DWORD *)((char *)v21 + Size + 8));
  }
  v21[1] = Size | v21[1] & 0xF0000000;
  NiLeaveCriticalSection_0(&HeapCriticalSection);
  return (FreeEntry *)(v21 + 2);
}
