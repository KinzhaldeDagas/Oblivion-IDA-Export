char __thiscall sub_768850(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 0x24) = 0;
  return NiTMap_RemoveAt(this + 0x230, a2);
}
