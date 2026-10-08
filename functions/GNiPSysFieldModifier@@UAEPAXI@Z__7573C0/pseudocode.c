NiPSysFieldModifier *__thiscall NiPSysFieldModifier::`scalar deleting destructor'(NiPSysFieldModifier *this, char a2)
{
  NiPSysFieldModifier::~NiPSysFieldModifier(this); /*0x7573c3*/
  if ( (a2 & 1) != 0 ) /*0x7573cd*/
    FormHeapFree((unsigned int)this); /*0x7573d0*/
  return this; /*0x7573da*/
}
