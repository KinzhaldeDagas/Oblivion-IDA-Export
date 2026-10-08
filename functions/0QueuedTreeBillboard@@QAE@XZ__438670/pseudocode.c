// Verified Oblivion RTTI-backed QueuedTreeBillboard construction; Fallout has the same class RTTI and ModelLoader::QueueTreeBillboard. Layout divergence is directly established: Oblivion task allocation 0x38 with context at +0x30 and queued-texture task kind 4; Fallout allocation 0x40 with TREE_BILLBOARD_DATA pointer at +0x38 and IO_TASK_PRIORITY_LOW.
QueuedTreeBillboard *__stdcall QueuedTreeBillboard::QueuedTreeBillboard(const char *a1, void *a2)
{
  IOTask *v2; // esi
  QueuedTreeBillboard *result; // eax

  v2 = (IOTask *)FormHeapAlloc(0x38u); /*0x438699*/
  if ( v2 ) /*0x4386ac*/
  {
    QueuedTexture_ctor(v2, a1, 4u); /*0x4386b7*/
    v2->vtbl = &QueuedTreeBillboard::`vftable'; /*0x4386c0*/
    v2[2].vtbl = a2; /*0x4386c6*/
  }
  else
  {
    v2 = 0; /*0x4386cb*/
  }
  if ( v2 ) /*0x4386d3*/
    InterlockedIncrement((volatile LONG *)&v2->members.unk08); /*0x4386d9*/
  (*((void (__thiscall **)(IOTask *))v2->vtbl + 8))(v2); /*0x4386ee*/
  result = (QueuedTreeBillboard *)InterlockedDecrement((volatile LONG *)&v2->members.unk08); /*0x4386fc*/
  if ( !result ) /*0x438704*/
    return (*(QueuedTreeBillboard *(__thiscall **)(IOTask *, int))v2->vtbl)(v2, 1); /*0x43870e*/
  return result; /*0x438710*/
}
