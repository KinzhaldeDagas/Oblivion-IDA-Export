TESPackage *__thiscall FleePackage::`scalar deleting destructor'(TESPackage *this, char a2)
{
  FleePackage::~FleePackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
