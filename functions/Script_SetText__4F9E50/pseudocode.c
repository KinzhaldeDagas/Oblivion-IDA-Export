void *__userpurge Script_SetText@<eax>(void **this@<ecx>, int a2@<edi>, char *Src)
{
  void *result; // eax
  char *v5; // eax
  int v6; // edi
  int v7; // ebx
  FreeEntry *v8; // esi
  size_t v9; // [esp-1Ch] [ebp-20h]
  size_t v10; // [esp-14h] [ebp-18h]

  if ( *(this + 0xB) )
    MemoryHeap_Free_checked(*(this + 0xB));
  result = Src;
  if ( Src )
  {
    v5 = &Src[strlen(Src) + 1];
    v6 = v5 - (Src + 1);
    HIDWORD(v10) = 1;
    v7 = v5 - Src;
    LODWORD(v10) = v5 - Src;
    v8 = j_MemoryHeap_Alloc(&FormHeap, (char)this, v10, a2);
    _memset(v8, 0, v7);
    LODWORD(v9) = v6;
    *(this + 0xB) = v8;
    return memcpy(v8, Src, v9);
  }
  else
  {
    *(this + 0xB) = 0;
  }
  return result;
}
