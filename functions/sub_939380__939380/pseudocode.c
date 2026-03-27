void __thiscall sub_939380(unsigned __int8 *this, __int16 a2)
{
  int v2; // edx
  unsigned __int8 *i; // eax

  v2 = 0;
  if ( *(this + 0x32) )
  {
    for ( i = this + 0x34; *((_WORD *)i + 1) != a2; i += 8 )
    {
      if ( ++v2 >= *(this + 0x32) )
        return;
    }
    *i = 0;
    i[1] = 0;
  }
}
