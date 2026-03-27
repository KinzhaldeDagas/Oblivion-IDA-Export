char __thiscall Archive_ContainsFolder(int this, unsigned int *a2, signed int *a3, const char *a4)
{
  unsigned int v6; // ebx
  unsigned int v7; // esi
  int v8; // edx
  unsigned int v9; // ecx
  signed int v10; // esi
  unsigned int *v11; // eax
  unsigned int v12; // ebx
  unsigned int v13; // eax
  char *FolderNames; // esi
  char v15; // [esp+7h] [ebp-11Dh]
  unsigned __int64 v16; // [esp+Ch] [ebp-118h]
  unsigned int v17; // [esp+14h] [ebp-110h]
  char Dir[260]; // [esp+1Ch] [ebp-108h] BYREF

  if ( (*(_BYTE *)(this + 0x194) & 1) != 0 )
    return 0;
  v6 = *(_DWORD *)(this + 0x18C);
  v7 = *(_DWORD *)(this + 0x164);
  v15 = 0;
  if ( v6 < v7 && !sub_42BC10(a2, (unsigned int *)(*(_DWORD *)(this + 0x178) + 0x10 * v6)) )
  {
    *a3 = v6;
    return 1;
  }
  *(_DWORD *)(this + 0x190) = 0xFFFFFFFF;
  if ( v7 )
  {
    v8 = 0;
    v17 = v7;
    v16 = *(_QWORD *)a2;
    do
    {
      v9 = (v17 - v8) >> 1;
      v10 = v9 + v8;
      v11 = (unsigned int *)(*(_DWORD *)(this + 0x178) + 0x10 * (v9 + v8));
      v12 = *v11;
      v13 = v11[1];
      if ( HIDWORD(v16) > v13 )
        goto LABEL_21;
      if ( HIDWORD(v16) >= v13 && (unsigned int)v16 >= v12 )
      {
        if ( v16 <= __PAIR64__(v13, v12) )
        {
          *a3 = v10;
          *(_DWORD *)(this + 0x18C) = v10;
          v15 = 1;
          if ( a4 )
          {
            if ( bCheckRuntimeCollisions_Archive )
            {
              if ( (*(_BYTE *)(this + 0x160) & 1) != 0 )
              {
                _splitpath(a4, 0, Dir, 0, 0);
                FolderNames = (char *)Archive_LoadFolderNames((_DWORD *)this, v10);
                if ( _strcmp(FolderNames, Dir) )
                {
                  PrintError("HashMap Collision between %s and %s", FolderNames, Dir);
                  return 0;
                }
              }
            }
          }
          return v15;
        }
LABEL_21:
        v8 += v9;
        continue;
      }
      v17 = v9 + v8;
    }
    while ( v9 );
  }
  return v15;
}
