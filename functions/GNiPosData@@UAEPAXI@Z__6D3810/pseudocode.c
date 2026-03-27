NiPosData *__thiscall NiPosData::`scalar deleting destructor'(NiPosData *this, char a2)
{
  NiPosData::~NiPosData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
