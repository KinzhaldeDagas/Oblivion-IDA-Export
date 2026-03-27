bool __thiscall sub_5E1CF0(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0;
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) )
      v2 = v3;
  }
  return TESActorBase_CanUseWeaponAndShield(v2);
}
