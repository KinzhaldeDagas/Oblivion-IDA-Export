// Apply one native address-preset row to a NiD3DTextureStage: D3DSAMP_ADDRESSU (1) and D3DSAMP_ADDRESSV (2). Lighting30 SimpleShadow uses preset 0 = CLAMP/CLAMP.
_BYTE *__thiscall NiD3DTextureStage_ApplyAddressModePreset(NiD3DTextureStage *this, unsigned int preset)
{
  sub_773100(*((_DWORD **)this + 3), 1, *(_DWORD *)(8 * preset + 0xB42130), 0, 0); /*0x771607*/
  return sub_773100(*((_DWORD **)this + 3), 2, *(_DWORD *)(8 * preset + 0xB42134), 0, 0); /*0x77162d*/
}
