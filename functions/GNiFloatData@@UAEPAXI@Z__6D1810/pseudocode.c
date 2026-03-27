NiFloatData *__thiscall NiFloatData::`scalar deleting destructor'(NiFloatData *this, char a2)
{
  NiFloatData::~NiFloatData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
