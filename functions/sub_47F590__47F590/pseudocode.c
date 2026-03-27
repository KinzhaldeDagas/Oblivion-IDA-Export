int __cdecl sub_47F590(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  if ( !a1 )
    JUMPOUT(0x47F64F);
  if ( a1[0x18] <= 1u )
    JUMPOUT(0x47F649);
  if ( !*(_DWORD *)(a1[0x16] + 4) )
    JUMPOUT(0x47F63D);
  if ( !*(_DWORD *)(a1[0x15] + 4) )
    JUMPOUT(0x47F627);
  *(_BYTE *)(a1[0x14] + *(_DWORD *)(a1[0x17] + 4)) = 0xFF;
  return def_47F5F7(a1, a2, a3, a4, a5, a6, a7, a8);
}
