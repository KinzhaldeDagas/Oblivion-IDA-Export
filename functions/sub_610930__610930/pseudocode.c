// RadiantAI: attack crime side-effect path. Builds crime type 3 record and witness response.
void __userpurge sub_610930(
        TESObjectREFR *this@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        char a6)
{
  TESObjectREFR *v6; // edi
  Crime *v7; // ebx
  TESObjectREFR *v8; // ebp
  PlayerCharacter *v9; // esi
  _DWORD *v10; // eax
  PlayerCharacter *v11; // eax
  bool v12; // zf
  EntryData *v13; // esi
  EntryData *v14; // eax
  int extendData; // esi
  char v16; // al
  char v17; // al
  TESObjectREFR *target; // ecx
  signed int v19; // eax
  TESTopic *Topic; // eax
  char v21; // al
  TESTopic *v22; // edi
  _DWORD *v24; // edi
  int **v25; // ebp
  char *v26; // eax
  char *v27; // eax
  float v28; // [esp+1Ah] [ebp-2A0h]
  char *v29; // [esp+1Ah] [ebp-2A0h]
  char *Name; // [esp+1Ah] [ebp-2A0h]
  bool v31; // [esp+1Eh] [ebp-29Ch]
  char v32; // [esp+35h] [ebp-285h]
  EntryData *v33; // [esp+36h] [ebp-284h]
  int DispositionPenalty; // [esp+3Ah] [ebp-280h]
  _DWORD *v37; // [esp+3Ah] [ebp-280h]
  EntryData *v38; // [esp+46h] [ebp-274h]
  bool useBase; // [esp+4Ah] [ebp-270h]
  char Format[300]; // [esp+52h] [ebp-268h] BYREF
  char v42[300]; // [esp+17Eh] [ebp-13Ch] BYREF
  unsigned int v43; // [esp+2B6h] [ebp-4h]

  v6 = a5; /*0x61096b*/
  v7 = 0; /*0x610972*/
  v8 = this; /*0x61097f*/
  v9 = (PlayerCharacter *)OblivionDynamicCast( /*0x610995*/
                            a5,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  if ( (Actor::GetRaceIfNPC((Actor *)v8)->isPlayable & 1) == 0 && !Actor_IsGuardClass((Actor *)v8) /*0x610a6a*/
    || !PlayerCharacter_IsPlayerInCombat((TESObjectREFR ***)reference, 0)
    && v9 == reference
    && PlayerCharacter::IsJailed(reference)
    || ((unsigned __int8 (__thiscall *)(TESObjectREFR *))v8->vtbl[2].super.super.ClearComponentReferences)(v8)
    || !Actor_IsNPC((Actor *)v9)
    || (Actor::GetRaceIfNPC((Actor *)v9)->isPlayable & 1) == 0
    || Actor_IsGuardClass((Actor *)v9)
    || sub_5E8A90(v8) && v9 && sub_5E8A90(v9)
    || Actor_IsGuardClass((Actor *)v9)
    || v9
    && v9 != reference
    && v9->vtbl->super.GetActorValue((Actor *)v9, kActorVal_Sneak) == 0x64
    && Actor_IsSneaking(v9) )
  {
    return; /*0x610a71*/
  }
  v10 = (_DWORD *)FormHeapAlloc(0x30u); /*0x610a79*/
  v43 = 0; /*0x610a87*/
  if ( v10 ) /*0x610a8e*/
    v7 = (Crime *)sub_6070B0(v10, 3u, (int)v8, (int)a5, 0, 0, 0); /*0x610a9e*/
  v11 = reference; /*0x610aa0*/
  v12 = v7->criminal == (Actor *)reference; /*0x610aa5*/
  v43 = 0xFFFFFFFF; /*0x610aa8*/
  if ( v12 ) /*0x610ab3*/
    ++v11->miscStats[0x1F]; /*0x610ab5*/
  v13 = sub_67A290((int)&qword_B3BB2C[0x75], a2, a3, a4, (int)v7); /*0x610ac7*/
  v33 = v13; /*0x610acb*/
  if ( !v13 && Actor_IsGuardClass((Actor *)v8) ) /*0x610ad3*/
  {
    v14 = (EntryData *)FormHeapAlloc(8u); /*0x610ade*/
    if ( v14 ) /*0x610ae8*/
    {
      v14->extendData = 0; /*0x610aea*/
      v14->countDelta = 0; /*0x610aec*/
    }
    else
    {
      v14 = 0; /*0x610af1*/
    }
    v33 = v14; /*0x610af6*/
    BSSimpleList_PushFront(v14, (int)v8); /*0x610afa*/
    v13 = v33; /*0x610aff*/
  }
  v38 = v13; /*0x610b05*/
  if ( !v13 ) /*0x610b09*/
  {
    Crime_Destructor(v7); /*0x610e19*/
    FormHeapFree((unsigned int)v7); /*0x610e1f*/
    Name = TESObjectREFR_GetName(a5); /*0x610e2e*/
    v27 = TESObjectREFR_GetName(v8); /*0x610e31*/
    _sprintf(v42, "%s got away with attacking %s", v27, Name); /*0x610e44*/
    Interface_ConsolePrint(v42); /*0x610e51*/
    goto LABEL_72; /*0x610e51*/
  }
  v32 = 0; /*0x610b0f*/
  while ( 1 ) /*0x610b1a*/
  {
    extendData = (int)v13->extendData; /*0x610b1a*/
    if ( !extendData ) /*0x610b1e*/
      break; /*0x610b1e*/
    if ( (*(_DWORD *)(extendData + 8) & 0x800) == 0 /*0x610b3a*/
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)extendData + 0x334))(extendData, 1) )
    {
      sub_4DB760(v8); /*0x610b46*/
      if ( v16 ) /*0x610b4d*/
      {
        sub_4DB760((TESObjectREFR *)extendData); /*0x610b51*/
        if ( !v17 ) /*0x610b58*/
        {
          if ( !v32 ) /*0x610cea*/
            goto LABEL_66; /*0x610cea*/
          goto LABEL_53; /*0x610cea*/
        }
      }
      target = v7->target; /*0x610b5e*/
      useBase = 0; /*0x610b63*/
      if ( (TESObjectREFR *)extendData == target || TESObjectREFR_GetOwner(target) == (TESForm *)extendData ) /*0x610b71*/
        useBase = 1; /*0x610b73*/
      if ( a6 || !Actor_IsGuardClass((Actor *)extendData) ) /*0x610b84*/
      {
        DispositionPenalty = Crime_GetDispositionPenalty(v7, (Actor *)extendData, useBase); /*0x610ba2*/
        __asm { fild    dword ptr [esp+29Ch+var_280] } /*0x610ba6*/
        __asm
        {
          fstp    dword ptr [esp+2A0h+var_280]
          fld     dword ptr [esp+2A0h+var_280]
          fstp    [esp+2A0h+var_2A0]
        }
        (*(void (__thiscall **)(int, Actor *, _DWORD))(*(_DWORD *)extendData + 0x374))( /*0x610bbc*/
          extendData,
          v7->criminal,
          LODWORD(v28));
      }
      if ( !Actor_IsGuardClass((Actor *)extendData) ) /*0x610bc0*/
      {
        v19 = (*(int (__thiscall **)(int, Actor *))(*(_DWORD *)extendData + 0x224))(extendData, v7->criminal); /*0x610bd8*/
        if ( !sub_605E20(v19, extendData) ) /*0x610bdd*/
        {
          unk_B361C4 = (int)v8->vtbl->GetBaseForm(v8); /*0x610bf3*/
          *(_DWORD *)(extendData + 0xE4) = v7->criminal; /*0x610bff*/
          Topic = TESTopic::GetTopic(DialogueType_Combat, 0xB); /*0x610c05*/
          (*(void (__thiscall **)(_DWORD, int, TESTopic *, _DWORD, _DWORD, int))(**(_DWORD **)(extendData + 0x58) + 0x1A4))( /*0x610c20*/
            *(_DWORD *)(extendData + 0x58),
            extendData,
            Topic,
            0,
            0,
            1);
          unk_B361C4 = 0; /*0x610c22*/
          v32 = 1; /*0x610c2c*/
LABEL_53:
          if ( v8 != (TESObjectREFR *)extendData /*0x610d16*/
            || (TESObjectREFR *)extendData != v6
            && (!Actor::GetCurrentPackage((Actor *)extendData)
             || (Actor::GetCurrentPackage((Actor *)extendData)->members.packageFlags & 0x1000) == 0) )
          {
            TesObjectREF_GetDistance(v6, (TESObjectREFR *)extendData, 0); /*0x610d21*/
            __asm { fstp    [esp+29Ch+var_280] } /*0x610d26*/
            _EAX = GameSetting_GetSafeFloatPointer(&unk_B36B08); /*0x610d2f*/
            __asm /*0x610d34*/
            {
              fld     dword ptr [eax]
              fcomp   [esp+29Ch+var_280]
              fnstsw  ax
            }
            if ( (BYTE1(_EAX) & 1) == 0 ) /*0x610d3f*/
            {
              v24 = sub_67CF50((int ***)&qword_B3BB2C[0xA1], 0xC, (int)v6); /*0x610d4e*/
              v37 = v24; /*0x610d52*/
              if ( v24 ) /*0x610d56*/
              {
                do /*0x610d89*/
                {
                  v25 = (int **)*v24; /*0x610d58*/
                  if ( !*v24 ) /*0x610d58*/
                    break; /*0x610d5c*/
                  v24 = (_DWORD *)v24[1]; /*0x610d5e*/
                  if ( sub_67B710(v25) ) /*0x610d63*/
                  {
                    if ( !sub_67B6B0(v25, extendData, 0) ) /*0x610d71*/
                      (*(void (__thiscall **)(int, int **))(*(_DWORD *)extendData + 0x314))(extendData, v25); /*0x610d85*/
                  }
                }
                while ( v24 ); /*0x610d89*/
                v8 = this; /*0x610d8b*/
              }
              BSSimpleList_Clear(v37); /*0x610d93*/
              FormHeapFree((unsigned int)v37); /*0x610d9d*/
              v6 = a5; /*0x610da2*/
            }
          }
          goto LABEL_66; /*0x610da2*/
        }
      }
      sub_4DB760(v8); /*0x610c38*/
      if ( !v21 ) /*0x610c3f*/
      {
        unk_B361C4 = (int)v8->vtbl->GetBaseForm(v8); /*0x610c52*/
        *(_DWORD *)(extendData + 0xE4) = v7->criminal; /*0x610c5e*/
        v22 = TESTopic::GetTopic(DialogueType_Combat, 8); /*0x610c69*/
        if ( v7->criminal && sub_5EA050((TESObjectREFR *)extendData, (TESObjectREFR *)v7->criminal, v31) ) /*0x610c78*/
          (*(void (__thiscall **)(int, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)extendData + 0x32C))( /*0x610c99*/
            extendData,
            v7->criminal,
            0,
            0,
            0,
            0,
            1);
        else
          (*(void (__thiscall **)(_DWORD, int, TESTopic *, _DWORD, _DWORD, int))(**(_DWORD **)(extendData + 0x58) + 0x1A4))( /*0x610cb0*/
            *(_DWORD *)(extendData + 0x58),
            extendData,
            v22,
            0,
            0,
            1);
        Crime_AddWitness(v7, (Actor *)v8); /*0x610cb5*/
        v6 = a5; /*0x610cba*/
        unk_B361C4 = 0; /*0x610cbe*/
      }
      (*(void (__thiscall **)(int, Crime *, _DWORD, int, _DWORD))(*(_DWORD *)extendData + 0x310))( /*0x610cd9*/
        extendData,
        v7,
        0,
        1,
        0);
      v32 = 0; /*0x610cdb*/
    }
LABEL_66:
    v33 = (EntryData *)v33->countDelta; /*0x610da9*/
    if ( !v33 ) /*0x610db6*/
      break; /*0x610db6*/
    v13 = v33; /*0x610b16*/
  }
  if ( Crime_GetWitnessCount(v7) ) /*0x610dbe*/
  {
    ActorProcessManager_AddCrime((ActorProcessManager *)&qword_B3BB2C[0x75], v7); /*0x610e0c*/
  }
  else
  {
    Crime_Destructor(v7); /*0x610dc9*/
    FormHeapFree((unsigned int)v7); /*0x610dcf*/
    v29 = TESObjectREFR_GetName(v6); /*0x610dde*/
    v26 = TESObjectREFR_GetName(v8); /*0x610de1*/
    _sprintf(Format, "%s attacking %s no one cared", v26, v29); /*0x610df1*/
    Interface_ConsolePrint(Format); /*0x610dfb*/
  }
  v13 = v33; /*0x610e00*/
LABEL_72:
  if ( v38 ) /*0x610e5f*/
  {
    BSSimpleList_Clear(v38); /*0x610e63*/
    FormHeapFree((unsigned int)v38); /*0x610e69*/
  }
  FormHeapFree((unsigned int)v13); /*0x610e72*/
}
