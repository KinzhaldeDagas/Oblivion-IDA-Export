bool __cdecl sub_9A6670(int a1, int a2)
{
  if ( *(_BYTE *)(a1 + 0xAC) ) /*0x9a6674*/
  {
    switch ( a2 ) /*0x9a6689*/
    {
      case 1: /*0x9a6689*/
        return !sub_435CC0((int)&MEMORY[0xB3F9B0][0x21D], a1); /*0x9a66a5*/
      case 2: /*0x9a6689*/
        return sub_435CC0((int)&MEMORY[0xB3F9B0][0xF4], a1); /*0x9a66b2*/
      case 3: /*0x9a6689*/
        return sub_435CC0((int)&MEMORY[0xB3F9B0][0xD3], a1); /*0x9a66c3*/
      case 4: /*0x9a6689*/
        return sub_435CC0((int)&MEMORY[0xB3F9B0][0x1F8], a1);
      default:
        break;
    }
  }
  JUMPOUT(0x9A66D9); /*0x9a66d9*/
}
