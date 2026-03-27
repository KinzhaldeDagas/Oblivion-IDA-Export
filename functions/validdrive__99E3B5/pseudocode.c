BOOL __cdecl _validdrive(int RootPathName)
{
  BOOL result; // eax

  result = 1;
  if ( RootPathName )
  {
    LOBYTE(RootPathName) = RootPathName + 0x40;
    strcpy((char *)&RootPathName + 1, ":\\");
    if ( GetDriveTypeA((LPCSTR)&RootPathName) <= 1 )
      return 0;
  }
  return result;
}
