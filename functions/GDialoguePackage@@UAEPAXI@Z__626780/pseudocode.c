TESPackage *__thiscall DialoguePackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  DialoguePackage::~DialoguePackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
