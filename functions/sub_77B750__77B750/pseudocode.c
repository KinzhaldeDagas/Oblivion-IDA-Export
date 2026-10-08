// OblivionNew verified2026-10-03: vtableA8A9F4 established by constructor77BB34 and scalar deleting destructor77BAD3; slotEC points here. Compares requested byte to object+1014; only on change and nonzero byte at Renderer(object+FFC)+5C9 does it write cached byte, call Device(object+FF8)->SetSoftwareVertexProcessing atslot77/+134, and invoke own vtable+94 with CurrentVertexShader(object+FE0). The +94 target77B3C0 is RemoveVertexShader: it clears matching current and saved shader pointers and calls device SetVertexShader(NULL) when current matches; no COM AddRef/Release observed. This INVALIDATES/UNBINDS the current shader; the older comment saying rebinds was incorrect. Driver HRESULT is ignored; cached byte is written before that call. Renderer+5C9 gate meaning beyond allowing this transition is not yet reconstructed. Getter77B7A0/slotF0 returns the cached low byte. Return-void prototypes agree with the verified vtable entries. No Fallout layout transplanted.
// [DX11 raster migration host evidence 2026-10-03; not additional Oblivion semantics] Standalone native HAL/WARP raster comparisons exercised weights0..3, UBYTE4/color-beta fetch, hardware/software VP, indexed/UP and rotated views. Position suites96 cases per mode and software lighting96 cases passed scoped image comparisons; edge coverage differences were explicitly counted within2/256 pixel, lighting interior tolerance1 color byte. Hardware indexed lighting initially mismatched8/96 cases under rotated view; view*world normal-palette ordering correction is source-only pending validation. Existing native Oblivion wrapper behavior above remains authoritative; host tests do not prove broad raster equivalence. Evidence: DirectX12/analysis/dx11_completion/stage-raster-vertex-blending/LastTest-lighting.log.
// [DX11 raster validation update 2026-10-03] The indexed hardware normal-palette view*world correction subsequently passed all96 native/modern lighting cases with zero interior color error (140 explicitly counted boundary coverage differences under the existing2/256-pixel envelope). Palette state/mixed-VP/query restoration check passed;22 packed-color/float equivalent images matched exactly within each native/modern provider. This supersedes the pending-correction status in the preceding host-evidence note; wider raster semantics remain scoped. Evidence: stage-raster-vertex-blending/LastTest-normal-scope.log.
void __thiscall NiDX9RenderState_SetSoftwareVertexProcessing(NiDX9RenderState *self, unsigned __int8 enabled)
{
  IDirect3DDevice9 *Device; // eax

  if ( enabled != LOBYTE(self->member.CachedSoftwareVertexProcessing) ) /*0x77b75d*/
  {
    if ( self->member.Renderer->member.mixedVertexProcessing ) /*0x77b765*/
    {
      Device = self->member.Device; /*0x77b76e*/
      LOBYTE(self->member.CachedSoftwareVertexProcessing) = enabled; /*0x77b774*/
      Device->lpVtbl->SetSoftwareVertexProcessing(Device, enabled); /*0x77b787*/
      self->vtbl->RemoveVertexShader(self, self->member.CurrentVertexShader); /*0x77b79a*/
    }
  }
}
