signed int __stdcall sub_573760(char a1)
{
  signed int result; // eax

  switch ( a1 )
  {
    case 0:
      result = 0x20; /*0x57377a*/
      break; /*0x57377f*/
    case 0x22:
    case 0x27:
      result = 8; /*0x573792*/
      break; /*0x573797*/
    case 0x3C:
    case 0x7B:
      result = 1; /*0x573782*/
      break; /*0x573787*/
    case 0x3D:
      result = 0x10; /*0x57379a*/
      break; /*0x57379f*/
    case 0x3E:
    case 0x7D:
      result = 2; /*0x57378a*/
      break; /*0x57378f*/
    default:
      result = a1 > 0x20 ? 0 : 4;
      break; /*0x5737ad*/
  }
  return result; /*0x57377f*/
}
