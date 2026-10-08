// Verified: frees the context's copied NiPoint3 array at +0x14 and float array at +0x18; called by QueuedTreeBillboard destructor before QueuedTexture base cleanup.
void __thiscall DistantTreeBillboardContext_FreeArrays(unsigned int *this)
{
  FormHeapFree(*(this + 5)); /*0x4b9cf7*/
  FormHeapFree(*(this + 6)); /*0x4b9d00*/
}
