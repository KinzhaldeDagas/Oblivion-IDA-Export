void *__cdecl __convertcp(UINT CodePage, UINT a2, char *a3, int *a4, CHAR *a5, int a6)
{
  signed int v6; // esi
  bool v7; // cc
  WCHAR_0 *v8; // eax
  LPSTR v10; // ebx
  void *v11; // eax
  int v12; // eax
  size_t v13[2]; // [esp-4h] [ebp-44h] BYREF
  LPSTR lpMultiByteStr; // [esp+Ch] [ebp-34h]
  int *v15; // [esp+10h] [ebp-30h]
  int v16; // [esp+14h] [ebp-2Ch]
  char *Str; // [esp+18h] [ebp-28h]
  int cbMultiByte; // [esp+1Ch] [ebp-24h]
  void *Memory; // [esp+20h] [ebp-20h]
  LPWSTR lpWideCharStr; // [esp+24h] [ebp-1Ch]
  struct _cpinfo CPInfo; // [esp+28h] [ebp-18h] BYREF

  Str = a3;
  v15 = a4;
  cbMultiByte = *a4;
  lpMultiByteStr = a5;
  Memory = 0;
  v16 = 0;
  if ( CodePage == a2 )
    return Memory;
  if ( GetCPInfo(CodePage, (LPCPINFO)&CPInfo)
    && CPInfo.MaxCharSize == 1
    && GetCPInfo(a2, (LPCPINFO)&CPInfo)
    && CPInfo.MaxCharSize == 1 )
  {
    v6 = cbMultiByte;
    v16 = 1;
    if ( cbMultiByte == 0xFFFFFFFF )
      v6 = strlen(Str) + 1;
    v7 = v6 <= 0;
  }
  else
  {
    v6 = MultiByteToWideChar(CodePage, 1u, Str, cbMultiByte, 0, 0);
    v7 = v6 <= 0;
    if ( !v6 )
      return 0;
  }
  if ( !v7 && (unsigned int)v6 <= 0x7FFFFFF0 )
  {
    if ( (unsigned int)(2 * v6 + 8) > 0x400 )
    {
      LODWORD(v13[0]) = 2 * v6 + 8;
      v8 = (WCHAR_0 *)malloc(v13[0]);
      if ( v8 )
      {
        *(_DWORD *)v8 = 0xDDDD;
        goto LABEL_18;
      }
    }
    else
    {
      _alloca_(SHIDWORD(v13[0]));
      v8 = (WCHAR_0 *)v13 + 2;
      if ( v13 != (size_t *)0xFFFFFFFC )
      {
        HIDWORD(v13[0]) = 0xCCCC;
LABEL_18:
        v8 += 4;
      }
    }
    lpWideCharStr = v8;
    goto LABEL_21;
  }
  lpWideCharStr = 0;
LABEL_21:
  if ( !lpWideCharStr )
    return 0;
  _memset((int)lpWideCharStr, 0, 2 * v6);
  if ( MultiByteToWideChar(CodePage, 1u, Str, cbMultiByte, lpWideCharStr, v6) )
  {
    v10 = lpMultiByteStr;
    if ( lpMultiByteStr )
    {
      if ( WideCharToMultiByte(a2, 0, lpWideCharStr, v6, lpMultiByteStr, a6, 0, 0) )
        Memory = v10;
    }
    else if ( v16 || (v6 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, 0, 0, 0, 0)) != 0 )
    {
      v11 = (void *)unknown_libname_74();
      Memory = v11;
      if ( v11 )
      {
        v12 = WideCharToMultiByte(a2, 0, lpWideCharStr, v6, (LPSTR)v11, v6, 0, 0);
        if ( v12 )
        {
          if ( cbMultiByte != 0xFFFFFFFF )
            *v15 = v12;
        }
        else
        {
          free(Memory);
          Memory = 0;
        }
      }
    }
  }
  _freea(lpWideCharStr);
  return Memory;
}
