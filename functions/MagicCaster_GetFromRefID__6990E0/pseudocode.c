int __cdecl MagicCaster_GetFromRefID(UInt32 a1)
{
  TESForm *v1; // eax
  void *v2; // eax

  v1 = TESForm_LookupByFormID(a1);
  if ( v1
    && (v2 = OblivionDynamicCast(
               v1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0)) != 0 )
  {
    return (*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 0x120))(v2);
  }
  else
  {
    return MagicCaster_GetFromRefID_::Done();
  }
}
