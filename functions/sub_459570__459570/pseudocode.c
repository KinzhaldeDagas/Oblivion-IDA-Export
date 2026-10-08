// ContinueFromLastSave fidelity decode: parses vanilla numbered save filename metadata: expects 'Save ' prefix, '-' separator, and 'Playing Time'; extracts save number/display text/time for UI only.
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

  v26 = a3; /*0x4595aa*/
  v4 = strrchr((const char *)(a1 + 0x3C), 0x5C) + 1; /*0x4595b5*/
  v25 = strstr(v4, "Playing Time"); /*0x4595c9*/
  v5 = strstr(v4, "-"); /*0x4595cd*/
  v6 = v5; /*0x4595da*/
  if ( v25 ) /*0x4595dc*/
  {
    if ( v5 ) /*0x4595e4*/
    {
      LODWORD(v23) = 5; /*0x4595ea*/
      if ( !strncmp(v4, "Save ", v23) ) /*0x4595f2*/
      {
        if ( a2 ) /*0x459604*/
        {
          v7 = v6 - v4 - 5; /*0x459608*/
          LODWORD(v24) = v7; /*0x45960b*/
          strncpy(Dest, v4 + 5, v24); /*0x459615*/
          Dest[v7] = 0; /*0x45961f*/
          *a2 = j__atol(Dest); /*0x45962c*/
        }
        if ( !v26 && !Str ) /*0x459638*/
          return 1; /*0x459638*/
        v8 = 0; /*0x459647*/
        v9 = strstr(v4 + 1, asc_A319FC); /*0x459649*/
        if ( v9 ) /*0x459653*/
        {
          do /*0x459677*/
          {
            v10 = v8; /*0x459660*/
            v8 = v9; /*0x459662*/
            v9 = strstr(v9 + 1, asc_A319FC); /*0x45966d*/
          }
          while ( v9 ); /*0x459677*/
          if ( v10 ) /*0x45967b*/
          {
            if ( v26 ) /*0x45968d*/
            {
              v11 = v10 + 2; /*0x459691*/
              v12 = strlen(v4); /*0x459694*/
              if ( *v11 != 0x20 ) /*0x4596a5*/
              {
                v13 = &v4[v12]; /*0x4596a7*/
                do /*0x4596ba*/
                {
                  if ( v11 >= v13 ) /*0x4596b2*/
                    break; /*0x4596b2*/
                  ++v11; /*0x4596b4*/
                }
                while ( *v11 != 0x20 ); /*0x4596ba*/
              }
              v14 = v8 - v11; /*0x4596bc*/
              LODWORD(v24) = v14; /*0x4596be*/
              strncpy(v28, v11, v24); /*0x4596c8*/
              v22 = (const char *)stru_B38720; /*0x4596df*/
              v21 = (char *)v26; /*0x4596e5*/
              v28[v14] = 0; /*0x4596e6*/
              _sprintf(v21, "%s%s", v22, v28); /*0x4596ee*/
            }
            if ( Str ) /*0x4596f8*/
            {
              v15 = v25 + 0xD; /*0x4596fe*/
              v16 = (char *)(Str - (v25 + 0xD)); /*0x459703*/
              do /*0x45970f*/
              {
                v17 = *v15; /*0x459705*/
                v15[(_DWORD)v16] = *v15; /*0x459707*/
                ++v15; /*0x45970a*/
              }
              while ( v17 ); /*0x45970f*/
              v18 = strstr(Str, ".ess"); /*0x459717*/
              if ( v18 ) /*0x459721*/
                *v18 = 0; /*0x459723*/
              for ( i = 0; i < strlen(Str); ++i ) /*0x45972a*/
              {
                if ( Str[i] == 0x2E ) /*0x459744*/
                  Str[i] = 0x3A; /*0x459746*/
              }
            }
            return 1; /*0x459763*/
          }
        }
      }
    }
  }
  return 0; /*0x459767*/
}
