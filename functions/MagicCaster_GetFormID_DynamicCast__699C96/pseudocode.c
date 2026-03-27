// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_GetFormID_::DynamicCast@<eax>(int a1@<edi>, void *a2@<esi>)
{
  OblivionDynamicCast(
    a2,
    0,
    (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
    &NonActorMagicCaster `RTTI Type Descriptor',
    0);
  if ( a1 )
    return *(_DWORD *)(a1 + 0xC);
  else
    return MagicCaster_GetFormID_::BadParentForm_();
}
