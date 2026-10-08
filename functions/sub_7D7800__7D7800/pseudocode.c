// SpeedTreeOBSE 2026-05-31 branch normal map apply: decoded PPLighting base-normal getter reads SpeedTreeBranchShaderProperty+0xC0[index]. Branch render helpers reach this through property vtable +0x8C with index 0.
// DX11 ordinary texture construction 2026-09-30: verified pure 16-byte getter, returns DWORD [[this+C0]+4*index], no array-null guard. A9576C virtual+8C. Ordinary Lighting30 base index0 substitutes global B430DC only when the returned texture is null; layered index1 has no such substitution.
int __thiscall sub_7D7800(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 0x30) + 4 * a2); /*0x7d780d*/
}
