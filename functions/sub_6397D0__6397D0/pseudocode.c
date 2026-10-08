char __userpurge sub_6397D0@<al>(float *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  _DWORD **v7; // ebp
  double DistanceToPoint; // st7
  double v9; // st7
  char v10; // al
  int v11; // ebp
  UInt32 DwordAtOffset40; // eax
  char result; // al
  int v14; // ebp
  char v15; // al
  int v16; // ebp
  UInt32 v17; // eax
  ExtraDataList *****ContainerChanges; // ebx
  EntryData *v19; // ebx
  _DWORD **v20; // esi
  _DWORD **v21; // esi
  TESWorldSpace *v22; // [esp+24h] [ebp-24h]
  TESWorldSpace *WorldSpace; // [esp+28h] [ebp-20h]
  float v24; // [esp+28h] [ebp-20h]
  int **EquippedInstance; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]
  int **v27; // [esp+40h] [ebp-8h]
  EntryData *v28; // [esp+44h] [ebp-4h]
  TESObjectREFR *v29; // [esp+4Ch] [ebp+4h]

  v26 = (*(int (__usercall **)@<eax>(float *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*(_DWORD *)a1 + 0x184))( /*0x6397eb*/
          a1,
          a4,
          a3,
          a2);
  if ( !*((_DWORD *)a1 + 0xB) ) /*0x6397e3*/
    (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)a1 + 0x558))(a1, a5); /*0x6397fc*/
  v7 = 0; /*0x6397fe*/
  if ( *((_DWORD *)a1 + 0xB) ) /*0x639800*/
  {
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)a1 + 0xB) + 0x190))(*((_DWORD *)a1 + 0xB)) ) /*0x639810*/
      v7 = *((_DWORD ***)a1 + 0xB); /*0x639816*/
  }
  DistanceToPoint = TESObjectREFR::GetDistanceToPoint(a5, a1 + 0x4A); /*0x639827*/
  v9 = (double)Double_To_SInt32(DistanceToPoint); /*0x639835*/
  if ( v9 > flt_A56F84 ) /*0x639844*/
  {
    if ( *((_BYTE *)a1 + 0xD0) ) /*0x63984a*/
    {
      v11 = *(_DWORD *)a1; /*0x639856*/
      WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)a1 + 0xB)); /*0x639860*/
      DwordAtOffset40 = Shared_GetDwordAtOffset40(*((void **)a1 + 0xB)); /*0x639861*/
      return (unsigned __int8)(*(ExtraLight *(__thiscall **)(float *, TESObjectREFR *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))(v11 + 0x3DC))( /*0x63988e*/
                                a1,
                                a5,
                                *((_DWORD *)a1 + 0x4A),
                                *((_DWORD *)a1 + 0x4B),
                                *((_DWORD *)a1 + 0x4C),
                                DwordAtOffset40,
                                WorldSpace);
    }
    v10 = 0; /*0x639891*/
  }
  else
  {
    v10 = 1; /*0x639846*/
  }
  if ( !*((_BYTE *)a1 + 0xD0) && !v10 ) /*0x6398a4*/
  {
    v14 = 0x101; /*0x6398b0*/
    if ( LOBYTE(a5[2].member.childCell.GetChildCell) /*0x6398e4*/
      || (*(_DWORD *)(v26 + 0x1C) & 0x2000) != 0
      || ((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a5->vtbl[1].GetSleepState)(a5, 1)
      || (v15 = *(_BYTE *)(*((_DWORD *)a1 + 2) + 0x20), v15 == 0xF)
      || v15 == 0xC )
    {
      v14 = 0x201; /*0x6398e6*/
    }
    (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x238))(a1, a5, v14); /*0x6398f7*/
    v16 = *(_DWORD *)a1; /*0x6398ff*/
    v24 = flt_A417B4; /*0x639908*/
    v22 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)a1 + 0x48)); /*0x639916*/
    v17 = Shared_GetDwordAtOffset40(*((void **)a1 + 0x48)); /*0x639917*/
    return (unsigned __int8)(*(ExtraLight *(__thiscall **)(float *, TESObjectREFR *, float *, UInt32, TESWorldSpace *, _DWORD))(v16 + 0x414))( /*0x639930*/
                              a1,
                              a5,
                              a1 + 0x4A,
                              v17,
                              v22,
                              LODWORD(v24));
  }
  v28 = (EntryData *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xF0))(a1, 0); /*0x639941*/
  v29 = (TESObjectREFR *)(*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0xF8))(a1, 0); /*0x639956*/
  ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a5->member.baseExtraList); /*0x63995f*/
  EquippedInstance = 0; /*0x639965*/
  v27 = 0; /*0x639969*/
  if ( ContainerChanges ) /*0x63996d*/
  {
    EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0); /*0x63997f*/
    v27 = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0); /*0x639988*/
  }
  if ( !*((_BYTE *)a1 + 0xD0) ) /*0x63998c*/
    (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)a1 + 0x194))(a1, a5); /*0x6399a0*/
  if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0xF8))(a1, 1) ) /*0x6399ae*/
  {
    if ( ContainerEntryExtraData_HasWorn(*((EntryData **)a1 + 0x3C), 0) ) /*0x6399bc*/
    {
      sub_4853B0((EntryData *)v29, 0, 0, 0); /*0x6399cf*/
      v9 = sub_4DC8F0(a5, v9, a2, a3, (int)v7, 0); /*0x6399d8*/
    }
  }
  if ( (*(int (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0xF0))(a1, 1) /*0x6399f7*/
    && ContainerEntryExtraData_HasWorn(*((EntryData **)a1 + 0x3A), 0) )
  {
    v19 = v28; /*0x639a00*/
    sub_4853B0(v28, 0, 0, 0); /*0x639a0c*/
    UnequipLight(a5); /*0x639a13*/
  }
  else
  {
    v19 = v28; /*0x639a1a*/
  }
  if ( (*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)a1 + 0x304))(a1) ) /*0x639a28*/
    (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a1 + 0x300))(a1, 0); /*0x639a3a*/
  if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) == 4 /*0x639a60*/
    || (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 0x36C))(a1) == 9 )
  {
    ((void (__thiscall *)(TESObjectREFR *, int))a5->vtbl[1].super.Unk_2F)(a5, 1); /*0x639b4b*/
    (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1); /*0x639b5a*/
    (*(void (__thiscall **)(_DWORD *, _DWORD))(*v7[0x16] + 0x178))(v7[0x16], 0); /*0x639b69*/
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)a1 + 0x394))(a1, 1); /*0x639b77*/
    result = ((int (__thiscall *)(_DWORD **, TESObjectREFR *, int))(*v7)[0x90])(v7, a5, 1); /*0x639b87*/
    v21 = *((_DWORD ***)a1 + 0x3C); /*0x639b89*/
    if ( v21 ) /*0x639b91*/
    {
      if ( *v21 ) /*0x639b93*/
        BSSimpleList_PushFront(*v21, **EquippedInstance); /*0x639ba2*/
      return (unsigned __int8)EquipShield(a5, v9, a2, a3, v29->member.super.flags); /*0x639ba2*/
    }
    if ( !v29 ) /*0x639bc5*/
    {
      if ( v19 ) /*0x639bc9*/
      {
        result = ContainerEntryExtraData_HasWorn(v19, 0); /*0x639bcf*/
        if ( !result ) /*0x639bd6*/
        {
          if ( v27 ) /*0x639bde*/
          {
            if ( v19->extendData ) /*0x639be0*/
              BSSimpleList_PushFront(&v19->extendData->node.data, **v27); /*0x639beb*/
          }
          return (unsigned __int8)EquipLight(a5, v9, a2, a3, (int *)v19->type); /*0x639beb*/
        }
      }
    }
  }
  else
  {
    result = (*(int (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)a1 + 0x1B4))(a1, a5); /*0x639a71*/
    if ( result ) /*0x639a75*/
      return result; /*0x639a75*/
    ((void (__thiscall *)(TESObjectREFR *, int))a5->vtbl[1].super.Unk_2F)(a5, 1); /*0x639a87*/
    ((void (__thiscall *)(_DWORD **, TESObjectREFR *, int))(*v7)[0x90])(v7, a5, 1); /*0x639a97*/
    (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)a1 + 0x188))(a1, a5, 1); /*0x639aa6*/
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*v7[0x16] + 0x178))(v7[0x16], 0); /*0x639ab5*/
    v20 = *((_DWORD ***)a1 + 0x3C); /*0x639ab7*/
    if ( v20 ) /*0x639abf*/
    {
      if ( *v20 ) /*0x639ac1*/
        BSSimpleList_PushFront(*v20, **EquippedInstance); /*0x639ad0*/
      return (unsigned __int8)EquipShield(a5, v9, a2, a3, v29->member.super.flags); /*0x639aeb*/
    }
    if ( !v29 ) /*0x639af3*/
    {
      if ( v19 ) /*0x639afb*/
      {
        result = ContainerEntryExtraData_HasWorn(v19, 0); /*0x639b05*/
        if ( !result ) /*0x639b0c*/
        {
          if ( v27 ) /*0x639b18*/
          {
            if ( v19->extendData ) /*0x639b1a*/
              BSSimpleList_PushFront(&v19->extendData->node.data, **v27); /*0x639b25*/
          }
          return (unsigned __int8)EquipLight(a5, v9, a2, a3, (int *)v19->type); /*0x639bf0*/
        }
      }
    }
  }
  return result; /*0x639887*/
}
