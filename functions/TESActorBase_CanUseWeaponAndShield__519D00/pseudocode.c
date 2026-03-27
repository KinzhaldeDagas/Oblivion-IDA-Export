bool __thiscall TESActorBase_CanUseWeaponAndShield(int this)
{
  return *(_BYTE *)(this + 4) != 0x24 || (*(_DWORD *)(this + 0x28) & 4) != 0;
}
