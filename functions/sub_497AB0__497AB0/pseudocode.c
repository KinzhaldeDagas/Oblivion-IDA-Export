unsigned int __cdecl sub_497AB0(unsigned int a1)
{
  unsigned int result; // eax

  result = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 5 ? 0 : 2;
  *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_1DB[0x3C] = result; /*0x497ac8*/
  if ( result >= a1 ) /*0x497acd*/
    *(_DWORD *)&OB_RendererGlobalState_010201A0.pad_1DB[0x3C] = a1; /*0x497acf*/
  return result; /*0x497ad5*/
}
