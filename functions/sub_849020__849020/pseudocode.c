signed int __cdecl sub_849020(unsigned __int16 a1)
{
  char v1; // al
  UInt32 *v2; // esi
  UInt32 v3; // edx
  UInt32 v4; // edx
  signed int result; // eax
  int v6; // edx
  int v7; // [esp+10h] [ebp-4h]

  v1 = 2;
  v2 = &dword_B4501C;
  v7 = 9;
  do
  {
    v3 = v2[0xFFFFFFFF];
    if ( v3 )
      *(_BYTE *)(v3 + 8) = ((1 << (v1 - 1)) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0;
    if ( *v2 )
      *(_BYTE *)(*v2 + 8) = ((1 << v1) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0;
    v4 = v2[1];
    if ( v4 )
      *(_BYTE *)(v4 + 8) = ((1 << (v1 + 1)) & *(_DWORD *)(4 * a1 + 0xB43B20)) != 0;
    v1 += 3;
    v2 += 3;
    --v7;
  }
  while ( v7 );
  for ( result = 0; result < 0x11; ++result )
  {
    v6 = *(_DWORD *)(4 * result + 0xB45518);
    if ( v6 )
      *(_BYTE *)(v6 + 8) = ((1 << (result + 1)) & *(_DWORD *)(4 * a1 + 0xB441B0)) != 0;
  }
  return result;
}
