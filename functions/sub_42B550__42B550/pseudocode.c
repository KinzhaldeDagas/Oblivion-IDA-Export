void *__thiscall sub_42B550(void **this)
{
  void *result; // eax
  TESForm *v3; // eax

  result = *this;
  if ( *this )
  {
    v3 = TESForm_LookupByFormID((UInt32)result);
    result = OblivionDynamicCast(
               v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *this = result;
  }
  return result;
}
