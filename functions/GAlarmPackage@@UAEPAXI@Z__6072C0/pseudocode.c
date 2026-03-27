AlarmPackage *__thiscall AlarmPackage::`scalar deleting destructor'(AlarmPackage *this, char a2)
{
  AlarmPackage::~AlarmPackage(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
