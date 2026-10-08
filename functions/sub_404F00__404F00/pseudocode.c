int __cdecl sub_404F00(char a1)
{
  int result; // eax

  result = MEMORY[0xB42D74]; /*0x404f05*/
  if ( !a1 ) /*0x404f0a*/
    return *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF]; /*0x404f0c*/
  return result; /*0x404f11*/
}
