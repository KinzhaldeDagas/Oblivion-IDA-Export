// [Verified] SetDecalPassBatchSizeForShaderPackageVersion writes 6 for package versions 3/4, 8 for 5–7, and 2 otherwise. The value is used as the decal-data batch decrement in both BSSM_DECAL/BSSM_DECAL_A and BSSM_3XDECAL/BSSM_3XDECAL_A loops.
int __cdecl SetDecalPassBatchSizeForShaderPackageVersion()
{
  int result; // eax

  result = *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le - 1; /*0x7b4595*/
  switch ( *(_DWORD *)OB_RendererGlobalState_010201A0.shaderPackageVersion_le ) /*0x7b45a1*/
  {
    case 3: /*0x7b45a1*/
    case 4: /*0x7b45a1*/
      *(_DWORD *)&OB_ShaderPassControl_010201A0[4] = 6;// [Verified] Package versions 3 and 4 select decalPassBatchSize=6. /*0x7b45a8*/
      break; /*0x7b45ae*/
    case 5: /*0x7b45a1*/
    case 6: /*0x7b45a1*/
    case 7: /*0x7b45a1*/
      *(_DWORD *)&OB_ShaderPassControl_010201A0[4] = 8;// [Verified] Package versions 5, 6 and 7 select decalPassBatchSize=8. /*0x7b45af*/
      break; /*0x7b45b9*/
    default:
      *(_DWORD *)&OB_ShaderPassControl_010201A0[4] = 2;// [Verified] All other package versions select decalPassBatchSize=2. /*0x7b45ba*/
      break; /*0x7b45ba*/
  }
  return result; /*0x7b45ae*/
}
