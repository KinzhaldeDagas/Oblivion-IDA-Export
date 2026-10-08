int __thiscall TESFullName_Initialize(TESForm::ModReferenceList *this)
{
  FormHeapFree((unsigned int)this->next); /*0x5a6a27*/
  this->next = 0; /*0x5a6a31*/
  *((_WORD *)this + 5) = 0; /*0x5a6a34*/
  *((_WORD *)this + 4) = 0; /*0x5a6a38*/
  return 0; /*0x5a6a3c*/
}
