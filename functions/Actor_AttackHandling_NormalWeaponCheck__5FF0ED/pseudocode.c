int __userpurge Actor_AttackHandling_::NormalWeaponCheck@<eax>(
        int *a1@<edi>,
        TESObjectREFR *a2@<esi>,
        bool a3@<zf>,
        _BYTE *a4@<ebp>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  bool v15; // bl
  int v16; // eax
  int v17; // eax
  char *Name; // eax
  char *duration; // [esp+4h] [ebp-4h]

  v15 = a3;
  if ( a3 )
  {
    if ( a4 )
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 0x170))(a4) + 4) == 0x22 )
      {
        v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 0x170))(a4);
        if ( v16 )
          v15 = (*(_BYTE *)(v16 + 0x80) & 1) == 0;
      }
      if ( v15 )
        v15 = a4[0x96] == 0;
    }
    else
    {
      if ( !a15 )
      {
LABEL_12:
        v15 = Actor_GetSkillMasteryLevel(a1, v15, (int)a1, 0x11) < 2;
        goto LABEL_13;
      }
      v15 = (*(_BYTE *)(a15 + 0x9C) & 1) == 0;
    }
  }
  if ( !a15 && !a4 )
    goto LABEL_12;
LABEL_13:
  v17 = ((int (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].Unk_37)(a2, 0x41);
  if ( !v15 || v17 < 0x64 )
    JUMPOUT(0x5FF1E6);
  if ( a1 == (int *)TESDataHandler_g_PlayerRef )
    GameUI_QueueMessage((const char *)sNormalWeaponsResisted, 0, 1u, flt_A30634);
  if ( byte_B3B908 )
  {
    duration = TESObjectREFR_GetName(a2);
    Name = TESObjectREFR_GetName((TESObjectREFR *)a1);
    Interface_ConsolePrint("%.20s's normal weapons have no effect on %.20s!", Name, duration);
  }
  return Actor_AttackHandling_::ActorMagicHit((int)a1, (int)a2, a5, a6, a7);
}
