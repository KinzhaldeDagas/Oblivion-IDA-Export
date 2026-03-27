const char *sub_7B47E0()
{
  const char *result; // eax

  switch ( ShaderPackage )
  {
    case 1:
      result = "vs_1_1";
      break;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      result = "vs_2_0";
      break;
    case 7:
      result = "vs_3_0";
      break;
    default:
      JUMPOUT(0x7B4806);
  }
  return result;
}
