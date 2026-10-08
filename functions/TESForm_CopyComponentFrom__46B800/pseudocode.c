void __thiscall TESForm_CopyComponentFrom(TESForm *this, BaseFormComponent *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  unsigned int v5; // eax
  TESForm::FormFlags flags; // edx

  v3 = (TESForm *)OblivionDynamicCast( /*0x46b817*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x46b81c*/
  if ( v3 ) /*0x46b823*/
  {
    v5 = (unsigned int)v3->member.flags >> 1; /*0x46b82b*/
    LOBYTE(v5) = (v4->member.flags & 2) != 0; /*0x46b82f*/
    if ( ((this->member.flags & 2) != 0) != (_BYTE)v5 ) /*0x46b836*/
      this->vtbl->SetFromActiveFile(this, v5); /*0x46b843*/
    flags = this->member.flags; /*0x46b848*/
    this->member.type = v4->member.type; /*0x46b84b*/
    this->member.flags = v4->member.flags ^ (v4->member.flags ^ flags) & 0x4000; /*0x46b85a*/
  }
}
