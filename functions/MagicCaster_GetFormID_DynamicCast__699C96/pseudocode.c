// positive sp value has been detected, the output may be wrong!
int __usercall MagicCaster_GetFormID_::DynamicCast@<eax>(int a1@<edi>, void *a2@<esi>)
{
  void *v2; // eax

  v2 = OblivionDynamicCast( /*0x699ca5*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicCaster `RTTI Type Descriptor',
         &NonActorMagicCaster `RTTI Type Descriptor',
         0);
  if ( a1 ) /*0x699caf*/
    return *(_DWORD *)(a1 + 0xC); /*0x699cb1*/
  else
    return MagicCaster_GetFormID_::BadParentForm_((int)v2); /*0x699caf*/
}
