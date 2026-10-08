// Return HighProcess currentAction as signed ActorCurrentAction from +0x1F4. MiddleHigh uses a separate vtable target that always returns None (-1).
ActorCurrentAction __thiscall HighProcess_GetCurrentAction(HighProcess *this)
{
  return this->currentAction; /*0x628207*/
}
