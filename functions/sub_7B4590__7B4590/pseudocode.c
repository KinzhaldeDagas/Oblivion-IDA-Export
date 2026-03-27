int sub_7B4590()
{
  int result; // eax

  result = ShaderPackage - 1;
  switch ( ShaderPackage )
  {
    case 3:
    case 4:
      Value = 6;
      break;
    case 5:
    case 6:
    case 7:
      Value = 8;
      break;
    default:
      Value = 2;
      break;
  }
  return result;
}
