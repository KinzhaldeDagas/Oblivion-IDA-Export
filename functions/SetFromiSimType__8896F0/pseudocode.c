int __cdecl SetFromiSimType(int a1)
{
  int result; // eax

  result = a1; /*0x8896f0*/
  switch ( a1 ) /*0x8896fd*/
  {
    case 0: /*0x8896fd*/
      fromISimType = 1; /*0x889704*/
      break; /*0x88970e*/
    case 2: /*0x8896fd*/
      fromISimType = 2; /*0x88970f*/
      break; /*0x889719*/
    case 3: /*0x8896fd*/
      fromISimType = 5; /*0x88971a*/
      break; /*0x889724*/
    case 4: /*0x8896fd*/
      fromISimType = 9; /*0x889725*/
      break; /*0x88972f*/
    default:
      fromISimType = 4; /*0x889730*/
      break; /*0x889730*/
  }
  return result; /*0x88970e*/
}
