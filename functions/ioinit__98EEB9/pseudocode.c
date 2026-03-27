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

  ms_exc.registration.TryLevel = 0;
  GetStartupInfoA(&StartupInfo);
  ms_exc.registration.TryLevel = 0xFFFFFFFE;
  v0 = unknown_libname_74();
  if ( !v0 )
    return 0xFFFFFFFF;
  dword_BAAAC0[0] = v0;
  uNumber = 0x20;
  for ( i = v0 + 0x500; v0 < i; i = dword_BAAAC0[0] + 0x500 )
  {
    *(_BYTE *)(v0 + 4) = 0;
    *(_DWORD *)v0 = 0xFFFFFFFF;
    *(_BYTE *)(v0 + 5) = 0xA;
    *(_DWORD *)(v0 + 8) = 0;
    *(_BYTE *)(v0 + 0x24) = 0;
    *(_BYTE *)(v0 + 0x25) = 0xA;
    *(_BYTE *)(v0 + 0x26) = 0xA;
    v0 += 0x28;
  }
  if ( StartupInfo.cbReserved2 && StartupInfo.lpReserved2 )
  {
    v2 = *(_DWORD *)StartupInfo.lpReserved2;
    v3 = StartupInfo.lpReserved2 + 4;
    v17 = (HANDLE *)&StartupInfo.lpReserved2[*(_DWORD *)StartupInfo.lpReserved2 + 4];
    if ( v2 >= 0x800 )
      v2 = 0x800;
    v4 = 1;
    while ( (int)uNumber < v2 )
    {
      v5 = unknown_libname_74();
      if ( !v5 )
      {
        v2 = uNumber;
        break;
      }
      dword_BAAAC0[v4] = v5;
      uNumber += 0x20;
      for ( j = v5 + 0x500; v5 < j; j = dword_BAAAC0[v4] + 0x500 )
      {
        *(_BYTE *)(v5 + 4) = 0;
        *(_DWORD *)v5 = 0xFFFFFFFF;
        *(_BYTE *)(v5 + 5) = 0xA;
        *(_DWORD *)(v5 + 8) = 0;
        *(_BYTE *)(v5 + 0x24) &= 0x80u;
        *(_BYTE *)(v5 + 0x25) = 0xA;
        *(_BYTE *)(v5 + 0x26) = 0xA;
        v5 += 0x28;
      }
      ++v4;
    }
    for ( k = 0; k < v2; ++v17 )
    {
      if ( *v17 != (HANDLE)0xFFFFFFFF
        && *v17 != (HANDLE)0xFFFFFFFE
        && (*v3 & 1) != 0
        && ((*v3 & 8) != 0 || GetFileType(*v17)) )
      {
        v7 = dword_BAAAC0[k >> 5] + 0x28 * (k & 0x1F);
        *(_DWORD *)v7 = *v17;
        *(_BYTE *)(v7 + 4) = *v3;
        if ( !__crtInitCritSecAndSpinCount((int)v3, (_RTL_CRITICAL_SECTION_0 *)(v7 + 0xC), 0xFA0u) )
          return 0xFFFFFFFF;
        ++*(_DWORD *)(v7 + 8);
      }
      ++k;
      ++v3;
    }
  }
  for ( m = 0; m < 3; ++m )
  {
    v9 = dword_BAAAC0[0] + 0x28 * m;
    if ( *(_DWORD *)v9 == 0xFFFFFFFF || *(_DWORD *)v9 == 0xFFFFFFFE )
    {
      *(_BYTE *)(v9 + 4) = 0x81;
      if ( m )
        v10 = -(m != 1) - 0xB;
      else
        v10 = 0xFFFFFFF6;
      StdHandle = GetStdHandle(v10);
      v12 = StdHandle;
      if ( StdHandle != (HANDLE)0xFFFFFFFF && StdHandle && (FileType = GetFileType(StdHandle)) != 0 )
      {
        *(_DWORD *)v9 = v12;
        if ( (unsigned __int8)FileType == 2 )
        {
          *(_BYTE *)(v9 + 4) |= 0x40u;
        }
        else if ( (unsigned __int8)FileType == 3 )
        {
          *(_BYTE *)(v9 + 4) |= 8u;
        }
        if ( !__crtInitCritSecAndSpinCount(m, (_RTL_CRITICAL_SECTION_0 *)(v9 + 0xC), 0xFA0u) )
          return 0xFFFFFFFF;
        ++*(_DWORD *)(v9 + 8);
      }
      else
      {
        *(_BYTE *)(v9 + 4) |= 0x40u;
        *(_DWORD *)v9 = 0xFFFFFFFE;
      }
    }
    else
    {
      *(_BYTE *)(v9 + 4) |= 0x80u;
    }
  }
  SetHandleCount(uNumber);
  return 0;
}
