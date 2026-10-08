void __userpurge sub_60FD20(
        TESObjectREFR *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double value@<st0>,
        TESForm *a5)
{
  TESForm *Owner; // ebp
  _DWORD *v7; // eax
  Crime *v8; // edi
  EntryData *v9; // eax
  char *Name; // eax
  TESForm *extendData; // esi
  TESObjectREFR *target; // ecx
  char v13; // al
  char v14; // al
  signed int v15; // eax
  char v16; // al
  TESTopic *Topic; // eax
  TESTopic *v18; // eax
  PlayerCharacter *criminal; // edi
  void *v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // esi
  TESForm *ActorBaseForm; // eax
  void (__thiscall *v24)(_BYTE *, int); // edx
  int v25; // [esp-4h] [ebp-170h]
  float v26; // [esp+0h] [ebp-16Ch]
  unsigned int v27; // [esp+18h] [ebp-154h]
  int v28; // [esp+1Ch] [ebp-150h]
  EntryData *v30; // [esp+24h] [ebp-148h]
  bool useBase; // [esp+28h] [ebp-144h]
  char Format[300]; // [esp+30h] [ebp-13Ch] BYREF
  unsigned int v33; // [esp+168h] [ebp-4h]

  if ( this == (TESObjectREFR *)reference ) /*0x60fd72*/
  {
    ExtraDataList_GetCrimeGold((ExtraDataList *)&a5[2].member.modlist.next); /*0x60fd79*/
    if ( value <= *(float *)&SrcStr ) /*0x60fd89*/
    {
      ++reference->miscStats[0x21]; /*0x60fd90*/
      value = (double)(int)g_iCrimeGoldStealHorse_Value.value; /*0x60fd97*/
      v26 = value; /*0x60fda0*/
      sub_4269E0((ExtraDataList *)&a5[2].member.modlist.next, v26); /*0x60fda3*/
      a5->vtbl->MarkAsModified(a5, 0x80); /*0x60fdb4*/
    }
LABEL_6:
    Owner = TESObjectREFR_GetOwner((TESObjectREFR *)a5); /*0x60fdd8*/
    v7 = (_DWORD *)FormHeapAlloc(0x30u); /*0x60fde3*/
    v33 = 0; /*0x60fdf3*/
    if ( v7 ) /*0x60fdfa*/
      v8 = (Crime *)sub_6070B0(v7, 5u, (int)a5, (int)this, 0, 0, (int)Owner); /*0x60fe0a*/
    else
      v8 = 0; /*0x60fe0e*/
    v33 = 0xFFFFFFFF; /*0x60fe16*/
    v9 = sub_67A290((int)&qword_B3BB2C[0x75], a2, a3, value, (int)v8); /*0x60fe21*/
    v27 = (unsigned int)v9; /*0x60fe28*/
    v30 = v9; /*0x60fe2c*/
    if ( v9 ) /*0x60fe30*/
    {
      while ( 1 ) /*0x60fea5*/
      {
        extendData = (TESForm *)v9->extendData; /*0x60fea5*/
        if ( !v9->extendData ) /*0x60fea5*/
          break; /*0x60fea5*/
        target = v8->target; /*0x60feaf*/
        useBase = 0; /*0x60feb4*/
        if ( extendData == (TESForm *)target || TESObjectREFR_GetOwner(target) == extendData ) /*0x60fec1*/
          useBase = 1; /*0x60fec3*/
        sub_4DB760((TESObjectREFR *)a5); /*0x60fecc*/
        if ( !v13 || (sub_4DB760((TESObjectREFR *)extendData), v14) ) /*0x60fede*/
        {
          *(float *)&v28 = (float)Crime_GetDispositionPenalty(v8, (Actor *)extendData, useBase); /*0x60ff05*/
          ((void (__thiscall *)(TESForm *, Actor *))extendData->vtbl[4].super.ClearComponentReferences)( /*0x60ff13*/
            extendData,
            v8->criminal);
          v15 = ((int (__thiscall *)(TESForm *, int, TESForm *))extendData->vtbl[2].DoPostFixup)( /*0x60ff25*/
                  extendData,
                  v28,
                  extendData);
          if ( sub_605E20(v15, v28) ) /*0x60ff2a*/
          {
            sub_4DB760(this); /*0x60ff37*/
            if ( !v16 ) /*0x60ff3e*/
            {
              unk_B361C4 = (int)Owner; /*0x60ff47*/
              Crime_AddWitness(v8, (Actor *)this); /*0x60ff4d*/
              extendData[9].member.refID = (UInt32)v8->criminal; /*0x60ff59*/
              Topic = TESTopic::GetTopic(DialogueType_Combat, 3); /*0x60ff5f*/
              (*(void (__thiscall **)(Data *, TESForm *, TESTopic *, _DWORD, _DWORD, int))(extendData[3].member.modlist.data->errorState /*0x60ff78*/
                                                                                         + 0x1A4))(
                extendData[3].member.modlist.data,
                extendData,
                Topic,
                0,
                0,
                1);
              unk_B361C4 = 0; /*0x60ff7a*/
            }
            ((void (__thiscall *)(TESForm *, Crime *, _DWORD, int, _DWORD))extendData->vtbl[3].Unk_1F)( /*0x60ff8f*/
              extendData,
              v8,
              0,
              1,
              0);
          }
          else
          {
            unk_B361C4 = (int)Owner; /*0x60ff93*/
            extendData[9].member.refID = (UInt32)v8->criminal; /*0x60ffa0*/
            v18 = TESTopic::GetTopic(DialogueType_Combat, 0xE); /*0x60ffa6*/
            (*(void (__thiscall **)(Data *, TESForm *, TESTopic *, _DWORD, _DWORD, int))(extendData[3].member.modlist.data->errorState /*0x60ffbf*/
                                                                                       + 0x1A4))(
              extendData[3].member.modlist.data,
              extendData,
              v18,
              0,
              0,
              1);
            unk_B361C4 = 0; /*0x60ffc1*/
          }
        }
        v27 = *(_DWORD *)(v27 + 4); /*0x60ffd0*/
        if ( !v27 ) /*0x60ffd4*/
          break; /*0x60ffd4*/
        v9 = (EntryData *)v27; /*0x60fea1*/
      }
      BSSimpleList_Clear(v30); /*0x60ffde*/
      FormHeapFree((unsigned int)v30); /*0x60ffe8*/
      if ( Crime_GetWitnessCount(v8) ) /*0x60fff2*/
      {
        ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], v8); /*0x61001e*/
        criminal = (PlayerCharacter *)v8->criminal; /*0x610023*/
        v20 = OblivionDynamicCast( /*0x610033*/
                Owner,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESNPC `RTTI Type Descriptor',
                0);
        if ( criminal == reference ) /*0x610041*/
        {
          if ( v20 ) /*0x610049*/
          {
            TESActorBaseData_SetSharedPlayerFactionFlags(2); /*0x6100a5*/
          }
          else
          {
            v21 = OblivionDynamicCast( /*0x610058*/
                    Owner,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESFaction `RTTI Type Descriptor',
                    0);
            v22 = v21; /*0x61005d*/
            if ( v21 ) /*0x610064*/
            {
              v25 = (int)v21; /*0x610072*/
              ActorBaseForm = Actor_GetActorBaseForm((Actor *)reference, 0); /*0x610074*/
              if ( TESActorBaseData_GetFactionRank((int *)&ActorBaseForm[1].member.refID, v25, 1) != 0xFFFFFFFF ) /*0x610086*/
              {
                v24 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v22 + 0x40); /*0x61008e*/
                v22[0x34] |= 0x10u; /*0x610091*/
                v24(v22, 4); /*0x610099*/
              }
            }
          }
        }
      }
      else if ( v8 ) /*0x60fffd*/
      {
        Crime_Destructor(v8); /*0x610005*/
        FormHeapFree((unsigned int)v8); /*0x61000b*/
      }
    }
    else
    {
      if ( v8 ) /*0x60fe34*/
      {
        Crime_Destructor(v8); /*0x60fe38*/
        FormHeapFree((unsigned int)v8); /*0x60fe3e*/
      }
      Name = TESObjectREFR_GetName(this); /*0x60fe48*/
      _sprintf(Format, "%s got away with stealing horse", Name); /*0x60fe58*/
      Interface_ConsolePrint(Format); /*0x60fe62*/
    }
    FormHeapFree(v27); /*0x60fe6f*/
    return; /*0x60fe6f*/
  }
  if ( ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, int, double@<st0>, double@<st1>, double@<st2>))this->vtbl[1].Unk_37)( /*0x60fdcb*/
         this,
         0x1F,
         value,
         a3,
         a2) != 0x64
    || !Actor_IsSneaking(this) )
  {
    goto LABEL_6; /*0x60fdd2*/
  }
}
