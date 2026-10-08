// Verified returns stateFlags bit 0x08, the PathGrid loader's below-water point flag.
bool __thiscall GraphNode_IsBelowWaterFlagSet(void *this)
{
  return (*((_BYTE *)this + 0x10) & 8) != 0; /*0x67ecf9*/
}
