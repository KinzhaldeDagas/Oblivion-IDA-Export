bool __thiscall TESWeightForm_CompareTo(float *this, void *a2)
{
  float *v3; // eax

  v3 = (float *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                  &TESWeightForm `RTTI Type Descriptor',
                  0);
  return !v3 || v3[1] != *(this + 1);
}
