void __usercall sub_624480(void **a1@<ecx>, double a2@<st0>)
{
  TESObjectREFR *v3; // edi
  bool v4; // bl
  unsigned __int16 AnimGroup; // ax
  int v6; // ebp
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // eax
  int v10; // eax
  char v11; // al
  int v12; // edx
  int v13; // [esp+10h] [ebp-4h] BYREF

  sub_61E8A0(a1); /*0x624487*/
  v3 = (TESObjectREFR *)a1[0xF]; /*0x62448c*/
  *((_BYTE *)a1 + 0x174) = 1;                   // Initializes CombatController+0x174 to true before movement/path evaluation; this is the current-target reachability state. /*0x624497*/
  v4 = 0; /*0x62449e*/
  AnimGroup = Actor_LoadAnimGroup_(v3, 0x11, 0, 1); /*0x6244a0*/
  v6 = AnimGroup; /*0x6244a5*/
  if ( AnimGroup ) /*0x6244ab*/
  {
    v7 = (int)v3->vtbl->GetAnimData(v3); /*0x6244b7*/
    if ( v7 ) /*0x6244bb*/
      v4 = ActorAnimData_FindAnimMapEntry(*(_DWORD **)(v7 + 0x9C), v6, &v13) != 0; /*0x6244d4*/
  }
  v8 = a1[0xF]; /*0x6244d6*/
  *((_BYTE *)a1 + 0x1BC) = v4; /*0x6244db*/
  if ( !v8 /*0x62451f*/
    || (v9 = v8[0x16]) == 0
    || !(*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 0xEC))(v9, 1)
    || (v10 = *(_DWORD *)((*(int (__thiscall **)(_DWORD, int))(**((_DWORD **)a1[0xF] + 0x16) + 0xEC))(
                            *((_DWORD *)a1[0xF] + 0x16),
                            1)
                        + 8)) == 0 )
  {
    *((_BYTE *)a1 + 0x130) = 1; /*0x62458f*/
LABEL_15:
    *((_BYTE *)a1 + 0x131) = 1; /*0x624596*/
    CombatController_RefreshTacticalState((int)a1, (Actor *)v3, a2, 0); /*0x6245a1*/
    return; /*0x6245a1*/
  }
  v11 = *(_BYTE *)(v10 + 0x90); /*0x624521*/
  if ( v11 != 5 && v11 != 4 ) /*0x62452d*/
  {
    *((_BYTE *)a1 + 0x130) = 0; /*0x624533*/
    v3 = (TESObjectREFR *)sub_612960((_DWORD **)a1, 1); /*0x62453f*/
    if ( v3 ) /*0x624543*/
    {
LABEL_11:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)v3, v12); /*0x624545*/
      FormHeapFree((unsigned int)v3); /*0x62454d*/
      CombatController_RefreshTacticalState((int)a1, (Actor *)v3, a2, 0); /*0x624559*/
      return; /*0x624563*/
    }
    goto LABEL_15; /*0x624543*/
  }
  *((_BYTE *)a1 + 0x131) = 0; /*0x624568*/
  v3 = (TESObjectREFR *)sub_612960((_DWORD **)a1, 1); /*0x624574*/
  if ( v3 ) /*0x624578*/
    goto LABEL_11; /*0x624578*/
  *((_BYTE *)a1 + 0x130) = 1; /*0x62457d*/
  CombatController_RefreshTacticalState((int)a1, 0, a2, 0); /*0x624584*/
}
