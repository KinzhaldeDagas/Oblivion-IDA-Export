signed int __cdecl sub_849020(unsigned __int16 a1)
{
  char v1; // al
  UInt32 *v2; // esi
  UInt32 v3; // edx
  UInt32 v4; // edx
  signed int result; // eax
  int v6; // edx
  int v7; // [esp+10h] [ebp-4h]

  v1 = 2; /*0x849029*/
  v2 = &dword_B4501C; /*0x84902e*/
  v7 = 9; /*0x849033*/
  do /*0x8490ac*/
  {
    v3 = v2[0xFFFFFFFF]; /*0x849040*/
    if ( v3 ) /*0x849045*/
      *(_BYTE *)(v3 + 8) = ((1 << (v1 - 1)) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0; /*0x84905e*/
    if ( *v2 ) /*0x849061*/
      *(_BYTE *)(*v2 + 8) = ((1 << v1) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0; /*0x84907d*/
    v4 = v2[1]; /*0x849080*/
    if ( v4 ) /*0x849085*/
      *(_BYTE *)(v4 + 8) = ((1 << (v1 + 1)) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0; /*0x84909e*/
    v1 += 3; /*0x8490a1*/
    v2 += 3; /*0x8490a4*/
    --v7; /*0x8490a7*/
  }
  while ( v7 ); /*0x8490ac*/
  for ( result = 0; result < 0x11; ++result ) /*0x8490af*/
  {
    v6 = *(_DWORD *)(4 * result + 0xB45518); /*0x8490b2*/
    if ( v6 ) /*0x8490bb*/
      *(_BYTE *)(v6 + 8) = ((1 << (result + 1)) & *(_DWORD *)(4 * a1 + 0xB441B0)) != 0; /*0x8490d4*/
  }
  return result; /*0x8490ae*/
}
