char *__cdecl sub_46D540(char *Str, char *a2)
{
  char *result; // eax

  result = a2; /*0x46d540*/
  if ( a2 ) /*0x46d546*/
  {
    result = (char *)OblivionDynamicCast( /*0x46d557*/
                       a2,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &TESModel `RTTI Type Descriptor',
                       0);
    if ( result ) /*0x46d561*/
      return sub_46D4F0(result, Str); /*0x46d56a*/
  }
  return result; /*0x46d56f*/
}
