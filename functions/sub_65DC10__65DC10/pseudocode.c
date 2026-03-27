int __thiscall sub_65DC10(float *this, char a2)
{
  if ( a2 )
    flt_B3BB7C = *(this + 0x187);
  else
    *(this + 0x187) = flt_B3BB7C;
  return sub_5E0E50((Actor *)this);
}
