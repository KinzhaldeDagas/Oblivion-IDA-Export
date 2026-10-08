int __cdecl ArchiveManager_GetFileTypemask(char *a1)
{
  const char *v1; // eax
  int v2; // ebx
  int v3; // ebp
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax

  v1 = a1; /*0x42ba90*/
  v2 = 0; /*0x42ba97*/
  v3 = 0x18; /*0x42ba9d*/
  if ( *a1 == 0x2E ) /*0x42baa2*/
  {
    v1 = ++a1; /*0x42baa4*/
  }
  else if ( a1[1] == 0x2E ) /*0x42bab1*/
  {
    v1 = a1 + 2; /*0x42bab3*/
    a1 += 2; /*0x42bab6*/
  }
  while ( 1 ) /*0x42bac8*/
  {
    v4 = (unsigned int)(v3 - v2) >> 1; /*0x42bac8*/
    v5 = v4 + v2; /*0x42baca*/
    v6 = CRT_StricmpLocaleDispatch(v1, (const char *)(8 * (v4 + v2) + 0xB04368)); /*0x42bad6*/
    if ( v6 <= 0 ) /*0x42bae0*/
    {
      if ( v6 >= 0 ) /*0x42bae6*/
        break; /*0x42bae6*/
      v3 = v4 + v2; /*0x42bae8*/
    }
    else
    {
      v2 += v4; /*0x42bae2*/
    }
    if ( !v4 ) /*0x42baec*/
      break; /*0x42baec*/
    v1 = a1; /*0x42bac0*/
  }
  if ( v6 ) /*0x42baf0*/
    return 0x100; /*0x42bb01*/
  else
    return dword_B0436C[2 * v5]; /*0x42baf2*/
}
