void __stdcall sub_435580(void *a1, TESObjectREFR *a2)
{
  void *IsFemale; // edi
  const char **v3; // esi
  BSExtraDataVtbl *Owner; // eax

  IsFemale = OblivionDynamicCast( /*0x43559a*/
               a1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESModel `RTTI Type Descriptor',
               0);
  if ( !IsFemale ) /*0x4355a1*/
  {
    v3 = (const char **)OblivionDynamicCast( /*0x4355b5*/
                          a1,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                          &TESBipedModelForm `RTTI Type Descriptor',
                          0);
    if ( v3 ) /*0x4355bc*/
    {
      if ( a2 ) /*0x4355c4*/
      {
        Owner = TESObjectREFR_GetOwner(a2); /*0x4355c6*/
        if ( Owner ) /*0x4355cd*/
        {
          if ( LOBYTE(Owner->CompareTo) == 0x23 ) /*0x4355d3*/
            IsFemale = (void *)TESActorBase_IsFemale(Owner); /*0x4355dc*/
        }
      }
      TESBipedModelForm_GetWorldModel(v3, (int)IsFemale); /*0x4355e1*/
    }
  }
}
