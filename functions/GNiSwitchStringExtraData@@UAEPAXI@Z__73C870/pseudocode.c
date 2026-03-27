NiSwitchStringExtraData *__thiscall NiSwitchStringExtraData::`scalar deleting destructor'(
        NiSwitchStringExtraData *this,
        char a2)
{
  NiSwitchStringExtraData::~NiSwitchStringExtraData(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
