AverageEntry *__thiscall AverageEntry::`scalar deleting destructor'(AverageEntry *this, char a2)
{
  AverageEntry::~AverageEntry(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
