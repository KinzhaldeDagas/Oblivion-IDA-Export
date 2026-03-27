TESForm *__thiscall sub_402860(TESForm **this)
{
  TESForm *result; // eax

  *this = TESForm_LookupByFormID(0x35u);
  *(this + 1) = TESForm_LookupByFormID(0x36u);
  *(this + 2) = TESForm_LookupByFormID(0x37u);
  *(this + 3) = TESForm_LookupByFormID(0x38u);
  *(this + 4) = TESForm_LookupByFormID(0x39u);
  result = TESForm_LookupByFormID(0x3Au);
  *(this + 5) = result;
  return result;
}
