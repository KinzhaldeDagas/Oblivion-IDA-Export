unsigned int *__thiscall sub_716C50(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 3);
  *this = (unsigned int)&NiStringExtraData::`vftable';
  FormHeapFree(v4);
  *(this + 3) = 0;
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
