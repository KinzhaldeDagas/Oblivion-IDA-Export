void __stdcall sub_633C50(PlayerCharacter *a1)
{
  int v1; // eax
  int v2; // eax

  if ( a1 )
  {
    if ( (a1 != TESDataHandler_g_PlayerRef || !LOBYTE(TESDataHandler_g_PlayerRef->unk738))
      && ((int (__thiscall *)(LowProcess *))a1->super.super.super.process->Unk_110)(a1->super.super.super.process) < dword_B36A70 )
    {
      v1 = (int)a1->vtbl->super.GetCombatController((Actor *)a1);
      if ( v1 )
      {
        v2 = sub_6135F0(v1);
        if ( v2 )
          (*(void (__thiscall **)(int, PlayerCharacter *, int))(*(_DWORD *)v2 + 0x240))(v2, a1, 1);
      }
    }
  }
}
