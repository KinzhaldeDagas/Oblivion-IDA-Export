CHAR *__cdecl sub_469440(void *a1, TESObjectREFR *a2)
{
  CHAR *result; // eax
  CHAR *v3; // esi
  _BYTE *Owner; // ecx
  int IsFemale; // eax

  result = (CHAR *)OblivionDynamicCast(
                     a1,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESBipedModelForm `RTTI Type Descriptor',
                     0);
  v3 = result;
  if ( result )
  {
    if ( a2 )
    {
      Owner = (_BYTE *)TESObjectREFR_GetOwner(a2);
      IsFemale = 0;
      if ( Owner )
      {
        if ( Owner[4] == 0x23 )
          IsFemale = TESActorBase_IsFemale(Owner);
      }
      return TESBipedModelForm_GetBipedIconPath(v3, IsFemale);
    }
    else
    {
      result = *((CHAR **)result + 0x1B);
      if ( !result )
        return EmptyString;
    }
  }
  return result;
}
