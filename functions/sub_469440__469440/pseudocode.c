CHAR *__cdecl sub_469440(void *a1, TESObjectREFR *a2)
{
  CHAR *result; // eax
  CHAR *v3; // esi
  TESForm *Owner; // ecx
  int IsFemale; // eax

  result = (CHAR *)OblivionDynamicCast( /*0x469454*/
                     a1,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                     &TESBipedModelForm `RTTI Type Descriptor',
                     0);
  v3 = result; /*0x469459*/
  if ( result ) /*0x469460*/
  {
    if ( a2 ) /*0x46946a*/
    {
      Owner = TESObjectREFR_GetOwner(a2); /*0x46947f*/
      IsFemale = 0; /*0x469481*/
      if ( Owner ) /*0x469485*/
      {
        if ( Owner->member.type == kFormType_NPC ) /*0x46948b*/
          IsFemale = TESActorBase_IsFemale(Owner); /*0x46948d*/
      }
      return TESBipedModelForm_GetBipedIconPath(v3, IsFemale); /*0x469495*/
    }
    else
    {
      result = *((CHAR **)result + 0x1B); /*0x46946c*/
      if ( !result ) /*0x469471*/
        return EmptyString; /*0x469473*/
    }
  }
  return result; /*0x469462*/
}
