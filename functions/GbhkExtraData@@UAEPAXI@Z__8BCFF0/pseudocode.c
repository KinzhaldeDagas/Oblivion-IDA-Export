bhkExtraData *__thiscall bhkExtraData::`scalar deleting destructor'(bhkExtraData *this, char a2)
{
  bhkExtraData::~bhkExtraData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
