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

  if ( NiFile_CanOpenFileWithMode_Indirect((int)Src, 0) ) /*0x77ec8b*/
  {
    strcpy_s(Dst, SizeInBytes, Src); /*0x77eca1*/
    return 1; /*0x77ecc1*/
  }
  if ( !MEMORY[0xB428A8] ) /*0x77ecc2*/
  {
    sub_738460(1, 0, "No valid shader program factory\n"); /*0x77ecd4*/
    return 0; /*0x77ecf4*/
  }
  sub_7825B0(Src, Drive, Dir, Filename, Ext); /*0x77ed12*/
  v4 = *((_DWORD *)MEMORY[0xB428A8] + 3); /*0x77ed1d*/
  if ( !v4 ) /*0x77ed25*/
    return 0; /*0x77ed25*/
  v5 = *(const char **)(v4 + 8); /*0x77ed2b*/
  v6 = *(va_list *)v4; /*0x77ed30*/
  if ( !v5 ) /*0x77ed35*/
    return 0; /*0x77edf3*/
  while ( !*v5 ) /*0x77ed45*/
  {
    sub_738460(1, 0, "Invalid or no shader program directory\n"); /*0x77ee12*/
LABEL_13:
    if ( v6 ) /*0x77edc7*/
    {
      v5 = *((const char **)v6 + 2); /*0x77edc9*/
      v6 = *(va_list *)v6; /*0x77edd1*/
      if ( v5 ) /*0x77edd3*/
        continue; /*0x77edd3*/
    }
    return 0; /*0x77edd3*/
  }
  if ( v5[strlen(v5) - 1] == 0x2F || v5[strlen(v5) - 1] == 0x5C ) /*0x77ed80*/
  {
    v8 = (char *)v5; /*0x77ee01*/
    HIDWORD(v7) = "%s%s%s"; /*0x77ee02*/
  }
  else
  {
    v8 = (char *)v5; /*0x77ed8f*/
    HIDWORD(v7) = "%s\\%s%s"; /*0x77ed90*/
  }
  LODWORD(v7) = SizeInBytes; /*0x77ed95*/
  sub_6C5D40(v6, Dst, v7, v8, Filename, Ext); /*0x77ed97*/
  if ( !NiFile_CanOpenFileWithMode_Indirect((int)Dst, 0) ) /*0x77eda2*/
  {
    sub_738460(1, 1, "Shader program file not found %s in directory %s\n", Src, v5); /*0x77edbd*/
    goto LABEL_13; /*0x77edbd*/
  }
  return 1; /*0x77eca9*/
}
