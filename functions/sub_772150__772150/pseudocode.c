// Commit texture transform. Stock leaf stage has transform disabled, so this writes D3DTTFF_DISABLE and no matrix.
// DX11 GPU-world decoding 2026-09-30: stage index +0; enable byte +0x5A. Disabled writes TSS24=0 through B42758 manager +0xC8, without matrix upload. Enabled mode +0x10 high nibble 0 uses inline +0x18 matrix regardless of low bits; 0x10000000 uses matrix pointer at [stage+0x14]+0x18; 0x20000000 uses inline +0x18. For latter two, low28 zero uploads directly; nonzero calls 0x771830 and uploads B42760 scratch only on success. Other high nibbles do not write. SetTransform target is stage+16 via B42750 device. Caller 0x7721E0 invokes this only after nonnull texture resolution: capture does not grant unconditional replay. Derived recipes require fresh camera inputs; never reuse last-draw B42760.
// DX11 fresh pass construction 2026-09-30 limitation: a pre-traversal observation of renderer+A00 is not proof of the inverse view after the caller camera installation. Frame construction currently leaves derived recipes needing that matrix unavailable; direct/disabled/no-write paths and constant recipe4 remain representable. Current-draw capture retains its original inverse-view evaluation.
unsigned __int8 __thiscall OB_NiD3DTextureStage_CommitTextureTransform_010201A0(void *this)
{                                               // When the stage transform flag is false (the stock leaf configuration), commit D3DTTFF_DISABLE and do not upload a texture matrix.
  unsigned int v2; // eax
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // edx
  D3DMATRIX *v7; // edx
  D3DMATRIX *v9; // [esp-4h] [ebp-8h]

  if ( !*((_BYTE *)this + 0x5A) ) /*0x772153*/
  {
    LOBYTE(v2) = ((unsigned __int8 (__thiscall *)(NiDX9RenderState *, _DWORD, int, _DWORD, _DWORD))unk_B42758->vtbl->SetTextureStageState)( /*0x772170*/
                   unk_B42758,
                   *(_DWORD *)this,
                   0x18,
                   0,
                   0);
    return v2; /*0x772173*/
  }
  v3 = *((_DWORD *)this + 4); /*0x772174*/
  v2 = *((_DWORD *)this + 4) & 0xF0000000; /*0x772179*/
  if ( !v2 ) /*0x77217e*/
  {
    v7 = (D3DMATRIX *)((char *)this + 0x18); /*0x7721c3*/
    goto LABEL_14; /*0x7721c3*/
  }
  if ( v2 != 0x10000000 ) /*0x772185*/
  {
    if ( v2 != 0x20000000 ) /*0x77218c*/
      return v2; /*0x77218c*/
    v4 = v3 & 0xFFFFFFF; /*0x77218e*/
    v9 = (D3DMATRIX *)((char *)this + 0x18); /*0x772197*/
    if ( v4 ) /*0x772198*/
    {
      LOBYTE(v2) = sub_771830(v4, &v9->_11); /*0x77219d*/
      goto LABEL_8; /*0x77219d*/
    }
LABEL_15:
    LOBYTE(v2) = unk_B42750->lpVtbl->SetTransform(unk_B42750, *(_DWORD *)this + 0x10, v9); /*0x7721c7*/
    return v2; /*0x7721db*/
  }
  v5 = v3 & 0xFFFFFFF; /*0x7721ad*/
  v6 = *((_DWORD *)this + 5); /*0x7721b3*/
  if ( !v5 ) /*0x7721b6*/
  {
    v7 = *(D3DMATRIX **)(v6 + 0x18); /*0x7721b8*/
LABEL_14:
    v9 = v7; /*0x7721c6*/
    goto LABEL_15; /*0x7721c6*/
  }
  LOBYTE(v2) = sub_771830(v5, *(float **)(v6 + 0x18)); /*0x7721c1*/
LABEL_8:
  if ( (_BYTE)v2 ) /*0x7721a4*/
    LOBYTE(v2) = unk_B42750->lpVtbl->SetTransform(unk_B42750, *(_DWORD *)this + 0x10, &unk_B42760); /*0x7721ab*/
  return v2; /*0x772172*/
}
