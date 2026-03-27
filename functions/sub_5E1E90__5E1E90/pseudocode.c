BOOL __thiscall sub_5E1E90(void *this)
{
  _BYTE *v2; // ebx
  int v3; // edi
  TESActorBase *v4; // ebx
  int v5; // edi
  TESActorBase *v6; // ebx
  int v7; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v2 = (_BYTE *)v3;
  }
  if ( TESActorBase_CanWalk(v2) )
    return 0;
  v4 = 0;
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v5 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v4 = (TESActorBase *)v5;
  }
  if ( !TESActorBase_CanSwim(v4) )
    return 0;
  v6 = 0;
  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v7 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v6 = (TESActorBase *)v7;
  }
  return !TESActorBase_CanFly(v6);
}
