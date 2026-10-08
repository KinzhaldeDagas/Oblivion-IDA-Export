// Verified shared graph-node prefix initialization: zeros float slots at +0/+4/+8/+0xC and clears the state byte at +0x10. TESConnectedPoint and TESPathGridPoint constructors both call it.
void *__thiscall PathGraphNode_InitSearchPrefix(void *this)
{
  *(float *)this = 0.0; /*0x67edc4*/
  *((float *)this + 1) = 0.0; /*0x67edc8*/
  *((_DWORD *)this + 3) = 0; /*0x67edcb*/
  *((float *)this + 2) = 0.0; /*0x67edce*/
  *((_BYTE *)this + 0x10) = 0; /*0x67edd1*/
  return this; /*0x67edd4*/
}
