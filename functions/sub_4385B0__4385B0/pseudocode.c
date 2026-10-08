// Verified queued-record factory: validates the model path and Ni2DBuffer, allocates a 0x40-byte QueuedDistantLOD task around a 0x20-byte DistantLODQueuedInstanceData record, attaches the form texture-hash cache, and queues the task. Each record contains position, three rotation angles, normalized scale, and a retained cell Ni2DBuffer.
void __stdcall QueuedDistantLOD_CreateAndQueue(
        const char *modelPath,
        DistantLODQueuedInstanceData *instanceData,
        TESTextureList *textureHashCache)
{
  const char *v3; // edi
  DistantLODQueuedInstanceData *v4; // esi
  char *v5; // eax
  QueuedDistantLOD *v6; // esi

  v3 = modelPath; /*0x4385d2*/
  if ( modelPath ) /*0x4385d8*/
  {
    if ( *modelPath ) /*0x4385da*/
    {
      v4 = instanceData; /*0x4385df*/
      if ( instanceData ) /*0x4385e5*/
      {
        if ( instanceData->cellLODBuffer ) /*0x4385e7*/
        {
          v5 = (char *)FormHeapAlloc(0x40u); /*0x4385ef*/
          modelPath = v5; /*0x4385f7*/
          if ( v5 ) /*0x438605*/
            v6 = QueuedDistantLOD::QueuedDistantLOD((QueuedDistantLOD *)v5, v3, 5u, v4); /*0x438612*/
          else
            v6 = 0; /*0x438616*/
          modelPath = (const char *)v6; /*0x43861a*/
          if ( v6 ) /*0x43861e*/
            InterlockedIncrement((volatile LONG *)v6 + 2); /*0x438624*/
          (*(void (__thiscall **)(QueuedDistantLOD *, TESTextureList *))(*(_DWORD *)v6 + 0x30))(v6, textureHashCache); /*0x43863e*/
          sub_4BDDC0((int *)&modelPath); /*0x43864c*/
        }
      }
    }
  }
}
