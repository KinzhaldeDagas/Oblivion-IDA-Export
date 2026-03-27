bool __thiscall sub_56C180(_DWORD *this)
{
  int v2; // eax
  TESForm *v3; // eax
  _DWORD *v4; // eax

  v2 = *(this + 6);
  if ( !v2 )
    return 0;
  v3 = TESForm_LookupByFormID(*(_DWORD *)(v2 + 0x3C));
  v4 = OblivionDynamicCast(
         v3,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  if ( *(_DWORD *)(*(this + 6) + 0x3C) )
  {
    if ( !v4 )
      return 0;
  }
  else if ( !v4 )
  {
    return 1;
  }
  return v4[0xF] != 0;
}
