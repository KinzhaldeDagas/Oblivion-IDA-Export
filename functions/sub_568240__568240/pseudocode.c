signed int __cdecl sub_568240(unsigned __int8 *a1)
{
  signed int result; // eax
  unsigned __int8 v2; // cl

  result = 0; /*0x568244*/
  if ( a1 )
  {
    switch ( a1[4] )
    {
      case 0x10u:
        result = 0x1A; /*0x5682fa*/
        break; /*0x5682fa*/
      case 0x12u:
        result = 1; /*0x568265*/
        break; /*0x56826a*/
      case 0x13u:
        result = 2; /*0x56826b*/
        break; /*0x568270*/
      case 0x14u:
      case 0x22u:
        result = 3; /*0x5682d8*/
        break; /*0x5682dd*/
      case 0x15u:
        result = 4; /*0x568271*/
        break; /*0x568276*/
      case 0x16u:
        result = 5; /*0x5682d2*/
        break; /*0x5682d7*/
      case 0x17u:
        result = 6; /*0x568277*/
        break; /*0x56827c*/
      case 0x18u:
        result = 7; /*0x56827d*/
        break; /*0x568282*/
      case 0x19u:
        result = (a1[0x7C] & 2) != 0 ? 0x14 : 8;
        break; /*0x5682d1*/
      case 0x1Au:
        result = 9; /*0x568283*/
        break; /*0x568288*/
      case 0x1Bu:
        result = 0xA; /*0x568289*/
        break; /*0x56828e*/
      case 0x1Fu:
        result = 0xB; /*0x56828f*/
        break; /*0x568294*/
      case 0x20u:
        result = 0xC; /*0x568295*/
        break; /*0x56829a*/
      case 0x21u:
        v2 = a1[0x90]; /*0x5682de*/
        if ( v2 == 5 || v2 == 4 ) /*0x5682ec*/
          result = 0x19; /*0x5682f4*/
        else
          result = 0x18; /*0x5682ee*/
        break; /*0x5682f3*/
      case 0x23u:
        result = 0xF; /*0x56829b*/
        break; /*0x5682a0*/
      case 0x24u:
        result = 0x10; /*0x5682a1*/
        break; /*0x5682a6*/
      case 0x26u:
        result = 0x11; /*0x5682a7*/
        break; /*0x5682ac*/
      case 0x27u:
        result = 0x12; /*0x5682ad*/
        break; /*0x5682b2*/
      case 0x28u:
        result = ((unsigned __int8)AlchemyItem_IsEdible((int)a1) != 0) + 0x13; /*0x5682be*/
        break; /*0x5682c1*/
      default:
        return result;
    }
  }
  return result; /*0x56826a*/
}
