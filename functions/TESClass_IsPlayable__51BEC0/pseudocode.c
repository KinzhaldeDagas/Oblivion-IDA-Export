char __thiscall TESClass_IsPlayable(_BYTE *this)
{
  return *(this + 0x60) & 1;
}
