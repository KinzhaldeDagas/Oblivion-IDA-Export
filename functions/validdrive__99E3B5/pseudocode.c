BOOL __cdecl _validdrive(int RootPathName)
{
  BOOL result; // eax

  result = 1; /*0x99e3e8*/
  if ( RootPathName ) /*0x99e3bd*/
  {
    LOBYTE(RootPathName) = RootPathName + 0x40; /*0x99e3c6*/
    strcpy((char *)&RootPathName + 1, ":\\"); /*0x99e3cd*/
    if ( GetDriveTypeA((LPCSTR)&RootPathName) <= 1 ) /*0x99e3e1*/
      return 0; /*0x99e3bd*/
  }
  return result; /*0x99e3c2*/
}
