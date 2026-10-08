ActiveEffect *__thiscall TelekinesisEffect::`scalar deleting destructor'(ActiveEffect *this, char a2)
{
  TelekinesisEffect::~TelekinesisEffect(this); /*0x6a7a83*/
  if ( (a2 & 1) != 0 ) /*0x6a7a8d*/
    FormHeapFree((unsigned int)this); /*0x6a7a90*/
  return this; /*0x6a7a9a*/
}
