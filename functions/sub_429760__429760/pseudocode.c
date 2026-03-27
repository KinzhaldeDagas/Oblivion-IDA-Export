bool __thiscall sub_429760(float *this, void *a2)
{
  float *v3; // eax

  v3 = (float *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                  &ExtraPersuasionPercent `RTTI Type Descriptor',
                  0);
  return !v3 || *(this + 4) != v3[4] || *(this + 3) != v3[3];
}
