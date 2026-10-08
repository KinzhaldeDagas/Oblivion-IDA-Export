char __thiscall Actor_CanFightInWater(void *this)
{
  int v2; // ebx
  int v3; // edi

  v2 = 0; /*0x5e1cbd*/
  v3 = (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x5e1cc1*/
  if ( v3 ) /*0x5e1cc5*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(void *))(*(_DWORD *)this + 0x190))(this) ) /*0x5e1cd1*/
      v2 = v3; /*0x5e1cd7*/
  }
  return TESActorBase_CanFightInWater(v2); /*0x5e1cd9*/
}
