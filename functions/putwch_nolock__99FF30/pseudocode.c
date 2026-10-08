__int16 __cdecl _putwch_nolock(__int16 Buffer)
{
  UINT ConsoleOutputCP; // eax
  DWORD v3; // eax
  DWORD NumberOfCharsWritten; // [esp+4h] [ebp-10h] BYREF
  CHAR MultiByteStr[8]; // [esp+8h] [ebp-Ch] BYREF

  if ( !dword_B323DC ) /*0x99ff49*/
    goto LABEL_10; /*0x99ff49*/
  if ( hConsoleOutput == (HANDLE)0xFFFFFFFE ) /*0x99ff52*/
    __initconout(); /*0x99ff54*/
  if ( hConsoleOutput == (HANDLE)0xFFFFFFFF ) /*0x99ff61*/
    return 0xFFFF; /*0x99ff61*/
  if ( !WriteConsoleW(hConsoleOutput, &Buffer, 1u, &NumberOfCharsWritten, 0) ) /*0x99ff75*/
  {
    if ( dword_B323DC != 2 || GetLastError() != 0x78 ) /*0x99ff91*/
      return 0xFFFF; /*0x99ff91*/
    dword_B323DC = 0; /*0x99ff93*/
LABEL_10:
    ConsoleOutputCP = GetConsoleOutputCP(); /*0x99ff99*/
    v3 = WideCharToMultiByte(ConsoleOutputCP, 0, (LPCWSTR)&Buffer, 1, MultiByteStr, 5, 0, 0); /*0x99ffaf*/
    if ( hConsoleOutput != (HANDLE)0xFFFFFFFF /*0x99ffcb*/
      && WriteConsoleA(hConsoleOutput, MultiByteStr, v3, &NumberOfCharsWritten, 0) )
    {
      return Buffer; /*0x99ffd3*/
    }
    return 0xFFFF; /*0x99ff67*/
  }
  dword_B323DC = 1; /*0x99ffe6*/
  return Buffer; /*0x99ffd9*/
}
