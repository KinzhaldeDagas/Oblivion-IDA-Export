bool __thiscall TESBipedModelForm_SlotOverlap(_WORD *this, int a2)
{
  return (*(_WORD *)(a2 + 4) & *(this + 2)) != 0;
}
