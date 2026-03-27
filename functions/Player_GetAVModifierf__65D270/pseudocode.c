double __thiscall Player_GetAVModifierf(float *this, int a2, int a3)
{
  float v4; // [esp+0h] [ebp-4h]

  v4 = 0.0;
  if ( !a2 )
    return *(this + a3 + 0x81);
  if ( a2 == 1 )
    return *(this + a3 + 0xC9);
  if ( a2 != 2 )
    return v4;
  switch ( a3 )
  {
    case 8:
      return *(this + 0x111);
    case 9:
      return *(this + 0x112);
    case 0xA:
      return *(this + 0x113);
    default:
      return *(this + a3 + 0x114);
  }
}
