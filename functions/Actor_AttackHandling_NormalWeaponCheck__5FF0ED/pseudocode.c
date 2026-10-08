int __userpurge Actor_AttackHandling_::NormalWeaponCheck@<eax>(
        Actor *a1@<edi>,
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

  v15 = a3; /*0x5ff0ed*/
  if ( a3 ) /*0x5ff0fa*/
  {
    if ( a4 ) /*0x5ff0fe*/
    {
      if ( *(_BYTE *)((*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 0x170))(a4) + 4) == 0x22 ) /*0x5ff126*/
      {
        v16 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a4 + 0x170))(a4); /*0x5ff133*/
        if ( v16 ) /*0x5ff137*/
          v15 = (*(_BYTE *)(v16 + 0x80) & 1) == 0; /*0x5ff141*/
      }
      if ( v15 ) /*0x5ff146*/
        v15 = a4[0x96] == 0; /*0x5ff14f*/
    }
    else
    {
      if ( !a15 ) /*0x5ff106*/
      {
LABEL_12:
        v15 = Actor_GetSkillMasteryLevel(a1, kSkillAV_HandToHand) < kSkillMastery_Journeyman; /*0x5ff15d*/
        goto LABEL_13; /*0x5ff169*/
      }
      v15 = (*(_BYTE *)(a15 + 0x9C) & 1) == 0; /*0x5ff110*/
    }
  }
  if ( !a15 && !a4 ) /*0x5ff15b*/
    goto LABEL_12; /*0x5ff15b*/
LABEL_13:
  v17 = ((int (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].Unk_37)(a2, 0x41); /*0x5ff16c*/
  if ( !v15 || v17 < 0x64 ) /*0x5ff185*/
    JUMPOUT(0x5FF1E6); /*0x5ff1e6*/
  if ( a1 == (Actor *)reference ) /*0x5ff18d*/
    GameUI_QueueMessage(MEMORY[0xB37208].value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x5ff1a3*/
  if ( unk_B3B908 ) /*0x5ff1b7*/
  {
    duration = TESObjectREFR_GetName(a2); /*0x5ff1cb*/
    Name = TESObjectREFR_GetName((TESObjectREFR *)a1); /*0x5ff1ce*/
    Interface_ConsolePrint("%.20s's normal weapons have no effect on %.20s!", Name, duration); /*0x5ff1d9*/
  }
  return Actor_AttackHandling_::ActorMagicHit((int)a1, (int)a2, a5, a6, a7);
}
