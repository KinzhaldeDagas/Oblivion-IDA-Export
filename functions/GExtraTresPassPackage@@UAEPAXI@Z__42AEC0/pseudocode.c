ExtraTresPassPackage *__thiscall ExtraTresPassPackage::`scalar deleting destructor'(
        ExtraTresPassPackage *this,
        char a2)
{
  ExtraTresPassPackage::~ExtraTresPassPackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
