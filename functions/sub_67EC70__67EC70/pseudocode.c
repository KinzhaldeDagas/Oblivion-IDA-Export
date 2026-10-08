// Verified raw float setter at object+4. A* uses it for TESConnectedPoint G/pathCost; unrelated callers use the same helper for their own +4 float field.
void __thiscall SetFloatAtOffset_04(void *this, float value)
{
  *((float *)this + 1) = value; /*0x67ec74*/
}
