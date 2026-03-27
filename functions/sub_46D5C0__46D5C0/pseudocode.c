double __cdecl sub_46D5C0(void *a1)
{
  float *v1; // eax
  TESObjectREFR *v2; // eax

  v1 = (float *)OblivionDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESModel `RTTI Type Descriptor',
                  0);
  if ( v1 )
    return v1[3];
  v2 = (TESObjectREFR *)OblivionDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  sub_4694A0(a1, v2);
  if ( v1 )
    return v1[3];
  else
    return 0.0;
}
