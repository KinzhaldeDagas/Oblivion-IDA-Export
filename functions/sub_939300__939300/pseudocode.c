char __thiscall sub_939300(unsigned __int8 *this, __int16 a2)
{
  int v2; // eax
  unsigned __int8 *i; // edx

  v2 = 0; /*0x939305*/
  if ( *(this + 0x32) ) /*0x939301*/
  {
    for ( i = this + 0x36; *(_WORD *)i != a2; i += 8 ) /*0x939311*/
    {
      if ( ++v2 >= *(this + 0x32) ) /*0x93931f*/
        return v2; /*0x93931f*/
    }
    LOBYTE(v2) = sub_939B00(this + 0x30, v2); /*0x93932b*/
  }
  return v2; /*0x939322*/
}
