CHAR *__cdecl GetFormModelPAth(void *a1)
{
  void *v1; // eax
  TESObjectREFR *v2; // eax

  v1 = OblivionDynamicCast( /*0x46d404*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESModel `RTTI Type Descriptor',
         0);
  if ( v1 ) /*0x46d40e*/
    return (*(CHAR *(__thiscall **)(void *))(*(_DWORD *)v1 + 0x14))(v1); /*0x46d40e*/
  v2 = (TESObjectREFR *)OblivionDynamicCast( /*0x46d41d*/
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  sub_4694A0(a1, v2); /*0x46d424*/
  if ( v1 ) /*0x46d42e*/
    return (*(CHAR *(__thiscall **)(void *))(*(_DWORD *)v1 + 0x14))(v1); /*0x46d438*/
  else
    return EmptyString; /*0x46d43a*/
}
