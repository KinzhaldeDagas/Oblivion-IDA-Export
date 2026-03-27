bool __thiscall TESUsesForm_CompareTo(_BYTE *this, void *a2)
{
  _BYTE *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESUsesForm `RTTI Type Descriptor',
         0);
  return !v3 || *(this + 4) != v3[4];
}
