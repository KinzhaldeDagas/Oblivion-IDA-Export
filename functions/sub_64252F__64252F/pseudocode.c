// bad sp value at call has been detected, the output may be wrong!
// positive sp value has been detected, the output may be wrong!
bool __userpurge sub_64252F@<al>(
        float *a1@<ecx>,
        int a2@<ebx>,
        float *a3@<ebp>,
        int a4@<edi>,
        Actor *a5@<esi>,
        double a6@<st2>,
        double a7@<st1>,
        int a8)
{
  int (__thiscall *v9)(int); // eax
  signed int v10; // eax
  TESTopic *Topic; // ebx
  int v12; // edi
  LowProcess *process; // ebx
  void (__thiscall **p_Unk_6F)(LowProcess *); // edi
  Actor *ListHead; // eax
  Actor *v16; // eax
  _DWORD *v17; // ebx
  Actor *v18; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectREFR *vtbl; // edi
  double Distance; // st7
  int v22; // eax
  int v23; // eax
  int v25; // [esp-15Ch] [ebp-190h]
  Actor *v26; // [esp-158h] [ebp-18Ch]
  float v27; // [esp-144h] [ebp-178h]
  char v28; // [esp-13Dh] [ebp-171h] BYREF
  int v29; // [esp-138h] [ebp-16Ch]
  int v30; // [esp-11Ch] [ebp-150h]
  float *v31; // [esp-114h] [ebp-148h]
  float v32; // [esp-110h] [ebp-144h]
  signed int v33; // [esp-F4h] [ebp-128h]

  v32 = a7; /*0x642534*/
  a3[0x6E] = v32; /*0x64253c*/
  if ( *GameSetting_GetSafeFloatPointer(a1) <= (double)v32 ) /*0x642554*/
  {
    ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_D0)(a5, a4); /*0x642561*/
    if ( !a5->vtbl->IsInCombat(a5, 1) ) /*0x64256f*/
      ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_C7)(a5, a4); /*0x642580*/
  }
  if ( v33 > 0 ) /*0x642591*/
    goto LABEL_8; /*0x642591*/
  if ( reference->vtbl->super.IsTresspassing((Actor *)reference) ) /*0x6425a1*/
  {
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x284); /*0x6425ad*/
    v29 = 0x24; /*0x6425b3*/
    v10 = v9(a2); /*0x6425b7*/
    if ( sub_546700(v33, v10) ) /*0x6425bf*/
    {
      a3 = v31; /*0x6425cf*/
LABEL_8:
      if ( Actor::IsSleeping(a5) /*0x64261c*/
        || !Actor::HasNPCBaseForm(a5)
        || ((double (__thiscall *)(LowProcess *))a5->members.super.process->Unk_79)(a5->members.super.process) >= *(float *)&SrcStr
        || (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a3 + 0x33C))(a3, 0) )
      {
        a5->vtbl->super.Unk_77((MobileObject *)a5); /*0x6426e4*/
      }
      else
      {
        Topic = TESTopic::GetTopic(DialogueType_Detection, 3); /*0x642634*/
        if ( !sub_5E6BA0(a5) && !sub_5E6CD0((TESObjectREFR *)a5, 0) && !a5->vtbl->IsInCombat(a5, 1) ) /*0x642660*/
        {
          if ( Topic ) /*0x64266c*/
          {
            if ( Topic != (TESTopic *)0xFFFFFFD8 /*0x642679*/
              && !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&Topic->questInfoEntries) )
            {
              v12 = v30; /*0x642682*/
              (*(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v30 + 0x484))(v30, reference); /*0x642696*/
              a5->members.unk0E4 = (Actor *)reference; /*0x6426a3*/
              v26 = a5; /*0x6426b2*/
              (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 0x1A4))(v12); /*0x6426b5*/
              process = a5->members.super.process; /*0x6426b7*/
              p_Unk_6F = (void (__thiscall **)(LowProcess *))&process->Unk_6F; /*0x6426c1*/
              v25 = *(int *)GameSetting_GetSafeFloatPointer(&flt_B36778[0x6C]); /*0x6426d3*/
              (*p_Unk_6F)(process); /*0x6426d6*/
            }
          }
        }
      }
    }
  }
  ListHead = ActorProcessManager_GetListHead((ActorProcessManager *)&qword_B3BB2C[0x75], 0); /*0x6426e6*/
  v16 = ActorList_ReturnHead((ActorList *)ListHead); /*0x6426f4*/
  v17 = (_DWORD *)v29; /*0x6426f9*/
  *(_DWORD *)(v29 + 0x1A4) = 0; /*0x6426fd*/
  v27 = MEMORY[0xB36708]; /*0x64270f*/
  v18 = v16; /*0x642713*/
  if ( !Shared_GetDwordAtOffset40(a5) /*0x642727*/
    || (DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5), !TESObjectCELL_IsInterior(DwordAtOffset40)) )
  {
    v27 = v27 + v27; /*0x642736*/
  }
  for ( ; v18; v18 = *(Actor **)&v18->members.super.super.super.type ) /*0x64273c*/
  {
    vtbl = (TESObjectREFR *)v18->vtbl; /*0x642742*/
    if ( !v18->vtbl ) /*0x642742*/
      break; /*0x642747*/
    if ( v17[0x69] ) /*0x64274d*/
      break; /*0x642754*/
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)a5, vtbl, 0); /*0x64275f*/
    if ( v27 < Distance ) /*0x64276f*/
    {
      if ( vtbl->vtbl->IsActor(vtbl) ) /*0x64278b*/
      {
        v22 = (*(int (__thiscall **)(_DWORD *, TESObjectREFR *))(*v17 + 0x3B0))(v17, vtbl); /*0x64279c*/
        if ( v22 ) /*0x6427a0*/
          *(_DWORD *)(v22 + 0xC) = MEMORY[0xB372F0].value; /*0x6427c1*/
        else
          (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, _DWORD, _DWORD, const char *))(*v17 + 0xA8))( /*0x6427b7*/
            v17,
            vtbl,
            0,
            0,
            MEMORY[0xB372F0].value);
      }
    }
    else
    {
      sub_640900((int)v17, (char)vtbl, a6, v27, Distance, vtbl, (TESObjectREFR *)a5, (int)&v28, v25, (int)v26); /*0x64277a*/
    }
  }
  if ( v28 ) /*0x6427d4*/
  {
    if ( unk_B3B930 ) /*0x6427d6*/
    {
      if ( !sub_5E6BA0(a5) && !a5->vtbl->IsInCombat(a5, 0) ) /*0x6427f6*/
      {
        v23 = v17[2]; /*0x6427fc*/
        if ( !v23 || (*(_DWORD *)(v23 + 0x1C) & 0x400000) == 0 ) /*0x64280c*/
          ((void (__thiscall *)(Actor *, int))a5->vtbl->Unk_C5)(a5, unk_B3B930); /*0x64281e*/
      }
    }
  }
  return v17[0x69] != 0; /*0x642851*/
}
