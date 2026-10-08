// Verified per-cell cancellation path: looks up the packed cell label in g_DistantLODLoaderTasksByCell, cancels the referenced task through generic IOTask cancellation, then releases the lookup reference. GridDistantArray_UnloadCell calls this before clearing the cell slot.
void __thiscall DistantLODLoaderTaskMap_CancelForCell(LockFreeMap *this, __int16 groupX, unsigned int groupY)
{
  int v4; // eax
  void (__thiscall ***v5)(_DWORD, int); // esi

  v4 = TESObjectCELL_PackExteriorGroupLabel(groupX, groupY); /*0x4bd3ad*/
  groupY = 0; /*0x4bd3b5*/
  if ( (*((unsigned __int8 (__thiscall **)(LockFreeMap *, int, unsigned int *))this->vtbl + 1))(this, v4, &groupY) ) /*0x4bd3d2*/
    IOTask_Cancel((volatile LONG *)groupY);     // Verified cell unload retrieves and cancels the cell's loader task through IOTask_Cancel; the generic state machine transitions active states to 6 before invoking task completion. /*0x4bd3e3*/
  v5 = (void (__thiscall ***)(_DWORD, int))groupY; /*0x4bd3e8*/
  if ( groupY ) /*0x4bd3f6*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(groupY + 8)) ) /*0x4bd3fc*/
    {
      if ( v5 ) /*0x4bd408*/
        (**v5)(v5, 1); /*0x4bd412*/
    }
  }
}
