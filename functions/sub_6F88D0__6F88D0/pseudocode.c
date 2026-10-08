unsigned int *__thiscall sub_6F88D0(unsigned int *this, char a2)
{
  int v3; // eax

  v3 = *(this + 5); /*0x6f88d3*/
  *this = (unsigned int)&std::ctype<char>::`vftable'; /*0x6f88d8*/
  if ( v3 <= 0 ) /*0x6f88de*/
  {
    if ( v3 < 0 ) /*0x6f88eb*/
      FormHeapFree(*(this + 4)); /*0x6f88f1*/
  }
  else
  {
    free((void *)*(this + 4)); /*0x6f88e4*/
  }
  *this = (unsigned int)&std::locale::facet::`vftable'; /*0x6f88fe*/
  if ( (a2 & 1) != 0 ) /*0x6f8904*/
    FormHeapFree((unsigned int)this); /*0x6f8907*/
  return this; /*0x6f8911*/
}
