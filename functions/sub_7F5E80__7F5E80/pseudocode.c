signed int __stdcall sub_7F5E80(unsigned __int16 a1)
{
  signed int result; // eax

  result = 0; /*0x7f5e85*/
  if ( a1 > 0x11Bu ) /*0x7f5e8d*/
  {
    switch ( a1 ) /*0x7f5ef4*/
    {
      case 0x122u: /*0x7f5ef4*/
      case 0x129u: /*0x7f5ef4*/
      case 0x16Cu: /*0x7f5ef4*/
        return 0x108;
      case 0x168u: /*0x7f5ef4*/
      case 0x194u: /*0x7f5ef4*/
LABEL_11:
        result = 0; /*0x7f5efb*/
        break; /*0x7f5efd*/
      case 0x169u: /*0x7f5ef4*/
LABEL_12:
        result = 0x38; /*0x7f5f00*/
        break; /*0x7f5f05*/
      case 0x16Au: /*0x7f5ef4*/
      case 0x17Bu: /*0x7f5ef4*/
LABEL_8:
        result = 0x100; /*0x7f5ed2*/
        break; /*0x7f5ed7*/
      case 0x16Bu: /*0x7f5ef4*/
      case 0x173u: /*0x7f5ef4*/
      case 0x175u: /*0x7f5ef4*/
        result = 0x130; /*0x7f5f10*/
        break; /*0x7f5f15*/
      case 0x16Du: /*0x7f5ef4*/
      case 0x16Eu: /*0x7f5ef4*/
      case 0x16Fu: /*0x7f5ef4*/
      case 0x170u: /*0x7f5ef4*/
      case 0x171u: /*0x7f5ef4*/
      case 0x176u: /*0x7f5ef4*/
LABEL_4:
        result = 0x30; /*0x7f5eb2*/
        break; /*0x7f5eb7*/
      case 0x172u: /*0x7f5ef4*/
        result = 0xBC; /*0x7f5f08*/
        break; /*0x7f5f0d*/
      case 0x174u: /*0x7f5ef4*/
        result = 0x138; /*0x7f5f18*/
        break; /*0x7f5f1d*/
      default:
        return result;
    }
  }
  else if ( a1 == 0x11B ) /*0x7f5e8f*/
  {
    return 0x108; /*0x7f5f20*/
  }
  else
  {
    switch ( a1 ) /*0x7f5eab*/
    {
      case 0x18u: /*0x7f5eab*/
      case 0xE7u: /*0x7f5eab*/
      case 0x10Bu: /*0x7f5eab*/
        goto LABEL_11;
      case 0x2Fu: /*0x7f5eab*/
      case 0x30u: /*0x7f5eab*/
      case 0xE6u: /*0x7f5eab*/
      case 0x113u: /*0x7f5eab*/
      case 0x114u: /*0x7f5eab*/
        result = 8; /*0x7f5eba*/
        break; /*0x7f5ebf*/
      case 0x33u: /*0x7f5eab*/
      case 0xEEu: /*0x7f5eab*/
        result = 0x18; /*0x7f5ec2*/
        break; /*0x7f5ec7*/
      case 0x48u: /*0x7f5eab*/
      case 0x49u: /*0x7f5eab*/
      case 0x6Au: /*0x7f5eab*/
      case 0x75u: /*0x7f5eab*/
        goto LABEL_4;
      case 0x54u: /*0x7f5eab*/
      case 0x5Fu: /*0x7f5eab*/
        result = 0x10; /*0x7f5eca*/
        break; /*0x7f5ecf*/
      case 0x76u: /*0x7f5eab*/
      case 0x82u: /*0x7f5eab*/
      case 0x90u: /*0x7f5eab*/
      case 0xC5u: /*0x7f5eab*/
        goto LABEL_8;
      case 0x9Du: /*0x7f5eab*/
      case 0xAAu: /*0x7f5eab*/
      case 0xB8u: /*0x7f5eab*/
      case 0xD2u: /*0x7f5eab*/
      case 0xDFu: /*0x7f5eab*/
        result = 0x110; /*0x7f5eda*/
        break; /*0x7f5edf*/
      case 0xFCu: /*0x7f5eab*/
        goto LABEL_12;
      default:
        return result;
    }
  }
  return result; /*0x7f5eb7*/
}
