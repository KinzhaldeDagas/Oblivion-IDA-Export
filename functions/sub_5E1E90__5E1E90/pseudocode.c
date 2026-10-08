BOOL __thiscall sub_5E1E90(void *this)
{
  _BYTE *v2; // ebx
  int v3; // edi
  TESActorBase *v4; // ebx
  int v5; // edi
  TESActorBase *v6; // ebx
  int v7; // edi

  v2 = 0; /*0x5e1e9d*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1ea1*/
  if ( v3 ) /*0x5e1ea5*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1eb1*/
      v2 = (_BYTE *)v3; /*0x5e1eb7*/
  }
  if ( TESActorBase_CanWalk(v2) ) /*0x5e1ebb*/
    return 0; /*0x5e1ebb*/
  v4 = 0; /*0x5e1ece*/
  v5 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1ed2*/
  if ( v5 ) /*0x5e1ed6*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1ee2*/
      v4 = (TESActorBase *)v5; /*0x5e1ee8*/
  }
  if ( !TESActorBase_CanSwim(v4) ) /*0x5e1eec*/
    return 0; /*0x5e1eec*/
  v6 = 0; /*0x5e1eff*/
  v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1f03*/
  if ( v7 ) /*0x5e1f07*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1f13*/
      v6 = (TESActorBase *)v7; /*0x5e1f19*/
  }
  return !TESActorBase_CanFly(v6); /*0x5e1f31*/
}
