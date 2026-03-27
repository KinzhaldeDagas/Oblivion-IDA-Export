void __userpurge sub_610930(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, TESObjectREFR *a4, char a5)
{
  TESObjectREFR *v5; // edi
  unsigned int *v6; // ebx
  TESObjectREFR *v7; // ebp
  PlayerCharacter *v8; // esi
  _DWORD *v9; // eax
  PlayerCharacter *v10; // eax
  bool v11; // zf
  _DWORD *v12; // esi
  _DWORD *v13; // eax
  int v14; // esi
  char v15; // al
  char v16; // al
  TESObjectREFR *v17; // ecx
  int v18; // eax
  signed int v19; // eax
  int v20; // eax
  char v21; // al
  int v22; // edi
  _DWORD *v23; // edi
  int **v24; // ebp
  char *v25; // eax
  char *v26; // eax
  char *v27; // [esp+1Ah] [ebp-2A0h]
  char *Name; // [esp+1Ah] [ebp-2A0h]
  bool v29; // [esp+1Eh] [ebp-29Ch]
  char v30; // [esp+35h] [ebp-285h]
  _DWORD *v31; // [esp+36h] [ebp-284h]
  float v32; // [esp+3Ah] [ebp-280h]
  double Distance; // [esp+3Ah] [ebp-280h]
  _DWORD *v34; // [esp+3Ah] [ebp-280h]
  _DWORD *v35; // [esp+46h] [ebp-274h]
  int v36; // [esp+4Ah] [ebp-270h]
  char Format[300]; // [esp+52h] [ebp-268h] BYREF
  char v39[300]; // [esp+17Eh] [ebp-13Ch] BYREF
  unsigned int v40; // [esp+2B6h] [ebp-4h]

  v5 = a4;
  v6 = 0;
  v7 = this;
  v8 = (PlayerCharacter *)OblivionDynamicCast(
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  if ( (Actor::GetRaceIfNPC((Actor *)v7)->isPlayable & 1) == 0 && !sub_5E6C60((Actor *)v7)
    || !PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0)
    && v8 == TESDataHandler_g_PlayerRef
    && PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef)
    || ((unsigned __int8 (__thiscall *)(TESObjectREFR *))v7->vtbl[2].super.super.ClearComponentReferences)(v7)
    || !Actor_IsNPC((Actor *)v8)
    || (Actor::GetRaceIfNPC((Actor *)v8)->isPlayable & 1) == 0
    || sub_5E6C60((Actor *)v8)
    || sub_5E8A90(v7) && v8 && sub_5E8A90(v8)
    || sub_5E6C60((Actor *)v8)
    || v8
    && v8 != TESDataHandler_g_PlayerRef
    && v8->vtbl->super.GetActorValue((Actor *)v8, kActorVal_Sneak) == 0x64
    && Actor_IsSneaking(v8) )
  {
    return;
  }
  v9 = (_DWORD *)FormHeapAlloc(0x30u);
  v40 = 0;
  if ( v9 )
    v6 = sub_6070B0(v9, 3u, (int)v7, (int)a4, 0, 0, 0);
  v10 = TESDataHandler_g_PlayerRef;
  v11 = v6[3] == (_DWORD)TESDataHandler_g_PlayerRef;
  v40 = 0xFFFFFFFF;
  if ( v11 )
    ++v10->miscStats[0x1F];
  v12 = sub_67A290((int)&ActorProcessManager_ptr, a2, a3, (int)v6);
  v31 = v12;
  if ( !v12 && sub_5E6C60((Actor *)v7) )
  {
    v13 = (_DWORD *)FormHeapAlloc(8u);
    if ( v13 )
    {
      *v13 = 0;
      v13[1] = 0;
    }
    else
    {
      v13 = 0;
    }
    v31 = v13;
    BSSimpleList_PushFront(v13, (int)v7);
    v12 = v31;
  }
  v35 = v12;
  if ( !v12 )
  {
    sub_605E80(v6);
    FormHeapFree((unsigned int)v6);
    Name = TESObjectREFR_GetName(a4);
    v26 = TESObjectREFR_GetName(v7);
    _sprintf(v39, "%s got away with attacking %s", v26, Name);
    Interface_ConsolePrint(v39);
    goto LABEL_72;
  }
  v30 = 0;
  while ( 1 )
  {
    v14 = *v12;
    if ( !v14 )
      break;
    if ( (*(_DWORD *)(v14 + 8) & 0x800) == 0
      || !(*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x334))(v14, 1) )
    {
      sub_4DB760(v7);
      if ( v15 )
      {
        sub_4DB760((TESObjectREFR *)v14);
        if ( !v16 )
        {
          if ( !v30 )
            goto LABEL_66;
          goto LABEL_53;
        }
      }
      v17 = (TESObjectREFR *)v6[2];
      LOBYTE(v36) = 0;
      if ( (TESObjectREFR *)v14 == v17 || TESObjectREFR_GetOwner(v17) == (BSExtraDataVtbl *)v14 )
        LOBYTE(v36) = 1;
      if ( a5 || !sub_5E6C60((Actor *)v14) )
      {
        sub_605F60((int *)v6, v14, v36);
        v32 = (float)v18;
        (*(void (__thiscall **)(int, unsigned int, _DWORD))(*(_DWORD *)v14 + 0x374))(v14, v6[3], LODWORD(v32));
      }
      if ( !sub_5E6C60((Actor *)v14) )
      {
        v19 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v14 + 0x224))(v14, v6[3]);
        if ( !sub_605E20(v19, v14) )
        {
          dword_B361C4 = (int)v7->vtbl->GetBaseForm(v7);
          *(_DWORD *)(v14 + 0xE4) = v6[3];
          v20 = TESTopic::GEtTopic(2, 0xB);
          (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v14 + 0x58) + 0x1A4))(
            *(_DWORD *)(v14 + 0x58),
            v14,
            v20,
            0,
            0,
            1);
          dword_B361C4 = 0;
          v30 = 1;
LABEL_53:
          if ( v7 != (TESObjectREFR *)v14
            || (TESObjectREFR *)v14 != v5
            && (!sub_5E0380((Actor *)v14) || (sub_5E0380((Actor *)v14)->members.packageFlags & 0x1000) == 0) )
          {
            Distance = TesObjectREF_GetDistance(v5, (TESObjectREFR *)v14, 0);
            if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B36B08) >= Distance )
            {
              v23 = sub_67CF50((int ***)&dword_B3BDB0, 0xC, (int)v5);
              v34 = v23;
              if ( v23 )
              {
                do
                {
                  v24 = (int **)*v23;
                  if ( !*v23 )
                    break;
                  v23 = (_DWORD *)v23[1];
                  if ( sub_67B710(v24) )
                  {
                    if ( !sub_67B6B0(v24, v14, 0) )
                      (*(void (__thiscall **)(int, int **))(*(_DWORD *)v14 + 0x314))(v14, v24);
                  }
                }
                while ( v23 );
                v7 = this;
              }
              BSSimpleList_Clear(v34);
              FormHeapFree((unsigned int)v34);
              v5 = a4;
            }
          }
          goto LABEL_66;
        }
      }
      sub_4DB760(v7);
      if ( !v21 )
      {
        dword_B361C4 = (int)v7->vtbl->GetBaseForm(v7);
        *(_DWORD *)(v14 + 0xE4) = v6[3];
        v22 = TESTopic::GEtTopic(2, 8);
        if ( v6[3] && sub_5EA050((TESObjectREFR *)v14, (TESObjectREFR *)v6[3], v29) )
          (*(void (__thiscall **)(int, unsigned int, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v14 + 0x32C))(
            v14,
            v6[3],
            0,
            0,
            0,
            0,
            1);
        else
          (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v14 + 0x58) + 0x1A4))(
            *(_DWORD *)(v14 + 0x58),
            v14,
            v22,
            0,
            0,
            1);
        sub_605F00(v6, (int)v7);
        v5 = a4;
        dword_B361C4 = 0;
      }
      (*(void (__thiscall **)(int, unsigned int *, _DWORD, int, _DWORD))(*(_DWORD *)v14 + 0x310))(v14, v6, 0, 1, 0);
      v30 = 0;
    }
LABEL_66:
    v31 = (_DWORD *)v31[1];
    if ( !v31 )
      break;
    v12 = v31;
  }
  if ( sub_605F30(v6) )
  {
    sub_675B30(&ActorProcessManager_ptr, v6);
  }
  else
  {
    sub_605E80(v6);
    FormHeapFree((unsigned int)v6);
    v27 = TESObjectREFR_GetName(v5);
    v25 = TESObjectREFR_GetName(v7);
    _sprintf(Format, "%s attacking %s no one cared", v25, v27);
    Interface_ConsolePrint(Format);
  }
  v12 = v31;
LABEL_72:
  if ( v35 )
  {
    BSSimpleList_Clear(v35);
    FormHeapFree((unsigned int)v35);
  }
  FormHeapFree((unsigned int)v12);
}
