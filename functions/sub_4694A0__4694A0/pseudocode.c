void __cdecl sub_4694A0(void *a1, TESObjectREFR *a2)
{
  const char **v2; // esi
  _BYTE *Owner; // ecx
  int IsFemale; // eax

  v2 = (const char **)OblivionDynamicCast(
                        a1,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESBipedModelForm `RTTI Type Descriptor',
                        0);
  if ( v2 )
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
      TESBipedModelForm_GetWorldModel(v2, IsFemale);
    }
  }
}
