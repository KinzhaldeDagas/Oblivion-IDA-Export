// Returns true when ActorAnimData current idle (+0xCC) exists and its phase field is 1. Furniture/action callers use this as the loaded/ready gate immediately before StartQueuedIdleAction.
bool __thiscall ActorAnimData_IsCurrentIdleReady(ActorAnimData *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)this->unkC8[1]; /*0x4711f0*/
  return v1 && *v1 == 1; /*0x471205*/
}
