// Verified shared graph-node position setter: writes XYZ into this+0x14; called by both TESRoad and TESPathGrid record loaders.
int __thiscall PathGraphNode_SetPosition(void *this, const NiPoint3 *position)
{
  int result; // eax

  *((_DWORD *)this + 5) = LODWORD(position->x); /*0x4bef56*/
  *((_DWORD *)this + 6) = LODWORD(position->y); /*0x4bef5c*/
  result = LODWORD(position->z); /*0x4bef5f*/
  *((_DWORD *)this + 7) = result; /*0x4bef62*/
  return result; /*0x4bef65*/
}
