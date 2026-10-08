int __thiscall sub_73EE50(unsigned __int16 *this, unsigned __int16 a2)
{
  int result; // eax

  result = *(this + 4); /*0x73ee50*/
  if ( a2 > (unsigned __int16)result ) /*0x73ee5c*/
    *(this + 0x24) = result; /*0x73ee65*/
  else
    *(this + 0x24) = a2; /*0x73ee5e*/
  return result; /*0x73ee62*/
}
