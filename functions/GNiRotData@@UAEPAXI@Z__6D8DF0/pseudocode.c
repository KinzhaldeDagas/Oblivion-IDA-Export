NiRotData *__thiscall NiRotData::`scalar deleting destructor'(NiRotData *this, char a2)
{
  NiRotData::~NiRotData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
