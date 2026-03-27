int __usercall ActiveEffect_Base_ProcessEffect_::ApplyEffect@<eax>(
        int a1@<esi>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>)
{
  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x38))(a1);
  return ActiveEffect_Base_ProcessEffect_::PostApply(a1, a2, a3, a4);
}
