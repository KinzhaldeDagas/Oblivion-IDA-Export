int __cdecl sub_429A30(int a1)
{
  int result; // eax

  switch ( a1 ) /*0x429a39*/
  {
    case 0: /*0x429a39*/
      result = MEMORY[0xB338B8].value; /*0x429a40*/
      break; /*0x429a45*/
    case 1: /*0x429a39*/
      result = MEMORY[0xB338C0].value; /*0x429a46*/
      break; /*0x429a4b*/
    case 2: /*0x429a39*/
      result = MEMORY[0xB338C8].value; /*0x429a4c*/
      break; /*0x429a51*/
    case 3: /*0x429a39*/
      result = MEMORY[0xB338D0].value; /*0x429a52*/
      break; /*0x429a57*/
    case 4: /*0x429a39*/
      result = MEMORY[0xB338D8].value; /*0x429a58*/
      break; /*0x429a5d*/
    default:
      JUMPOUT(0x429A5E); /*0x429a5e*/
  }
  return result; /*0x429a45*/
}
