char __thiscall sub_768830(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 0x24) = 0;
  return NiTMap_RemoveAt(this + 0x234, a2);
}
