unsigned __int16 __thiscall sub_74ED40(unsigned __int16 *this)
{
  unsigned __int16 v1; // dx
  unsigned __int16 result; // ax
  bool v3; // cf
  unsigned __int16 v4; // ax

  v1 = *(this + 0x32); /*0x74ed40*/
  if ( v1 ) /*0x74ed47*/
  {
    v4 = *(this + 0x33); /*0x74ed61*/
    if ( v1 + v4 < *(this + 4) ) /*0x74ed77*/
    {
      *(this + 0x32) = v1 + 1; /*0x74ed81*/
      return v1 + v4; /*0x74ed85*/
    }
  }
  else
  {
    result = *(this + 0x24); /*0x74ed49*/
    v3 = result < *(this + 4); /*0x74ed4d*/
    *(this + 0x33) = result; /*0x74ed51*/
    if ( v3 ) /*0x74ed55*/
    {
      *(this + 0x32) = 1; /*0x74ed5a*/
      return result; /*0x74ed60*/
    }
  }
  return word_A877E8; /*0x74ed60*/
}
