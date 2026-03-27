signed int __stdcall sub_7F5E80(unsigned __int16 a1)
{
  signed int result; // eax

  result = 0;
  if ( a1 > 0x11Bu )
  {
    switch ( a1 )
    {
      case 0x122u:
      case 0x129u:
      case 0x16Cu:
        return 0x108;
      case 0x168u:
      case 0x194u:
LABEL_11:
        result = 0;
        break;
      case 0x169u:
LABEL_12:
        result = 0x38;
        break;
      case 0x16Au:
      case 0x17Bu:
LABEL_8:
        result = 0x100;
        break;
      case 0x16Bu:
      case 0x173u:
      case 0x175u:
        result = 0x130;
        break;
      case 0x16Du:
      case 0x16Eu:
      case 0x16Fu:
      case 0x170u:
      case 0x171u:
      case 0x176u:
LABEL_4:
        result = 0x30;
        break;
      case 0x172u:
        result = 0xBC;
        break;
      case 0x174u:
        result = 0x138;
        break;
      default:
        return result;
    }
  }
  else if ( a1 == 0x11B )
  {
    return 0x108;
  }
  else
  {
    switch ( a1 )
    {
      case 0x18u:
      case 0xE7u:
      case 0x10Bu:
        goto LABEL_11;
      case 0x2Fu:
      case 0x30u:
      case 0xE6u:
      case 0x113u:
      case 0x114u:
        result = 8;
        break;
      case 0x33u:
      case 0xEEu:
        result = 0x18;
        break;
      case 0x48u:
      case 0x49u:
      case 0x6Au:
      case 0x75u:
        goto LABEL_4;
      case 0x54u:
      case 0x5Fu:
        result = 0x10;
        break;
      case 0x76u:
      case 0x82u:
      case 0x90u:
      case 0xC5u:
        goto LABEL_8;
      case 0x9Du:
      case 0xAAu:
      case 0xB8u:
      case 0xD2u:
      case 0xDFu:
        result = 0x110;
        break;
      case 0xFCu:
        goto LABEL_12;
      default:
        return result;
    }
  }
  return result;
}
