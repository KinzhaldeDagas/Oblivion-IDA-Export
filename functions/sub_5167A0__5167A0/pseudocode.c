void sub_5167A0(int a1, int a2, char *Format, int ArgList, int a5, int a6, int a7, int a8, int a9, ...)
{
  int DstBuf[65]; // [esp+8h] [ebp-108h] BYREF

  _vsprintf((char *)DstBuf, Format, (va_list)&ArgList); /*0x5167d9*/
  if ( MEMORY[0xB361AC] ) /*0x5167e1*/
    Interface_ConsolePrint((char *)DstBuf); /*0x5167ef*/
  else
    PrintError((char *)DstBuf); /*0x5167fb*/
  *(_DWORD *)(a2 + 0x20) = 0; /*0x51680a*/
  *(_BYTE *)(a1 + 0xA0) = 1; /*0x516812*/
}
