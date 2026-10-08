TESIdleForm *__thiscall TESIdleForm::`scalar deleting destructor'(TESIdleForm *this, char a2)
{
  TESIdleForm::~TESIdleForm(this); /*0x520e93*/
  if ( (a2 & 1) != 0 ) /*0x520e9d*/
    FormHeapFree((unsigned int)this); /*0x520ea0*/
  return this; /*0x520eaa*/
}
