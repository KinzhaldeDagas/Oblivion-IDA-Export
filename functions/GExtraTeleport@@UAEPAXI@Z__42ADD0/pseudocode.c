ExtraTeleport *__thiscall ExtraTeleport::`scalar deleting destructor'(ExtraTeleport *this, char a2)
{
  ExtraTeleport::~ExtraTeleport(this); /*0x42add3*/
  if ( (a2 & 1) != 0 ) /*0x42addd*/
    FormHeapFree((unsigned int)this); /*0x42ade0*/
  return this; /*0x42adea*/
}
