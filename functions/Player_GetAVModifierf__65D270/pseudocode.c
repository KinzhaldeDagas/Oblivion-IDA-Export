double __thiscall Player_GetAVModifierf(float *this, int a2, int a3)
{
  float v4; // [esp+0h] [ebp-4h]

  v4 = 0.0; /*0x65d27a*/
  if ( !a2 ) /*0x65d27d*/
    return *(this + a3 + 0x81); /*0x65d302*/
  if ( a2 == 1 ) /*0x65d282*/
    return *(this + a3 + 0xC9); /*0x65d2f1*/
  if ( a2 != 2 ) /*0x65d287*/
    return v4; /*0x65d287*/
  switch ( a3 ) /*0x65d292*/
  {
    case 8: /*0x65d292*/
      return *(this + 0x111); /*0x65d2d8*/
    case 9: /*0x65d292*/
      return *(this + 0x112); /*0x65d2c8*/
    case 0xA: /*0x65d292*/
      return *(this + 0x113); /*0x65d2b5*/
    default:
      return *(this + a3 + 0x114); /*0x65d2a5*/
  }
}
