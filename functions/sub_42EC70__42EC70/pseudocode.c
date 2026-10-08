void __cdecl sub_42EC70(char **a1, char *Str1, const char *a3, int a4)
{
  char *v4; // esi
  char *v5; // eax
  unsigned __int16 FileTypemask; // bp
  _DWORD *v7; // edi
  char **v8; // ecx
  unsigned int v9; // ebx
  char **i; // eax
  unsigned int v11; // esi
  int v12; // eax
  _DWORD *v13; // eax
  size_t v14; // [esp-4h] [ebp-124h]
  size_t v15; // [esp-4h] [ebp-124h]
  _BYTE v16[8]; // [esp+8h] [ebp-118h] BYREF
  int v17[2]; // [esp+10h] [ebp-110h] BYREF
  char Str[260]; // [esp+18h] [ebp-108h] BYREF

  v4 = Str1; /*0x42ec93*/
  if ( MEMORY[0xB338E0] ) /*0x42ec9e*/
  {
    if ( *Str1 == 0x5C ) /*0x42eca7*/
      v4 = Str1 + 1; /*0x42eca9*/
    LODWORD(v14) = 5; /*0x42ecac*/
    if ( !strncmp(v4, "Data\\", v14) || (LODWORD(v15) = 5, !strncmp(v4, "data\\", v15)) ) /*0x42ecc8*/
      v4 += 5; /*0x42ecd4*/
    strcpy(Str, a3); /*0x42ecd7*/
    v5 = strrchr(Str, 0x5C); /*0x42ecf7*/
    if ( v5 ) /*0x42ed01*/
      v5[1] = 0; /*0x42ed03*/
    FileTypemask = a4; /*0x42ed08*/
    if ( a4 == 0xFFFF ) /*0x42ed15*/
      FileTypemask = ArchiveManager_GetFileTypemask(&v4[strlen(v4) - 3]); /*0x42ed38*/
    v7 = 0; /*0x42ed47*/
    HashFilePAth(v4, (int)v17, (int)v16); /*0x42ed49*/
    v8 = a1; /*0x42ed4e*/
    v9 = 0; /*0x42ed55*/
    for ( i = a1; i; i = (char **)i[1] ) /*0x42ed5b*/
    {
      if ( *i ) /*0x42ed60*/
        ++v9; /*0x42ed64*/
    }
    v11 = MEMORY[0xB338E0]; /*0x42ed6e*/
    if ( MEMORY[0xB338E0] ) /*0x42ed76*/
    {
      do /*0x42edad*/
      {
        v12 = *(_DWORD *)v11; /*0x42ed78*/
        if ( *(_DWORD *)v11 ) /*0x42ed78*/
        {
          if ( (FileTypemask & *(_WORD *)(v12 + 0x174)) != 0 ) /*0x42ed85*/
          {
            v13 = sub_42DB50(v12, v9, v7, (unsigned int *)v17, v16, v8, Str); /*0x42ed9a*/
            v8 = a1; /*0x42ed9f*/
            v7 = v13; /*0x42eda6*/
          }
        }
        v11 = *(_DWORD *)(v11 + 4); /*0x42eda8*/
      }
      while ( v11 ); /*0x42edad*/
      if ( v7 ) /*0x42edb1*/
      {
        if ( v9 ) /*0x42edb5*/
        {
          do /*0x42edc8*/
            FormHeapFree(v7[v11++]); /*0x42edbb*/
          while ( v11 < v9 ); /*0x42edc8*/
        }
        FormHeapFree((unsigned int)v7); /*0x42edcb*/
      }
    }
  }
}
