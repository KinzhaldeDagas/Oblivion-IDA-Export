unsigned int __cdecl sub_46DA90(void *a1)
{
  void *v1; // eax
  TESObjectREFR *v2; // eax
  unsigned __int16 v3; // cx

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESModel `RTTI Type Descriptor',
         0);
  if ( !v1 )
  {
    v2 = (TESObjectREFR *)OblivionDynamicCast(
                            a1,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    sub_4694A0(a1, v2);
    if ( !v1 )
      return 0;
  }
  v3 = *((_WORD *)v1 + 4);
  if ( v3 == 0xFFFF )
    return strlen(*((const char **)v1 + 1));
  else
    return v3;
}
