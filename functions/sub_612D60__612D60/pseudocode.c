int __thiscall CombatController_GetEquippedWeaponForm(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(this + 0xF); /*0x612d63*/
  if ( v2 && (v3 = *(_DWORD *)(v2 + 0x58)) != 0 && (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0xEC))(v3, 1) ) /*0x612d7b*/
    return *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(this + 0xF) + 0x58) + 0xEC))( /*0x612d93*/
                         *(_DWORD *)(*(this + 0xF) + 0x58),
                         1)
                     + 8);
  else
    return 0; /*0x612d98*/
}
