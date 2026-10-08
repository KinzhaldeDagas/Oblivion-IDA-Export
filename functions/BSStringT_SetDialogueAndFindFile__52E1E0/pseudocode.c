bool __stdcall BSStringT::SetDialogueAndFindFile(
        BSStringT *a1,
        char *initialPath,
        UInt32 *a3,
        char *raceName,
        char *sex,
        char *a6,
        char *extString)
{
  char *v7; // edx
  char v8; // cl
  char *i; // eax
  UInt32 *v10; // edx
  char v11; // cl
  _BYTE *v12; // eax
  char *v13; // edx
  char v14; // cl
  char *v15; // eax
  char *v16; // edx
  char v17; // cl
  char *v18; // eax
  char *v19; // edx
  char j; // cl
  char *v21; // edx
  char v22; // cl
  char *v23; // eax
  FileFinder *v24; // ecx
  bool v25; // zf
  int v26; // esi
  char a2[260]; // [esp+8h] [ebp-108h] BYREF

  v7 = initialPath; /*0x52e1f4*/
  v8 = *initialPath; /*0x52e1fb*/
  for ( i = a2; *v7; ++i ) /*0x52e1fb*/
  {
    ++v7; /*0x52e210*/
    *i = v8; /*0x52e213*/
    v8 = *v7; /*0x52e215*/
  }
  v10 = a3; /*0x52e21e*/
  v11 = *(_BYTE *)a3; /*0x52e225*/
  *i = 0x5C; /*0x52e227*/
  v12 = i + 1; /*0x52e22a*/
  if ( v11 ) /*0x52e22f*/
  {
    do /*0x52e236*/
    {
      v10 = (UInt32 *)((char *)v10 + 1); /*0x52e231*/
      *v12 = v11; /*0x52e234*/
      v11 = *(_BYTE *)v10; /*0x52e236*/
      ++v12; /*0x52e238*/
    }
    while ( *(_BYTE *)v10 ); /*0x52e236*/
  }
  v13 = raceName; /*0x52e23f*/
  v14 = *raceName; /*0x52e246*/
  *v12 = 0x5C; /*0x52e248*/
  v15 = v12 + 1; /*0x52e24b*/
  if ( v14 ) /*0x52e250*/
  {
    do /*0x52e257*/
    {
      ++v13; /*0x52e252*/
      *v15 = v14; /*0x52e255*/
      v14 = *v13; /*0x52e257*/
      ++v15; /*0x52e259*/
    }
    while ( *v13 ); /*0x52e257*/
  }
  v16 = sex; /*0x52e260*/
  v17 = *sex; /*0x52e267*/
  *v15 = 0x5C; /*0x52e269*/
  v18 = v15 + 1; /*0x52e26c*/
  if ( v17 ) /*0x52e271*/
  {
    do /*0x52e278*/
    {
      ++v16; /*0x52e273*/
      *v18 = v17; /*0x52e276*/
      v17 = *v16; /*0x52e278*/
      ++v18; /*0x52e27a*/
    }
    while ( *v16 ); /*0x52e278*/
    *v18++ = 0x5C; /*0x52e281*/
  }
  v19 = a6; /*0x52e287*/
  for ( j = *a6; *v19; ++v18 ) /*0x52e28e*/
  {
    ++v19; /*0x52e294*/
    *v18 = j; /*0x52e297*/
    j = *v19; /*0x52e299*/
  }
  v21 = extString; /*0x52e2a2*/
  v22 = *extString; /*0x52e2a9*/
  *v18 = 0x2E; /*0x52e2ab*/
  v23 = v18 + 1; /*0x52e2ae*/
  if ( v22 ) /*0x52e2b3*/
  {
    do /*0x52e2ba*/
    {
      ++v21; /*0x52e2b5*/
      *v23 = v22; /*0x52e2b8*/
      v22 = *v21; /*0x52e2ba*/
      ++v23; /*0x52e2bc*/
    }
    while ( *v21 ); /*0x52e2ba*/
  }
  v24 = MEMORY[0xB33A04]; /*0x52e2c3*/
  v25 = MEMORY[0xB33A04] == 0; /*0x52e2c9*/
  *v23 = 0; /*0x52e2cb*/
  if ( v25 ) /*0x52e2ce*/
    v26 = 0; /*0x52e2e6*/
  else
    v26 = v24->vtbl->FindFile(v24, a2, 0, 0, 0xFFFFFFFF); /*0x52e2e2*/
  BSStringT_Set(a1, a2, 0); /*0x52e2f1*/
  return v26 != 0; /*0x52e2ff*/
}
