char __cdecl sub_7623D0(int a1, _DWORD *a2, _DWORD *a3)
{
  char result; // al

  *a3 &= 0xFFFFFF0F; /*0x7623d8*/
  switch ( a1 ) /*0x7623e3*/
  {
    case 0: /*0x7623e3*/
      *a2 = 1; /*0x7623ee*/
      *a3 |= 0x50u; /*0x7623f4*/
      result = 1; /*0x7623f7*/
      break; /*0x7623f9*/
    case 1: /*0x7623e3*/
      *a2 = 1; /*0x7623fe*/
      *a3 |= 0x40u; /*0x762404*/
      result = 1; /*0x762407*/
      break; /*0x762409*/
    case 2: /*0x7623e3*/
      *a2 = 1; /*0x76240e*/
      *a3 |= 0x80u; /*0x762414*/
      result = 1; /*0x76241a*/
      break; /*0x76241c*/
    case 3: /*0x7623e3*/
      *a2 = 1; /*0x762421*/
      *a3 |= 0x20u; /*0x762427*/
      result = 1; /*0x76242a*/
      break; /*0x76242c*/
    case 4: /*0x7623e3*/
      *a2 = 2; /*0x762454*/
      *a3 |= 0x20u; /*0x76245a*/
      result = 1; /*0x76245d*/
      break; /*0x76245f*/
    case 5: /*0x7623e3*/
      *a2 = 2; /*0x762431*/
      *a3 |= 0x40u; /*0x762437*/
      result = 1; /*0x76243a*/
      break; /*0x76243c*/
    case 6: /*0x7623e3*/
      *a2 = 2; /*0x762441*/
      *a3 |= 0x80u; /*0x762447*/
      result = 1; /*0x76244d*/
      break; /*0x76244f*/
    default:
      JUMPOUT(0x762460); /*0x762460*/
  }
  return result; /*0x7623f9*/
}
