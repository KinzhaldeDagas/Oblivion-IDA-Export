void sub_4FCE30(
        int a1,
        char *Format,
        int ArgList,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        ...)
{
  int v15; // edx
  char *m_data; // esi
  BSStringT v17; // [esp+8h] [ebp-11Ch] BYREF
  char DstBuf[260]; // [esp+10h] [ebp-114h] BYREF
  int v19; // [esp+120h] [ebp-4h]

  _vsprintf(DstBuf, Format, (va_list)&ArgList);
  v17.m_data = 0;
  v17.m_dataLen = 0;
  v17.m_bufLen = 0;
  v15 = *(_DWORD *)(a1 + 0x1C);
  v19 = 0;
  BSStringT_Static_Format(&v17, "Script '%s', line %d:\n%s", *(const char **)(a1 + 0xC), v15, DstBuf);
  m_data = v17.m_data;
  if ( *(_DWORD *)(a1 + 8) == 1 )
    Interface_ConsolePrint(v17.m_data);
  else
    PrintError(v17.m_data);
  FormHeapFree((unsigned int)m_data);
}
