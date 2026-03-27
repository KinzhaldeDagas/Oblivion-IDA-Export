float *__thiscall TESQualityForm_CopyFrom(float *this, void *a2)
{
  float *result; // eax
  double v4; // st7

  result = (float *)OblivionDynamicCast(
                      a2,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                      &TESQualityForm `RTTI Type Descriptor',
                      0);
  if ( result )
  {
    v4 = result[1];
    *(this + 1) = (float)(unsigned __int8)(int)v4;
    return (float *)((unsigned __int16)a2 | 0xC00);
  }
  return result;
}
