int (__cdecl *__cdecl NiFile_SetGetNiFileFunc(int (__cdecl *a1)(int, int, int)))(int, int, int)
{
  int (__cdecl *result)(int, int, int); // eax

  result = a1;
  NiFile_GetNiFileFunc = (int (__cdecl *)(int, int, int))NiFile_GetNiFile;
  if ( a1 )
    NiFile_GetNiFileFunc = a1;
  return result;
}
