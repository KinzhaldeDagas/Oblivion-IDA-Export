int __cdecl sub_4BC020(int a1)
{
  int result; // eax

  switch ( a1 )
  {
    case 0:
      result = dword_B38D98;
      break;
    case 1:
      result = dword_B35B3C;
      break;
    case 2:
      result = dword_B35B4C;
      break;
    case 3:
      result = dword_B35B5C;
      break;
    case 4:
      result = dword_B35B6C;
      break;
    case 5:
      result = def_4BC02B(a1);
      break;
    default:
      JUMPOUT(0x4BC055);
  }
  return result;
}
