int __usercall ActiveEffect_Base_ProcessEffect_::UpdateEffect@<eax>(int a1@<esi>, int a2, float a3)
{
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 8))(a1, LODWORD(a3));
  return ActiveEffect_Base_ProcessEffect_::UpdateHUDActiveEffectList__(a1, a2);
}
