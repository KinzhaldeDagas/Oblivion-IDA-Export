bool __thiscall sub_429290(BSExtraData *this, BSExtraData *a2)
{
  float *v3; // esi

  v3 = (float *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                  &ExtraCharge `RTTI Type Descriptor',
                  0);
  return !v3 || BSExtraData_CompareTo(this, a2) || v3[3] != *((float *)this + 3);
}
