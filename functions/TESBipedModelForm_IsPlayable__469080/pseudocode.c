bool __thiscall TESBipedModelForm_IsPlayable(_BYTE *this)
{
  return (*(this + 6) & 0x40) == 0; /*0x46908a*/
}
