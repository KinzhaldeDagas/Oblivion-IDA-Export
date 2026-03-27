TESForm *__thiscall MagicItemForm::`scalar deleting destructor'(TESForm *this, char a2)
{
  MagicItemForm::~MagicItemForm(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
