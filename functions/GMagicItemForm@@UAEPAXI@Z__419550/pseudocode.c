TESForm *__thiscall MagicItemForm::`scalar deleting destructor'(TESForm *this, char a2)
{
  MagicItemForm::~MagicItemForm(this); /*0x419553*/
  if ( (a2 & 1) != 0 ) /*0x41955d*/
    FormHeapFree((unsigned int)this); /*0x419560*/
  return this; /*0x41956a*/
}
