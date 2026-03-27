signed int __cdecl sub_54F590(int a1)
{
  signed int result; // eax

  switch ( a1 )
  {
    case 1:
    case 2:
      result = 0;
      break;
    case 3:
      result = 1;
      break;
    case 4:
      result = 3;
      break;
    case 5:
      result = 2;
      break;
    case 6:
      result = 4;
      break;
    default:
      JUMPOUT(0x54F5BE);
  }
  return result;
}
