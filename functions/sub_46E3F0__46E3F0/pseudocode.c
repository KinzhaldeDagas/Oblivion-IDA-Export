unsigned __int8 __cdecl sub_46E3F0(void *a1)
{
  float *v1; // eax

  v1 = (float *)OblivionDynamicCast(
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESQualityForm `RTTI Type Descriptor',
                  0);
  if ( v1 )
    return (int)v1[1];
  else
    return 0xFF;
}
