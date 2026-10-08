// Builds a KF path list for a model directory. Feeds ModelLoader KF discovery used by actor animation setup and generated attack/idle lists.
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

  if ( MEMORY[0xB362C0] && sub_521190((_DWORD *)MEMORY[0xB362C0], a1) ) /*0x43585d*/
  {
    v2 = (const char **)sub_521190((_DWORD *)MEMORY[0xB362C0], a1); /*0x435876*/
    v12 = v2; /*0x43587a*/
    v3 = (char **)FormHeapAlloc(8u);            // MEF v43 Oblivion-verified KF list head OOM guard: set EBP=0, remove pending size, and return empty list via 0x435920 before any EBP dereference. /*0x43587e*/
    if ( v3 ) /*0x435888*/
    {
      *v3 = 0; /*0x43588a*/
      v3[1] = 0; /*0x435890*/
      v4 = v3; /*0x435897*/
    }
    else
    {
      v4 = 0; /*0x43589b*/
    }
    if ( v2 ) /*0x43589f*/
    {
      while ( 1 ) /*0x4358ab*/
      {
        v5 = *v2; /*0x4358ab*/
        v6 = (char *)FormHeapAlloc(strlen(v5) + 1);// MEF v43 Oblivion-verified KF string OOM guard: remove pending size and skip current source entry at 0x435911 before copy/list mutation. /*0x4358c6*/
        strcpy(v6, v5); /*0x4358cd*/
        if ( v6 ) /*0x4358df*/
        {
          if ( *v4 ) /*0x4358e1*/
          {
            v7 = (char **)FormHeapAlloc(8u); /*0x4358e9*/
            if ( v7 )                           // MEF v43 Oblivion-verified KF link-node OOM guard: free newly copied EDI string, preserve existing list head/tail, and skip current source entry at 0x435911. /*0x4358f3*/
            {
              *v7 = *v4; /*0x4358f8*/
              v7[1] = 0; /*0x4358fa*/
            }
            else
            {
              v7 = 0; /*0x435903*/
            }
            v7[1] = v4[1]; /*0x435908*/
            v4[1] = (char *)v7; /*0x43590b*/
          }
          *v4 = v6; /*0x43590e*/
        }
        v12 = (const char **)v12[1]; /*0x43591a*/
        if ( !v12 ) /*0x43591e*/
          break; /*0x43591e*/
        v2 = v12; /*0x4358a7*/
      }
    }
    return (char *)v4; /*0x435920*/
  }
  else
  {
    strcpy(Str, "Data\\Meshes\\"); /*0x435938*/
    v9 = strlen(a1) + 1; /*0x435959*/
    v10 = (char *)&v12 + 3; /*0x435961*/
    while ( *++v10 ) /*0x43596c*/
      ; /*0x435964*/
    qmemcpy(v10, a1, v9); /*0x435975*/
    result = strrchr(Str, 0x5C); /*0x435985*/
    if ( result ) /*0x43598f*/
    {
      strcpy(result, "\\*.KF"); /*0x435997*/
      return (char *)ModelLoader_BuildFileListWildcard(Str, a1, 1, 0); /*0x4359ae*/
    }
  }
  return result; /*0x4359b6*/
}
