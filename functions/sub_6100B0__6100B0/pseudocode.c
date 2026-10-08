// RadiantAI: final theft crime side-effect path. Builds crime type 0 record, finds witnesses, applies disposition/bounty/script events, and stores event in ActorProcessManager if witnessed.
void __userpurge sub_6100B0(
        TESObjectREFR *this@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        TESObjectREFR *a4,
        int a5,
        int a6,
        int a7,
        BSExtraDataVtbl *a8)
{
  BSExtraDataVtbl *v8; // ebp
  TESObjectREFR *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  unsigned int v13; // edi
  double WeightForForm_Fast; // st5
  double v15; // st7
  EntryData *v16; // eax
  const char *value; // edi
  char *Name; // eax
  tListVoid *extendData; // esi
  TESObjectREFR *v20; // ecx
  char v21; // al
  char v22; // al
  signed int v23; // eax
  char v24; // al
  TESTopic *Topic; // eax
  TESTopic *v26; // ebp
  PlayerCharacter *v27; // edi
  void *v28; // eax
  _BYTE *v29; // eax
  _BYTE *v30; // esi
  TESForm *ActorBaseForm; // eax
  void (__thiscall *v32)(_BYTE *, int); // eax
  int v33; // [esp+Ch] [ebp-174h]
  const char *v34; // [esp+10h] [ebp-170h]
  bool v35; // [esp+14h] [ebp-16Ch]
  float v36; // [esp+28h] [ebp-158h]
  float v37; // [esp+28h] [ebp-158h]
  EntryData *v38; // [esp+28h] [ebp-158h]
  int v39; // [esp+2Ch] [ebp-154h]
  unsigned int v40; // [esp+30h] [ebp-150h]
  TESForm *Owner; // [esp+34h] [ebp-14Ch]
  bool useBase; // [esp+3Ch] [ebp-144h]
  char Format[300]; // [esp+44h] [ebp-13Ch] BYREF
  int v44; // [esp+17Ch] [ebp-4h]

  v8 = a8; /*0x6100f7*/
  if ( this == (TESObjectREFR *)reference ) /*0x610111*/
  {
    reference->miscStats[0x1C] += a6; /*0x61011a*/
  }
  else if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x1F) == 0x64 ) /*0x610131*/
  {
    return; /*0x610131*/
  }
  v10 = (TESObjectREFR *)OblivionDynamicCast( /*0x610146*/
                           a4,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  Owner = (TESForm *)a8; /*0x610150*/
  if ( !a8 ) /*0x610154*/
  {
    if ( v10 ) /*0x610158*/
      Owner = TESObjectREFR_GetOwner(v10); /*0x610161*/
  }
  if ( (Actor::GetRaceIfNPC((Actor *)this)->isPlayable & 1) != 0 ) /*0x610170*/
  {
    v11 = (_DWORD *)FormHeapAlloc(0x30u); /*0x610178*/
    if ( a5 ) /*0x610186*/
    {
      v44 = 0; /*0x61018a*/
      if ( v11 ) /*0x610195*/
      {
        v12 = sub_6070B0(v11, 0, (int)a4, (int)this, a5, a6, (int)a8); /*0x6101a7*/
LABEL_14:
        v13 = (unsigned int)v12; /*0x6101d7*/
        v44 = 0xFFFFFFFF; /*0x6101da*/
        WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast(a5); /*0x6101e5*/
        v36 = a3; /*0x6101ea*/
        v37 = unk_B36C98 * v36; /*0x610203*/
        v15 = ((double (__thiscall *)(_DWORD, _DWORD))*(_DWORD *)(**((_DWORD **)this + 0x16) + 0x354))( /*0x61020e*/
                *((_DWORD *)this + 0x16),
                LODWORD(v37));
        v16 = sub_67A290((int)&qword_B3BB2C[0x75], WeightForForm_Fast, a2, v15, v13); /*0x610216*/
        v40 = (unsigned int)v16; /*0x61021d*/
        v38 = v16; /*0x610221*/
        if ( v16 ) /*0x610225*/
        {
          while ( 1 ) /*0x61027a*/
          {
            extendData = v16->extendData; /*0x61027a*/
            if ( !v16->extendData ) /*0x61027a*/
              break; /*0x61027a*/
            v20 = *(TESObjectREFR **)(v13 + 8); /*0x610284*/
            useBase = 0; /*0x610289*/
            if ( extendData == (tListVoid *)v20 || TESObjectREFR_IsOwnedBy(v20, (TESObjectREFR *)extendData, 1) ) /*0x610293*/
              useBase = 1; /*0x61029c*/
            sub_4DB760(a4); /*0x6102a5*/
            if ( !v21 || (sub_4DB760((TESObjectREFR *)extendData), v22) ) /*0x6102b7*/
            {
              if ( !(*((unsigned __int8 (__thiscall **)(tListVoid *))extendData->node.data + 0xD5))(extendData) ) /*0x6102c7*/
              {
                *(float *)&v39 = (float)Crime_GetDispositionPenalty((Crime *)v13, (Actor *)extendData, useBase); /*0x6102f2*/
                (*((void (__usercall **)(tListVoid *@<ecx>, _DWORD, double@<st0>, double@<st1>))extendData->node.data /*0x610300*/
                 + 0xDD))(
                  extendData,
                  *(_DWORD *)(v13 + 0xC),
                  v15,
                  a2);
                v23 = (*((int (__thiscall **)(tListVoid *, TESObjectREFR *, tListVoid *))extendData->node.data + 0x89))( /*0x61030e*/
                        extendData,
                        this,
                        extendData);
                if ( sub_605E20(v23, v39) ) /*0x610313*/
                {
                  sub_4DB760(this); /*0x610322*/
                  if ( !v24 ) /*0x610329*/
                  {
                    unk_B361C4 = (int)Owner; /*0x61032f*/
                    extendData[0x1C].node.next = *(NodeVoid **)(v13 + 0xC); /*0x61033b*/
                    Topic = TESTopic::GetTopic(DialogueType_Combat, 3); /*0x610341*/
                    (*(void (__thiscall **)(void *, tListVoid *, TESTopic *, _DWORD, _DWORD, int))(*(_DWORD *)extendData[0xB].node.data /*0x61035c*/
                                                                                                 + 0x1A4))(
                      extendData[0xB].node.data,
                      extendData,
                      Topic,
                      0,
                      0,
                      1);
                    Crime_AddWitness((Crime *)v13, (Actor *)this); /*0x610361*/
                    unk_B361C4 = 0; /*0x610366*/
                  }
                  Script_AddEventToExtraScript(*(_DWORD *)(v13 + 0xC), &extendData[8].node.next, 0x10000); /*0x61037d*/
                  v15 = Script_AddEventToExtraScript(*(_DWORD *)(v13 + 8), &extendData[8].node.next, 0x400000); /*0x61038c*/
                  (*((void (__thiscall **)(tListVoid *, unsigned int, _DWORD, int, _DWORD))extendData->node.data + 0xC4))( /*0x6103a5*/
                    extendData,
                    v13,
                    0,
                    1,
                    0);
                }
                else
                {
                  unk_B361C4 = (int)Owner; /*0x6103ad*/
                  extendData[0x1C].node.next = *(NodeVoid **)(v13 + 0xC); /*0x6103b9*/
                  v26 = TESTopic::GetTopic(DialogueType_Combat, 0xE); /*0x6103c4*/
                  if ( *(_DWORD *)(v13 + 0xC) /*0x6103d3*/
                    && sub_5EA050((TESObjectREFR *)extendData, *(TESObjectREFR **)(v13 + 0xC), v35) )
                  {
                    (*((void (__thiscall **)(tListVoid *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))extendData->node.data /*0x6103f4*/
                     + 0xCB))(
                      extendData,
                      *(_DWORD *)(v13 + 0xC),
                      0,
                      0,
                      0,
                      0,
                      1);
                  }
                  else
                  {
                    (*(void (__thiscall **)(void *, tListVoid *, TESTopic *, _DWORD, _DWORD, int))(*(_DWORD *)extendData[0xB].node.data /*0x61040b*/
                                                                                                 + 0x1A4))(
                      extendData[0xB].node.data,
                      extendData,
                      v26,
                      0,
                      0,
                      1);
                  }
                  unk_B361C4 = 0; /*0x61040d*/
                }
                v8 = a8; /*0x610417*/
              }
            }
            v40 = *(_DWORD *)(v40 + 4); /*0x610424*/
            if ( !v40 ) /*0x610428*/
              break; /*0x610428*/
            v16 = (EntryData *)v40; /*0x610276*/
          }
          BSSimpleList_Clear(v38); /*0x610432*/
          FormHeapFree((unsigned int)v38); /*0x61043c*/
          if ( Crime_GetWitnessCount((Crime *)v13) ) /*0x610446*/
          {
            ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], (Crime *)v13); /*0x61046f*/
            v27 = *(PlayerCharacter **)(v13 + 0xC); /*0x610474*/
            v28 = OblivionDynamicCast( /*0x610486*/
                    v8,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
            if ( v27 == reference ) /*0x610494*/
            {
              if ( v28 ) /*0x610498*/
              {
                TESActorBaseData_SetSharedPlayerFactionFlags(2); /*0x6104ea*/
              }
              else
              {
                v29 = OblivionDynamicCast( /*0x6104a7*/
                        v8,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFaction `RTTI Type Descriptor',
                        0);
                v30 = v29; /*0x6104ac*/
                if ( v29 ) /*0x6104b3*/
                {
                  v33 = (int)v29; /*0x6104bd*/
                  ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x6104c0*/
                  if ( TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, v33, 1) != 0xFFFFFFFF ) /*0x6104d2*/
                  {
                    v32 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v30 + 0x40); /*0x6104d6*/
                    v30[0x34] |= 0x10u; /*0x6104d9*/
                    v32(v30, 4); /*0x6104e1*/
                  }
                }
              }
            }
          }
          else if ( v13 ) /*0x610451*/
          {
            Crime_Destructor((Crime *)v13); /*0x610459*/
            FormHeapFree(v13); /*0x61045f*/
          }
        }
        else
        {
          if ( v13 ) /*0x610229*/
          {
            Crime_Destructor((Crime *)v13); /*0x61022d*/
            FormHeapFree(v13); /*0x610233*/
          }
          if ( a5 ) /*0x61023d*/
          {
            value = stru_B38EA8.value; /*0x61024b*/
            v34 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>, double@<st1>))(*(_DWORD *)a5 + 0xD0))( /*0x610255*/
                                  a5,
                                  v15,
                                  a2);
            Name = TESObjectREFR_GetName(this); /*0x610259*/
            _sprintf(Format, "%s %s %s", Name, value, v34); /*0x610269*/
          }
          else
          {
            Format[0] = 0; /*0x6104f1*/
          }
          Interface_ConsolePrint(Format); /*0x6104fb*/
        }
        FormHeapFree(v40); /*0x610508*/
        return; /*0x610508*/
      }
    }
    else
    {
      v44 = 1; /*0x6101b0*/
      if ( v11 ) /*0x6101bb*/
      {
        v12 = sub_6070B0(v11, 0, (int)a4, (int)this, 0, a7, (int)a8); /*0x6101ce*/
        goto LABEL_14; /*0x6101d3*/
      }
    }
    v12 = 0; /*0x6101d5*/
    goto LABEL_14; /*0x6101d5*/
  }
}
