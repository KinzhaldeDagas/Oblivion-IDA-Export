// [Verified] BSShaderManager_GetShaderVersionName maps values 0–7 to BSSM_SV_NONE, BSSM_SV_1_X, BSSM_SV_2_0, BSSM_SV_2_A96, BSSM_SV_2_B96, BSSM_SV_2_A, BSSM_SV_2_B and BSSM_SV_3_0.
const char *BSShaderManager_GetShaderVersionName()
{
  const char *result; // eax

  switch ( *(_DWORD *)&OB_RendererGlobalState_010201A0[0xAF] ) /*0x7b707a*/
  {
    case 0: /*0x7b707a*/
      result = "BSSM_SV_NONE"; /*0x7b7081*/
      break; /*0x7b7086*/
    case 1: /*0x7b707a*/
      result = "BSSM_SV_1_X"; /*0x7b7087*/
      break; /*0x7b708c*/
    case 2: /*0x7b707a*/
      result = "BSSM_SV_2_0"; /*0x7b708d*/
      break; /*0x7b7092*/
    case 3: /*0x7b707a*/
      result = "BSSM_SV_2_A96"; /*0x7b7093*/
      break; /*0x7b7098*/
    case 4: /*0x7b707a*/
      result = "BSSM_SV_2_B96"; /*0x7b7099*/
      break; /*0x7b709e*/
    case 5: /*0x7b707a*/
      result = "BSSM_SV_2_A"; /*0x7b709f*/
      break; /*0x7b70a4*/
    case 6: /*0x7b707a*/
      result = "BSSM_SV_2_B"; /*0x7b70a5*/
      break; /*0x7b70aa*/
    case 7: /*0x7b707a*/
      result = "BSSM_SV_3_0"; /*0x7b70ab*/
      break; /*0x7b70b0*/
    default:
      JUMPOUT(0x7B70B1); /*0x7b70b1*/
  }
  return result; /*0x7b7086*/
}
