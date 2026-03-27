int __usercall sub_7A54A0@<eax>(int a1@<esi>, int a2@<edi>, char *Format, ...)
{
  char DstBuf[1024]; // [esp+4h] [ebp-404h] BYREF
  va_list ArgList; // [esp+410h] [ebp+8h] BYREF

  va_start(ArgList, Format);
  _vsprintf(DstBuf, Format, ArgList);
  *(_DWORD *)(a1 + 0x18) = 0xF;
  *(_DWORD *)(a1 + 0x14) = 0;
  *(_BYTE *)(a1 + 4) = 0;
  sub_414500((_DWORD *)a1, a2, DstBuf, strlen(DstBuf));
  return a1;
}
