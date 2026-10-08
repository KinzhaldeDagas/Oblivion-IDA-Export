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

  if ( (*(_BYTE *)(this + 0x194) & 1) != 0 ) /*0x42ce74*/
    return 0; /*0x42ce8d*/
  v6 = *(_DWORD *)(this + 0x18C); /*0x42ce91*/
  v7 = *(_DWORD *)(this + 0x164); /*0x42cea0*/
  v15 = 0; /*0x42cea8*/
  if ( v6 < v7 && !sub_42BC10(a2, (unsigned int *)(*(_DWORD *)(this + 0x178) + 0x10 * v6)) ) /*0x42cebd*/
  {
    *a3 = v6; /*0x42ceca*/
    return 1; /*0x42ced1*/
  }
  *(_DWORD *)(this + 0x190) = 0xFFFFFFFF; /*0x42ced8*/
  if ( v7 ) /*0x42cee2*/
  {
    v8 = 0; /*0x42ceee*/
    v17 = v7; /*0x42cef0*/
    v16 = *(_QWORD *)a2; /*0x42cef4*/
    do /*0x42cf06*/
    {
      v9 = (v17 - v8) >> 1; /*0x42cf06*/
      v10 = v9 + v8; /*0x42cf08*/
      v11 = (unsigned int *)(*(_DWORD *)(this + 0x178) + 0x10 * (v9 + v8)); /*0x42cf10*/
      v12 = *v11; /*0x42cf16*/
      v13 = v11[1]; /*0x42cf18*/
      if ( HIDWORD(v16) > v13 ) /*0x42cf1f*/
        goto LABEL_21; /*0x42cf1f*/
      if ( HIDWORD(v16) >= v13 && (unsigned int)v16 >= v12 ) /*0x42cf2b*/
      {
        if ( v16 <= __PAIR64__(v13, v12) ) /*0x42cfe2*/
        {
          *a3 = v10; /*0x42cf4a*/
          *(_DWORD *)(this + 0x18C) = v10; /*0x42cf4c*/
          v15 = 1; /*0x42cf52*/
          if ( a4 ) /*0x42cf57*/
          {
            if ( bCheckRuntimeCollisions_Archive ) /*0x42cf60*/
            {
              if ( (*(_BYTE *)(this + 0x160) & 1) != 0 ) /*0x42cf69*/
              {
                _splitpath(a4, 0, Dir, 0, 0); /*0x42cf77*/
                FolderNames = (char *)Archive_LoadFolderNames((_DWORD *)this, v10); /*0x42cf87*/
                if ( CRT_StricmpLocaleDispatch((unsigned __int8 *)FolderNames, (unsigned __int8 *)Dir) )// MEF v39 caller proof: Archive_ContainsFolder passes Archive_LoadFolderNames result directly to strcmp without null check. /*0x42cf8f*/
                {
                  PrintError("HashMap Collision between %s and %s", FolderNames, Dir); /*0x42cfa6*/
                  return 0; /*0x42cfae*/
                }
              }
            }
          }
          return v15; /*0x42cfae*/
        }
LABEL_21:
        v8 += v9; /*0x42cfe8*/
        continue; /*0x42cfef*/
      }
      v17 = v9 + v8; /*0x42cf34*/
    }
    while ( v9 ); /*0x42cf06*/
  }
  return v15; /*0x42ce78*/
}
