unsigned int __cdecl sub_46DA90(void *a1)
{
  void *v1; // eax
  TESObjectREFR *v2; // eax
  unsigned __int16 v3; // cx

  v1 = OblivionDynamicCast( /*0x46daa4*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESModel `RTTI Type Descriptor',
         0);
  if ( !v1 ) /*0x46daae*/
  {
    v2 = (TESObjectREFR *)OblivionDynamicCast( /*0x46dabd*/
                            a1,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
    sub_4694A0(a1, v2); /*0x46dac4*/
    if ( !v1 ) /*0x46dace*/
      return 0; /*0x46daf3*/
  }
  v3 = *((_WORD *)v1 + 4); /*0x46dad0*/
  if ( v3 == 0xFFFF ) /*0x46dad9*/
    return strlen(*((const char **)v1 + 1)); /*0x46dade*/
  else
    return v3; /*0x46daee*/
}
