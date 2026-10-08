// Verified (Oblivion): EffectSetting::effectShader (+0x78) resolves through FormID lookup and a TESForm-to-TESEffectShader RTTI cast.
int __usercall EffectSetting_LinkForm_::ResolveEffectShader@<eax>(EffectSetting *effectSetting@<esi>)
{
  Data *OverrideFile; // eax
  TESForm *v2; // eax
  TESForm a1; // [esp+4h] [ebp+4h] BYREF

  a1.vtbl = (TESFormVtbl *)effectSetting->effectShader; /*0x415b21*/
  if ( a1.vtbl ) /*0x415b25*/
  {
    OverrideFile = TESForm_GetOverrideFile(&effectSetting->super, 0xFFFFFFFF); /*0x415b2b*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x415b36*/
    v2 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x415b51*/
    effectSetting->effectShader = (TESEffectShader *)OblivionDynamicCast( /*0x415b62*/
                                                       v2,
                                                       0,
                                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                                       &TESEffectShader `RTTI Type Descriptor',
                                                       0);
  }
  return EffectSetting_LinkForm_::ResolveEnchantShader(&effectSetting->super, a1);
}
