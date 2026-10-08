ExtraTresPassPackage *__thiscall ExtraTresPassPackage::`scalar deleting destructor'(
        ExtraTresPassPackage *this,
        char a2)
{
  ExtraTresPassPackage::~ExtraTresPassPackage(this); /*0x42aec3*/
  if ( (a2 & 1) != 0 ) /*0x42aecd*/
    FormHeapFree((unsigned int)this); /*0x42aed0*/
  return this; /*0x42aeda*/
}
