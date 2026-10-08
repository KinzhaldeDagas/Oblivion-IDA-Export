// Verified virtual copy routine returns void (ret 4); RTTI-casts the source TESForm to TESSubSpace, copies inherited TESForm components and then copies the three dimension fields.
void __thiscall TESSubSpace_CopyComponentsFrom(TESSubSpace *this, TESForm *source)
{
  TESForm *v3; // eax
  unsigned __int16 *v4; // esi
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // cx

  v3 = (TESForm *)OblivionDynamicCast( /*0x4bc257*/
                    source,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESSubSpace `RTTI Type Descriptor',
                    0);
  v4 = (unsigned __int16 *)v3; /*0x4bc25c*/
  if ( v3 ) /*0x4bc263*/
  {
    TESForm_CopyAllComponentsFrom((TESForm *)this, v3); /*0x4bc268*/
    v5 = v4[0x14]; /*0x4bc26d*/
    v6 = v4[0x13]; /*0x4bc271*/
    this->dimensionsX = v4[0x12]; /*0x4bc279*/
    this->dimensionsY = v6; /*0x4bc27d*/
    this->dimensionsZ = v5; /*0x4bc281*/
  }
}
