// Oblivion mode-5 rigid opaque ShadowLight enqueuer. Reuses pool[6]; its one configured stage remains unbound and is ignored by SLS2058. Default SLS2052/SLS2058 switches to SLS2056/SLS2062 only for positive native depth-origin override.
void __thiscall ShadowLightShader_EnqueueMode5RigidOpaquePass(NiTArray_NiD3DPass *this, int a2, int a3, int a4, int a5)
{
  NiD3DPass *v6; // esi
  NiD3DPass *v7; // ecx
  unsigned int v9; // [esp-8h] [ebp-28h]
  NiD3DPass *value; // [esp+10h] [ebp-10h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-4h]

  v6 = ShadowLightMode5RigidOpaquePass;         // Pool[6] rigid opaque caster pass. Default SLS2052/SLS2058; positive native depth-origin override switches to SLS2056/SLS2062. /*0x8480e8*/
  v7 = ShadowLightMode5RigidOpaquePass; /*0x8480f4*/
  if ( flt_B44EE4 <= 0.0 ) /*0x8480fb*/
  {
    NiD3DPass_SetPixelShader(v7, ShadowLightPS_SLS2058_OpaqueDepth); /*0x848118*/
    NiD3DPass_SetVertexShader(v6, ShadowLightVS_SLS2052_RigidDepth); /*0x848125*/
  }
  else
  {
    NiD3DPass_SetPixelShader(v7, ShadowLightPS_SLS2062_OpaqueDepthOffset); /*0x848103*/
    NiD3DPass_SetVertexShader(v6, ShadowLightVS_SLS2056_RigidDepthOffset); /*0x84810f*/
  }
  value = v6; /*0x84812c*/
  if ( v6 ) /*0x848135*/
    ++v6->RefCount; /*0x848137*/
  v9 = *((_DWORD *)this + 0xE); /*0x848142*/
  v11 = 0; /*0x848146*/
  NiTArray_NiD3DPass_SetAt(this + 4, v9, &value); /*0x84814e*/
  v11 = 0xFFFFFFFF; /*0x848158*/
  if ( v6 ) /*0x84815c*/
  {
    if ( v6->RefCount-- == 1 ) /*0x84815e*/
      NiD3DPass_ReleaseToPool(v6); /*0x848165*/
  }
  ++*((_DWORD *)this + 0xE); /*0x84816a*/
}
