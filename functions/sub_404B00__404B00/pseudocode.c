char __stdcall sub_404B00(const char *a1, const char *a2)
{
  char v2; // bl
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

  v2 = 0;
  v14 = 0;
  strcpy(Filename, a1);
  v3 = strlen(a2) + 1;
  v4 = &v14;
  while ( *++v4 )
    ;
  qmemcpy(v4, a2, v3);
  v6 = fopen(Filename, "r");
  v7 = v6;
  if ( v6 )
  {
    if ( fgets(Buf, 0x200, v6) )
    {
      do
      {
        v8 = &Buf[strlen(Buf) + 1] - &Buf[1];
        if ( Buf[0] != 0x23 && v8 > 1 )
        {
          v10 = Filename[v8 + 0x103] == 0xA;
          v11 = &Filename[v8 + 0x103];
          if ( v10 )
            *v11 = v9;
          v12 = (Data *)sub_447C50((int *)TESDataHandler, Buf);
          if ( v12 )
          {
            TESFile_SetIsLoaded(v12, 1);
            v14 = 1;
          }
        }
      }
      while ( fgets(Buf, 0x200, v7) );
      v2 = v14;
    }
    fclose(v7);
  }
  return v2;
}
