unsigned int __wtomb_environ()
{
  LPCWSTR *v0; // edi
  const WCHAR_0 *v1; // eax
  void *v2; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  void *Memory; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWSTR *)dword_BA9DBC;
  Memory = 0;
  v1 = *(const WCHAR_0 **)dword_BA9DBC;
  if ( !*(_DWORD *)dword_BA9DBC )
    return 0;
  while ( 1 )
  {
    cbMultiByte = WideCharToMultiByte(0, 0, v1, 0xFFFFFFFF, 0, 0, 0, 0);
    if ( !cbMultiByte )
      break;
    v2 = (void *)unknown_libname_74();
    Memory = v2;
    if ( !v2 )
      break;
    if ( !WideCharToMultiByte(0, 0, *v0, 0xFFFFFFFF, (LPSTR)v2, cbMultiByte, 0, 0) )
    {
      free(Memory);
      return 0xFFFFFFFF;
    }
    if ( __crtsetenv(&Memory, 0) < 0 )
    {
      if ( Memory )
      {
        free(Memory);
        Memory = 0;
      }
    }
    v1 = *++v0;
    if ( !*v0 )
      return 0;
  }
  return 0xFFFFFFFF;
}
