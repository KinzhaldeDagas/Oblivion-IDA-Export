FreeEntry *__userpurge MemoryHeap_Reallocate@<eax>(
        void (__thiscall ***this)(void *, int)@<ecx>,
        void *Src,
        size_t NewSize)
{
  int v4; // ebp
  int v5; // edi
  int v6; // esi
  FreeEntry *v7; // eax
  FreeEntry *v8; // esi
  int v10; // eax
  size_t v11; // [esp-4h] [ebp-14h]
  size_t v12; // [esp-4h] [ebp-14h]

  v4 = MemoryHeap_SizeOf((int)this, (unsigned int)Src);
  if ( v4 )
  {
    v5 = NewSize;
    if ( (unsigned int)NewSize < 8 )
      v5 = 8;
    v6 = (int)*(this + 1);
    if ( ((v6 - 1) & v5) != 0 )
      v5 = ~(v6 - 1) & (v6 + v5);
    v7 = MemoryHeap_Allocate(&FormHeap, v4, (unsigned int)v5 | 0x100000000LL, SHIDWORD(v11));
    v8 = v7;
    if ( v4 > v5 )
      v4 = v5;
    LODWORD(v12) = v4;
    memcpy(v7, Src, v12);
    if ( Src )
      MemoryHeap_Free(&FormHeap, (unsigned int)Src);
    return v8;
  }
  else
  {
    v10 = _msize(Src);
    (**this)(this, -v10);
    (**this)(this, NewSize);
    LODWORD(v11) = NewSize;
    return (FreeEntry *)realloc(Src, v11);
  }
}
