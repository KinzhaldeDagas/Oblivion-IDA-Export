int (__cdecl *__cdecl NiFile_SetCanOpenFileWithModeFunc(int (__cdecl *a1)(int, int)))(int, int)
{
  int (__cdecl *result)(int, int); // eax

  result = a1;
  NiFile_CanOpenFileWithModeFunc = (int (__cdecl *)(int, int))NiFile_CanOpenFileWithMode;
  if ( a1 )
    NiFile_CanOpenFileWithModeFunc = a1;
  return result;
}
