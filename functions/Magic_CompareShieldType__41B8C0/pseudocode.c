bool __cdecl Magic_CompareShieldType(int a1, int a2)
{
  bool result; // al

  switch ( a1 )
  {
    case 1:
      result = a2 == 0x48534946;
      break;
    case 2:
      result = a2 == 0x48535246;
      break;
    case 4:
      result = a2 == 0x4853494C;
      break;
    case 8:
      result = a2 == 0x444C4853 || a2 == 0x574E5352 || a2 == 0x47444552;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
