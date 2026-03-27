void sub_5167A0(int a1, int a2, char *Format, int ArgList, int a5, int a6, int a7, int a8, int a9, ...)
{
  int DstBuf[65]; // [esp+8h] [ebp-108h] BYREF

  _vsprintf((char *)DstBuf, Format, (va_list)&ArgList);
  if ( IsConsoleMode )
    Interface_ConsolePrint((char *)DstBuf);
  else
    PrintError((char *)DstBuf);
  *(_DWORD *)(a2 + 0x20) = 0;
  *(_BYTE *)(a1 + 0xA0) = 1;
}
