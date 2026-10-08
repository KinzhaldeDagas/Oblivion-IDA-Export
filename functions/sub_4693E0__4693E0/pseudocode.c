const char **__cdecl sub_4693E0(void *a1, TESObjectREFR *a2)
{
  const char **result; // eax
  const char **v3; // esi
  TESForm *Owner; // ecx
  int IsFemale; // eax

  result = (const char **)OblivionDynamicCast( /*0x4693f4*/
                            a1,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &TESBipedModelForm `RTTI Type Descriptor',
                            0);
  v3 = result; /*0x4693f9*/
  if ( result ) /*0x469400*/
  {
    if ( a2 ) /*0x46940a*/
    {
      Owner = TESObjectREFR_GetOwner(a2); /*0x46941d*/
      IsFemale = 0; /*0x46941f*/
      if ( Owner ) /*0x469423*/
      {
        if ( Owner->member.type == kFormType_NPC ) /*0x469429*/
          IsFemale = TESActorBase_IsFemale(Owner); /*0x46942b*/
      }
      return (const char **)TESBipedModelForm_GetWorldModelPath(v3, IsFemale); /*0x469433*/
    }
    else
    {
      return (*((const char **(__thiscall **)(const char **))result[0xE] + 5))(result + 0xE); /*0x469416*/
    }
  }
  return result; /*0x469402*/
}
