TESActorBase *__thiscall TESActorBase::`scalar deleting destructor'(TESActorBase *this, char a2)
{
  TESActorBase::~TESActorBase(this); /*0x51e983*/
  if ( (a2 & 1) != 0 ) /*0x51e98d*/
    FormHeapFree((unsigned int)this); /*0x51e990*/
  return this; /*0x51e99a*/
}
