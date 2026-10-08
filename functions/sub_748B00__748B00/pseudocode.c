int __usercall sub_748B00@<eax>(int ArgList@<ecx>, FILE *a2@<ebx>, va_list a3@<edi>)
{
  int result; // eax
  size_t v5; // [esp-2Ch] [ebp-154h]
  size_t v6; // [esp-Ch] [ebp-134h]
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-124h] BYREF
  struct _SYSTEMTIME v8; // [esp+14h] [ebp-114h] BYREF
  char DstBuf[256]; // [esp+24h] [ebp-104h] BYREF

  if ( *(_DWORD *)(ArgList + 0x100) ) /*0x748b17*/
  {
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, "/******************************************************\n"); /*0x748b29*/
    HIDWORD(v6) = "* %s - Log File Closed\n"; /*0x748b2f*/
    LODWORD(v6) = 0x100; /*0x748b38*/
    sub_6C5D40(a3, DstBuf, v6, (char *)ArgList); /*0x748b3e*/
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, DstBuf); /*0x748b4d*/
    GetSystemTime(&SystemTime); /*0x748b57*/
    GetLocalTime(&v8); /*0x748b62*/
    HIDWORD(v5) = "*     %02d/%02d/%04d - %2d:%02d:%02d UTC (%2d:%02d:%02d local)\n"; /*0x748b9e*/
    LODWORD(v5) = 0x100; /*0x748ba7*/
    sub_6C5D40( /*0x748bad*/
      a3,
      DstBuf,
      v5,
      (char *)SystemTime.wMonth,
      SystemTime.wDay,
      SystemTime.wYear,
      SystemTime.wHour,
      SystemTime.wMinute,
      SystemTime.wSecond,
      v8.wHour,
      v8.wMinute,
      v8.wSecond);
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, DstBuf); /*0x748bbc*/
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, "******************************************************/\n"); /*0x748bc8*/
    result = fclose(*(FILE **)(ArgList + 0x100)); /*0x748bd4*/
  }
  *(_DWORD *)(ArgList + 0x100) = 0; /*0x748be3*/
  return result; /*0x748bdc*/
}
