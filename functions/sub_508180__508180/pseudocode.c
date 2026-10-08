char sub_508180()
{
  if ( OB_RendererGlobalState_010201A0.pad_00D[0x98] ) /*0x508180*/
  {
    if ( OB_ShaderPassControl_010201A0.refractionPassEnabled ) /*0x508189*/
    {
      if ( *(int *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le >= 2 ) /*0x508199*/
        unk_B42CDC = unk_B42CDC == 0; /*0x5081a5*/
    }
  }
  return 1; /*0x5081ac*/
}
