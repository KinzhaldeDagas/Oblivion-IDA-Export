HANDLE __termcon()
{
  HANDLE result; // eax

  if ( hConsoleOutput != (HANDLE)0xFFFFFFFF && hConsoleOutput != (HANDLE)0xFFFFFFFE )
    CloseHandle(hConsoleOutput);
  result = dword_B323E0;
  if ( dword_B323E0 != (HANDLE)0xFFFFFFFF && dword_B323E0 != (HANDLE)0xFFFFFFFE )
    return (HANDLE)CloseHandle(dword_B323E0);
  return result;
}
