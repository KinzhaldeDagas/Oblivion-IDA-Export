char __thiscall Actor_CanFly(void *this)
{
  TESActorBase *v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1c7d*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1c81*/
  if ( v3 ) /*0x5e1c85*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1c91*/
      v2 = (TESActorBase *)v3; /*0x5e1c97*/
  }
  return TESActorBase_CanFly(v2); /*0x5e1c99*/
}
