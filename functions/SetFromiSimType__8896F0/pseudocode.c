int __cdecl SetFromiSimType(int a1)
{
  int result; // eax

  result = a1;
  switch ( a1 )
  {
    case 0:
      fromISimType = 1;
      break;
    case 2:
      fromISimType = 2;
      break;
    case 3:
      fromISimType = 5;
      break;
    case 4:
      fromISimType = 9;
      break;
    default:
      fromISimType = 4;
      break;
  }
  return result;
}
