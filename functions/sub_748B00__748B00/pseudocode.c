int __usercall sub_748B00@<eax>(int ArgList@<ecx>, FILE *a2@<ebx>, va_list a3@<edi>)
{
  int result; // eax
  size_t v5; // [esp-2Ch] [ebp-154h]
  size_t v6; // [esp-Ch] [ebp-134h]
  struct _SYSTEMTIME SystemTime; // [esp+4h] [ebp-124h] BYREF
  struct _SYSTEMTIME v8; // [esp+14h] [ebp-114h] BYREF
  char DstBuf[256]; // [esp+24h] [ebp-104h] BYREF

  if ( *(_DWORD *)(ArgList + 0x100) )
  {
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, "/******************************************************\n");
    HIDWORD(v6) = "* %s - Log File Closed\n";
    LODWORD(v6) = 0x100;
    sub_6C5D40(a3, DstBuf, v6, (char *)ArgList);
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, DstBuf);
    GetSystemTime(&SystemTime);
    GetLocalTime(&v8);
    HIDWORD(v5) = "*     %02d/%02d/%04d - %2d:%02d:%02d UTC (%2d:%02d:%02d local)\n";
    LODWORD(v5) = 0x100;
    sub_6C5D40(
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
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, DstBuf);
    sub_748AB0((_DWORD *)ArgList, a2, (int)a3, "******************************************************/\n");
    result = fclose(*(FILE **)(ArgList + 0x100));
  }
  *(_DWORD *)(ArgList + 0x100) = 0;
  return result;
}
