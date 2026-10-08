// [Verified] BSTECreateTask vtable +0x4C Run. A nonnull taskController_0C is invoked through virtual +0x4C only while bNiParallelWaitFallback_0B3F944 is clear. That normal execution path releases/clears the controller. With fallback set, Run skips both invocation and that local release; its final vtable +0x54 ReturnToPool dispatch releases/clears any remaining reference and returns the task to the pool.
int __thiscall BSTECreateTask_Run(BSTECreateTask_Layout_t *this)
{
  NiTimeController *taskController_0C; // ecx
  NiTimeController *v3; // esi

  taskController_0C = this->taskController_0C; /*0x56b8d3*/
  if ( taskController_0C ) /*0x56b8d8*/
  {                                             // 3DTheft decode 2026-05-16: BSTECreateTask::Run skips the wrapped task vfunc +0x4C when byte_B3F944 is set by the manager wait helper.
    if ( !bNiParallelWaitFallback_0B3F944 ) /*0x56b8da*/
    {
      ((void (__thiscall *)(NiTimeController *))taskController_0C->vtbl->Activate)(taskController_0C); /*0x56b8e9*/
      v3 = this->taskController_0C; /*0x56b8eb*/
      if ( v3 ) /*0x56b8f0*/
      {
        if ( !InterlockedDecrement((volatile LONG *)&v3->members) ) /*0x56b8f6*/
          v3->vtbl->super.super.Destructor((NiRefObject *)v3, 1); /*0x56b90c*/
        this->taskController_0C = 0; /*0x56b90e*/
      }
    }
  }
  return (*((int (__thiscall **)(BSTECreateTask_Layout_t *))this->vftable + 0x15))(this);
}
