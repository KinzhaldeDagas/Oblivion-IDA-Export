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
  int v11; // edx
  char *m_data; // esi
  BSStringT v13; // [esp+8h] [ebp-11Ch] BYREF
  char DstBuf[260]; // [esp+10h] [ebp-114h] BYREF
  int v15; // [esp+120h] [ebp-4h]

  _vsprintf(DstBuf, Format, (va_list)&ArgList); /*0x4fce84*/
  v13.m_data = 0; /*0x4fce8b*/
  v13.m_dataLen = 0; /*0x4fce8f*/
  v13.m_bufLen = 0; /*0x4fce94*/
  v11 = *(_DWORD *)(a1 + 0x1C); /*0x4fce99*/
  v15 = 0; /*0x4fcea1*/
  BSStringT_Static_Format(&v13, "Script '%s', line %d:\n%s", *(const char **)(a1 + 0xC), v11, DstBuf); /*0x4fceb7*/
  m_data = v13.m_data; /*0x4fcec3*/
  if ( *(_DWORD *)(a1 + 8) == 1 ) /*0x4fcec8*/
    Interface_ConsolePrint(v13.m_data); /*0x4fceca*/
  else
    PrintError(v13.m_data); /*0x4fced1*/
  FormHeapFree((unsigned int)m_data); /*0x4fceda*/
}
