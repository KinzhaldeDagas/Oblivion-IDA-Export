signed int __thiscall sub_69C600(_DWORD *this)
{
  signed int result; // eax

  result = 1; /*0x69c600*/
  if ( *(this + 0x22) == 1 || (*(this + 2) & 0x20) != 0 ) /*0x69c615*/
    return 0; /*0x69c617*/
  return result; /*0x69c619*/
}
