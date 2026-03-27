NiStringsExtraData *__thiscall NiStringsExtraData::`scalar deleting destructor'(NiStringsExtraData *this, char a2)
{
  NiStringsExtraData::~NiStringsExtraData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
