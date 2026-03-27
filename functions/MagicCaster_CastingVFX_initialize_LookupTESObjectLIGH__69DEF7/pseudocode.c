int __userpurge MagicCaster_CastingVFX_initialize___::LookupTESObjectLIGH@<eax>(
        int edi0@<edi>,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        UInt32 a1)
{
  TESForm *v11; // eax
  void *v12; // eax

  v11 = TESForm_LookupByFormID(a1);
  v12 = OblivionDynamicCast(
          v11,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          &TESObjectLIGH `RTTI Type Descriptor',
          0);
  *(_DWORD *)(edi0 + 4) = v12;
  if ( !v12 )
    JUMPOUT(0x69E08E);
  return MagicCaster_CastingVFX_initialize___::CreateNiPointLight(a2, a3);
}
