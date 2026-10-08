signed int __stdcall sub_7F5C40(unsigned __int16 a1)
{
  signed int result; // eax

  result = 0; /*0x7f5c45*/
  if ( a1 > 0x11Bu ) /*0x7f5c4d*/
  {
    switch ( a1 ) /*0x7f5ca4*/
    {
      case 0x122u: /*0x7f5ca4*/
      case 0x17Bu: /*0x7f5ca4*/
      case 0x194u: /*0x7f5ca4*/
        return 0x12;
      case 0x129u: /*0x7f5ca4*/
LABEL_13:
        result = 0x802; /*0x7f5cc3*/
        break; /*0x7f5cc3*/
      case 0x168u: /*0x7f5ca4*/
      case 0x16Cu: /*0x7f5ca4*/
      case 0x171u: /*0x7f5ca4*/
      case 0x174u: /*0x7f5ca4*/
        result = 0x800; /*0x7f5cab*/
        break; /*0x7f5cb0*/
      case 0x169u: /*0x7f5ca4*/
      case 0x172u: /*0x7f5ca4*/
        result = 0x3800; /*0x7f5cb3*/
        break; /*0x7f5cb8*/
      default:
        return result;
    }
  }
  else if ( a1 == 0x11B ) /*0x7f5c4f*/
  {
    return 0x12; /*0x7f5cbb*/
  }
  else
  {
    switch ( a1 ) /*0x7f5c63*/
    {
      case 0x18u: /*0x7f5c63*/
      case 0x2Fu: /*0x7f5c63*/
      case 0x30u: /*0x7f5c63*/
      case 0x82u: /*0x7f5c63*/
      case 0x90u: /*0x7f5c63*/
      case 0xB8u: /*0x7f5c63*/
      case 0xC5u: /*0x7f5c63*/
      case 0xE6u: /*0x7f5c63*/
      case 0x10Bu: /*0x7f5c63*/
      case 0x113u: /*0x7f5c63*/
        return 0x12;
      case 0x33u: /*0x7f5c63*/
      case 0x54u: /*0x7f5c63*/
      case 0x5Fu: /*0x7f5c63*/
      case 0x9Du: /*0x7f5c63*/
      case 0xAAu: /*0x7f5c63*/
      case 0xD2u: /*0x7f5c63*/
      case 0xDFu: /*0x7f5c63*/
        result = 0x1012; /*0x7f5c72*/
        break; /*0x7f5c77*/
      case 0x6Au: /*0x7f5c63*/
      case 0x75u: /*0x7f5c63*/
        result = 0x3012; /*0x7f5c7a*/
        break; /*0x7f5c7f*/
      case 0x76u: /*0x7f5c63*/
        result = 0x82; /*0x7f5c6a*/
        break; /*0x7f5c6f*/
      case 0xE7u: /*0x7f5c63*/
      case 0x114u: /*0x7f5c63*/
        goto LABEL_13;
      case 0xEEu: /*0x7f5c63*/
        result = 0x1802; /*0x7f5c82*/
        break; /*0x7f5c87*/
      case 0xFCu: /*0x7f5c63*/
        result = 0x3802; /*0x7f5c8a*/
        break; /*0x7f5c8f*/
      default:
        return result;
    }
  }
  return result; /*0x7f5c6f*/
}
