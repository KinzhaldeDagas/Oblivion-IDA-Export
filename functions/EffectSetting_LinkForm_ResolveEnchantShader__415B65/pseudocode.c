int __usercall EffectSetting_LinkForm_::ResolveEnchantShader@<eax>(TESForm *a1@<esi>, TESForm a1a)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1a.vtbl = *(TESFormVtbl **)&a1[5].member.type;
  if ( a1a.vtbl )
  {
    OverrideFile = TESForm_GetOverrideFile(a1, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)&a1a, OverrideFile);
    v3 = TESForm_LookupByFormID((UInt32)a1a.vtbl);
    *(_DWORD *)&a1[5].member.type = OblivionDynamicCast(
                                      v3,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                      &TESEffectShader `RTTI Type Descriptor',
                                      0);
  }
  return EffectSetting_LinkForm_::SetFormsResolvedFlag(a1);
}
