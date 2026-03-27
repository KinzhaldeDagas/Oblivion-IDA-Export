void *__thiscall sub_6B7BB0(_DWORD *this)
{
  void *result; // eax
  TESForm *v3; // eax

  result = (void *)*(this + 6);
  if ( result )
  {
    v3 = TESForm_LookupByFormID((UInt32)result);
    result = OblivionDynamicCast(
               v3,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0);
    *(this + 6) = result;
  }
  return result;
}
