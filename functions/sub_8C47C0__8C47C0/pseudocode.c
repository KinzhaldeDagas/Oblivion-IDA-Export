unsigned int *__thiscall sub_8C47C0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 5);
  *this = (unsigned int)&hkPackedNiTriStripsData::`vftable';
  if ( v3 )
    FormHeapFree(v3);
  if ( *(this + 6) )
    FormHeapFree(*(this + 6));
  if ( *(this + 7) )
    FormHeapFree(*(this + 7));
  NiRefObject_destr(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
