// DX11 ordinary texture construction 2026-09-30: verified pure 16-byte getter, returns DWORD [[this+C4]+4*index], no array-null guard. A9576C virtual+90; ordinary glow selectors bind index0 to pass stage-array element6.
int __thiscall sub_7D7810(_DWORD *this, int a2)
{
  return *(_DWORD *)(*(this + 0x31) + 4 * a2); /*0x7d781d*/
}
