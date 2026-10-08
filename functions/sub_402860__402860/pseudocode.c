TESForm *__thiscall sub_402860(TESForm **this)
{
  TESForm *result; // eax

  *this = TESForm_LookupByFormID(0x35u); /*0x40286c*/
  *(this + 1) = TESForm_LookupByFormID(0x36u); /*0x402875*/
  *(this + 2) = TESForm_LookupByFormID(0x37u); /*0x40287f*/
  *(this + 3) = TESForm_LookupByFormID(0x38u); /*0x402889*/
  *(this + 4) = TESForm_LookupByFormID(0x39u); /*0x402893*/
  result = TESForm_LookupByFormID(0x3Au); /*0x402896*/
  *(this + 5) = result; /*0x40289e*/
  return result; /*0x4028a1*/
}
