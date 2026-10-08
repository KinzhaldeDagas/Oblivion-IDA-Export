signed int __cdecl sub_54F590(int a1)
{
  signed int result; // eax

  switch ( a1 ) /*0x54f59c*/
  {
    case 1: /*0x54f59c*/
    case 2: /*0x54f59c*/
      result = 0; /*0x54f5a3*/
      break; /*0x54f5a5*/
    case 3: /*0x54f59c*/
      result = 1; /*0x54f5a6*/
      break; /*0x54f5ab*/
    case 4: /*0x54f59c*/
      result = 3; /*0x54f5b2*/
      break; /*0x54f5b7*/
    case 5: /*0x54f59c*/
      result = 2; /*0x54f5ac*/
      break; /*0x54f5b1*/
    case 6: /*0x54f59c*/
      result = 4; /*0x54f5b8*/
      break; /*0x54f5bd*/
    default:
      JUMPOUT(0x54F5BE); /*0x54f5be*/
  }
  return result; /*0x54f5a5*/
}
