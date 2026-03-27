unsigned int *__thiscall sub_73E960(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 0xB);
  *this = (unsigned int)&NiScreenLODData::`vftable';
  FormHeapFree(v4);
  sub_738790(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
