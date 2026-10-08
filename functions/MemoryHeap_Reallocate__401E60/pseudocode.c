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

  v4 = MemoryHeap_SizeOf((int)this, (unsigned int)Src); /*0x401e70*/
  if ( v4 ) /*0x401e74*/
  {
    v5 = NewSize; /*0x401e76*/
    if ( (unsigned int)NewSize < 8 ) /*0x401e7d*/
      v5 = 8; /*0x401e7f*/
    v6 = (int)*(this + 1); /*0x401e84*/
    if ( ((v6 - 1) & v5) != 0 ) /*0x401e8c*/
      v5 = ~(v6 - 1) & (v6 + v5); /*0x401e92*/
    v7 = MemoryHeap_Allocate(&FormHeap, v4, (unsigned int)v5 | 0x100000000LL, SHIDWORD(v11)); /*0x401e9c*/
    v8 = v7; /*0x401ea3*/
    if ( v4 > v5 ) /*0x401ea5*/
      v4 = v5; /*0x401ea7*/
    LODWORD(v12) = v4; /*0x401ea9*/
    memcpy(v7, Src, v12); /*0x401eac*/
    if ( Src ) /*0x401eb6*/
      MemoryHeap_Free(&FormHeap, (unsigned int)Src); /*0x401ebe*/
    return v8; /*0x401ec4*/
  }
  else
  {
    v10 = _msize(Src); /*0x401ecd*/
    (**this)(this, -v10); /*0x401ede*/
    (**this)(this, NewSize); /*0x401eeb*/
    LODWORD(v11) = NewSize; /*0x401eed*/
    return (FreeEntry *)realloc(Src, v11); /*0x401eef*/
  }
}
