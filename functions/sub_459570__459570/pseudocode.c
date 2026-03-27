char __stdcall sub_459570(int a1, int *a2, int a3, char *Str)
{
  char *v4; // esi
  char *v5; // eax
  char *v6; // edi
  int v7; // edi
  char *v8; // ebp
  char *v9; // eax
  char *v10; // edi
  const char *v11; // edi
  unsigned int v12; // eax
  char *v13; // eax
  int v14; // ebp
  char *v15; // eax
  char *v16; // edx
  char v17; // cl
  char *v18; // eax
  unsigned int i; // edx
  char *v21; // [esp-1Ch] [ebp-240h]
  const char *v22; // [esp-14h] [ebp-238h]
  size_t v23; // [esp-4h] [ebp-228h]
  size_t v24; // [esp-4h] [ebp-228h]
  char *v25; // [esp+10h] [ebp-214h]
  int v26; // [esp+14h] [ebp-210h]
  char Dest[260]; // [esp+18h] [ebp-20Ch] BYREF
  char v28[260]; // [esp+11Ch] [ebp-108h] BYREF

  v26 = a3;
  v4 = strrchr((const char *)(a1 + 0x3C), 0x5C) + 1;
  v25 = strstr(v4, "Playing Time");
  v5 = strstr(v4, "-");
  v6 = v5;
  if ( v25 )
  {
    if ( v5 )
    {
      LODWORD(v23) = 5;
      if ( !strncmp(v4, "Save ", v23) )
      {
        if ( a2 )
        {
          v7 = v6 - v4 - 5;
          LODWORD(v24) = v7;
          strncpy(Dest, v4 + 5, v24);
          Dest[v7] = 0;
          *a2 = j__atol(Dest);
        }
        if ( !v26 && !Str )
          return 1;
        v8 = 0;
        v9 = strstr(v4 + 1, asc_A319FC);
        if ( v9 )
        {
          do
          {
            v10 = v8;
            v8 = v9;
            v9 = strstr(v9 + 1, asc_A319FC);
          }
          while ( v9 );
          if ( v10 )
          {
            if ( v26 )
            {
              v11 = v10 + 2;
              v12 = strlen(v4);
              if ( *v11 != 0x20 )
              {
                v13 = &v4[v12];
                do
                {
                  if ( v11 >= v13 )
                    break;
                  ++v11;
                }
                while ( *v11 != 0x20 );
              }
              v14 = v8 - v11;
              LODWORD(v24) = v14;
              strncpy(v28, v11, v24);
              v22 = (const char *)dword_B38720;
              v21 = (char *)v26;
              v28[v14] = 0;
              _sprintf(v21, "%s%s", v22, v28);
            }
            if ( Str )
            {
              v15 = v25 + 0xD;
              v16 = (char *)(Str - (v25 + 0xD));
              do
              {
                v17 = *v15;
                v15[(_DWORD)v16] = *v15;
                ++v15;
              }
              while ( v17 );
              v18 = strstr(Str, ".ess");
              if ( v18 )
                *v18 = 0;
              for ( i = 0; i < strlen(Str); ++i )
              {
                if ( Str[i] == 0x2E )
                  Str[i] = 0x3A;
              }
            }
            return 1;
          }
        }
      }
    }
  }
  return 0;
}
