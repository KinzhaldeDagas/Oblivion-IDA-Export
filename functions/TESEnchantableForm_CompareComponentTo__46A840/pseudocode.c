bool __thiscall TESEnchantableForm_CompareComponentTo(_WORD *this, void *a2)
{
  _DWORD *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESEnchantableForm `RTTI Type Descriptor',
         0);
  return !v3 || *((_DWORD *)this + 1) != v3[1] || *(this + 4) != *((_WORD *)v3 + 4);
}
