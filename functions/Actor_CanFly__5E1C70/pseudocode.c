char __thiscall Actor_CanFly(void *this)
{
  TESActorBase *v2; // ebx
  int v3; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v2 = (TESActorBase *)v3;
  }
  return TESActorBase_CanFly(v2);
}
