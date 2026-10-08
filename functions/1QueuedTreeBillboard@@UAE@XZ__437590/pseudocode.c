// QueuedTreeBillboard destructor: frees copied billboard context arrays at +0x30 through 0x4B9CF0, then releases QueuedTexture base resources.
void __thiscall QueuedTreeBillboard::~QueuedTreeBillboard(QueuedTreeBillboard *this)
{
  unsigned int *v2; // edi

  *(_DWORD *)this = &QueuedTreeBillboard::`vftable';// Verified destructor ownership chain: frees both context arrays through DistantTreeBillboardContext_FreeArrays, frees the context, then runs QueuedTexture destructor to release resolved resource/path and queued base. /*0x4375b9*/
  v2 = *((unsigned int **)this + 0xC); /*0x4375bf*/
  if ( v2 ) /*0x4375cc*/
  {
    DistantTreeBillboardContext_FreeArrays(v2); /*0x4375d0*/
    FormHeapFree((unsigned int)v2); /*0x4375d6*/
  }
  QueuedTexture_dtor(this); /*0x4375e8*/
}
