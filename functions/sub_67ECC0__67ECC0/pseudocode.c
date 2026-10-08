// Verified returns stateFlags bit 0x01; graph searches use it to avoid inserting a node into the open list more than once.
bool __thiscall GraphNode_IsFlag01Set(void *this)
{
  return *((_BYTE *)this + 0x10) & 1; /*0x67ecc5*/
}
