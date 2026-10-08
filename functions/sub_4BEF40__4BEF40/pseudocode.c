// Verified shared graph-node position accessor: returns this+0x14, used by TESConnectedPoint and TESPathGridPoint distance, serialization, and route-generation code.
NiPoint3 *__thiscall PathGraphNode_GetPosition(void *this)
{
  return (NiPoint3 *)((char *)this + 0x14); /*0x4bef43*/
}
