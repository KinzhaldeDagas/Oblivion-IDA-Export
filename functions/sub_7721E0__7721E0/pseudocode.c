// Oblivion texture-stage binding: resolve the D3D texture, call NiDX9RenderState::SetTexture(stage,texture), handle single-mip and NPOT fallback state, then commit the texture transform. This is the path by which Lighting30 stage 2 reaches D3D sampler s2.
// DX11 GPU-world verified 2026-09-30: TEXCOORDINDEX always written before resolution, value from 7730A0(state11) or stage index when absent. Renderer B42754 has texture manager at +8B8, resolver virtual+8; manager renderer association +C. B42758 is state manager for binding and overrides. Null resolved texture skips mip, NPOT and transform writes.
unsigned __int8 __thiscall OB_NiD3DTextureStage_BindTextureAndTransform_010201A0(void *this)
{
  _DWORD *v2; // ecx
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  int v6; // edi
  unsigned __int8 result; // al
  _BYTE v8[2]; // [esp+32h] [ebp-Ah] BYREF
  int v9; // [esp+34h] [ebp-8h] BYREF
  unsigned __int8 needsNPOTFallback[4]; // [esp+38h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+0h] BYREF

  v2 = *((_DWORD **)this + 3); /*0x7721f0*/
  v9 = 0; /*0x7721f5*/
  v8[0] = 0; /*0x7721fd*/
  v3 = sub_7730A0(v2, 0xB, &v9, v8) == 0; /*0x772207*/
  v4 = v9; /*0x772209*/
  if ( v3 ) /*0x77220d*/
    v4 = *(_DWORD *)this; /*0x77220f*/
  ((void (__thiscall *)(NiDX9RenderState *, UInt32, D3DTEXTURESTAGESTATETYPE, int, UInt8))unk_B42758->vtbl->SetTextureStageState)( /*0x772228*/
    unk_B42758,
    *(_DWORD *)this,
    D3DTSS_TEXCOORDINDEX,
    v4,
    0);
  v5 = *((_DWORD *)this + 1); /*0x77222a*/
  v6 = 0; /*0x77222d*/
  if ( v5 ) /*0x772231*/
    v6 = (*(int (__thiscall **)(NiDX9TextureManager *, int, char *, char *, _UNKNOWN **))(*(_DWORD *)unk_B42754->member.textureMgr /*0x772256*/
                                                                                        + 8))(
           unk_B42754->member.textureMgr,
           v5,
           (char *)&v9 + 2,
           (char *)&v9 + 3,
           &retaddr);
  result = ((int (__thiscall *)(NiDX9RenderState *, _DWORD))unk_B42758->vtbl->SetTexture)(unk_B42758, *(_DWORD *)this);// Call NiDX9RenderState::SetTexture(stage,resolvedTexture); Lighting30 stage 2 therefore binds D3D sampler s2. /*0x77226a*/
  if ( v6 ) /*0x77226f*/
  {                                             // Tests the hasMultipleMipLevels output from the texture resolver.
    if ( !v8[1] ) /*0x772276*/
      ((void (__thiscall *)(NiDX9RenderState *, _DWORD, int, _DWORD, _DWORD))unk_B42758->vtbl->SetSamplerState)( /*0x77228f*/
        unk_B42758,
        *(_DWORD *)this,
        7,
        0,
        0);                                     // Only mip-count override after the authored leaf state: a resolved one-level texture forces D3DSAMP_MIPFILTER(7)=D3DTEXF_NONE(0). A texture with >1 level retains LINEAR mip filtering.
    OB_NiD3DTextureStage_ApplyNPOTAddressFallback_010201A0(this, needsNPOTFallback[0]);// Pass the resolver's NPOT/special-dimensions output into the conditional address-mode fallback. /*0x772298*/
    return OB_NiD3DTextureStage_CommitTextureTransform_010201A0(this); /*0x77229f*/
  }
  return result; /*0x7722a4*/
}
