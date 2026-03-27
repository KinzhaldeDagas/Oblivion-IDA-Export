unsigned int *__thiscall sub_724F40(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 9);
  *this = (unsigned int)&NiRangeLODData::`vftable';
  FormHeapFree(v4);
  sub_738790(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
