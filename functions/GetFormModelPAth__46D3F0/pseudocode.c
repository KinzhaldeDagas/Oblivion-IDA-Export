CHAR *__cdecl GetFormModelPAth(void *a1)
{
  void *v1; // eax
  TESObjectREFR *v2; // eax

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESModel `RTTI Type Descriptor',
         0);
  if ( v1 )
    return (*(CHAR *(__thiscall **)(void *))(*(_DWORD *)v1 + 0x14))(v1);
  v2 = (TESObjectREFR *)OblivionDynamicCast(
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                          0);
  sub_4694A0(a1, v2);
  if ( v1 )
    return (*(CHAR *(__thiscall **)(void *))(*(_DWORD *)v1 + 0x14))(v1);
  else
    return EmptyString;
}
