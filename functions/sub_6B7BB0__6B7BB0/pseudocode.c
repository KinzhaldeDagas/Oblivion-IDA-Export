// Resolve the DialogueItem.speaker value, temporarily holding a saved FormID, back to TESObjectREFR*. No INFO condition, selection, response, or result work occurs.
void __thiscall DialogueItem::InitLoadGame(DialogueItemView *this)
{
  TESObjectREFR *speaker; // eax
  TESForm *v3; // eax

  speaker = this->speaker; /*0x6b7bb3*/
  if ( speaker ) /*0x6b7bb8*/
  {
    v3 = TESForm_LookupByFormID((UInt32)speaker); /*0x6b7bc9*/
    this->speaker = (TESObjectREFR *)OblivionDynamicCast( /*0x6b7bda*/
                                       v3,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                       0);
  }
}
