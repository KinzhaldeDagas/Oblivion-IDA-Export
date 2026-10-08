bool __thiscall sub_429230(BSExtraData *this, BSExtraData *a2)
{
  float *v3; // esi

  v3 = (float *)OblivionDynamicCast( /*0x42924d*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
                  &ExtraTimeLeft `RTTI Type Descriptor',
                  0);
  return !v3 || BSExtraData_CompareTo(this, a2) || v3[3] != *((float *)this + 3); /*0x429256*/
}
