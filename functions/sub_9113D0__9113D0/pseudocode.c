float *__thiscall sub_9113D0(float *this, int a2)
{
  *((_WORD *)this + 3) = 1; /*0x9113de*/
  *(_DWORD *)this = &off_A9CCB8; /*0x9113e2*/
  if ( a2 ) /*0x9113e8*/
  {
    if ( !*((_BYTE *)this + 0xC) ) /*0x9113ea*/
    {
      *((_BYTE *)this + 0xC) = 1; /*0x9113f1*/
      *(this + 0x1C) = sub_8A2AF0(*(this + 0x1C)); /*0x9113fd*/
      *(this + 0x1E) = sub_910FC0(*(this + 0x1E)); /*0x911409*/
      *(this + 0x1D) = sub_910FC0(*(this + 0x1D)); /*0x911415*/
    }
  }
  return this; /*0x91141d*/
}
