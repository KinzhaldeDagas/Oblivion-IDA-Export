char __stdcall sub_41E340(int a1)
{
  char result; // al

  result = 1; /*0x41e346*/
  if ( a1 ) /*0x41e348*/
  {
    switch ( *(_BYTE *)(a1 + 4) ) /*0x41e35d*/
    {
      case 2: /*0x41e35d*/
      case 3: /*0x41e35d*/
      case 8: /*0x41e35d*/
      case 0x11: /*0x41e35d*/
      case 0x14: /*0x41e35d*/
      case 0x15: /*0x41e35d*/
      case 0x16: /*0x41e35d*/
      case 0x1A: /*0x41e35d*/
      case 0x30: /*0x41e35d*/
      case 0x3B: /*0x41e35d*/
      case 0x49: /*0x41e35d*/
      case 0x56: /*0x41e35d*/
        result = 0; /*0x41e364*/
        break; /*0x41e364*/
      default:
        return result;
    }
  }
  return result; /*0x41e366*/
}
