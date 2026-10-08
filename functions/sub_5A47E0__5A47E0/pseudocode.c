char __cdecl sub_5A47E0(int a1)
{
  int v1; // eax

  v1 = dword_B3B0B4[0xA2]; /*0x5a47e0*/
  if ( !dword_B3B0B4[0xA2] || *(_DWORD *)(v1 + 0x54) != a1 ) /*0x5a47f0*/
    return 0; /*0x5a47fc*/
  *(_DWORD *)(v1 + 0x54) = 0; /*0x5a47f2*/
  return 1; /*0x5a47fb*/
}
