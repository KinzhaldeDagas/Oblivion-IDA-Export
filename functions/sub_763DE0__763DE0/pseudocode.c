// Oblivion-authoritative: lazily creates IDirect3D9, constructs the global NiTArray<NiDX9AdapterDesc*> wrapper, populates one descriptor per adapter, then releases the temporary IDirect3D9 reference.
// External D3D9 provider audit 2026-09-30 (not an Oblivion object layout): captured hybrid x86/ARM64 runtime SHA256 567d63a389cac3ef25094de6c866e393b4c560ded845a8c3710ade151915b067, image size234000 timestamp755730CE. GetFVF RVA173B50 first reads nonzero device cache+2CD8; otherwise reads declaration+5C only for one stream(+38==1) beginning at stream0(byte+3D==0). SetFVF core RVA84650 skips matching cached requests; SetVertexDeclaration RVAA3AC0 skips identical pointer and clears device+2CD8/+2CDC for a changed pointer. Implicit declaration factory RVA847D0 overwrites declaration+5C with the original FVF at84938. Reverse compatibility walker86868 calls element conversion89190 and can remap unrecognized attributes to texture coordinates. These explain observed zero-FVF history and non-invertible explicit-declaration metadata. No production private-offset access is authorized by this note. Full bounded traces, live/file entry-byte verification and provider image provenance: C:/src/DirectX12/analysis/dx11_completi
// External D3D9 provider validation evidence 2026-09-30 (not Oblivion field offsets): standalone ValidateDevice returned E_FAIL with the default missing FVF, then S_OK/passCount1 after SetFVF(XYZRHW|DIFFUSE) alone. A separately configured native triangle produced expected pixel FF30A060 and successful one-pass validation. Invalid sampler filters and active color/alpha operations produce specific runtime errors; recorded invalid filters do not affect validation until block Apply. See project stage-device-validation; full owned validator is not yet implemented.
// External D3D9 ValidateDevice shader qualification: 48 native cases with no shader/VS/PS/both, missing or valid FVF layouts, and combined invalid sampler/color-op states. A bound PS bypasses these tested fixed-function sampler/TSS checks; a VS alone does not. Missing layout still returns E_FAIL. Fixed-function error order observed: sampler, then stage operation, then layout. This is provider evidence, not an Oblivion layout declaration; the public owned validator remains uninstalled.
// External ValidateDevice render-state evidence: native default-state sweep2142 cases and enabled-state sweep756 cases qualified CPU rules for blend/comparison caps, vertex-blend low-byte modes, clip-mask bounds, degree selectors and tessellation min/max comparisons. Follow-ups show separate-alpha factors reject SRCALPHASAT; separate-alpha validation depends on its own enable flag even with ALPHABLENDENABLE off; CCW stencil operations depend on TWOSIDEDSTENCILMODE even with STENCILENABLE off. This is external-provider behavior, not decoded Oblivion fields. Full owned ValidateDevice still needs resource/format/stream/layout/capability qualification.
// External ValidateDevice input qualification: 94 native comparisons accept existing empty/TEXCOORD-only/stream1 declarations as well as position declarations. Missing declaration returns E_FAIL. Tested bound stream strides up to2049 and offsets beyond the small buffer validate before/after a successful valid warmup draw; declaration offsets through4092 also validate. Stream16 declaration creation fails and leaves the prior active declaration valid. Do not substitute draw-layout/vertex-range validation for this API presence check. Evidence is hardware-processing provider scope, not an Oblivion struct/layout claim.
// External ValidateDevice format evidence: 440 sampled-format cases and14 render-target blending cases match CPU helpers. Current provider advertises filtering for tested color/float/compressed/depth textures and blending for every successfully created test target; negative capability branches are not live-native-qualified. CheckDeviceFormat QUERY_POSTPIXELSHADER_BLENDING must use the tested TEXTURE + RENDERTARGET query combination; SURFACE queries returned INVALIDCALL and were not capability evidence. These are external API observations, not Oblivion layout data.
// External ValidateDevice capability qualification: isolated probe temporarily overrides only GetDeviceCaps while executing the original native validator.17 cases each for hardware/mixed/software creation (51 total) match CPU capability-aware filter/address/LOD-bias/operation/argument/stage-limit/projection checks, including missing-cap rejection and supplied-cap acceptance. These are injected validator inputs, not evidence that physical GPU features are supported. Initial whole-table clone faulted and was replaced by single-entry patch/restore; no game process was involved.
// External native validation texture-limit evidence: eight injected MaxSimultaneousTextures cases confirm one counted stage when consumed arguments have selector bit1, including TFACTOR/CONSTANT. ARG0 counts only for MAD/LERP; SELECTARG1/2 and disabled alpha suppress their unused operands. Runtime TOO_MANY_OPERATIONS behavior now matches the CPU model. Public ValidateDevice routing in the project now uses owned state/resources, not original native device state; this is not an Oblivion object-layout annotation.
void *__cdecl NiDX9AdapterDescArray_GetSingleton()
{
  void *result; // eax
  IDirect3D9 *(__stdcall *ProcAddress)(unsigned int); // eax
  HMODULE LibraryA; // eax
  int v3; // esi
  int v4; // eax

  result = g_NiDX9AdapterDescArray; /*0x763de0*/
  if ( !g_NiDX9AdapterDescArray ) /*0x763de0*/
  {
    ProcAddress = g_Direct3DCreate9; /*0x763ded*/
    if ( g_Direct3DCreate9 /*0x763e1d*/
      || (LibraryA = LoadLibraryA("D3D9.DLL"), (g_D3D9Module = LibraryA) != 0)
      && (ProcAddress = (IDirect3D9 *(__stdcall *)(unsigned int))GetProcAddress(LibraryA, "Direct3DCreate9"),
          (g_Direct3DCreate9 = ProcAddress) != 0) )
    {
      v3 = (int)ProcAddress(0x20u); /*0x763e24*/
      if ( v3 ) /*0x763e28*/
      {
        v4 = FormHeapAlloc(0x14u); /*0x763e2c*/
        if ( v4 ) /*0x763e36*/
        {
          g_NiDX9AdapterDescArray = (void *)NiDX9AdapterDescArray_Construct(v4, v3, (int)&off_B28E00); /*0x763e45*/
          (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x763e50*/
          return g_NiDX9AdapterDescArray; /*0x763e58*/
        }
        g_NiDX9AdapterDescArray = 0; /*0x763e59*/
        (*(void (__stdcall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x763e69*/
      }
    }
    return g_NiDX9AdapterDescArray; /*0x763e6c*/
  }
  return result; /*0x763e58*/
}
