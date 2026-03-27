NiBoolData *__thiscall NiBoolData::`scalar deleting destructor'(NiBoolData *this, char a2)
{
  NiBoolData::~NiBoolData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
