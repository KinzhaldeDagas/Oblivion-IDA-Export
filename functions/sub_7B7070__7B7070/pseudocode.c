const char *sub_7B7070()
{
  const char *result; // eax

  switch ( ShaderPackage )
  {
    case 0:
      result = "BSSM_SV_NONE";
      break;
    case 1:
      result = "BSSM_SV_1_X";
      break;
    case 2:
      result = "BSSM_SV_2_0";
      break;
    case 3:
      result = "BSSM_SV_2_A96";
      break;
    case 4:
      result = "BSSM_SV_2_B96";
      break;
    case 5:
      result = "BSSM_SV_2_A";
      break;
    case 6:
      result = "BSSM_SV_2_B";
      break;
    case 7:
      result = "BSSM_SV_3_0";
      break;
    default:
      JUMPOUT(0x7B70B1);
  }
  return result;
}
