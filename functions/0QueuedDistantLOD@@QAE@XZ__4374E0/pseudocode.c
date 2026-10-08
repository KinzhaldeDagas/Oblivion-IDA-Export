// Verified QueuedDistantLOD constructor: stores its per-instance context pointer at task +0x38; context is a 0x20-byte DistantLODQueuedInstanceData record. Priority is supplied by the factory as 5.
QueuedDistantLOD *__thiscall QueuedDistantLOD::QueuedDistantLOD(
        QueuedDistantLOD *this,
        const char *modelPath,
        unsigned __int8 priority,
        DistantLODQueuedInstanceData *instanceData)
{
  char v5; // dl

  sub_436500((IOTask *)this, priority);         // Verified QueuedDistantLOD owns a per-instance record pointer at +0x38; each record is 0x20 bytes and includes a retained Ni2DBuffer at +0x1C. Its destructor releases that buffer and frees the record. /*0x43750e*/
  *((_DWORD *)this + 6) = 0; /*0x437515*/
  *((_DWORD *)this + 7) = 0; /*0x437518*/
  *((_DWORD *)this + 8) = 0; /*0x43751b*/
  *((_DWORD *)this + 9) = 0; /*0x43751e*/
  *(_DWORD *)this = &QueuedModel::`vftable'; /*0x437521*/
  *((_DWORD *)this + 0xA) = 0; /*0x43752b*/
  *((_DWORD *)this + 0xB) = 0; /*0x43753a*/
  *((_DWORD *)this + 0xC) = 0; /*0x43753d*/
  *((_BYTE *)this + 0x34) = 0; /*0x437540*/
  sub_434600(this, modelPath); /*0x437543*/
  sub_434CB0((int **)this, 0, 1); /*0x43754d*/
  v5 = *((_BYTE *)this + 0x34) & 0xF8 | 1; /*0x43755c*/
  *((_DWORD *)this + 0xE) = instanceData; /*0x43755f*/
  *((_BYTE *)this + 0x34) = v5; /*0x437562*/
  *(_DWORD *)this = &QueuedDistantLOD::`vftable'; /*0x437565*/
  *((_DWORD *)this + 0xF) = 0; /*0x43756b*/
  return this; /*0x437570*/
}
