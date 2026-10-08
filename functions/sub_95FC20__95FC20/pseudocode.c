char __cdecl sub_95FC20(float a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi

  v7 = 0; /*0x95fc28*/
  if ( !*(_WORD *)(a2 + 0xE) ) /*0x95fc2a*/
    return 0; /*0x95fc77*/
  while ( !(unsigned __int8)sub_95DA70(a1, *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v7), a3, a4, a5, a6, a7) ) /*0x95fc6a*/
  {
    if ( ++v7 >= (unsigned int)*(unsigned __int16 *)(a2 + 0xE) ) /*0x95fc75*/
      return 0; /*0x95fc75*/
  }
  *(_DWORD *)(a2 + 0x14) = v7; /*0x95fc7e*/
  return 1; /*0x95fc77*/
}
