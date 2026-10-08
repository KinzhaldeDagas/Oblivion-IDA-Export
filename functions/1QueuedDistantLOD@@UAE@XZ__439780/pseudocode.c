// Verified QueuedDistantLOD destruction: releases the Ni2DBuffer at DistantLODQueuedInstanceData+0x1C, frees the 0x20-byte context, releases the task's result/resource pointers, then frees the queued model path.
void __thiscall QueuedDistantLOD::~QueuedDistantLOD(QueuedDistantLOD *this)
{
  unsigned int v2; // ebx
  int v3; // edi
  int v4; // edi
  int v5; // eax
  unsigned int v6; // [esp-4h] [ebp-28h]

  *(_DWORD *)this = &QueuedDistantLOD::`vftable'; /*0x4397ab*/
  v2 = *((_DWORD *)this + 0xE); /*0x4397b1*/
  if ( v2 ) /*0x4397c4*/
  {
    v3 = *(_DWORD *)(v2 + 0x1C);                // Verified destructor releases the Ni2DBuffer stored at the per-instance record's +0x1C, then frees the record. This is the cellLODBuffer retained by TESBoundObject_UpdateDistantLODInstances. /*0x4397c6*/
    if ( v3 ) /*0x4397cb*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x4397d1*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x4397e3*/
    }
    FormHeapFree(v2); /*0x4397e6*/
  }
  v4 = *((_DWORD *)this + 0xF); /*0x4397ee*/
  if ( v4 ) /*0x4397f8*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x4397fe*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x439810*/
  }
  v5 = *((_DWORD *)this + 0xA); /*0x439812*/
  if ( v5 ) /*0x43981f*/
    InterlockedDecrement((volatile LONG *)(v5 + 4)); /*0x439825*/
  v6 = *((_DWORD *)this + 8); /*0x43982a*/
  *(_DWORD *)this = &QueuedFileEntry::`vftable'; /*0x43982b*/
  FormHeapFree(v6); /*0x439831*/
  QueuedMagicItem::~QueuedMagicItem(this); /*0x43983b*/
}
