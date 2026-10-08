void *__thiscall sub_42B550(void **this)
{
  void *result; // eax
  TESForm *v3; // eax

  result = *this; /*0x42b553*/
  if ( *this ) /*0x42b553*/
  {
    v3 = TESForm_LookupByFormID((UInt32)result); /*0x42b568*/
    result = OblivionDynamicCast( /*0x42b571*/
               v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *this = result; /*0x42b579*/
  }
  return result; /*0x42b57b*/
}
