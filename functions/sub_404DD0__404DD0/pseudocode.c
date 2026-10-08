// 3DTheft decode 2026-05-16: returns g_NiParallelUpdateTaskManager != 0 && manager->byte+0x1B0 != 0. Used by morph update to decide whether to submit a NiGeomMorpherUpdateTask.
BOOL NiParallelUpdateTaskManager_HasPendingSignal()
{
  return g_NiParallelUpdateTaskManager && *(_BYTE *)(g_NiParallelUpdateTaskManager + 0x1B0); /*0x404de8*/
}
