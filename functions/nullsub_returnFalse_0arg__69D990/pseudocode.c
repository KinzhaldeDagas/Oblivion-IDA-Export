// [Verified] Shared leaf returning false (zero), despite the TESForm::IsActor symbol. BSTempEffect base vtable 0xA681AC uses it at +0x58 for IsSaveable; NiAdditionalGeometryData vtable 0xA45EC4 uses it at +0x4C and other classes reuse it. The leaf has no unique class identity.
bool __thiscall TESForm::IsActor(TESForm *this)
{
  return 0; /*0x69d992*/
}
