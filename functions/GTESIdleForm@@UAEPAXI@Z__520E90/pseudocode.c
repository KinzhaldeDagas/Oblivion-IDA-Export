TESIdleForm *__thiscall TESIdleForm::`scalar deleting destructor'(TESIdleForm *this, char a2)
{
  TESIdleForm::~TESIdleForm(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
