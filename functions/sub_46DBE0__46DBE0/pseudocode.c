void __userpurge sub_46DBE0(_DWORD *this@<ecx>, int a2@<edi>, int a3, int a4)
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

  v4 = (const char **)(this + 1);
  if ( *(this + 2) || *v4 )
  {
    v5 = (const char **)(this + 1);
    HIDWORD(v11) = a2;
    Size = 1;
    if ( this != (_DWORD *)0xFFFFFFFC )
    {
      do
      {
        if ( *v5 )
          Size += strlen(*v5) + 1;
        v5 = (const char **)v5[1];
      }
      while ( v5 );
    }
    v6 = (_BYTE *)FormHeapAlloc(Size);
    for ( i = v6; v4; v4 = (const char **)v4[1] )
    {
      v8 = *v4;
      if ( *v4 )
      {
        v9 = *v4;
        do
        {
          v10 = *v9;
          v9[i - v8] = *v9;
          ++v9;
        }
        while ( v10 );
        i += strlen(v8) + 1;
      }
    }
    LODWORD(v11) = Size;
    *i = 0;
    TESForm_PutFormRecordChunkData(a3, v6, v11);
    FormHeapFree((unsigned int)v6);
  }
}
