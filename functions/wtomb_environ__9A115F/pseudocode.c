unsigned int __wtomb_environ()
{
  LPCWSTR *v0; // edi
  const WCHAR_0 *v1; // eax
  int v2; // eax
  void *v3; // eax
  int cbMultiByte; // [esp+Ch] [ebp-8h]
  void *Memory; // [esp+10h] [ebp-4h] BYREF

  v0 = (LPCWSTR *)unk_BA9DBC; /*0x9a1169*/
  Memory = 0; /*0x9a116f*/
  v1 = (const WCHAR_0 *)*unk_BA9DBC; /*0x9a1172*/
  if ( !*unk_BA9DBC ) /*0x9a1172*/
    return 0; /*0x9a11dd*/
  while ( 1 ) /*0x9a1187*/
  {
    v2 = WideCharToMultiByte(0, 0, v1, 0xFFFFFFFF, 0, 0, 0, 0); /*0x9a1187*/
    cbMultiByte = v2; /*0x9a118b*/
    if ( !v2 ) /*0x9a118e*/
      break; /*0x9a118e*/
    v3 = (void *)unknown_libname_74(v2, 1); /*0x9a1193*/
    Memory = v3; /*0x9a119c*/
    if ( !v3 ) /*0x9a119f*/
      break; /*0x9a119f*/
    if ( !WideCharToMultiByte(0, 0, *v0, 0xFFFFFFFF, (LPSTR)v3, cbMultiByte, 0, 0) ) /*0x9a11b1*/
    {
      free(Memory); /*0x9a11ec*/
      return 0xFFFFFFFF; /*0x9a11f2*/
    }
    if ( (int)__crtsetenv((int)v0, 0, (const unsigned __int8 **)&Memory, 0) < 0 ) /*0x9a11c1*/
    {
      if ( Memory ) /*0x9a11c6*/
      {
        free(Memory); /*0x9a11cb*/
        Memory = 0; /*0x9a11d1*/
      }
    }
    v1 = *++v0; /*0x9a11d7*/
    if ( !*v0 ) /*0x9a11d7*/
      return 0; /*0x9a11db*/
  }
  return 0xFFFFFFFF; /*0x9a11df*/
}
