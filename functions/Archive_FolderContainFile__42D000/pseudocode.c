char __thiscall Archive_FolderContainFile(
        int this,
        unsigned int a2,
        unsigned int *a3,
        signed int *a4,
        const char *a5,
        char a6)
{
  unsigned __int8 v7; // al
  unsigned int v9; // esi
  unsigned int v10; // edi
  unsigned int v11; // ebx
  int v12; // edi
  int v13; // ecx
  unsigned int v14; // eax
  signed int v15; // edi
  unsigned int *v16; // esi
  unsigned int v17; // edx
  unsigned int v18; // ebx
  const char *FileNameByFolderAndIndex; // esi
  char v20; // [esp+7h] [ebp-125h]
  signed int v21; // [esp+8h] [ebp-124h]
  unsigned int v22; // [esp+8h] [ebp-124h]
  unsigned __int64 v23; // [esp+10h] [ebp-11Ch]
  int v24; // [esp+20h] [ebp-10Ch]
  char Filename[260]; // [esp+24h] [ebp-108h] BYREF

  v7 = *(_BYTE *)(this + 0x194); /*0x42d029*/
  if ( (v7 & 1) != 0 ) /*0x42d035*/
    return 0; /*0x42d04e*/
  v9 = *(_DWORD *)(this + 0x178) + 0x10 * a2; /*0x42d05d*/
  v10 = *(_DWORD *)(this + 0x190); /*0x42d064*/
  v11 = *(_DWORD *)(v9 + 8); /*0x42d06a*/
  v20 = 0; /*0x42d06f*/
  v21 = v10; /*0x42d074*/
  if ( v10 < v11 ) /*0x42d078*/
  {
    v12 = *(_DWORD *)(v9 + 0xC) + 0x10 * v10; /*0x42d07d*/
    if ( (a6 || (((v7 >> 3) ^ (*(int *)(v12 + 0xC) < 0)) & 1) == 0) /*0x42d0ab*/
      && (*(_DWORD *)(v12 + 0xC) & 0x7FFFFFFF) != 0
      && !sub_42BC10(a3, (unsigned int *)v12) )
    {
      if ( !BSA_CheckFileIsOverridden((_QWORD *)this, v12, a5) ) /*0x42d0bc*/
      {
        *a4 = v21; /*0x42d0cd*/
        return 1; /*0x42d0d4*/
      }
      return 0; /*0x42d0db*/
    }
  }
  if ( !v11 ) /*0x42d0e2*/
    return v20; /*0x42d0e2*/
  v24 = *(_DWORD *)(v9 + 0xC); /*0x42d0eb*/
  v13 = 0; /*0x42d0fb*/
  v22 = v11; /*0x42d0fd*/
  v23 = *(_QWORD *)a3; /*0x42d101*/
  while ( 1 ) /*0x42d116*/
  {
    v14 = (v22 - v13) >> 1; /*0x42d116*/
    v15 = v14 + v13; /*0x42d118*/
    v16 = (unsigned int *)(v24 + 0x10 * (v14 + v13)); /*0x42d120*/
    v17 = v16[1]; /*0x42d124*/
    v18 = *v16; /*0x42d12b*/
    if ( HIDWORD(v23) > v17 ) /*0x42d12d*/
      goto LABEL_28; /*0x42d12d*/
    if ( HIDWORD(v23) >= v17 && (unsigned int)v23 >= v18 ) /*0x42d139*/
      break; /*0x42d139*/
    v22 = v14 + v13; /*0x42d142*/
LABEL_17:
    if ( !v14 ) /*0x42d148*/
      return v20; /*0x42d148*/
  }
  if ( v23 > __PAIR64__(v17, v18) ) /*0x42d225*/
  {
LABEL_28:
    v13 += v14; /*0x42d22b*/
    goto LABEL_17; /*0x42d232*/
  }
  if ( sub_42C2D0((_BYTE *)this, (int)v16, a6) && !BSA_CheckFileIsOverridden((_QWORD *)this, (int)v16, a5) ) /*0x42d174*/
  {
    *a4 = v15; /*0x42d183*/
    *(_DWORD *)(this + 0x190) = v15; /*0x42d185*/
    v20 = 1; /*0x42d18b*/
    if ( a5 ) /*0x42d190*/
    {
      if ( bCheckRuntimeCollisions_Archive ) /*0x42d198*/
      {
        if ( (*(_DWORD *)(this + 0x160) & 2) != 0 ) /*0x42d1a4*/
        {
          _splitpath(a5, 0, 0, Filename, 0); /*0x42d1b2*/
          FileNameByFolderAndIndex = (const char *)Archive_GetFileNameByFolderAndIndex((_DWORD *)this, a2, v15); /*0x42d1ca*/
          if ( CRT_StricmpLocaleDispatch(FileNameByFolderAndIndex, Filename) ) /*0x42d1d2*/
          {
            PrintError("HashMap Collision between %s and %s", FileNameByFolderAndIndex, Filename); /*0x42d1e9*/
            return 0; /*0x42d1f1*/
          }
        }
      }
    }
  }
  return v20; /*0x42d039*/
}
