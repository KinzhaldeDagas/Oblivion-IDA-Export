// Apply one native filter-preset row to a NiD3DTextureStage: D3DSAMP_MAGFILTER (5) from row.MAG, D3DSAMP_MINFILTER (6) from row.MIN, and D3DSAMP_MIPFILTER (7) from row.MIP. Lighting30 SimpleShadow uses preset 1 = MIN/MAG LINEAR, MIP NONE.
int __thiscall NiD3DTextureStage_ApplyFilterPreset(NiD3DTextureStage *this, unsigned int filterPreset)
{
  sub_773100(*((_DWORD **)this + 3), 5, *(_DWORD *)(0xC * filterPreset + 0xB420EC), 0, 0); /*0x771675*/
  sub_773100(*((_DWORD **)this + 3), 6, *(_DWORD *)(0xC * filterPreset + 0xB420E8), 0, 0); /*0x7716a1*/
  return (int)sub_773100(*((_DWORD **)this + 3), 7, *(_DWORD *)(0xC * filterPreset + 0xB420F0), 0, 0); /*0x7716d2*/
}
