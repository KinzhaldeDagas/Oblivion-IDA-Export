// Lighting30 vtable +0x30 current-pass wrapper. Performs the native type-0xA property-side reset, then delegates to NiD3DShader_ApplyCurrentPassState so the selected pass render-state group and texture stages reach DX9.
// DX11 GPU-world verification 2026-10-01: vtable +0x30 validates effective property type 0xA then clears property+0x100 (per-draw object-space-source preparation flag) before delegating NiD3DShader_ApplyCurrentPassState. 7FB6F0 tests this byte and sets it to 1 before transforming current eye/light sources. A replacement transaction must preserve both writes/order; source computation alone is not the native flag commit.
// DX11 vertex-source commit audit 2026-10-01: exact A930C4 vtable+30 wrapper clears effective type0A property+100 on each accepted pass. Added partial IDA type OblivionLighting30PropertySourcePrefix with verified ShaderFlags at1C and ObjectSpaceConstantsPrepared at100; this is a prefix, not a reconstructed full class or sizeof claim.
// DX11 source-flag follow-up 2026-10-01: current Lighting30 vtable+40 is nullsub_ret0_20, +44 is76C7D0 (restores lighting/render-state group), and +4C is77A0F0 (ends pass, advances index/refcounted current pass). Inspected ordinary handlers do not reset the property preparation byte. Full callback/code/owner closure remains an enclosing replacement-transaction obligation, not a consequence of the sparse metadata plan alone.
int __thiscall sub_7FB400(NiD3DShader *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // esi
  BOOL v10; // eax
  int v11; // eax

  v8 = *(_DWORD *)(a5 + 0x18); /*0x7fb406*/
  if ( v8 ) /*0x7fb40e*/
    v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v8 + 0x54))(*(_DWORD *)(a5 + 0x18)) == 0xA; /*0x7fb425*/
  else
    v10 = 0; /*0x7fb410*/
  v11 = v10 ? v8 : 0;
  if ( v11 ) /*0x7fb42d*/
    *(_BYTE *)(v11 + 0x100) = 0; /*0x7fb42f*/
  return NiD3DShader_ApplyCurrentPassState(this, a2, a3, a4, a5, a6, a7, a8); /*0x7fb45c*/
}
