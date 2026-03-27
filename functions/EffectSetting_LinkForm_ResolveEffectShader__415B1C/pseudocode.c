int __usercall EffectSetting_LinkForm_::ResolveEffectShader@<eax>(TESForm *esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = esi0[5].vtbl;
  if ( a1.vtbl )
  {
    OverrideFile = TESForm_GetOverrideFile(esi0, 0xFFFFFFFF);
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile);
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl);
    esi0[5].vtbl = (TESFormVtbl *)OblivionDynamicCast(
                                    v3,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESEffectShader `RTTI Type Descriptor',
                                    0);
  }
  return EffectSetting_LinkForm_::ResolveEnchantShader(esi0, a1);
}
