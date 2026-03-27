NiGeometryGroup *__thiscall sub_77DDC0(NiGeometryGroup *this, char a2)
{
  this->vtbl = (NiGeometryGroupVtbl *)&NiUnsharedGeometryGroup::`vftable';
  if ( this == dword_B428A0 )
    dword_B428A0 = 0;
  sub_7828F0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
