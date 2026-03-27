const char *__cdecl sub_7B4780(char a1)
{
  int v1; // eax
  const char *result; // eax

  v1 = ShaderPackageMax;
  if ( !a1 )
    v1 = ShaderPackage;
  switch ( v1 )
  {
    case 1:
      result = "ps_1_3";
      break;
    case 2:
      result = "ps_2_0";
      break;
    case 3:
    case 5:
      result = "ps_2_a";
      break;
    case 4:
    case 6:
      result = "ps_2_b";
      break;
    case 7:
      result = "ps_3_0";
      break;
    default:
      JUMPOUT(0x7B47BE);
  }
  return result;
}
