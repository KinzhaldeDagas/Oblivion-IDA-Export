int __userpurge MagicCaster_CastingVFX_initialize___::CreateNiPointLight@<eax>(
        int a1@<edi>,
        int a2,
        int a3,
        int a4,
        Ni2DBuffer *a5)
{
  NiLight *v5; // eax
  NiLight *v6; // esi

  v5 = (NiLight *)FormHeapAlloc(0x114u); /*0x69df28*/
  v6 = v5; /*0x69df2d*/
  if ( !v5 ) /*0x69df40*/
    return MagicCaster_CastingVFX_initialize___::CopyLIGHColorToPointLight(0, a1, a2, a3, a4, a5); /*0x69df6a*/
  NiLight::NiLight(v5); /*0x69df44*/
  *(float *)&v6[1].vtbl = 0.0; /*0x69df4b*/
  v6->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable'; /*0x69df51*/
  *(float *)&v6[1].members.super.super.m_uiRefCount = 1.0; /*0x69df5b*/
  *(float *)&v6[1].members.super.m_pcName = 0.0; /*0x69df61*/
  return MagicCaster_CastingVFX_initialize___::CopyLIGHColorToPointLight((Ni2DBuffer *)v6, a1, a2, a3, a4, a5);
}
