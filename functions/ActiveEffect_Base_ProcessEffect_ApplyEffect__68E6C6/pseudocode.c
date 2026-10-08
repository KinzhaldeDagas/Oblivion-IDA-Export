// Verified ActiveEffect dispatcher slot: after Apply-condition checks, calls the current effect object's vtable +0x38. LockEffect_vftable[14] points to LockEffect_Apply; OpenEffect_vftable[14] points to OpenEffect_ApplyEffect. This is the per-effect application call inside ActiveEffect_Base_ProcessEffect.
int __usercall ActiveEffect_Base_ProcessEffect_::ApplyEffect@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        int a5,
        float a6)
{
  double v6; // st7

  v6 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)a1 + 0x38))(a1); /*0x68e6cd*/
  return ActiveEffect_Base_ProcessEffect_::PostApply(a1, a2, a3, a4, v6, a5, a6);
}
