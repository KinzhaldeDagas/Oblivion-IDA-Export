int __usercall EffectSetting_LinkForm_::ResolveCastingSound@<eax>(int esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = *(TESFormVtbl **)(esi0 + 0x80); /*0x4159e8*/
  if ( a1.vtbl ) /*0x4159ec*/
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)esi0, 0xFFFFFFFF); /*0x4159f2*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x4159fd*/
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x415a18*/
    *(_DWORD *)(esi0 + 0x80) = OblivionDynamicCast( /*0x415a29*/
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESSound `RTTI Type Descriptor',
                                 0);
  }
  return EffectSetting_LinkForm_::ResolveBoltSound(esi0, a1);
}
