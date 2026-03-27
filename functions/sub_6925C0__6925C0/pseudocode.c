void __usercall sub_6925C0(int a1@<ebx>, Actor *a2, int a3, PlayerCharacter *a4)
{
  LowProcess *process; // ecx
  int v6; // esi
  int v7; // eax

  process = a2->members.super.process;
  if ( process )
  {
    if ( (PlayerCharacter *)((int (__thiscall *)(LowProcess *, int))process->Unk_F3)(process, a1) != a4 )
      ((void (__thiscall *)(LowProcess *, PlayerCharacter *))a2->members.super.process->Unk_F2)(
        a2->members.super.process,
        a4);
    if ( !a2->vtbl->IsInCombat(a2, 1) )
    {
      v6 = 0;
      if ( a4 != TESDataHandler_g_PlayerRef )
        v6 = (int)a4->super.super.super.process->GetCurrentPackage(a4->super.super.super.process);
      v7 = (int)a2->members.super.process->GetCurrentPackage(a2->members.super.process);
      if ( (!v6 || *(_BYTE *)(v6 + 0x20) == 0xC)
        && (!v7 || *(_BYTE *)(v7 + 0x20) != 0x1F && !(unsigned __int8)sub_5E03B0(a2)) )
      {
        sub_5F8170(a2, (int)a4);
      }
    }
  }
}
