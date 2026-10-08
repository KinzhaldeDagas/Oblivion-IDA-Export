HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)0xFFFFFFFF && hConsoleOutput != (HANDLE)0xFFFFFFFE ) /*0x9a1043*/
    CloseHandle(hConsoleOutput); /*0x9a1046*/
  result = dword_B323E0; /*0x9a1048*/
  if ( dword_B323E0 != (HANDLE)0xFFFFFFFF && dword_B323E0 != (HANDLE)0xFFFFFFFE ) /*0x9a1055*/
    return (HANDLE)CloseHandle(dword_B323E0); /*0x9a1058*/
  return result; /*0x9a105a*/
}
