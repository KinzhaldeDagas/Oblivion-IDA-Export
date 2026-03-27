char *__cdecl sub_46D540(char *Str, char *a2)
{
  char *result; // eax

  result = a2;
  if ( a2 )
  {
    result = (char *)OblivionDynamicCast(
                       a2,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESModel `RTTI Type Descriptor',
                       0);
    if ( result )
      return sub_46D4F0(result, Str);
  }
  return result;
}
