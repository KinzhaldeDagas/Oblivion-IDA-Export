// HighProcess vtable+0x31C: sets byte +0x16C. SexChange sets 1 before invoking +0x318; 0x63CDC0 gates appearance refresh on this byte and clears it after successful path with existing actor NiNode.
void __thiscall HighProcess_SetAppearanceRefreshPending(HighProcess *this, UInt8 a2)
{
  this->unk16C = a2; /*0x6295e4*/
}
