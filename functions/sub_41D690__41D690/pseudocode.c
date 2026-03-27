bool __thiscall sub_41D690(BSExtraData *this, BSExtraData *a2)
{
  float *v3; // esi

  v3 = (float *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                  &ExtraWaterHeight `RTTI Type Descriptor',
                  0);
  return !v3 || BSExtraData_CompareTo(this, a2) || *((float *)this + 3) != v3[3];
}
