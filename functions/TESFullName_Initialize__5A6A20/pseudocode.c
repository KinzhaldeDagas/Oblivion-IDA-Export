int __thiscall TESFullName_Initialize(TESForm::ModReferenceList *this)
{
  FormHeapFree((unsigned int)this->next);
  this->next = 0;
  *((_WORD *)this + 5) = 0;
  *((_WORD *)this + 4) = 0;
  return 0;
}
