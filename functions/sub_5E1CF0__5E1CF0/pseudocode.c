bool __thiscall sub_5E1CF0(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1cfd*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1d01*/
  if ( v3 ) /*0x5e1d05*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1d11*/
      v2 = v3; /*0x5e1d17*/
  }
  return TESActorBase_CanUseWeaponAndShield(v2); /*0x5e1d19*/
}
