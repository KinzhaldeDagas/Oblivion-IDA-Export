bool __thiscall TESQualityForm_CompareTo(float *this, void *a2)
{
  float *v3; // eax

  v3 = (float *)OblivionDynamicCast( /*0x46e387*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
                  &TESQualityForm `RTTI Type Descriptor',
                  0);
  return !v3 || (unsigned __int8)(int)*(this + 1) != (unsigned __int8)(int)v3[1]; /*0x46e3df*/
}
