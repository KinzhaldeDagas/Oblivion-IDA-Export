char __cdecl sub_8A7F70(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax

  v2 = a1 & 0x3F; /*0x8a7f7c*/
  if ( v2 != 0x1D && ((a1 & 0x4000) != 0 || (a2 & 0x4000) != 0) ) /*0x8a7f95*/
    return 0; /*0x8a7f95*/
  if ( (a1 & 0xFFFF0000) == 0 || (a2 & 0xFFFF0000) == 0 ) /*0x8a7faa*/
    return 1; /*0x8a7faa*/
  v4 = (a2 ^ a1) & 0xFFFF0000; /*0x8a7fb2*/
  v5 = a2 & 0x3F; /*0x8a7fb7*/
  if ( v2 == 8 && v5 == 8 ) /*0x8a7fc1*/
  {
    if ( v4 ) /*0x8a7fc5*/
      return 1; /*0x8a7fcb*/
    return (*(_DWORD *)(4 * ((a1 >> 8) & 0x1F) + 0xBA7E30) & (1 << (BYTE1(a2) & 0x1F))) != 0; /*0x8a7fc5*/
  }
  if ( v4 ) /*0x8a7fce*/
    return ((1 << v5) & *(_DWORD *)(4 * v2 + 0xBA7DB0)) != 0; /*0x8a7fe8*/
  if ( (a2 & a1 & 0x8000) != 0 ) /*0x8a7ff2*/
  {
    if ( ((1 << v5) & *(_DWORD *)(4 * v2 + 0xBA7DB0)) != 0 ) /*0x8a8002*/
    {
      v6 = (int)(((a1 >> 8) & 0x1F) - ((a2 >> 8) & 0x1F)); /*0x8a8014*/
      return (HIDWORD(v6) ^ (unsigned int)v6) - HIDWORD(v6) != 1; /*0x8a8024*/
    }
    return 0; /*0x8a7f9b*/
  }
  if ( v2 != 8 || v5 != 8 ) /*0x8a8030*/
    return 0; /*0x8a8030*/
  return (*(_DWORD *)(4 * ((a1 >> 8) & 0x1F) + 0xBA7E30) & (1 << (BYTE1(a2) & 0x1F))) != 0; /*0x8a7f97*/
}
