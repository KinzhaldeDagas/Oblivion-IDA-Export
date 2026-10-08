char __thiscall sub_6DF090(unsigned int *this)
{
  if ( *(_DWORD *)(*(this + 4) + 8) ) /*0x6df096*/
  {
    sub_6DF010(this, *(char **)(*(this + 4) + 8)); /*0x6df09e*/
    *(this + 4) = 0; /*0x6df0a3*/
    return 1; /*0x6df0aa*/
  }
  else
  {
    FormHeapFree(*(this + 5)); /*0x6df0b2*/
    *(this + 5) = 0; /*0x6df0ba*/
    return 0; /*0x6df0c1*/
  }
}
