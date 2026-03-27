ExtraSeenData *__thiscall ExtraSeenData::`scalar deleting destructor'(ExtraSeenData *this, char a2)
{
  ExtraSeenData::~ExtraSeenData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
