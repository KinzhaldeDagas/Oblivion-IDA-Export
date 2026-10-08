// RadiantAI: trespass crime side-effect path. Builds crime type 2 record.
unsigned int __userpurge sub_6113B0@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        int a6,
        unsigned int number)
{
  _DWORD *v8; // eax
  Crime *CrimeByNumber; // eax
  unsigned int v10; // edi
  Crime *v11; // eax
  unsigned int v12; // esi
  EntryData *v13; // ebp
  TESForm *extendData; // esi
  TESObjectREFR *v15; // ecx
  char v16; // al
  char v17; // al
  signed int v18; // eax
  char v19; // al
  TESTopic *Topic; // ebp
  char *Name; // eax
  bool v23; // [esp+Ch] [ebp-168h]
  EntryData *countDelta; // [esp+20h] [ebp-154h]
  float DispositionPenalty; // [esp+24h] [ebp-150h]
  bool useBase; // [esp+28h] [ebp-14Ch]
  EntryData *v27; // [esp+2Ch] [ebp-148h]
  char Format[300]; // [esp+38h] [ebp-13Ch] BYREF
  unsigned int v29; // [esp+170h] [ebp-4h]

  if ( (Actor::GetRaceIfNPC((Actor *)a1)->isPlayable & 1) != 0 )
  {
    if ( number == 0xFFFFFFFF )
    {
      v8 = (_DWORD *)FormHeapAlloc(0x30u); /*0x611420*/
      v29 = 0; /*0x61142e*/
      CrimeByNumber = v8 ? (Crime *)sub_6070B0(v8, 2u, (int)a5, (int)a1, 0, 0, a6) : 0;
      v29 = 0xFFFFFFFF; /*0x61144b*/
    }
    else
    {
      CrimeByNumber = ActorProcessManager_FindCrimeByNumber( /*0x61146b*/
                        (ActorProcessManager *)&qword_B3BB2C[0x75],
                        kCrime_Trespass,
                        number);
    }
    v10 = (unsigned int)CrimeByNumber; /*0x611470*/
    if ( CrimeByNumber ) /*0x611474*/
    {
      if ( a1 != (TESObjectREFR *)reference /*0x6114db*/
        && ((int (__thiscall *)(TESObjectREFR *, int))a1->vtbl[1].Unk_37)(a1, 0x1F) == 0x64
        && Actor_IsSneaking(a1)
        || (v13 = sub_67A290((int)&qword_B3BB2C[0x75], a2, a3, a4, v10), countDelta = v13, (v27 = v13) == 0) )
      {
        v11 = ActorProcessManager_FindCrimeByNumber((ActorProcessManager *)&qword_B3BB2C[0x75], kCrime_Trespass, number); /*0x6114a8*/
      }
      else
      {
        do /*0x611640*/
        {
          extendData = (TESForm *)v13->extendData; /*0x6114e0*/
          if ( !v13->extendData ) /*0x6114e0*/
            break; /*0x6114e5*/
          v15 = *(TESObjectREFR **)(v10 + 8); /*0x6114eb*/
          useBase = 0; /*0x6114f0*/
          if ( extendData == (TESForm *)v15 || TESObjectREFR_GetOwner(v15) == extendData ) /*0x6114fe*/
            useBase = 1; /*0x611500*/
          sub_4DB760(a5); /*0x611509*/
          if ( v16 ) /*0x611510*/
          {
            sub_4DB760((TESObjectREFR *)extendData); /*0x611514*/
            if ( !v17 ) /*0x61151b*/
              continue; /*0x61151b*/
          }
          DispositionPenalty = (float)Crime_GetDispositionPenalty((Crime *)v10, (Actor *)extendData, useBase); /*0x611538*/
          if ( !Actor_IsGuardClass((Actor *)extendData) ) /*0x61153c*/
            ((void (__thiscall *)(TESForm *, _DWORD, float))extendData->vtbl[4].super.ClearComponentReferences)( /*0x61155b*/
              extendData,
              *(_DWORD *)(v10 + 0xC),
              COERCE_FLOAT(LODWORD(DispositionPenalty)));
          v18 = ((int (__thiscall *)(TESForm *, TESObjectREFR *))extendData->vtbl[2].DoPostFixup)(extendData, a1); /*0x611569*/
          if ( sub_605E20(v18, (int)extendData) ) /*0x61156e*/
          {
            ((void (__thiscall *)(TESForm *, unsigned int, _DWORD, int, _DWORD))extendData->vtbl[3].Unk_1F)( /*0x611588*/
              extendData,
              v10,
              0,
              1,
              0);
            sub_4DB760(a1); /*0x61158c*/
            if ( !v19 ) /*0x611593*/
              Crime_AddWitness((Crime *)v10, (Actor *)a1); /*0x611598*/
          }
          else
          {
            unk_B361C4 = a6; /*0x6115a3*/
            extendData[9].member.refID = *(_DWORD *)(v10 + 0xC); /*0x6115af*/
            Topic = TESTopic::GetTopic(DialogueType_Combat, 0xF); /*0x6115ba*/
            if ( *(_DWORD *)(v10 + 0xC) && sub_5EA050((TESObjectREFR *)extendData, *(TESObjectREFR **)(v10 + 0xC), v23) ) /*0x6115c9*/
              ((void (__thiscall *)(TESForm *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))extendData->vtbl[3].Unk_26)( /*0x6115ea*/
                extendData,
                *(_DWORD *)(v10 + 0xC),
                0,
                0,
                0,
                0,
                1);
            else
              (*(void (__thiscall **)(Data *, TESForm *, TESTopic *, _DWORD, _DWORD, int))(extendData[3].member.modlist.data->errorState /*0x611601*/
                                                                                         + 0x1A4))(
                extendData[3].member.modlist.data,
                extendData,
                Topic,
                0,
                0,
                1);
            v13 = countDelta; /*0x611603*/
            unk_B361C4 = 0; /*0x611607*/
          }
          Name = TESObjectREFR_GetName((TESObjectREFR *)extendData); /*0x611613*/
          _sprintf(Format, "alarm Trespass sent to  %s ", Name); /*0x611623*/
          Interface_ConsolePrint(Format); /*0x61162d*/
          countDelta = (EntryData *)v13->countDelta; /*0x61163a*/
          v13 = countDelta; /*0x61163e*/
        }
        while ( countDelta ); /*0x611640*/
        BSSimpleList_Clear(v27); /*0x61164a*/
        FormHeapFree((unsigned int)v27); /*0x611654*/
        if ( Crime_GetWitnessCount((Crime *)v10) ) /*0x61165e*/
        {
          ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], (Crime *)v10); /*0x61167a*/
          FormHeapFree((unsigned int)v13); /*0x611680*/
          return *(_DWORD *)(v10 + 0x28); /*0x61168b*/
        }
        v11 = ActorProcessManager_FindCrimeByNumber((ActorProcessManager *)&qword_B3BB2C[0x75], kCrime_Trespass, number); /*0x611674*/
      }
      v12 = (unsigned int)v11; /*0x6114ad*/
      if ( v11 == (Crime *)v10 ) /*0x6114b1*/
      {
        if ( v11 ) /*0x61168f*/
        {
          Crime_Destructor(v11); /*0x611693*/
          FormHeapFree(v12); /*0x611699*/
        }
      }
      else
      {
        Crime_Destructor((Crime *)v10); /*0x6114b9*/
        FormHeapFree(v10); /*0x6114bf*/
      }
    }
  }
  return 0xFFFFFFFF; /*0x6116a4*/
}
