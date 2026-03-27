signed int __cdecl sub_761DA0(int a1)
{
  signed int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0x80000000;
      break;
    case 1:
      result = 1;
      break;
    case 2:
      result = 2;
      break;
    case 3:
      result = 4;
      break;
    case 4:
      result = 8;
      break;
    default:
      JUMPOUT(0x761DCE);
  }
  return result;
}
