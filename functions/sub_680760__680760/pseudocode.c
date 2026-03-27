int __thiscall sub_680760(_WORD *this)
{
  if ( *this >= (unsigned __int16)word_B3BF04 )
    return *(_DWORD *)8;
  else
    return *((_DWORD *)dword_B3BF00 + 4 * (unsigned __int16)*this + 2);
}
