char __cdecl sub_77EC60(char *Src, char *Dst, rsize_t SizeInBytes)
{
  int v4; // eax
  const char *v5; // esi
  va_list v6; // edi
  size_t v7; // [esp-1Ch] [ebp-338h]
  char *v8; // [esp-14h] [ebp-330h]
  char Drive[4]; // [esp+Ch] [ebp-310h] BYREF
  char Ext[256]; // [esp+10h] [ebp-30Ch] BYREF
  char Filename[260]; // [esp+110h] [ebp-20Ch] BYREF
  char Dir[260]; // [esp+214h] [ebp-108h] BYREF

  if ( NiFile_CanOpenFileWithMode_Indirect((int)Src, 0) )
  {
    strcpy_s(Dst, SizeInBytes, Src);
    return 1;
  }
  if ( !shaderProgramFactory )
  {
    sub_738460(1, 0, "No valid shader program factory\n");
    return 0;
  }
  sub_7825B0(Src, Drive, Dir, Filename, Ext);
  v4 = *((_DWORD *)shaderProgramFactory + 3);
  if ( !v4 )
    return 0;
  v5 = *(const char **)(v4 + 8);
  v6 = *(va_list *)v4;
  if ( !v5 )
    return 0;
  while ( !*v5 )
  {
    sub_738460(1, 0, "Invalid or no shader program directory\n");
LABEL_13:
    if ( v6 )
    {
      v5 = *((const char **)v6 + 2);
      v6 = *(va_list *)v6;
      if ( v5 )
        continue;
    }
    return 0;
  }
  if ( v5[strlen(v5) - 1] == 0x2F || v5[strlen(v5) - 1] == 0x5C )
  {
    v8 = (char *)v5;
    HIDWORD(v7) = "%s%s%s";
  }
  else
  {
    v8 = (char *)v5;
    HIDWORD(v7) = "%s\\%s%s";
  }
  LODWORD(v7) = SizeInBytes;
  sub_6C5D40(v6, Dst, v7, v8, Filename, Ext);
  if ( !NiFile_CanOpenFileWithMode_Indirect((int)Dst, 0) )
  {
    sub_738460(1, 1, "Shader program file not found %s in directory %s\n", Src, v5);
    goto LABEL_13;
  }
  return 1;
}
