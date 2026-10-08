// [Verified] Maps OblivionBSSMShaderVersion to the selected SDP index. Version 7/BSSM_SV_3_0 maps to package 9 without HDR, or 18/19 with HDR based on FP16ARGB filtering. [Unknown] No native direct store of version 7 was found; SetShaderPackage writes only 0–6. [Candidate cross-build link] Fallout's separately implemented SetShaderVersion also selects BSSM_SV_3_0=7 by default.
int __cdecl GetShaderProgramPackageIndex()
{
  int result; // eax

  switch ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7dab94*/
  {
    case 1: /*0x7dab94*/
      result = 1; /*0x7dab9b*/
      break; /*0x7daba0*/
    case 2: /*0x7dab94*/
      result = 2; /*0x7daba1*/
      break; /*0x7daba6*/
    case 3: /*0x7dab94*/
      result = 5; /*0x7daba7*/
      break; /*0x7dabac*/
    case 4: /*0x7dab94*/
      result = 8; /*0x7dabad*/
      break; /*0x7dabb2*/
    case 5: /*0x7dab94*/
      if ( OB_RendererGlobalState_010201A0[0xC] ) /*0x7dabb3*/
      {
        if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7dabbb*/
          result = (OB_RendererGlobalState_010201A0[0x1D8] != 0) + 0xC; /*0x7dabce*/
        else
          result = 4; /*0x7dabd2*/
      }
      else if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7dabd8*/
      {
        result = (OB_RendererGlobalState_010201A0[0x1D8] != 0) + 0xA; /*0x7dabeb*/
      }
      else
      {
        result = 3; /*0x7dabef*/
      }
      break; /*0x7dabd1*/
    case 6: /*0x7dab94*/
      if ( OB_RendererGlobalState_010201A0[0xC] ) /*0x7dabf5*/
      {
        if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7dabfd*/
          result = (OB_RendererGlobalState_010201A0[0x1D8] != 0) + 0x10; /*0x7dac10*/
        else
          result = 7; /*0x7dac14*/
      }
      else if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7dac1a*/
      {
        result = (OB_RendererGlobalState_010201A0[0x1D8] != 0) + 0xE; /*0x7dac2d*/
      }
      else
      {
        result = 6; /*0x7dac31*/
      }
      break; /*0x7dac13*/
    case 7: /*0x7dab94*/
      if ( OB_RendererGlobalState_010201A0[0x1D7] ) /*0x7dac37*/
        result = (OB_RendererGlobalState_010201A0[0x1D8] != 0) + 0x12; /*0x7dac4a*/
      else
        def_7DAB94(); /*0x7dac4f*/
      break; /*0x7dac4d*/
    default:
      JUMPOUT(0x7DAC53); /*0x7dac53*/
  }
  return result; /*0x7daba0*/
}
