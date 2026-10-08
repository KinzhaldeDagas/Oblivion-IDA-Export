int __cdecl sub_8ECB30(unsigned int a1)
{
  int v1; // edx
  int v2; // ecx
  int v3; // ebp
  char v4; // si
  int v5; // edi
  signed int v6; // ecx

  v1 = (unsigned __int8)(a1 >> 0x17) - 0x7F; /*0x8ecb40*/
  v2 = ((unsigned __int8)(a1 >> 0x17) - 0x97) >> 0x1F; /*0x8ecb4e*/
  v3 = ~v2; /*0x8ecb5d*/
  v4 = v2 & (0x17 - v1); /*0x8ecb68*/
  v5 = (int)0xFF800000 >> ((v2 & 0x17) - v4); /*0x8ecb7c*/
  v6 = ~((int)((a1 & 0x7FFFFFFF) - 1) >> 0x1F) & a1; /*0x8ecb7e*/
  return (int)(~(v1 >> 0x1F) /*0x8ecba5*/
             & (((v6 >> 0x1F) | (2 * ((v3 | v5) & ((unsigned int)&loc_800000 | v6 & 0x7FFFFF)) - 1))
              - ((v3 | v5) & ((unsigned int)&loc_800000 | v6 & 0x7FFFFF))
              + 1)) >> v4 << (v3 & ((a1 >> 0x17) + 0x6A));
}
