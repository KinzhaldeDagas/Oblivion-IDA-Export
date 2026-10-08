int (__cdecl *__cdecl NiFile_SetCanOpenFileWithModeFunc(int (__cdecl *a1)(int, int)))(int, int)
{
  int (__cdecl *result)(int, int); // eax

  result = a1; /*0x7481a0*/
  NiFile_CanOpenFileWithModeFunc = (int (__cdecl *)(int, int))NiFile_CanOpenFileWithMode; /*0x7481a6*/
  if ( a1 ) /*0x7481b0*/
    NiFile_CanOpenFileWithModeFunc = a1; /*0x7481b2*/
  return result; /*0x7481b7*/
}
