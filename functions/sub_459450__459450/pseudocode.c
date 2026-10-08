// ContinueFromLastSave fidelity decode: SaveGameFile sorted-list comparator. Caches ftLastWriteTime at SaveGameFile+0x158/+0x15C and returns newest file first; vanilla Continue therefore means newest write time, not highest Save number.
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

  dwLowDateTime = 0; /*0x45946e*/
  v3 = 0; /*0x459470*/
  dwHighDateTime = 0; /*0x459480*/
  v9 = 0; /*0x459484*/
  if ( *(_BYTE *)(a1 + 0x154) ) /*0x459472*/
  {
    dwLowDateTime = *(_DWORD *)(a1 + 0x158); /*0x45948a*/
    v4 = *(_DWORD *)(a1 + 0x15C); /*0x459490*/
  }
  else
  {
    FirstFileA = FindFirstFileA((LPCSTR)(a1 + 0x3C), &FindFileData); /*0x4594a1*/
    if ( FirstFileA != (HANDLE)0xFFFFFFFF ) /*0x4594aa*/
    {
      dwLowDateTime = FindFileData.ftLastWriteTime.dwLowDateTime; /*0x4594b0*/
      dwHighDateTime = FindFileData.ftLastWriteTime.dwHighDateTime; /*0x4594b4*/
    }
    FindClose(FirstFileA); /*0x4594b9*/
    *(_DWORD *)(a1 + 0x158) = dwLowDateTime; /*0x4594c3*/
    *(_DWORD *)(a1 + 0x15C) = dwHighDateTime; /*0x4594c9*/
    *(_BYTE *)(a1 + 0x154) = 1; /*0x4594cf*/
    v4 = dwHighDateTime; /*0x4594d6*/
  }
  if ( *(_BYTE *)(a2 + 0x154) ) /*0x4594d8*/
  {
    v3 = *(_DWORD *)(a2 + 0x158); /*0x4594e1*/
    v6 = *(_DWORD *)(a2 + 0x15C); /*0x4594e7*/
  }
  else
  {
    v7 = FindFirstFileA((LPCSTR)(a2 + 0x3C), &FindFileData); /*0x4594f8*/
    if ( v7 != (HANDLE)0xFFFFFFFF ) /*0x459501*/
    {
      v3 = FindFileData.ftLastWriteTime.dwLowDateTime; /*0x459507*/
      v9 = FindFileData.ftLastWriteTime.dwHighDateTime; /*0x45950b*/
    }
    FindClose(v7); /*0x459510*/
    *(_DWORD *)(a2 + 0x158) = v3; /*0x45951a*/
    *(_DWORD *)(a2 + 0x15C) = v9; /*0x459520*/
    *(_BYTE *)(a2 + 0x154) = 1; /*0x459526*/
    v6 = v9; /*0x45952d*/
  }
  if ( v4 > v6 ) /*0x459531*/
    return 0xFFFFFFFF; /*0x459531*/
  if ( v4 < v6 ) /*0x459538*/
    return 1; /*0x45953a*/
  if ( dwLowDateTime > v3 ) /*0x459543*/
    return 0xFFFFFFFF; /*0x459536*/
  return dwLowDateTime < v3; /*0x459549*/
}
