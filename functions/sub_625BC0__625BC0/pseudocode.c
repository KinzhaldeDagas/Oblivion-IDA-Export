bool __thiscall sub_625BC0(_BYTE *this, int a2)
{
  bool result; // al

  switch ( a2 ) /*0x625bd3*/
  {
    case 4: /*0x625bd3*/
      result = stru_B35768.value != 0; /*0x625c22*/
      break; /*0x625c25*/
    case 8: /*0x625bd3*/
      result = stru_B35748.value != 0; /*0x625bee*/
      break; /*0x625bf1*/
    case 0x10: /*0x625bd3*/
      result = stru_B35750.value != 0; /*0x625bfb*/
      break; /*0x625bfe*/
    case 0x20: /*0x625bd3*/
      result = stru_B35740.value != 0; /*0x625be1*/
      break; /*0x625be4*/
    case 0x40: /*0x625bd3*/
      result = stru_B35758.value != 0; /*0x625c08*/
      break; /*0x625c0b*/
    case 0x80: /*0x625bd3*/
      result = stru_B35760.value != 0; /*0x625c15*/
      break; /*0x625c18*/
    default:
      result = sub_4A98A0(this, a2); /*0x625c2c*/
      break; /*0x625c2c*/
  }
  return result; /*0x625be4*/
}
