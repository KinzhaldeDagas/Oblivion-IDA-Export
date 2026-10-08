int __stdcall ScancodeToChar(int a1, int a2)
{
  int result; // eax

  if ( (unsigned int)a1 > 0xFF ) /*0x403cf9*/
    return 0xFFFFFFFF; /*0x403db3*/
  switch ( dword_B02C44 ) /*0x403d11*/
  {
    case 1: /*0x403d11*/
      if ( a2 ) /*0x403d7a*/
        result = (unsigned __int8)byte_B02498[a1]; /*0x403d82*/
      else
        result = (unsigned __int8)byte_B02398[a1]; /*0x403d8e*/
      break; /*0x403d85*/
    case 2: /*0x403d11*/
      if ( a2 ) /*0x403d5b*/
        result = (unsigned __int8)byte_B02698[a1]; /*0x403d63*/
      else
        result = (unsigned __int8)byte_B02598[a1]; /*0x403d6f*/
      break; /*0x403d66*/
    case 3: /*0x403d11*/
      if ( a2 ) /*0x403d1d*/
        result = (unsigned __int8)byte_B02898[a1]; /*0x403d25*/
      else
        result = (unsigned __int8)byte_B02798[a1]; /*0x403d31*/
      break; /*0x403d28*/
    case 4: /*0x403d11*/
      if ( a2 ) /*0x403d3c*/
        result = (unsigned __int8)byte_B02A98[a1]; /*0x403d44*/
      else
        result = (unsigned __int8)byte_B02998[a1]; /*0x403d50*/
      break; /*0x403d47*/
    default:
      if ( a2 ) /*0x403d99*/
        result = (unsigned __int8)byte_B02298[a1]; /*0x403da1*/
      else
        result = (unsigned __int8)byte_B02198[a1]; /*0x403dad*/
      break; /*0x403da4*/
  }
  return result; /*0x403d28*/
}
