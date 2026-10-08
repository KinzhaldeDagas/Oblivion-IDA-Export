// [Verified] BSTECreateTask vtable slot 21 (+0x54): releases/clears taskController_0C, pushes this task back onto the protected BSTECreateTask free-item stack via BSTECreateTaskPool_Push, then returns true.
char __thiscall BSTECreateTask_ReturnToPool(BSTECreateTask_Layout_t *this)
{
  NiTimeController *taskController_0C; // esi

  taskController_0C = this->taskController_0C; /*0x56bb54*/
  if ( taskController_0C ) /*0x56bb59*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&taskController_0C->members) ) /*0x56bb5f*/
      taskController_0C->vtbl->super.super.Destructor((NiRefObject *)taskController_0C, 1); /*0x56bb75*/
    this->taskController_0C = 0; /*0x56bb77*/
  }
  BSTECreateTaskPool_Push(this); /*0x56bb7f*/
  return 1; /*0x56bb87*/
}
