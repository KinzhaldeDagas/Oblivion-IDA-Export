float *__thiscall sub_6DEA70(_BYTE *this, float *a2)
{
  switch ( *(this + 0x40) & 7 ) /*0x6dea8f*/
  {
    case 0: /*0x6dea8f*/
    case 1: /*0x6dea8f*/
    case 2: /*0x6dea8f*/
    case 3: /*0x6dea8f*/
      return def_6DEA8F(a2);
    default:
      JUMPOUT(0x6DEACB); /*0x6deacb*/
  }
}
