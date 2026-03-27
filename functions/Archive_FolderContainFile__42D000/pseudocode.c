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
  char *v19; // esi
  char v20; // [esp+7h] [ebp-125h]
  signed int v21; // [esp+8h] [ebp-124h]
  unsigned int v22; // [esp+8h] [ebp-124h]
  unsigned __int64 v23; // [esp+10h] [ebp-11Ch]
  int v24; // [esp+20h] [ebp-10Ch]
  char Filename[260]; // [esp+24h] [ebp-108h] BYREF

  v7 = *(_BYTE *)(this + 0x194);
  if ( (v7 & 1) != 0 )
    return 0;
  v9 = *(_DWORD *)(this + 0x178) + 0x10 * a2;
  v10 = *(_DWORD *)(this + 0x190);
  v11 = *(_DWORD *)(v9 + 8);
  v20 = 0;
  v21 = v10;
  if ( v10 < v11 )
  {
    v12 = *(_DWORD *)(v9 + 0xC) + 0x10 * v10;
    if ( (a6 || (((v7 >> 3) ^ (*(int *)(v12 + 0xC) < 0)) & 1) == 0)
      && (*(_DWORD *)(v12 + 0xC) & 0x7FFFFFFF) != 0
      && !sub_42BC10(a3, (unsigned int *)v12) )
    {
      if ( !BSA_CheckFileIsOverridden((_QWORD *)this, v12, a5) )
      {
        *a4 = v21;
        return 1;
      }
      return 0;
    }
  }
  if ( !v11 )
    return v20;
  v24 = *(_DWORD *)(v9 + 0xC);
  v13 = 0;
  v22 = v11;
  v23 = *(_QWORD *)a3;
  while ( 1 )
  {
    v14 = (v22 - v13) >> 1;
    v15 = v14 + v13;
    v16 = (unsigned int *)(v24 + 0x10 * (v14 + v13));
    v17 = v16[1];
    v18 = *v16;
    if ( HIDWORD(v23) > v17 )
      goto LABEL_28;
    if ( HIDWORD(v23) >= v17 && (unsigned int)v23 >= v18 )
      break;
    v22 = v14 + v13;
LABEL_17:
    if ( !v14 )
      return v20;
  }
  if ( v23 > __PAIR64__(v17, v18) )
  {
LABEL_28:
    v13 += v14;
    goto LABEL_17;
  }
  if ( sub_42C2D0((_BYTE *)this, (int)v16, a6) && !BSA_CheckFileIsOverridden((_QWORD *)this, (int)v16, a5) )
  {
    *a4 = v15;
    *(_DWORD *)(this + 0x190) = v15;
    v20 = 1;
    if ( a5 )
    {
      if ( bCheckRuntimeCollisions_Archive )
      {
        if ( (*(_DWORD *)(this + 0x160) & 2) != 0 )
        {
          _splitpath(a5, 0, 0, Filename, 0);
          v19 = (char *)sub_42CC00((_DWORD *)this, a2, v15);
          if ( _strcmp(v19, Filename) )
          {
            PrintError("HashMap Collision between %s and %s", v19, Filename);
            return 0;
          }
        }
      }
    }
  }
  return v20;
}
