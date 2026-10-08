// Verified submission callback (+0x08 vtable): retains the DistantLODLoaderTask and inserts it into IOManager.taskQueue via sub_43A5F0.
LONG __thiscall DistantLODLoaderTask_SubmitToIOManager(volatile LONG *this)
{
  IOManager *v1; // esi
  int v3[3]; // [esp-4h] [ebp-Ch] BYREF

  v1 = MEMORY[0xB33A10]; /*0x4bd754*/
  v3[2] = (int)v3; /*0x4bd75d*/
  v3[0] = (int)this; /*0x4bd761*/
  if ( this ) /*0x4bd763*/
    InterlockedIncrement(this + 2); /*0x4bd769*/
  return sub_43A5F0(&v1->members.taskQueue->vtbl, v3[0]); /*0x4bd777*/
}
