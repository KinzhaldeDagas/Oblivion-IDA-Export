unsigned int *__thiscall sub_7215D0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2);
  *this = (unsigned int)&NiExtraData::`vftable';
  FormHeapFree(v4);
  *(this + 2) = 0;
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
