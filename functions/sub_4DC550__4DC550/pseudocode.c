ActorAnimData *__thiscall sub_4DC550(void *this)
{
  ActorAnimData *result; // eax
  ActorAnimData *v2; // esi

  result = (ActorAnimData *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x164))(this); /*0x4dc559*/
  v2 = result; /*0x4dc55b*/
  if ( result ) /*0x4dc55f*/
  {
    ActorAnimData_CleanupOrPromoteQueuedIdles(result, 1, 0); /*0x4dc567*/
    ActorAnimData_ClearSlot(v2, 5, 0.0); /*0x4dc576*/
    NiControllerManager_DeactivateAllSequences(v2->manager, 0.0); /*0x4dc587*/
    sub_473120(&v2->RootNode->vtbl); /*0x4dc590*/
    return (ActorAnimData *)sub_4730B0(v2); /*0x4dc59b*/
  }
  return result; /*0x4dc59a*/
}
