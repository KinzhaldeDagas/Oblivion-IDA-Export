// Verified AssociatedItemEffect_Link forwards its TESObjectREFR link context to ActiveEffect_Base_Link before resolving its own associated-item FormID.
TESForm *__thiscall AssociatedItemEffect_Link(int this, int linkContext)
{
  TESForm *result; // eax

  ActiveEffect_Base_Link((ActiveEffect *)this, linkContext); /*0x68f288*/
  result = *(TESForm **)(this + 0x38); /*0x68f28d*/
  if ( result ) /*0x68f292*/
  {
    result = TESForm_LookupByFormID(*(_DWORD *)(this + 0x38)); /*0x68f295*/
    *(_DWORD *)(this + 0x38) = result; /*0x68f29d*/
  }
  return result; /*0x68f2a0*/
}
