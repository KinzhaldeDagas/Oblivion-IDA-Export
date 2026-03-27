void __usercall TESContainer_GetBestWeapon_::ContentLoop(int *a1@<ebp>, int a2@<edi>)
{
  unsigned __int8 *v2; // eax

  if ( *(_DWORD *)a2 )
  {
    v2 = (unsigned __int8 *)OblivionDynamicCast(
                              *(void **)(*(_DWORD *)a2 + 4),
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                              &TESObjectWEAP `RTTI Type Descriptor',
                              0);
    if ( v2 )
      TESActorBase_GetEquippableItemRating(a1, v2);
  }
  JUMPOUT(0x469B1D);
}
