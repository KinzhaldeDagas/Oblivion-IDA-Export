// Verified ActiveEffect destructor frees the HitEffectNode root allocation only after BSSimpleList_Clear frees successor nodes; BSTempEffect items are detached and remain under ActorProcessManager refcount/update lifecycle.
int __usercall ActiveEffect::~ActiveEffect@<eax>(int a1@<esi>)
{
  FormHeapFree(*(_DWORD *)(a1 + 0x34)); /*0x68d9b0*/
  return ActiveEffect::~ActiveEffect(a1);
}
