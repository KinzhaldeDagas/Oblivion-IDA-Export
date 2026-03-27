NiUVData *__thiscall NiUVData::`scalar deleting destructor'(NiUVData *this, char a2)
{
  NiUVData::~NiUVData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
