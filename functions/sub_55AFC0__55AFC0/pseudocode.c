unsigned int *__thiscall sub_55AFC0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 3);
  *this = (unsigned int)&BSFaceGenBaseMorphExtraData::`vftable';
  if ( v3 )
    FormHeapFree(v3);
  NiExtraData_dtor(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
