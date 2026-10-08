// Verified returns stateFlags bit 0x02; graph searches set it after processing a node and use it to avoid reprocessing.
bool __thiscall GraphNode_IsFlag02Set(void *this)
{
  return (*((_BYTE *)this + 0x10) & 2) != 0; /*0x67ec98*/
}
