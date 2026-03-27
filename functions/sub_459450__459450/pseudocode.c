signed int __cdecl sub_459450(int a1, int a2)
{
  DWORD dwLowDateTime; // ebx
  DWORD v3; // ebp
  DWORD v4; // esi
  HANDLE FirstFileA; // eax
  DWORD v6; // edi
  HANDLE v7; // eax
  DWORD v9; // [esp+14h] [ebp-150h]
  DWORD dwHighDateTime; // [esp+1Ch] [ebp-148h]
  struct _WIN32_FIND_DATAA FindFileData; // [esp+20h] [ebp-144h] BYREF

  dwLowDateTime = 0;
  v3 = 0;
  dwHighDateTime = 0;
  v9 = 0;
  if ( *(_BYTE *)(a1 + 0x154) )
  {
    dwLowDateTime = *(_DWORD *)(a1 + 0x158);
    v4 = *(_DWORD *)(a1 + 0x15C);
  }
  else
  {
    FirstFileA = FindFirstFileA((LPCSTR)(a1 + 0x3C), &FindFileData);
    if ( FirstFileA != (HANDLE)0xFFFFFFFF )
    {
      dwLowDateTime = FindFileData.ftLastWriteTime.dwLowDateTime;
      dwHighDateTime = FindFileData.ftLastWriteTime.dwHighDateTime;
    }
    FindClose(FirstFileA);
    *(_DWORD *)(a1 + 0x158) = dwLowDateTime;
    *(_DWORD *)(a1 + 0x15C) = dwHighDateTime;
    *(_BYTE *)(a1 + 0x154) = 1;
    v4 = dwHighDateTime;
  }
  if ( *(_BYTE *)(a2 + 0x154) )
  {
    v3 = *(_DWORD *)(a2 + 0x158);
    v6 = *(_DWORD *)(a2 + 0x15C);
  }
  else
  {
    v7 = FindFirstFileA((LPCSTR)(a2 + 0x3C), &FindFileData);
    if ( v7 != (HANDLE)0xFFFFFFFF )
    {
      v3 = FindFileData.ftLastWriteTime.dwLowDateTime;
      v9 = FindFileData.ftLastWriteTime.dwHighDateTime;
    }
    FindClose(v7);
    *(_DWORD *)(a2 + 0x158) = v3;
    *(_DWORD *)(a2 + 0x15C) = v9;
    *(_BYTE *)(a2 + 0x154) = 1;
    v6 = v9;
  }
  if ( v4 > v6 )
    return 0xFFFFFFFF;
  if ( v4 < v6 )
    return 1;
  if ( dwLowDateTime > v3 )
    return 0xFFFFFFFF;
  return dwLowDateTime < v3;
}
