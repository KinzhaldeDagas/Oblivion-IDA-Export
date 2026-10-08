int (__cdecl *__cdecl NiFile_SetGetNiFileFunc(int (__cdecl *a1)(int, int, int)))(int, int, int)
{
  int (__cdecl *result)(int, int, int); // eax

  result = a1; /*0x748140*/
  NiFile_GetNiFileFunc = (int (__cdecl *)(int, int, int))NiFile_GetNiFile; /*0x748146*/
  if ( a1 ) /*0x748150*/
    NiFile_GetNiFileFunc = a1; /*0x748152*/
  return result; /*0x748157*/
}
