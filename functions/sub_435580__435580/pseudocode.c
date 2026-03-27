void __stdcall sub_435580(void *a1, TESObjectREFR *a2)
{
  void *IsFemale; // edi
  _BYTE *Owner; // eax

  IsFemale = OblivionDynamicCast(
               a1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
               &TESModel `RTTI Type Descriptor',
               0);
  if ( !IsFemale )
  {
    if ( OblivionDynamicCast(
           a1,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESBipedModelForm `RTTI Type Descriptor',
           0) )
    {
      if ( a2 )
      {
        Owner = (_BYTE *)TESObjectREFR_GetOwner(a2);
        if ( Owner )
        {
          if ( Owner[4] == 0x23 )
            IsFemale = (void *)TESActorBase_IsFemale(Owner);
        }
      }
      TESBipedModelForm_GetWorldModel(IsFemale);
    }
  }
}
