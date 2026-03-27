signed int __cdecl sub_568240(unsigned __int8 *a1)
{
  signed int result; // eax
  unsigned __int8 v2; // cl

  result = 0;
  if ( a1 )
  {
    switch ( a1[4] )
    {
      case 0x10u:
        result = 0x1A;
        break;
      case 0x12u:
        result = 1;
        break;
      case 0x13u:
        result = 2;
        break;
      case 0x14u:
      case 0x22u:
        result = 3;
        break;
      case 0x15u:
        result = 4;
        break;
      case 0x16u:
        result = 5;
        break;
      case 0x17u:
        result = 6;
        break;
      case 0x18u:
        result = 7;
        break;
      case 0x19u:
        result = (a1[0x7C] & 2) != 0 ? 0x14 : 8;
        break;
      case 0x1Au:
        result = 9;
        break;
      case 0x1Bu:
        result = 0xA;
        break;
      case 0x1Fu:
        result = 0xB;
        break;
      case 0x20u:
        result = 0xC;
        break;
      case 0x21u:
        v2 = a1[0x90];
        if ( v2 == 5 || v2 == 4 )
          result = 0x19;
        else
          result = 0x18;
        break;
      case 0x23u:
        result = 0xF;
        break;
      case 0x24u:
        result = 0x10;
        break;
      case 0x26u:
        result = 0x11;
        break;
      case 0x27u:
        result = 0x12;
        break;
      case 0x28u:
        result = ((unsigned __int8)AlchemyItem_IsEdible((int)a1) != 0) + 0x13;
        break;
      default:
        return result;
    }
  }
  return result;
}
