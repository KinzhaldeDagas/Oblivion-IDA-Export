int __usercall EffectSetting_LinkForm_::ResolveLight@<eax>(int esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = *(TESFormVtbl **)(esi0 + 0x70);
  if ( a1.vtbl )
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)esi0, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl);
    *(_DWORD *)(esi0 + 0x70) = OblivionDynamicCast(
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectLIGH `RTTI Type Descriptor',
                                 0);
  }
  return EffectSetting_LinkForm_::ResolveCastingSound(esi0, a1);
}
