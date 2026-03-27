bool __cdecl sub_8A7F70(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // rax

  v2 = a1 & 0x3F;
  if ( v2 != 0x1D && ((a1 & 0x4000) != 0 || (a2 & 0x4000) != 0) )
    return 0;
  if ( (a1 & 0xFFFF0000) == 0 || (a2 & 0xFFFF0000) == 0 )
    return 1;
  v4 = (a2 ^ a1) & 0xFFFF0000;
  v5 = a2 & 0x3F;
  if ( v2 == 8 && v5 == 8 )
  {
    if ( v4 )
      return 1;
    return (*(_DWORD *)(4 * ((a1 >> 8) & 0x1F) + 0xBA7E30) & (1 << (BYTE1(a2) & 0x1F))) != 0;
  }
  if ( v4 )
    return ((1 << v5) & *(_DWORD *)(4 * v2 + 0xBA7DB0)) != 0;
  if ( (a2 & a1 & 0x8000) != 0 )
  {
    if ( ((1 << v5) & *(_DWORD *)(4 * v2 + 0xBA7DB0)) != 0 )
    {
      v6 = (int)(((a1 >> 8) & 0x1F) - ((a2 >> 8) & 0x1F));
      return (HIDWORD(v6) ^ (unsigned int)v6) - HIDWORD(v6) != 1;
    }
    return 0;
  }
  if ( v2 != 8 || v5 != 8 )
    return 0;
  return (*(_DWORD *)(4 * ((a1 >> 8) & 0x1F) + 0xBA7E30) & (1 << (BYTE1(a2) & 0x1F))) != 0;
}
