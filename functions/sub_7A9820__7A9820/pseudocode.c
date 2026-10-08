// Submit one accumulated Oblivion RenderPass. Publishes selector/current entry, dispatches each light pointer, then invokes geometry render virtual +0x84 exactly once. It does not prevalidate the Lighting30 selector; invalid 0x177..0x17A records are suppressed later by SetupRenderPass leaving PassCount zero. Valid SimpleShadow compatibility records each have lightCount=1, so eligible lights remain separate receiver draws.
// GPU static-world audit 2026-09-27: render-entry light association is part of each geometry pass, not a global camera-only table. This function publishes B42E90/B42EB8, resets light slots outside selector exceptions, dispatches the entry light array, then calls geometry virtual +0x84. Resident submission must preserve that selector/light association and may not cache the borrowed RenderPass pointers.
// DX11 source-state audit 2026-10-01: the per-entry light loop uses the byte count at entry+8, independently of B2DCFC shader light limit. Type1B dispatcher7EE390 reaches7EDCD0, whose slot<20 guard bounds actual source writes. Capture min(actualCount,20) qualified sources for full global-state replay, not merely min(actualCount,shaderLimit).
//
// DX11 observation-boundary audit 2026-10-02: this wrapper publishes B42E90/B42EB8 and light sources before geometry virtual+84; it is an entry boundary, not the final D3D device draw boundary. Native shader setup and map applications occur below that virtual call before DrawIndexedPrimitive/DrawPrimitive. An observer stamp at this entry may therefore expire before device submission. A later complete data snapshot must be separately proved against the still-current entry/selector and actual device-call receipt; never renew an older captured pass image merely because writers have finished. V229 live trace: ordinary Lighting30 samples reached capture but all sampled copies rejected TimingRejected/InvalidDrawBefore; the precise invalidating writer was not identified by that trace.
int __stdcall BSShaderAccumulator_DrawRenderPass(RenderPass_DecodedLayout *entry, unsigned __int16 selector)
{
  NiDX9Renderer *v3; // ebp
  NiProperty *NiPropertyByID; // eax
  float *v5; // edi
  unsigned __int8 i; // bl
  float selectora; // [esp+1Ch] [ebp+8h]

  v3 = renderer; /*0x7a9827*/
  LODWORD(unk_B42E90) = selector;               // Publish active RenderPass selector to B42E90 for Lighting30 setup/constant dispatch. /*0x7a9836*/
  *(_DWORD *)&OB_RendererGlobalState_010201A0[0x1F] = entry;// Publish current accumulated render entry to B42EB8. /*0x7a983b*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)entry->geometry_00, 4); /*0x7a9845*/
  v5 = (float *)NiPropertyByID; /*0x7a984a*/
  if ( NiPropertyByID ) /*0x7a984e*/
  {
    if ( (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 1 /*0x7a986a*/
      && (*(int (__thiscall **)(float *))(*(_DWORD *)v5 + 0x54))(v5) <= 0xA )
    {
      selectora = v5[0x25]; /*0x7a9876*/
      if ( (selector < 6u || selector > 9u) && selector != 0x154 && selector != 0x155 ) /*0x7a988e*/
        OB_BSShader_ResetLightConstantSlots_010201A0();// Reset paired Lighting30 per-light c9/c10 banks before dispatch (selector exceptions handled above). /*0x7a9890*/
      for ( i = 0; i < entry->lightCount_08; ++i ) /*0x7a9897*/
        OB_BSShader_DispatchLightConstantUpdate_010201A0(i, entry->lightArray_0C[i], selectora);// Write render-entry light slot through the Oblivion Lighting30 constant dispatcher. /*0x7a98b3*/
    }
  }
  return (*(int (__thiscall **)(void *, NiDX9Renderer *))(*(_DWORD *)entry->geometry_00 + 0x84))(entry->geometry_00, v3);// Invoke geometry draw virtual; this reaches the normal or hardware-skinned DX9 submission path. /*0x7a98d0*/
}
