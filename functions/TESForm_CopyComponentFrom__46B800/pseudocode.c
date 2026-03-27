void __thiscall TESForm_CopyComponentFrom(TESForm *this, BaseFormComponent *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // edi
  unsigned int v5; // eax
  TESForm::FormFlags flags; // edx

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    v5 = (unsigned int)v3->member.flags >> 1;
    LOBYTE(v5) = (v4->member.flags & 2) != 0;
    if ( ((this->member.flags & 2) != 0) != (_BYTE)v5 )
      this->vtbl->SetFromActiveFile(this, v5);
    flags = this->member.flags;
    this->member.type = v4->member.type;
    this->member.flags = v4->member.flags ^ (v4->member.flags ^ flags) & 0x4000;
  }
}
