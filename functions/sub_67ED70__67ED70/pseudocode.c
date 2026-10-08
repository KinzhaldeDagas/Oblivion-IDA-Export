// Verified returns PathGrid point flag 0x20, which is the linked-points-disabled state: SetLinkedPointsEnabled stores the inverse of its enabled argument, save/load persists flagged indices, searches skip flagged nodes, and renderer marks them wireframe.
bool __thiscall PathGraphNode_IsLinkedPointsDisabled(void *this)
{
  return (*((_BYTE *)this + 0x10) & 0x20) != 0; /*0x67ed79*/
}
