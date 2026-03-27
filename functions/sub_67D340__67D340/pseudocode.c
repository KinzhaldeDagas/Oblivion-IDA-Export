TESForm *__thiscall sub_67D340(UInt32 *this)
{
  TESForm *result; // eax

  sub_5660F0(this);
  if ( *(this + 0x11) )
    *(this + 0x11) = (UInt32)TESForm_LookupByFormID(*(this + 0x11));
  result = (TESForm *)*(this + 0x12);
  if ( result )
  {
    result = TESForm_LookupByFormID(*(this + 0x12));
    *(this + 0x12) = (UInt32)result;
  }
  return result;
}
