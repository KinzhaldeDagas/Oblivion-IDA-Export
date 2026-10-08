int __usercall EffectSetting_LinkForm_::ResolveHitSound@<eax>(int esi0@<esi>, TESForm a1)
{
  Data *OverrideFile; // eax
  TESForm *v3; // eax

  a1.vtbl = *(TESFormVtbl **)(esi0 + 0x88); /*0x415a86*/
  if ( a1.vtbl ) /*0x415a8a*/
  {
    OverrideFile = TESForm_GetOverrideFile((TESForm *)esi0, 0xFFFFFFFF); /*0x415a90*/
    TESForm_ResolveFormID((UInt32 *)&a1, OverrideFile); /*0x415a9b*/
    v3 = TESForm_LookupByFormID((UInt32)a1.vtbl); /*0x415ab6*/
    *(_DWORD *)(esi0 + 0x88) = OblivionDynamicCast( /*0x415ac7*/
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESSound `RTTI Type Descriptor',
                                 0);
  }
  return EffectSetting_LinkForm_::ResolveAreaSound(esi0, a1);
}
