NiPSysFieldModifier *__thiscall NiPSysFieldModifier::`scalar deleting destructor'(NiPSysFieldModifier *this, char a2)
{
  NiPSysFieldModifier::~NiPSysFieldModifier(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
