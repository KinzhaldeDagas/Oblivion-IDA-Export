void *__userpurge Script_SetText@<eax>(void **this@<ecx>, int a2@<edi>, char *Src)
{
  void *result; // eax
  char *v5; // eax
  unsigned int v6; // edi
  unsigned int v7; // ebx
  FreeEntry *v8; // esi
  size_t v9; // [esp-14h] [ebp-18h]

  if ( *(this + 0xB) ) /*0x4f9e53*/
    MemoryHeap_Free_checked(*(this + 0xB)); /*0x4f9e60*/
  result = Src; /*0x4f9e65*/
  if ( Src ) /*0x4f9e6b*/
  {
    v5 = &Src[strlen(Src) + 1]; /*0x4f9e77*/
    v6 = v5 - (Src + 1); /*0x4f9e7e*/
    HIDWORD(v9) = 1; /*0x4f9e80*/
    v7 = v5 - Src; /*0x4f9e82*/
    LODWORD(v9) = v5 - Src; /*0x4f9e85*/
    v8 = j_MemoryHeap_Alloc(&FormHeap, (char)this, v9, a2); /*0x4f9e91*/
    _memset((int)v8, 0, v7); /*0x4f9e96*/
    *(this + 0xB) = v8; /*0x4f9ea2*/
    return memcpy(v8, Src, v6); /*0x4f9ea5*/
  }
  else
  {
    *(this + 0xB) = 0; /*0x4f9eb4*/
  }
  return result; /*0x4f9eb0*/
}
