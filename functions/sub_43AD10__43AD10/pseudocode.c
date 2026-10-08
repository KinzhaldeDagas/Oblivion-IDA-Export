// QueuedDistantLOD load-complete path: loads queued model, applies transform/context through 0x435060, then enqueues completion on IO manager queue.
NiAVObject *__thiscall sub_43AD10(volatile LONG *this)
{
  NiAVObject *result; // eax
  IOManager *v3; // edi
  int v4[4]; // [esp-4h] [ebp-10h] BYREF

  QueuedTexture_LoadModelStream(this); /*0x43ad15*/
  result = *((NiAVObject **)this + 0xA); /*0x43ad1a*/
  if ( result ) /*0x43ad1f*/
  {
    QueuedDistantLOD_ApplyTransform((QueuedDistantLOD *)this, result, *((DistantLODQueuedInstanceData **)this + 0xE)); /*0x43ad28*/
    v3 = MEMORY[0xB33A10]; /*0x43ad2d*/
    v4[0] = (int)this; /*0x43ad36*/
    v4[3] = (int)v4; /*0x43ad38*/
    InterlockedIncrement(this + 2); /*0x43ad40*/
    return (NiAVObject *)sub_43A5F0(&v3->members.taskQueue->vtbl, v4[0]); /*0x43ad49*/
  }
  return result; /*0x43ad4e*/
}
