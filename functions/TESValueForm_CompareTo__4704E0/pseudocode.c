bool __thiscall TESValueForm_CompareTo(_DWORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESValueForm `RTTI Type Descriptor',
         0);
  return !v3 || *(this + 1) != v3[1];
}
