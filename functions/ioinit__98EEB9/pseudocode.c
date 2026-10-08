unsigned int _ioinit()
{
  unsigned int v0; // eax
  unsigned int i; // ecx
  int v2; // edi
  LPBYTE v3; // ebx
  int v4; // esi
  unsigned int v5; // eax
  unsigned int j; // edx
  int v7; // esi
  int m; // ebx
  int v9; // esi
  DWORD v10; // eax
  HANDLE StdHandle; // eax
  HANDLE v12; // edi
  DWORD FileType; // eax
  struct _STARTUPINFOA StartupInfo; // [esp+10h] [ebp-64h] BYREF
  int k; // [esp+54h] [ebp-20h]
  HANDLE *v17; // [esp+58h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  ms_exc.registration.TryLevel = 0; /*0x98eec7*/
  GetStartupInfoA(&StartupInfo); /*0x98eece*/
  ms_exc.registration.TryLevel = 0xFFFFFFFE; /*0x98eed4*/
  v0 = unknown_libname_74(0x20, 0x28); /*0x98eee1*/
  if ( !v0 ) /*0x98eeea*/
    return 0xFFFFFFFF; /*0x98f0f0*/
  unk_BAAAC0[0] = v0; /*0x98eef0*/
  MEMORY[0xBAAAA0] = 0x20; /*0x98eef5*/
  for ( i = v0 + 0x500; v0 < i; i = unk_BAAAC0[0] + 0x500 ) /*0x98eefb*/
  {
    *(_BYTE *)(v0 + 4) = 0; /*0x98ef03*/
    *(_DWORD *)v0 = 0xFFFFFFFF; /*0x98ef07*/
    *(_BYTE *)(v0 + 5) = 0xA; /*0x98ef0a*/
    *(_DWORD *)(v0 + 8) = 0; /*0x98ef0e*/
    *(_BYTE *)(v0 + 0x24) = 0; /*0x98ef11*/
    *(_BYTE *)(v0 + 0x25) = 0xA; /*0x98ef15*/
    *(_BYTE *)(v0 + 0x26) = 0xA; /*0x98ef19*/
    v0 += 0x28; /*0x98ef1d*/
  }
  if ( StartupInfo.cbReserved2 && StartupInfo.lpReserved2 ) /*0x98ef3f*/
  {
    v2 = *(_DWORD *)StartupInfo.lpReserved2; /*0x98ef45*/
    v3 = StartupInfo.lpReserved2 + 4; /*0x98ef47*/
    v17 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4]; /*0x98ef4d*/
    if ( v2 >= 0x800 ) /*0x98ef57*/
      v2 = 0x800; /*0x98ef59*/
    v4 = 1; /*0x98ef5d*/
    while ( (int)MEMORY[0xBAAAA0] < v2 ) /*0x98efb8*/
    {
      v5 = unknown_libname_74(0x20, 0x28); /*0x98ef64*/
      if ( !v5 ) /*0x98ef6d*/
      {
        v2 = MEMORY[0xBAAAA0]; /*0x98efbc*/
        break; /*0x98efbc*/
      }
      unk_BAAAC0[v4] = v5; /*0x98ef76*/
      MEMORY[0xBAAAA0] += 0x20; /*0x98ef78*/
      for ( j = v5 + 0x500; v5 < j; j = unk_BAAAC0[v4] + 0x500 ) /*0x98ef7f*/
      {
        *(_BYTE *)(v5 + 4) = 0; /*0x98ef87*/
        *(_DWORD *)v5 = 0xFFFFFFFF; /*0x98ef8b*/
        *(_BYTE *)(v5 + 5) = 0xA; /*0x98ef8e*/
        *(_DWORD *)(v5 + 8) = 0; /*0x98ef92*/
        *(_BYTE *)(v5 + 0x24) &= 0x80u; /*0x98ef96*/
        *(_BYTE *)(v5 + 0x25) = 0xA; /*0x98ef9a*/
        *(_BYTE *)(v5 + 0x26) = 0xA; /*0x98ef9e*/
        v5 += 0x28; /*0x98efa2*/
      }
      ++v4; /*0x98efb1*/
    }
    for ( k = 0; k < v2; ++v17 ) /*0x98efc8*/
    {
      if ( *v17 != (HANDLE)0xFFFFFFFF /*0x98efe4*/
        && *v17 != (HANDLE)0xFFFFFFFE
        && (*v3 & 1) != 0
        && ((*v3 & 8) != 0 || GetFileType(*v17)) )
      {
        v7 = unk_BAAAC0[k >> 5] + 0x28 * (k & 0x1F); /*0x98effc*/
        *(_DWORD *)v7 = *v17; /*0x98f008*/
        *(_BYTE *)(v7 + 4) = *v3; /*0x98f00c*/
        if ( !__crtInitCritSecAndSpinCount((int)v3, (_RTL_CRITICAL_SECTION_0 *)(v7 + 0xC), 0xFA0u) ) /*0x98f021*/
          return 0xFFFFFFFF; /*0x98f021*/
        ++*(_DWORD *)(v7 + 8); /*0x98f027*/
      }
      ++k; /*0x98f02a*/
      ++v3; /*0x98f02d*/
    }
  }
  for ( m = 0; m < 3; ++m ) /*0x98f037*/
  {
    v9 = unk_BAAAC0[0] + 0x28 * m; /*0x98f03e*/
    if ( *(_DWORD *)v9 == 0xFFFFFFFF || *(_DWORD *)v9 == 0xFFFFFFFE ) /*0x98f04e*/
    {
      *(_BYTE *)(v9 + 4) = 0x81; /*0x98f056*/
      if ( m ) /*0x98f05c*/
        v10 = -(m != 1) - 0xB; /*0x98f06a*/
      else
        v10 = 0xFFFFFFF6; /*0x98f060*/
      StdHandle = GetStdHandle(v10); /*0x98f06e*/
      v12 = StdHandle; /*0x98f074*/
      if ( StdHandle != (HANDLE)0xFFFFFFFF && StdHandle && (FileType = GetFileType(StdHandle)) != 0 ) /*0x98f088*/
      {
        *(_DWORD *)v9 = v12; /*0x98f08a*/
        if ( (unsigned __int8)FileType == 2 ) /*0x98f094*/
        {
          *(_BYTE *)(v9 + 4) |= 0x40u; /*0x98f096*/
        }
        else if ( (unsigned __int8)FileType == 3 ) /*0x98f09f*/
        {
          *(_BYTE *)(v9 + 4) |= 8u; /*0x98f0a1*/
        }
        if ( !__crtInitCritSecAndSpinCount(m, (_RTL_CRITICAL_SECTION_0 *)(v9 + 0xC), 0xFA0u) ) /*0x98f0b7*/
          return 0xFFFFFFFF; /*0x98f0b7*/
        ++*(_DWORD *)(v9 + 8); /*0x98f0b9*/
      }
      else
      {
        *(_BYTE *)(v9 + 4) |= 0x40u; /*0x98f0be*/
        *(_DWORD *)v9 = 0xFFFFFFFE; /*0x98f0c2*/
      }
    }
    else
    {
      *(_BYTE *)(v9 + 4) |= 0x80u; /*0x98f050*/
    }
  }
  SetHandleCount(MEMORY[0xBAAAA0]); /*0x98f0d8*/
  return 0; /*0x98f0f3*/
}
