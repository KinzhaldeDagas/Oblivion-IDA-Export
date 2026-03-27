char __thiscall sub_939300(unsigned __int8 *this, __int16 a2)
{
  int v2; // eax
  unsigned __int8 *i; // edx

  v2 = 0;
  if ( *(this + 0x32) )
  {
    for ( i = this + 0x36; *(_WORD *)i != a2; i += 8 )
    {
      if ( ++v2 >= *(this + 0x32) )
        return v2;
    }
    LOBYTE(v2) = sub_939B00(this + 0x30, v2);
  }
  return v2;
}
