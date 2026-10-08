void __cdecl sub_4694A0(void *a1, TESObjectREFR *a2)
{
  const char **v2; // esi
  TESForm *Owner; // ecx
  int IsFemale; // eax

  v2 = (const char **)OblivionDynamicCast( /*0x4694b9*/
                        a1,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESBipedModelForm `RTTI Type Descriptor',
                        0);
  if ( v2 ) /*0x4694c0*/
  {
    if ( a2 ) /*0x4694ca*/
    {
      Owner = TESObjectREFR_GetOwner(a2); /*0x4694d6*/
      IsFemale = 0; /*0x4694d8*/
      if ( Owner ) /*0x4694dc*/
      {
        if ( Owner->member.type == kFormType_NPC ) /*0x4694e2*/
          IsFemale = TESActorBase_IsFemale(Owner); /*0x4694e4*/
      }
      TESBipedModelForm_GetWorldModel(v2, IsFemale); /*0x4694ec*/
    }
  }
}
