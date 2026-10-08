NiSwitchStringExtraData *__thiscall NiSwitchStringExtraData::`scalar deleting destructor'(
        NiSwitchStringExtraData *this,
        char a2)
{
  NiSwitchStringExtraData::~NiSwitchStringExtraData(this); /*0x73c873*/
  if ( (a2 & 1) != 0 ) /*0x73c87d*/
    FormHeapFree((unsigned int)this); /*0x73c880*/
  return this; /*0x73c88a*/
}
