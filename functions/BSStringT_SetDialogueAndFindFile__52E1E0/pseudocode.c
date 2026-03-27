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

  v7 = initialPath;
  v8 = *initialPath;
  for ( i = a2; *v7; ++i )
  {
    ++v7;
    *i = v8;
    v8 = *v7;
  }
  v10 = a3;
  v11 = *(_BYTE *)a3;
  *i = 0x5C;
  v12 = i + 1;
  if ( v11 )
  {
    do
    {
      v10 = (UInt32 *)((char *)v10 + 1);
      *v12 = v11;
      v11 = *(_BYTE *)v10;
      ++v12;
    }
    while ( *(_BYTE *)v10 );
  }
  v13 = raceName;
  v14 = *raceName;
  *v12 = 0x5C;
  v15 = v12 + 1;
  if ( v14 )
  {
    do
    {
      ++v13;
      *v15 = v14;
      v14 = *v13;
      ++v15;
    }
    while ( *v13 );
  }
  v16 = sex;
  v17 = *sex;
  *v15 = 0x5C;
  v18 = v15 + 1;
  if ( v17 )
  {
    do
    {
      ++v16;
      *v18 = v17;
      v17 = *v16;
      ++v18;
    }
    while ( *v16 );
    *v18++ = 0x5C;
  }
  v19 = a6;
  for ( j = *a6; *v19; ++v18 )
  {
    ++v19;
    *v18 = j;
    j = *v19;
  }
  v21 = extString;
  v22 = *extString;
  *v18 = 0x2E;
  v23 = v18 + 1;
  if ( v22 )
  {
    do
    {
      ++v21;
      *v23 = v22;
      v22 = *v21;
      ++v23;
    }
    while ( *v21 );
  }
  v24 = OBSE_g_FileFinder;
  v25 = OBSE_g_FileFinder == 0;
  *v23 = 0;
  if ( v25 )
    v26 = 0;
  else
    v26 = v24->vtbl->FindFile(v24, a2, 0, 0, 0xFFFFFFFF);
  BSStringT_Set(a1, a2, 0);
  return v26 != 0;
}
