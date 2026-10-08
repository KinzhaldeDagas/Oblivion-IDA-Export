// Copies all TESForm components, then copies exactly the fixed 0x34-byte TESClass DATA block at +0x38. Major storage remains seven dwords; no minor array is copied.
void __thiscall TESClass_CopyFrom(TESClass *this, TESForm *source)
{
  char *v3; // esi

  v3 = (char *)OblivionDynamicCast( /*0x51bffd*/
                 source,
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                 &TESClass `RTTI Type Descriptor',
                 0);
  if ( v3 ) /*0x51c004*/
  {
    TESForm_CopyAllComponentsFrom((TESForm *)this, source); /*0x51c009*/
    qmemcpy(this->members.attributes, v3 + 0x38, 0x34u); /*0x51c019*/
  }
}
