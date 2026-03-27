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

  v4 = (int)*(this + 0x70);
  if ( v4 )
  {
    LOBYTE(v4) = MemoryHeap_Free_checked(*(this + 0x70));
    *(this + 0x70) = 0;
  }
  if ( a3 )
  {
    if ( *(_BYTE *)(a3 + 0x24) )
    {
      v5 = (const char *)(a3 + 0x3C);
      for ( i = strstr((const char *)(a3 + 0x3C), SubStr); i; i = strstr(i + 1, SubStr) )
        v5 = i + 1;
      strcpy(v14, v5);
      v13[strlen(v14)] = 0;
      HIDWORD(v11) = 1;
      LODWORD(v11) = strlen(v14) + 1;
      v7 = j_MemoryHeap_Alloc(&FormHeap, a2, v11, v12);
      *(this + 0x70) = v7;
      v8 = v14;
      v9 = v7;
      do
      {
        LOBYTE(v4) = *v8;
        LOBYTE(v9->prev) = *v8++;
        v9 = (FreeEntry *)((char *)v9 + 1);
      }
      while ( (_BYTE)v4 );
    }
  }
  return v4;
}
