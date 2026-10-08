int __usercall EffectSetting_LinkForm_::ResolveAreaSound@<eax>(EffectSetting *esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = (TESFormVtbl *)esi0->areaSound; /*0x415ad5*/
  if ( a1.vtbl ) /*0x415ad9*/
  {
    OverrideFile = TESForm_GetOverrideFile(&esi0->super, 0xFFFFFFFF); /*0x415adf*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x415aea*/
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x415b05*/
    esi0->areaSound = (TESSound *)OblivionDynamicCast( /*0x415b16*/
                                    v3,
                                    0,
                                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                    &TESSound `RTTI Type Descriptor',
                                    0);
  }
  return EffectSetting_LinkForm_::ResolveEffectShader(esi0);
}
