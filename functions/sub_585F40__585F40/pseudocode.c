void sub_585F40(_DWORD *a1, char *Format, char ArgList, int a4, ...)
{
  Console_FormatPrint(a1, Format, &ArgList); /*0x585f86*/
  FormHeapFree(0); /*0x585f8c*/
}
