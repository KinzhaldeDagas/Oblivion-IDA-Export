int __cdecl MagicTarget_LookupByFormID(UInt32 a1)
{
  TESForm *v1; // eax
  void *v2; // eax

  v1 = TESForm_LookupByFormID(a1); /*0x6a1d95*/
  if ( v1 /*0x6a1dba*/
    && (v2 = OblivionDynamicCast(
               v1,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
               0)) != 0 )
  {
    return (*(int (__thiscall **)(void *))(*(_DWORD *)v2 + 0x124))(v2); /*0x6a1dc6*/
  }
  else
  {
    return 0; /*0x6a1dc8*/
  }
}
