// Disable and clear every texture stage after the active pass range.
// DX11 verified 2026-09-30: caller 75FD90 invokes only when visited stage count < B28CB8. First loop from visited count to B28CB0 clears texture then TSS1=1, TSS4=1, TSS24=0. Second loop resumes at resulting index and clears textures only until B28CB8. No sampler reset. Do not clamp first loop to B28CB8: if B28CB0 is larger, native first loop reaches B28CB0. When caller gate false, no cleanup occurs even if fixed-function limit is larger.
int __cdecl sub_771790(unsigned int a1)
{
  unsigned int i; // esi
  int result; // eax

  for ( i = a1; i < dword_B28CB0; ++i ) /*0x77179b*/
  {
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))unk_B42758->vtbl->SetTexture)(unk_B42758, i, 0); /*0x7717b1*/
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int, int, _DWORD))unk_B42758->vtbl->SetTextureStageState)( /*0x7717c8*/
      unk_B42758,
      i,
      1,
      1,
      0);
    ((void (__thiscall *)(NiDX9RenderState *, unsigned int, int, int, _DWORD))unk_B42758->vtbl->SetTextureStageState)( /*0x7717df*/
      unk_B42758,
      i,
      4,
      1,
      0);
    result = ((int (__thiscall *)(NiDX9RenderState *, unsigned int, int, _DWORD, _DWORD))unk_B42758->vtbl->SetTextureStageState)( /*0x7717f6*/
               unk_B42758,
               i,
               0x18,
               0,
               0);
  }
  for ( ; i < dword_B28CB8; ++i ) /*0x771809*/
    result = ((int (__thiscall *)(NiDX9RenderState *, unsigned int, _DWORD))unk_B42758->vtbl->SetTexture)( /*0x771821*/
               unk_B42758,
               i,
               0);
  return result; /*0x77182e*/
}
