int ***__thiscall sub_6F6ED0(int ***this, char a2)
{
  *this = (int **)&std::ios_base::`vftable'; /*0x6f6ed4*/
  std::ios_base::_Ios_base_dtor(this); /*0x6f6eda*/
  if ( (a2 & 1) != 0 ) /*0x6f6ee7*/
    FormHeapFree((unsigned int)this); /*0x6f6eea*/
  return this; /*0x6f6ef4*/
}
