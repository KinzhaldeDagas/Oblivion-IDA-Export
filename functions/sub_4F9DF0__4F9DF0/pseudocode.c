// Replace Script compiled data: free old pointer at Script+0x30, clear it, set ScriptInfo compiledSize at +0x20, then allocate/zero/copy exactly Size bytes when nonzero. A zero-size call clears compiled storage and size.
void *__userpurge Script_SetCompiledData@<eax>(
        void **this@<ecx>,
        char a2@<bpl>,
        int a3@<edi>,
        unsigned int a4,
        void *Src)
{
  void *result; // eax
  FreeEntry *v7; // edi
  size_t v8; // [esp-14h] [ebp-1Ch]

  result = (void *)MemoryHeap_Free_checked(*(this + 0xC)); /*0x4f9dfd*/
  *(this + 0xC) = 0; /*0x4f9e08*/
  *(this + 8) = (void *)a4; /*0x4f9e0f*/
  if ( a4 ) /*0x4f9e12*/
  {
    v7 = j_MemoryHeap_Alloc(&FormHeap, a2, a4 | 0x100000000LL, a3); /*0x4f9e23*/
    _memset((int)v7, 0, a4); /*0x4f9e28*/
    LODWORD(v8) = *(this + 8); /*0x4f9e34*/
    *(this + 0xC) = v7; /*0x4f9e37*/
    return memcpy(v7, Src, v8); /*0x4f9e3a*/
  }
  return result; /*0x4f9e43*/
}
