void __usercall TESContainer_GetBestWeapon_::ContentLoop(TESActorBase *a1@<ebp>, int a2@<edi>)
{
  TESForm *v2; // eax

  if ( *(_DWORD *)a2 ) /*0x469ad0*/
  {
    v2 = (TESForm *)OblivionDynamicCast( /*0x469ae8*/
                      *(void **)(*(_DWORD *)a2 + 4),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                      &TESObjectWEAP `RTTI Type Descriptor',
                      0);
    if ( v2 ) /*0x469af4*/
      TESActorBase_GetEquippableItemRating(a1, v2); /*0x469af9*/
  }
  JUMPOUT(0x469B1D); /*0x469b1d*/
}
