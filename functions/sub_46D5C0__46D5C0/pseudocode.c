// Collision/model radius-ish helper used by PlaceAtMe after a ray hit. It dynamic-casts a form to TESModel and reads +0x0C, otherwise resolves from TESObjectREFR via 0x4694A0; result scales the normalized hit vector before final placement point.
double __cdecl sub_46D5C0(void *a1)
{
  float *v1; // eax
  TESObjectREFR *v2; // eax

  v1 = (float *)OblivionDynamicCast( /*0x46d5d4*/
                  a1,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &TESModel `RTTI Type Descriptor',
                  0);
  if ( v1 ) /*0x46d5de*/
    return v1[3]; /*0x46d5de*/
  v2 = (TESObjectREFR *)OblivionDynamicCast( /*0x46d5ed*/
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  sub_4694A0(a1, v2); /*0x46d5f4*/
  if ( v1 ) /*0x46d5fe*/
    return v1[3]; /*0x46d600*/
  else
    return 0.0; /*0x46d605*/
}
