signed int __cdecl sub_761DA0(int a1)
{
  signed int result; // eax

  switch ( a1 ) /*0x761da9*/
  {
    case 0: /*0x761da9*/
      result = 0x80000000; /*0x761db0*/
      break; /*0x761db5*/
    case 1: /*0x761da9*/
      result = 1; /*0x761db6*/
      break; /*0x761dbb*/
    case 2: /*0x761da9*/
      result = 2; /*0x761dbc*/
      break; /*0x761dc1*/
    case 3: /*0x761da9*/
      result = 4; /*0x761dc2*/
      break; /*0x761dc7*/
    case 4: /*0x761da9*/
      result = 8; /*0x761dc8*/
      break; /*0x761dcd*/
    default:
      JUMPOUT(0x761DCE); /*0x761dce*/
  }
  return result; /*0x761db5*/
}
