int __thiscall sub_939340(unsigned __int8 *this, __int16 a2)
{
  int result; // eax
  unsigned __int8 *i; // edx

  result = 0; /*0x939345*/
  if ( *(this + 0x32) ) /*0x939341*/
  {
    for ( i = this + 0x36; *(_WORD *)i != 0xFFFF; i += 8 ) /*0x93934b*/
    {
      if ( ++result >= *(this + 0x32) ) /*0x93935d*/
        return result; /*0x93935d*/
    }
    *((_WORD *)this + 4 * result + 0x1B) = a2; /*0x939368*/
  }
  return result; /*0x93935f*/
}
