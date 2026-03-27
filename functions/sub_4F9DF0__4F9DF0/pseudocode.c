void *__userpurge sub_4F9DF0@<eax>(void **this@<ecx>, char a2@<bpl>, int a3@<edi>, unsigned int a4, void *Src)
{
  void *result; // eax
  FreeEntry *v7; // edi
  size_t v8; // [esp-14h] [ebp-1Ch]

  result = (void *)MemoryHeap_Free_checked(*(this + 0xC));
  *(this + 0xC) = 0;
  *(this + 8) = (void *)a4;
  if ( a4 )
  {
    v7 = j_MemoryHeap_Alloc(&FormHeap, a2, a4 | 0x100000000LL, a3);
    _memset(v7, 0, a4);
    LODWORD(v8) = *(this + 8);
    *(this + 0xC) = v7;
    return memcpy(v7, Src, v8);
  }
  return result;
}
