void __userpurge TESModelList_WriteStringChunk(_DWORD *this@<ecx>, int a2@<edi>, int a3, int a4)
{
  const char **v4; // ebx
  const char **v5; // edx
  _BYTE *v6; // ebp
  _BYTE *i; // edi
  const char *v8; // esi
  const char *v9; // eax
  char v10; // cl
  size_t v11; // [esp-10h] [ebp-18h]
  unsigned int Size; // [esp+4h] [ebp-4h]

  v4 = (const char **)(this + 1); /*0x46dbe6*/
  if ( *(this + 2) || *v4 ) /*0x46dbeb*/
  {
    v5 = (const char **)(this + 1); /*0x46dbf5*/
    HIDWORD(v11) = a2; /*0x46dbfa*/
    Size = 1; /*0x46dbfb*/
    if ( this != (_DWORD *)0xFFFFFFFC ) /*0x46dc03*/
    {
      do /*0x46dc2c*/
      {
        if ( *v5 ) /*0x46dc05*/
          Size += strlen(*v5) + 1; /*0x46dc23*/
        v5 = (const char **)v5[1]; /*0x46dc27*/
      }
      while ( v5 ); /*0x46dc2c*/
    }
    v6 = (_BYTE *)FormHeapAlloc(Size); /*0x46dc3d*/
    for ( i = v6; v4; v4 = (const char **)v4[1] ) /*0x46dc41*/
    {
      v8 = *v4; /*0x46dc43*/
      if ( *v4 ) /*0x46dc43*/
      {
        v9 = *v4; /*0x46dc4b*/
        do /*0x46dc5a*/
        {
          v10 = *v9; /*0x46dc50*/
          v9[i - v8] = *v9; /*0x46dc52*/
          ++v9; /*0x46dc55*/
        }
        while ( v10 ); /*0x46dc5a*/
        i += strlen(v8) + 1; /*0x46dc6c*/
      }
    }
    LODWORD(v11) = Size; /*0x46dc7f*/
    *i = 0; /*0x46dc82*/
    TESForm_PutFormRecordChunkData(a3, v6, v11); /*0x46dc85*/
    FormHeapFree((unsigned int)v6); /*0x46dc8b*/
  }
}
