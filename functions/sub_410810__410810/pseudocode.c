char __cdecl sub_410810(char a1, char a2)
{
  if ( MEMORY[0xB33428] && *(_DWORD *)(MEMORY[0xB33428] + 0x20) ) /*0x41081a*/
    return VideoPass((_DWORD *)MEMORY[0xB33428], a1, a2); /*0x41082a*/
  else
    return 0; /*0x410830*/
}
