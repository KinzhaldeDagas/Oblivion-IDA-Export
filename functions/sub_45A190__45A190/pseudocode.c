char __userpurge sub_45A190@<al>(void **this@<ecx>, char a2@<bpl>, int a3)
{
  int v4; // eax
  const char *v5; // esi
  char *i; // eax
  FreeEntry *v7; // eax
  char *v8; // ecx
  FreeEntry *v9; // edx
  size_t v11; // [esp-8h] [ebp-118h]
  int v12; // [esp+0h] [ebp-110h]
  char v13[4]; // [esp+4h] [ebp-10Ch]
  char v14[260]; // [esp+8h] [ebp-108h] BYREF

  v4 = (int)*(this + 0x70); /*0x45a1af*/
  if ( v4 ) /*0x45a1b7*/
  {
    LOBYTE(v4) = MemoryHeap_Free_checked(*(this + 0x70)); /*0x45a1bf*/
    *(this + 0x70) = 0; /*0x45a1c4*/
  }
  if ( a3 ) /*0x45a1d0*/
  {
    if ( *(_BYTE *)(a3 + 0x24) ) /*0x45a1d6*/
    {
      v5 = (const char *)(a3 + 0x3C); /*0x45a1e0*/
      for ( i = strstr((const char *)(a3 + 0x3C), SubStr); i; i = strstr(i + 1, SubStr) ) /*0x45a1f3*/
        v5 = i + 1; /*0x45a1f5*/
      strcpy(v14, v5); /*0x45a20e*/
      v13[strlen(v14)] = 0; /*0x45a230*/
      HIDWORD(v11) = 1; /*0x45a24b*/
      LODWORD(v11) = strlen(v14) + 1; /*0x45a250*/
      v7 = j_MemoryHeap_Alloc(&FormHeap, a2, v11, v12); /*0x45a256*/
      *(this + 0x70) = v7; /*0x45a25b*/
      v8 = v14; /*0x45a261*/
      v9 = v7; /*0x45a265*/
      do /*0x45a273*/
      {
        LOBYTE(v4) = *v8; /*0x45a267*/
        LOBYTE(v9->prev) = *v8++; /*0x45a269*/
        v9 = (FreeEntry *)((char *)v9 + 1); /*0x45a26e*/
      }
      while ( (_BYTE)v4 ); /*0x45a273*/
    }
  }
  return v4; /*0x45a275*/
}
