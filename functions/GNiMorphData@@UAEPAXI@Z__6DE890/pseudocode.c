NiMorphData *__thiscall NiMorphData::`scalar deleting destructor'(NiMorphData *this, char a2)
{
  NiMorphData::~NiMorphData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
