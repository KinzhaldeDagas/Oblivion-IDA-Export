int __thiscall TESForm_GetDebugDesc(TESForm *this, TESObjectREFR *a2)
{
  return BSStringT_Static_Format(
           (BSStringT *)a2,
           "%s Form '%s' (%08X)",
           *(const char **)(0xC * (unsigned __int8)this->member.type + 0xB05E04),
           EmptyString,
           this->member.refID);
}
