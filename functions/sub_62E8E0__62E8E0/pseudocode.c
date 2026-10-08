// HighProcess_OnCombatStarted: vtable +0x22C. Scans nearby actors around arg0, updates processing, and wakes/refreshes actors affected by combat start.
unsigned int __userpurge HighProcess_OnCombatStarted@<eax>(
        double a1@<st1>,
        double a2@<st0>,
        TESObjectREFR *arg0,
        TESObjectREFR *a4)
{
  TESObjectCELL *ParentCell; // eax
  TESObjectREFR **v5; // ebp
  Actor *v6; // esi
  _DWORD *v7; // ebx
  void (__thiscall **v8)(_DWORD *, _DWORD); // edi
  int ProcessLevel; // eax
  int v10; // eax
  unsigned int result; // eax
  int v12; // esi
  float *v13; // [esp-4h] [ebp-20h]
  float a3; // [esp+0h] [ebp-1Ch]
  float *v15; // [esp+4h] [ebp-18h]
  float a5; // [esp+8h] [ebp-14h]
  float v17; // [esp+20h] [ebp+4h]
  TESObjectREFR **v18; // [esp+24h] [ebp+8h]

  a5 = (float)stru_B36A50; /*0x62e8fd*/
  v15 = (float *)((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))arg0->vtbl->GetPos)( /*0x62e908*/
                   arg0,
                   a2,
                   a1);
  a3 = (float)stru_B36A50; /*0x62e914*/
  v13 = arg0->vtbl->GetPos(arg0); /*0x62e919*/
  ParentCell = Shared_GetDwordAtOffset40(arg0); /*0x62e91c*/
  sub_446B90(ParentCell, v13, a3, v15, a5, (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_62E890, (int)arg0); /*0x62e928*/
  v5 = sub_6753F0((ActorProcessManager *)&qword_B3BB2C[0x75], a4, (int)&unk_B3B944); /*0x62e941*/
  v18 = v5; /*0x62e945*/
  if ( v5 ) /*0x62e949*/
  {
    do /*0x62e9d9*/
    {
      if ( !*v5 ) /*0x62e951*/
        break; /*0x62e956*/
      v6 = 0; /*0x62e964*/
      if ( (*v5)->vtbl->IsActor(*v5) ) /*0x62e966*/
        v6 = (Actor *)*v5; /*0x62e96c*/
      v5 = (TESObjectREFR **)v5[1]; /*0x62e971*/
      if ( v6 ) /*0x62e974*/
      {
        if ( Actor::GetProcessLevel(v6) ) /*0x62e978*/
        {
          v7 = &v6->members.super.process->__vftable; /*0x62e981*/
          v8 = (void (__thiscall **)(_DWORD *, _DWORD))(*v7 + 0x1C); /*0x62e98b*/
          v17 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2F928; /*0x62e99c*/
          (*v8)(v7, LODWORD(v17)); /*0x62e9a9*/
          ProcessLevel = Actor::GetProcessLevel(v6); /*0x62e9ad*/
          sub_674550((int)v6, ProcessLevel); /*0x62e9b9*/
          v10 = Actor::GetProcessLevel(v6); /*0x62e9c6*/
          ActorProcessManager_AddMobileObject((int)v6, v10, 0, 0, 0); /*0x62e9d2*/
        }
      }
    }
    while ( v5 ); /*0x62e9d9*/
    BSSimpleList_Clear(v18); /*0x62e9e5*/
    FormHeapFree((unsigned int)v18); /*0x62e9eb*/
  }
  result = unk_B3B948; /*0x62e9f5*/
  if ( unk_B3B948 ) /*0x62e9f5*/
  {
    do /*0x62ea15*/
    {
      v12 = *(_DWORD *)(result + 4); /*0x62ea00*/
      FormHeapFree(result); /*0x62ea04*/
      result = v12; /*0x62ea0e*/
      unk_B3B948 = v12; /*0x62ea10*/
    }
    while ( v12 ); /*0x62ea15*/
  }
  unk_B3B944 = 0; /*0x62ea18*/
  return result; /*0x62ea17*/
}
