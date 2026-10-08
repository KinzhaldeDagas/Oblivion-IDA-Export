// Reads a text plugin list at basePath + listFile; skips # comments, obtains each TESFile by line, and marks it loaded. Caller falls back to Oblivion.esm when no file is loaded.
bool __stdcall TESDataHandler_LoadPluginsFromFile(const char *basePath, const char *filename)
{
  bool v2; // bl
  unsigned int v3; // eax
  char *v4; // edi
  FILE *v6; // eax
  FILE *v7; // esi
  unsigned int v8; // eax
  char v9; // cl
  bool v10; // zf
  char *v11; // eax
  Data *v12; // eax
  char v14; // [esp+Bh] [ebp-309h] BYREF
  char Filename[260]; // [esp+Ch] [ebp-308h] BYREF
  char Buf[512]; // [esp+110h] [ebp-204h] BYREF

  v2 = 0; /*0x404b1c*/
  v14 = 0; /*0x404b2a*/
  strcpy(Filename, basePath); /*0x404b30*/
  v3 = strlen(filename) + 1; /*0x404b47*/
  v4 = &v14; /*0x404b50*/
  while ( *++v4 ) /*0x404b5b*/
    ; /*0x404b53*/
  qmemcpy(v4, filename, v3); /*0x404b62*/
  v6 = fopen(Filename, "r"); /*0x404b75*/
  v7 = v6; /*0x404b7d*/
  if ( v6 ) /*0x404b82*/
  {
    if ( fgets(Buf, 0x200, v6) ) /*0x404b96*/
    {
      do /*0x404c1f*/
      {
        v8 = &Buf[strlen(Buf) + 1] - &Buf[1]; /*0x404bc9*/
        if ( Buf[0] != 0x23 && v8 > 1 ) /*0x404bd7*/
        {
          v10 = Filename[v8 + 0x103] == 0xA; /*0x404bd9*/
          v11 = &Filename[v8 + 0x103]; /*0x404be1*/
          if ( v10 ) /*0x404be8*/
            *v11 = v9; /*0x404bea*/
          v12 = (Data *)sub_447C50((int *)g_TESDataHandler, Buf); /*0x404bfa*/
          if ( v12 ) /*0x404c01*/
          {
            TESFile_SetIsLoaded(v12, 1); /*0x404c07*/
            v14 = 1; /*0x404c0c*/
          }
        }
      }
      while ( fgets(Buf, 0x200, v7) ); /*0x404c1f*/
      v2 = v14; /*0x404c2b*/
    }
    fclose(v7); /*0x404c30*/
  }
  return v2; /*0x404c38*/
}
