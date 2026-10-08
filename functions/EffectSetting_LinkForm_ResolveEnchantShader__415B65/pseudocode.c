// Verified (Oblivion): the adjacent EffectSetting::enchantEffect at +0x7C is separately resolved through the TESEffectShader RTTI path; shader hit-effect constructors read +0x78, not this enchant-only slot.
int __usercall EffectSetting_LinkForm_::ResolveEnchantShader@<eax>(EffectSetting *effectSetting@<esi>)
{
  Data *OverrideFile; // eax
  TESForm *v2; // eax
  TESForm a1; // [esp+4h] [ebp+4h] BYREF

  a1.vtbl = (TESFormVtbl *)effectSetting->enchantEffect; /*0x415b6a*/
  if ( a1.vtbl ) /*0x415b6e*/
  {
    OverrideFile = TESForm_GetOverrideFile(&effectSetting->super, 0xFFFFFFFF); /*0x415b74*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x415b7f*/
    v2 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x415b9a*/
    effectSetting->enchantEffect = (TESEffectShader *)OblivionDynamicCast( /*0x415bab*/
                                                        v2,
                                                        0,
                                                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                        &TESEffectShader `RTTI Type Descriptor',
                                                        0);
  }
  return EffectSetting_LinkForm_::SetFormsResolvedFlag(&effectSetting->super);
}
