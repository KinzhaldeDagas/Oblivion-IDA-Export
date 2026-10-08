void *__thiscall sub_4E8740(TESForm *this, int a2, void *cloneMap)
{
  TESForm *v3; // eax

  v3 = TESForm_Clone(this, 0, cloneMap); /*0x4e8755*/
  return OblivionDynamicCast( /*0x4e8763*/
           v3,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESRoad `RTTI Type Descriptor',
           0);
}
