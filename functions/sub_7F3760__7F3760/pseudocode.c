int sub_7F3760()
{
  int result; // eax

  result = unk_B468FC; /*0x7f3760*/
  if ( !unk_B468FC )
  {
    result = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le < 2 ? 0x4B : 0xEB;
    unk_B468FC = result; /*0x7f377e*/
  }
  return result; /*0x7f3783*/
}
