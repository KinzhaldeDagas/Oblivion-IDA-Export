int __stdcall MagicCaster_CastingVFX_initialize___::CreateNiPointLight(int a1, int a2)
{
  NiLight *v2; // eax
  NiLight *v3; // esi

  v2 = (NiLight *)FormHeapAlloc(0x114u);
  v3 = v2;
  if ( v2 )
  {
    NiLight::NiLight(v2);
    *(float *)&v3[1].vtbl = 0.0;
    v3->vtbl = (NiAVObjectVtbl *)&NiPointLight::`vftable';
    *(float *)&v3[1].members.super.super.m_uiRefCount = 1.0;
    *(float *)&v3[1].members.super.m_pcName = 0.0;
  }
  return MagicCaster_CastingVFX_initialize___::CopyLIGHColorToPointLight(a1, a2);
}
