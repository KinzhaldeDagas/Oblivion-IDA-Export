// 3DTheft release decode 2026-05-18: HighProcess vfunc +0x228 returns success/failure as AL. It may trigger SayTopic warning for package type 0x1D, then delegates to MiddleHighProcess_StartCombatPackage; caller should honor return value and should not force Actor::EvaluatePackage after it.
char __userpurge HighProcess_StartCombatPackage@<al>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        Actor *a5,
        TESObjectREFR *a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  int v16; // eax
  int v17; // ebx

  if ( !a6 ) /*0x633cba*/
    return 0; /*0x633cbd*/
  v16 = (*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))( /*0x633ccc*/
          a1,
          a4,
          a3,
          a2);
  if ( v16 ) /*0x633cd4*/
  {
    if ( *(_BYTE *)(v16 + 0x20) == 0x1D ) /*0x633cda*/
    {
      v17 = TESTopic::GetTopic(4, 1); /*0x633cef*/
      (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)a1 + 0x484))(a1, reference); /*0x633cfc*/
      a5->members.unk0E4 = (Actor *)reference; /*0x633d09*/
      (*(void (__thiscall **)(int, Actor *, int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 0x1A4))(a1, a5, v17, 0, 0, 1); /*0x633d1b*/
    }
  }
  if ( sub_5E3290(a5) && ((int (__thiscall *)(Actor *))a5->vtbl->Unk_E2)(a5) ) /*0x633d33*/
    return 0; /*0x633d33*/
  if ( *(_BYTE *)(a1 + 0x290) ) /*0x633d39*/
  {
    (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x588))(a1, a5, 0, 0); /*0x633d51*/
    *(_BYTE *)(a1 + 0x290) = 0; /*0x633d53*/
    *(float *)(a1 + 0x28C) = unk_B36C88[0]; /*0x633d60*/
  }
  if ( !((int (__thiscall *)(LowProcess *))a5->members.super.process->Unk_F3)(a5->members.super.process) /*0x633da0*/
    && TESObjectREFR_GetOwner((TESObjectREFR *)a5)
    && TESObjectREFR_IsOwnedBy((TESObjectREFR *)a5, a6, 1)
    || TESObjectREFR_GetOwner(a6) && TESObjectREFR_IsOwnedBy(a6, (TESObjectREFR *)a5, 1) )
  {
    return 0; /*0x633dab*/
  }
  else
  {
    return MiddleHighProcess_StartCombatPackage(a1, a2, a3, a4, a5, *(float *)&a6, a7, a8, a9, a10, a11, a12, a13, a14); /*0x633ddd*/
  }
}
