bool __thiscall TESForm_CompareComponentTo(TESForm *this, BaseFormComponent *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  bool result; // al
  unsigned int EditorNameLen; // ebx
  const char *v7; // eax
  const char *v8; // [esp-4h] [ebp-Ch]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                    (struct TypeDescriptor *)&TESForm `RTTI Type Descriptor',
                    0);
  v4 = v3;
  result = !v3
        || this->member.type != v3->member.type
        || (TESForm::GetEditorNameLen(this) || TESForm::GetEditorNameLen(v4))
        && ((EditorNameLen = TESForm::GetEditorNameLen(v4), TESForm::GetEditorNameLen(this) != EditorNameLen)
         || (v8 = v4->vtbl->GetEditorName(v4), v7 = this->vtbl->GetEditorName(this), _strcmp((char *)v7, (char *)v8)))
        || ((this->member.flags ^ v4->member.flags) & 0xFFFFBFF4) != 0;
  return result;
}
