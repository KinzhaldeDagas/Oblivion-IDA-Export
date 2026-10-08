void __userpurge sub_634DB0(int *a1@<ecx>, int a2@<ebp>, TESObjectREFR *a3)
{
  int v4; // ebp
  ActorAnimData *v5; // eax
  ActorAnimData *v6; // ebx
  PowerListEntry *NormalizedSequenceSlot; // eax
  int v8; // ebx
  signed int v9; // eax
  int v10; // ebx
  signed int v11; // eax
  double v13; // [esp+18h] [ebp-8h]
  float v14; // [esp+24h] [ebp+4h]
  float v15; // [esp+28h] [ebp+8h]
  float v16; // [esp+28h] [ebp+8h]

  if ( unk_B36CC8 >= TesObjectREF_GetDistance(a3, (TESObjectREFR *)reference, 0) ) /*0x634dd7*/
  {
    v4 = (*(int (__thiscall **)(int *))(*a1 + 0x184))(a1); /*0x634ded*/
    v5 = a3->vtbl->GetAnimData(a3); /*0x634df7*/
    v6 = v5; /*0x634df9*/
    if ( v5 ) /*0x634dfd*/
    {
      if ( ActorAnimData_IsIdleInactive(v5) && !sub_5E6FA0(a3) && !Actor::IsSleeping(a3) && !a3->vtbl->HasFatigue(a3) ) /*0x634e3a*/
      {
        NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(v6, 0); /*0x634e48*/
        if ( NormalizedSequenceSlot && TESAnimGroup_IsIdleGroup((unsigned __int8 *)NormalizedSequenceSlot[0xD].data) /*0x634e94*/
          || a3 != (TESObjectREFR *)reference
          && v4
          && (v8 = *(_DWORD *)(v4 + 0x18), v8 != 0xFFFFFFFF)
          && *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0) + 4 * (*(int (__thiscall **)(int *))(*a1 + 0x180))(a1)) == 1 )
        {
          v15 = ((double (__thiscall *)(int *, int))*(_DWORD *)(*a1 + 0x220))(a1, a2); /*0x634ea6*/
          if ( v15 >= 0.0 || (v9 = sub_5E1F90(a3), sub_546770(v9) == *(float *)&SrcStr) ) /*0x634ed2*/
          {
            v16 = v15 - *(float *)&MEMORY[0xB33E90][0xC]; /*0x634f49*/
            (*(void (__thiscall **)(int *, _DWORD))(*a1 + 0x224))(a1, LODWORD(v16)); /*0x634f54*/
          }
          else
          {
            (*(void (__thiscall **)(int *, TESObjectREFR *))(*a1 + 0x48))(a1, a3); /*0x634edc*/
            v10 = *a1; /*0x634ede*/
            v11 = sub_5E1F90(a3); /*0x634ee2*/
            v13 = sub_546770(v11); /*0x634eed*/
            v14 = (double)(Game_RandomLargeInteger(0) % 0x1388) * dbl_A30E40 + v13; /*0x634f1d*/
            (*(void (__thiscall **)(int *, _DWORD))(v10 + 0x224))(a1, LODWORD(v14)); /*0x634f28*/
          }
        }
      }
    }
  }
}
