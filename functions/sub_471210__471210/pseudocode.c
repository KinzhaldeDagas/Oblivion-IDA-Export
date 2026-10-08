// Returns true when ActorAnimData current idle (+0xCC) exists and its phase field is 2. Mounted/action callers treat this as the active idle phase.
bool __thiscall ActorAnimData_IsCurrentIdleActive(ActorAnimData *this)
{
  _DWORD *v1; // eax

  v1 = (_DWORD *)this->unkC8[1]; /*0x471210*/
  return v1 && *v1 == 2; /*0x471225*/
}
