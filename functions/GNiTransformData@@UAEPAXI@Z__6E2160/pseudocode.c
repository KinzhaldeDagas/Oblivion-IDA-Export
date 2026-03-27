NiTransformData *__thiscall NiTransformData::`scalar deleting destructor'(NiTransformData *this, char a2)
{
  NiTransformData::~NiTransformData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
