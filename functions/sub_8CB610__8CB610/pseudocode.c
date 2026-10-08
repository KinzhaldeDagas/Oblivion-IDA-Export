unsigned __int16 __cdecl sub_8CB610(int a1, int a2)
{
  unsigned __int16 result; // ax

  result = *(_WORD *)(a2 + 0x22); /*0x8cb614*/
  if ( result != 0xFFFF ) /*0x8cb61c*/
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 0x50) + 4 * result) = 0; /*0x8cb628*/
    *(_WORD *)(a2 + 0x22) = 0xFFFF; /*0x8cb62f*/
  }
  return result; /*0x8cb635*/
}
