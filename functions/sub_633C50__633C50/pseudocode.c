void __stdcall sub_633C50(Actor *a1)
{
  CombatController *v1; // eax
  int CurrentTarget; // eax

  if ( a1 ) /*0x633c57*/
  {
    if ( (a1 != (Actor *)reference || !LOBYTE(reference->unk738)) /*0x633c7e*/
      && ((int (__thiscall *)(LowProcess *))a1->members.super.process->Unk_110)(a1->members.super.process) < (int)stru_B36A70.value )
    {
      v1 = a1->vtbl->GetCombatController(a1); /*0x633c8a*/
      if ( v1 ) /*0x633c8e*/
      {
        CurrentTarget = CombatController_GetCurrentTarget((int)v1); /*0x633c92*/
        if ( CurrentTarget ) /*0x633c99*/
          (*(void (__thiscall **)(int, Actor *, int))(*(_DWORD *)CurrentTarget + 0x240))(CurrentTarget, a1, 1); /*0x633ca8*/
      }
    }
  }
}
