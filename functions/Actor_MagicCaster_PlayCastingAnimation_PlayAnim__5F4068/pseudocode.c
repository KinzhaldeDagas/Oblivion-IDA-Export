// positive sp value has been detected, the output may be wrong!
void __usercall Actor_MagicCaster_PlayCastingAnimation_::PlayAnim(
        int a1@<ebx>,
        _DWORD *a2@<ebp>,
        int a3@<edi>,
        PlayerCharacter *a4@<esi>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16)
{
  PowerListEntry *v16; // eax
  _DWORD *v17; // eax
  int FXEffect; // eax
  int v19; // edi
  CombatController *v20; // eax
  _DWORD *v21; // eax
  unsigned int v22; // esi
  int *v23; // [esp-38h] [ebp-38h]
  ActorAnimData *v24; // [esp-18h] [ebp-18h]
  PlayerCharacter *v25; // [esp-14h] [ebp-14h]
  int v26; // [esp-10h] [ebp-10h]

  ActorAnimData_PlayAnimGroup(v26, a2, 1, 0xFFFFFFFF);
  ((void (__thiscall *)(PlayerCharacter *, _BYTE, int))a4->vtbl->super.Unk_E9)(a4, (_BYTE)a2, 1);
  v16 = sub_4706E0(v24, *(_DWORD *)(0x24 * a1 + 0xB102E8));
  if ( v16 )
  {
    HighPRocess_DoAction_____(a4, 2, (int)v16);
    v17 = (_DWORD *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x30))(a3);
    FXEffect = MagicItem_GetFXEffect(v17, 0);
    v19 = FXEffect;
    if ( !FXEffect || !*(_DWORD *)(FXEffect + 0x80) )
      goto LABEL_11;
    if ( a4->vtbl->super.GetCombatController((Actor *)a4) )
    {
      v23 = *(int **)(*(_DWORD *)(v19 + 0x80) + 0xC);
      v20 = a4->vtbl->super.GetCombatController((Actor *)a4);
      sub_619FA0(v20, v23, 0);
      return;
    }
    if ( v25 == TESDataHandler_g_PlayerRef )
    {
      sub_663520((LONG)TESDataHandler_g_PlayerRef, (char)a2, a5, a6, a7, *(_DWORD *)(*(_DWORD *)(v19 + 0x80) + 0xC));
      return;
    }
    v21 = (_DWORD *)sub_65AC50(a4, *(_DWORD *)(*(_DWORD *)(v19 + 0x80) + 0xC), 0, 0x102, 1);
    v22 = (unsigned int)v21;
    if ( v21 )
    {
      sub_6B73E0(v21);
      FormHeapFree(v22);
      Actor_MagicCaster_PlayCastingAnimation_::Done(a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }
    else
    {
LABEL_11:
      Actor_MagicCaster_PlayCastingAnimation_::Done(a8, a9, a10, a11, a12, a13, a14, a15, a16);
    }
  }
  else
  {
    Actor_MagicCaster_PlayCastingAnimation_::Done(a8, a9, a10, a11, a12, a13, a14, a15, a16);
  }
}
