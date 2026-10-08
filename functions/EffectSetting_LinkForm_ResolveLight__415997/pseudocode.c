int __usercall EffectSetting_LinkForm_::ResolveLight@<eax>(int esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = *(TESFormVtbl **)(esi0 + 0x70); /*0x41599c*/
  if ( a1.vtbl ) /*0x4159a0*/
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)esi0, 0xFFFFFFFF); /*0x4159a6*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4159b1*/
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x4159cc*/
    *(_DWORD *)(esi0 + 0x70) = OblivionDynamicCast( /*0x4159dd*/
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESObjectLIGH `RTTI Type Descriptor',
                                 0);
  }
  return EffectSetting_LinkForm_::ResolveCastingSound(esi0, a1);
}
