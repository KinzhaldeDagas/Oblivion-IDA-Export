IntSeenData *__thiscall IntSeenData::`scalar deleting destructor'(IntSeenData *this, char a2)
{
  IntSeenData::~IntSeenData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
