float *__thiscall TESWeightForm_CopyFrom(float *this, void *a2)
{
  float *result; // eax

  result = (float *)OblivionDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                      &TESWeightForm `RTTI Type Descriptor',
                      0);
  if ( result )
    *(this + 1) = result[1];
  return result;
}
