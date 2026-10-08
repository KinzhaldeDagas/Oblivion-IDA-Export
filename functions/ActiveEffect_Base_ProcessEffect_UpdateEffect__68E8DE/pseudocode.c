// Verified periodic update dispatch: when this effect's update condition is met, ActiveEffect_Base_ProcessEffect calls vtable +0x08 with elapsed-time data. LockEffect/OpenEffect use the shared null implementation at this slot, so their lock changes occur through Apply (+0x38), not the periodic update override.
int __usercall ActiveEffect_Base_ProcessEffect_::UpdateEffect@<eax>(_BYTE *a1@<esi>, int a2, float a3)
{
  (*(void (__thiscall **)(_BYTE *, _DWORD))(*(_DWORD *)a1 + 8))(a1, LODWORD(a3)); /*0x68e8ed*/
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList__(a1, a2);
}
