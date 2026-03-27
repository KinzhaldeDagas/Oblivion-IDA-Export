TESActorBase *__thiscall TESActorBase::`scalar deleting destructor'(TESActorBase *this, char a2)
{
  TESActorBase::~TESActorBase(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
