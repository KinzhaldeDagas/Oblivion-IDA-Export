double __thiscall sub_6804B0(_WORD *this)
{
  if ( *this >= (unsigned __int16)word_B3BF04 )
    return *(float *)0;
  else
    return *((float *)dword_B3BF00 + 4 * (unsigned __int16)*this);
}
