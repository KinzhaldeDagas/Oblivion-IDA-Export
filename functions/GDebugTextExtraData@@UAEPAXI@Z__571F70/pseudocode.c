DebugTextExtraData *__thiscall DebugTextExtraData::`scalar deleting destructor'(DebugTextExtraData *this, char a2)
{
  DebugTextExtraData::~DebugTextExtraData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
