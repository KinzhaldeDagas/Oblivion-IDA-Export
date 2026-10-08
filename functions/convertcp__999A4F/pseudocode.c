void *__cdecl __convertcp(UINT CodePage, UINT a2, char *a3, int *a4, CHAR *a5, int a6)
{
  signed int v6; // esi
  bool v7; // cc
  unsigned int v8; // eax
  WCHAR_0 *v9; // eax
  LPSTR v11; // ebx
  void *v12; // eax
  int v13; // eax
  size_t v14[2]; // [esp-4h] [ebp-44h] BYREF
  LPSTR lpMultiByteStr; // [esp+Ch] [ebp-34h]
  int *v16; // [esp+10h] [ebp-30h]
  int v17; // [esp+14h] [ebp-2Ch]
  char *Str; // [esp+18h] [ebp-28h]
  int cbMultiByte; // [esp+1Ch] [ebp-24h]
  void *Memory; // [esp+20h] [ebp-20h]
  LPWSTR lpWideCharStr; // [esp+24h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+28h] [ebp-18h] BYREF

  Str = a3; /*0x999a65*/
  v16 = a4; /*0x999a6c*/
  cbMultiByte = *a4; /*0x999a72*/
  lpMultiByteStr = a5; /*0x999a7e*/
  Memory = 0; /*0x999a81*/
  v17 = 0; /*0x999a84*/
  if ( CodePage == a2 ) /*0x999a87*/
    return Memory; /*0x999a87*/
  if ( GetCPInfo(CodePage, (LPCPINFO)&CPInfo) /*0x999abb*/
    && CPInfo.MaxCharSize == 1
    && GetCPInfo(a2, (LPCPINFO)&CPInfo)
    && CPInfo.MaxCharSize == 1 )
  {
    v6 = cbMultiByte; /*0x999abd*/
    v17 = 1; /*0x999ac3*/
    if ( cbMultiByte == 0xFFFFFFFF ) /*0x999aca*/
      v6 = strlen(Str) + 1; /*0x999ad7*/
    v7 = v6 <= 0; /*0x999ad8*/
  }
  else
  {
    v6 = MultiByteToWideChar(CodePage, 1u, Str, cbMultiByte, 0, 0); /*0x999b11*/
    v7 = v6 <= 0; /*0x999b13*/
    if ( !v6 ) /*0x999b15*/
      return 0; /*0x999b19*/
  }
  if ( !v7 && (unsigned int)v6 <= 0x7FFFFFF0 ) /*0x999ae2*/
  {
    v8 = 2 * v6 + 8; /*0x999ae4*/
    if ( v8 > 0x400 ) /*0x999aed*/
    {
      LODWORD(v14[0]) = 2 * v6 + 8; /*0x999b1e*/
      v9 = (WCHAR_0 *)malloc(v14[0]); /*0x999b1f*/
      if ( v9 ) /*0x999b27*/
      {
        *(_DWORD *)v9 = 0xDDDD; /*0x999b29*/
        goto LABEL_18; /*0x999b29*/
      }
    }
    else
    {
      _alloca_(v8); /*0x999aef*/
      v9 = (WCHAR_0 *)v14 + 2; /*0x999af4*/
      if ( v14 != (size_t *)0xFFFFFFFC ) /*0x999af8*/
      {
        HIDWORD(v14[0]) = 0xCCCC; /*0x999afa*/
LABEL_18:
        v9 += 4; /*0x999b2f*/
      }
    }
    lpWideCharStr = v9; /*0x999b32*/
    goto LABEL_21; /*0x999b35*/
  }
  lpWideCharStr = 0; /*0x999b37*/
LABEL_21:
  if ( !lpWideCharStr ) /*0x999b3d*/
    return 0; /*0x999b3d*/
  _memset((int)lpWideCharStr, 0, 2 * v6); /*0x999b47*/
  if ( MultiByteToWideChar(CodePage, 1u, Str, cbMultiByte, lpWideCharStr, v6) ) /*0x999b5e*/
  {
    v11 = lpMultiByteStr; /*0x999b64*/
    if ( lpMultiByteStr ) /*0x999b69*/
    {
      if ( WideCharToMultiByte(a2, 0, lpWideCharStr, v6, lpMultiByteStr, a6, 0, 0) ) /*0x999b79*/
        Memory = v11; /*0x999b83*/
    }
    else if ( v17 || (v6 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, 0, 0, 0, 0)) != 0 ) /*0x999ba5*/
    {
      v12 = (void *)unknown_libname_74(1, v6); /*0x999baa*/
      Memory = v12; /*0x999bb3*/
      if ( v12 ) /*0x999bb6*/
      {
        v13 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, (LPSTR)v12, v6, 0, 0); /*0x999bc4*/
        if ( v13 ) /*0x999bc8*/
        {
          if ( cbMultiByte != 0xFFFFFFFF ) /*0x999bdc*/
            *v16 = v13; /*0x999be1*/
        }
        else
        {
          free(Memory); /*0x999bcd*/
          Memory = 0; /*0x999bd3*/
        }
      }
    }
  }
  _freea(lpWideCharStr); /*0x999be6*/
  return Memory; /*0x999bf2*/
}
