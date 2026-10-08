int __userpurge ActiveEffect_Base_Link_::ResolveBoundObj@<eax>(int a1@<edi>, int esi0@<esi>, int a3, int a4, int a5)
{
  TESForm *v5; // eax

  if ( esi0 ) /*0x68dcbf*/
  {
    v5 = TESForm_LookupByFormID(*(_DWORD *)(a1 + 0x30)); /*0x68dcd0*/
    *(_DWORD *)(a1 + 0x30) = OblivionDynamicCast( /*0x68dce1*/
                               v5,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                               0);
  }
  return ActiveEffect_Base_Link_::ResolveHitEffects(a1, a3, a4, a5);
}
