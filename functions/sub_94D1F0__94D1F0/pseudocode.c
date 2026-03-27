int __thiscall sub_94D1F0(int this, int a2, int a3, int a4, int a5, _OWORD *a6, _OWORD *a7, __int128 *a8)
{
  __int128 v8; // xmm0

  *(_OWORD *)(this + 0x80) = *a6;
  *(_OWORD *)(this + 0x60) = *a7;
  v8 = *a8;
  *(_DWORD *)(this + 0x90) = a3;
  *(_DWORD *)(this + 0x94) = a4;
  *(_OWORD *)(this + 0x70) = v8;
  *(_DWORD *)(this + 0x98) = a2;
  *(_DWORD *)(this + 0x9C) = a5;
  return a5;
}
