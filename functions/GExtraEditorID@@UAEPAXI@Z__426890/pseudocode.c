ExtraEditorID *__thiscall ExtraEditorID::`scalar deleting destructor'(ExtraEditorID *this, char a2)
{
  ExtraEditorID::~ExtraEditorID(this); /*0x426893*/
  if ( (a2 & 1) != 0 ) /*0x42689d*/
    FormHeapFree((unsigned int)this); /*0x4268a0*/
  return this; /*0x4268aa*/
}
