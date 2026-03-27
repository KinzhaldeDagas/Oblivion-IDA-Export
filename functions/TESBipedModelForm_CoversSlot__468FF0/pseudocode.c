bool __thiscall TESBipedModelForm_CoversSlot(unsigned __int16 *this, int a2, char a3)
{
  return (!a3 || a2 != 1 || (*(_BYTE *)(this + 2) & 1) == 0) && (*(this + 2) & (1 << a2)) != 0;
}
