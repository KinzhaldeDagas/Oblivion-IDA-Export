signed int __stdcall sub_7F5C40(unsigned __int16 a1)
{
  signed int result; // eax

  result = 0;
  if ( a1 > 0x11Bu )
  {
    switch ( a1 )
    {
      case 0x122u:
      case 0x17Bu:
      case 0x194u:
        return 0x12;
      case 0x129u:
LABEL_13:
        result = 0x802;
        break;
      case 0x168u:
      case 0x16Cu:
      case 0x171u:
      case 0x174u:
        result = 0x800;
        break;
      case 0x169u:
      case 0x172u:
        result = 0x3800;
        break;
      default:
        return result;
    }
  }
  else if ( a1 == 0x11B )
  {
    return 0x12;
  }
  else
  {
    switch ( a1 )
    {
      case 0x18u:
      case 0x2Fu:
      case 0x30u:
      case 0x82u:
      case 0x90u:
      case 0xB8u:
      case 0xC5u:
      case 0xE6u:
      case 0x10Bu:
      case 0x113u:
        return 0x12;
      case 0x33u:
      case 0x54u:
      case 0x5Fu:
      case 0x9Du:
      case 0xAAu:
      case 0xD2u:
      case 0xDFu:
        result = 0x1012;
        break;
      case 0x6Au:
      case 0x75u:
        result = 0x3012;
        break;
      case 0x76u:
        result = 0x82;
        break;
      case 0xE7u:
      case 0x114u:
        goto LABEL_13;
      case 0xEEu:
        result = 0x1802;
        break;
      case 0xFCu:
        result = 0x3802;
        break;
      default:
        return result;
    }
  }
  return result;
}
