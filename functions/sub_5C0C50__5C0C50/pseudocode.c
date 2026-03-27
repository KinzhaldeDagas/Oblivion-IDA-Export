CHAR *__cdecl sub_5C0C50(void *a1)
{
  _DWORD *v1; // esi
  UINT32 IsFemale; // eax
  CHAR *result; // eax

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESBipedModelForm `RTTI Type Descriptor',
         0);
  if ( !v1
    || (IsFemale = Actor_IsFemale((Actor *)TESDataHandler_g_PlayerRef),
        (result = TESBipedModelForm_GetBipedIconPath(v1, IsFemale)) == 0)
    || !*result )
  {
    result = sub_4702D0(a1, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
  }
  if ( !result || !*result )
    return 0;
  return result;
}
