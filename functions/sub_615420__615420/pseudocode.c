void __thiscall sub_615420(int this)
{
  _DWORD *v5; // ebx
  void (__thiscall **v6)(_DWORD *, int); // edi
  int CurrentTarget; // eax

  if ( *(_DWORD *)(this + 0x70) == 6 ) /*0x615427*/
  {
    if ( Actor_IsBlocking(*(_DWORD **)(this + 0x3C)) ) /*0x61542c*/
      Actor_UpdateBlockingState(*(Actor **)(this + 0x3C), 0); /*0x61543a*/
    if ( *(float *)(this + 0xD8) < *(float *)(this + 0x44) - *(float *)(this + 0xD4) ) /*0x615455*/
    {
      v5 = *(_DWORD **)(this + 0x3C); /*0x615458*/
      v6 = (void (__thiscall **)(_DWORD *, int))(*v5 + 0x340); /*0x615460*/
      CurrentTarget = CombatController_GetCurrentTarget(this); /*0x615466*/
      (*v6)(v5, CurrentTarget); /*0x615470*/
    }
  }
}
