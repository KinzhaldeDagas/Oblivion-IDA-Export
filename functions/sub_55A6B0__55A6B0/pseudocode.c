unsigned int *__thiscall sub_55A6B0(unsigned int *this, char a2)
{
  unsigned int v3; // eax

  v3 = *(this + 1);
  *this = (unsigned int)&BSFaceGenMorphStatistical::`vftable';
  if ( v3 )
    FormHeapFree(v3);
  *this = (unsigned int)&BSFaceGenMorph::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
