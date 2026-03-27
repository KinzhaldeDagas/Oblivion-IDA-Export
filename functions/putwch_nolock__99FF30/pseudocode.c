__int16 __cdecl _putwch_nolock(__int16 Buffer)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( !dword_B323DC )
    goto LABEL_10;
  if ( hConsoleOutput == (HANDLE)0xFFFFFFFE )
    __initconout();
  if ( hConsoleOutput == (HANDLE)0xFFFFFFFF )
    return 0xFFFF;
  if ( !WriteConsoleW(hConsoleOutput, &Buffer, 1u, &NumberOfCharsWritten, 0) )
  {
    if ( dword_B323DC != 2 || GetLastError() != 0x78 )
      return 0xFFFF;
    dword_B323DC = 0;
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP();
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, (LPCWSTR)&Buffer, 1, MultiByteStr, 5, 0, 0);
    if ( hConsoleOutput != (HANDLE)0xFFFFFFFF
      && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, 0) )
    {
      return Buffer;
    }
    return 0xFFFF;
  }
  dword_B323DC = 1;
  return Buffer;
}
