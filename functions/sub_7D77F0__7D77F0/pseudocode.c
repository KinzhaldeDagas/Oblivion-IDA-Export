// DX11 ordinary texture construction 2026-09-30: verified pure 16-byte getter, returns DWORD [[this+BC]+4*index], no array-null guard. A9576C virtual+88; Lighting30 uses index0 for base texture and index1 for layered auxiliary texture.
int __thiscall sub_7D77F0(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 0x2F) + 4 * a2); /*0x7d77fd*/
}
