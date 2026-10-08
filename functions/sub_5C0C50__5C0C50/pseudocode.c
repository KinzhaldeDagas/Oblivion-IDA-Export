CHAR *__cdecl sub_5C0C50(void *a1)
{
  _DWORD *v1; // esi
  UINT32 IsFemale; // eax
  CHAR *result; // eax

  v1 = OblivionDynamicCast( /*0x5c0c6a*/
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESBipedModelForm `RTTI Type Descriptor',
         0);
  if ( !v1 /*0x5c0c8a*/
    || (IsFemale = Actor_IsFemale((Actor *)reference), (result = TESBipedModelForm_GetBipedIconPath(v1, IsFemale)) == 0)
    || !*result )
  {
    result = sub_4702D0(a1, (TESObjectREFR *)reference); /*0x5c0c96*/
  }
  if ( !result || !*result ) /*0x5c0ca4*/
    return 0; /*0x5c0ca9*/
  return result; /*0x5c0ca0*/
}
