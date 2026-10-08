DebugTextExtraData *__thiscall DebugTextExtraData::`scalar deleting destructor'(DebugTextExtraData *this, char a2)
{
  DebugTextExtraData::~DebugTextExtraData(this); /*0x571f73*/
  if ( (a2 & 1) != 0 ) /*0x571f7d*/
    FormHeapFree((unsigned int)this); /*0x571f80*/
  return this; /*0x571f8a*/
}
