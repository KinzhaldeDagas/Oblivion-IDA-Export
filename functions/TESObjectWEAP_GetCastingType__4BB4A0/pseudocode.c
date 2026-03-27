int __thiscall TESObjectWEAP_GetCastingType(_BYTE *this)
{
  return (*(this + 0x30) != 4) + 1;
}
