int *__thiscall sub_4A55E0(int *this, char a2)
{
  *this = (int)&TESRegionDataSound::`vftable';
  sub_4A5390(this);
  sub_4A3510(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
