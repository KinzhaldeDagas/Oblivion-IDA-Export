char *__stdcall sub_435830(char *a1, int a2)
{
  const char **v2; // esi
  char **v3; // eax
  char **v4; // ebp
  const char *v5; // esi
  char *v6; // edi
  char **v7; // eax
  char *result; // eax
  unsigned int v9; // eax
  char *v10; // edi
  const char **v12; // [esp+Ch] [ebp-10Ch] BYREF
  char Str[260]; // [esp+10h] [ebp-108h] BYREF

  if ( g_idleAnimationMap && sub_521190((_DWORD *)g_idleAnimationMap, a1) )
  {
    v2 = (const char **)sub_521190((_DWORD *)g_idleAnimationMap, a1);
    v12 = v2;
    v3 = (char **)FormHeapAlloc(8u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v4 = v3;
    }
    else
    {
      v4 = 0;
    }
    if ( v2 )
    {
      while ( 1 )
      {
        v5 = *v2;
        v6 = (char *)FormHeapAlloc(strlen(v5) + 1);
        strcpy(v6, v5);
        if ( v6 )
        {
          if ( *v4 )
          {
            v7 = (char **)FormHeapAlloc(8u);
            if ( v7 )
            {
              *v7 = *v4;
              v7[1] = 0;
            }
            else
            {
              v7 = 0;
            }
            v7[1] = v4[1];
            v4[1] = (char *)v7;
          }
          *v4 = v6;
        }
        v12 = (const char **)v12[1];
        if ( !v12 )
          break;
        v2 = v12;
      }
    }
    return (char *)v4;
  }
  else
  {
    strcpy(Str, "Data\\Meshes\\");
    v9 = strlen(a1) + 1;
    v10 = (char *)&v12 + 3;
    while ( *++v10 )
      ;
    qmemcpy(v10, a1, v9);
    result = strrchr(Str, 0x5C);
    if ( result )
    {
      strcpy(result, "\\*.KF");
      return (char *)sub_431970(Str, a1, 1, 0);
    }
  }
  return result;
}
