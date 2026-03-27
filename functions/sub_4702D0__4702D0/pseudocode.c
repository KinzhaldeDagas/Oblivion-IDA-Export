CHAR *__cdecl sub_4702D0(void *a1, TESObjectREFR *a2)
{
  _DWORD *v2; // eax
  CHAR *result; // eax

  v2 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESTexture `RTTI Type Descriptor',
         0);
  if ( v2 )
    result = (CHAR *)v2[1];
  else
    result = sub_469440(a1, a2);
  if ( !result )
    return EmptyString;
  return result;
}
