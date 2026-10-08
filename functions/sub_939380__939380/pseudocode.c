void __thiscall sub_939380(unsigned __int8 *this, __int16 a2)
{
  int v2; // edx
  unsigned __int8 *i; // eax

  v2 = 0; /*0x939385*/
  if ( *(this + 0x32) ) /*0x939381*/
  {
    for ( i = this + 0x34; *((_WORD *)i + 1) != a2; i += 8 ) /*0x93938b*/
    {
      if ( ++v2 >= *(this + 0x32) ) /*0x93939f*/
        return; /*0x93939f*/
    }
    *i = 0; /*0x9393a5*/
    i[1] = 0; /*0x9393a8*/
  }
}
