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
  BSExtraDataVtbl *v9; // ebp
  TESObjectREFR *v11; // eax
  _DWORD *v12; // eax
  _DWORD *v13; // eax
  unsigned int v14; // edi
  double WeightForForm_Fast; // st5
  double v16; // st7
  int *v17; // eax
  const char *v18; // edi
  char *Name; // eax
  int v20; // esi
  TESObjectREFR *v21; // ecx
  char v22; // al
  char v23; // al
  int v24; // eax
  signed int v25; // eax
  char v26; // al
  int v27; // eax
  int v28; // ebp
  PlayerCharacter *v29; // edi
  void *v30; // eax
  _BYTE *v31; // eax
  _BYTE *v32; // esi
  TESForm *ActorBaseForm; // eax
  void (__thiscall *v34)(_BYTE *, int); // eax
  int v35; // [esp+Ch] [ebp-174h]
  const char *v36; // [esp+10h] [ebp-170h]
  bool v37; // [esp+14h] [ebp-16Ch]
  float v38; // [esp+28h] [ebp-158h]
  float v39; // [esp+28h] [ebp-158h]
  int *v40; // [esp+28h] [ebp-158h]
  int v41; // [esp+2Ch] [ebp-154h]
  unsigned int v42; // [esp+30h] [ebp-150h]
  BSExtraDataVtbl *Owner; // [esp+34h] [ebp-14Ch]
  int v44; // [esp+3Ch] [ebp-144h]
  char Format[300]; // [esp+44h] [ebp-13Ch] BYREF
  int v46; // [esp+17Ch] [ebp-4h]

  v9 = a8;
  if ( this == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    TESDataHandler_g_PlayerRef->miscStats[0x1C] += a6;
  }
  else if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x1F) == 0x64 )
  {
    return;
  }
  v11 = (TESObjectREFR *)OblivionDynamicCast(
                           a4,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                           &Actor `RTTI Type Descriptor',
                           0);
  Owner = a8;
  if ( !a8 )
  {
    if ( v11 )
      Owner = TESObjectREFR_GetOwner(v11);
  }
  if ( (Actor::GetRaceIfNPC((Actor *)this)->isPlayable & 1) != 0 )
  {
    v12 = (_DWORD *)FormHeapAlloc(0x30u);
    if ( a5 )
    {
      v46 = 0;
      if ( v12 )
      {
        v13 = sub_6070B0(v12, 0, (int)a4, (int)this, a5, a6, (int)a8);
LABEL_14:
        v14 = (unsigned int)v13;
        v46 = 0xFFFFFFFF;
        WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast(a5);
        v38 = a3;
        v39 = flt_B36C98 * v38;
        v16 = v39;
        (*(void (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 0x16) + 0x354))(
          *((_DWORD *)this + 0x16),
          LODWORD(v39));
        v17 = sub_67A290((int)&ActorProcessManager_ptr, WeightForForm_Fast, a2, v14);
        v42 = (unsigned int)v17;
        v40 = v17;
        if ( v17 )
        {
          while ( 1 )
          {
            v20 = *v17;
            if ( !*v17 )
              break;
            v21 = *(TESObjectREFR **)(v14 + 8);
            LOBYTE(v44) = 0;
            if ( (TESObjectREFR *)v20 == v21 || TESOBjectREFR_IsOwnedBy(v21, (TESObjectREFR *)v20, 1) )
              LOBYTE(v44) = 1;
            sub_4DB760(a4);
            if ( !v22 || (sub_4DB760((TESObjectREFR *)v20), v23) )
            {
              if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v20 + 0x354))(v20) )
              {
                sub_605F60((int *)v14, v20, v44);
                *(float *)&v41 = (float)v24;
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v20 + 0x374))(v20, *(_DWORD *)(v14 + 0xC));
                v25 = (*(int (__thiscall **)(int, TESObjectREFR *, int))(*(_DWORD *)v20 + 0x224))(v20, this, v20);
                if ( sub_605E20(v25, v41) )
                {
                  sub_4DB760(this);
                  if ( !v26 )
                  {
                    dword_B361C4 = (int)Owner;
                    *(_DWORD *)(v20 + 0xE4) = *(_DWORD *)(v14 + 0xC);
                    v27 = TESTopic::GEtTopic(2, 3);
                    (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v20 + 0x58) + 0x1A4))(
                      *(_DWORD *)(v20 + 0x58),
                      v20,
                      v27,
                      0,
                      0,
                      1);
                    sub_605F00((_DWORD *)v14, (int)this);
                    dword_B361C4 = 0;
                  }
                  Script_AddEventToExtraScript(*(_DWORD *)(v14 + 0xC), v20 + 0x44, 0x10000);
                  Script_AddEventToExtraScript(*(_DWORD *)(v14 + 8), v20 + 0x44, 0x400000);
                  (*(void (__thiscall **)(int, unsigned int, _DWORD, int, _DWORD))(*(_DWORD *)v20 + 0x310))(
                    v20,
                    v14,
                    0,
                    1,
                    0);
                }
                else
                {
                  dword_B361C4 = (int)Owner;
                  *(_DWORD *)(v20 + 0xE4) = *(_DWORD *)(v14 + 0xC);
                  v28 = TESTopic::GEtTopic(2, 0xE);
                  if ( *(_DWORD *)(v14 + 0xC) && sub_5EA050((TESObjectREFR *)v20, *(TESObjectREFR **)(v14 + 0xC), v37) )
                    (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v20 + 0x32C))(
                      v20,
                      *(_DWORD *)(v14 + 0xC),
                      0,
                      0,
                      0,
                      0,
                      1);
                  else
                    (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v20 + 0x58) + 0x1A4))(
                      *(_DWORD *)(v20 + 0x58),
                      v20,
                      v28,
                      0,
                      0,
                      1);
                  dword_B361C4 = 0;
                }
                v9 = a8;
              }
            }
            v42 = *(_DWORD *)(v42 + 4);
            if ( !v42 )
              break;
            v17 = (int *)v42;
          }
          BSSimpleList_Clear(v40);
          FormHeapFree((unsigned int)v40);
          if ( sub_605F30((_DWORD *)v14) )
          {
            sub_675B30(&ActorProcessManager_ptr, (_DWORD *)v14);
            v29 = *(PlayerCharacter **)(v14 + 0xC);
            v30 = OblivionDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESNPC `RTTI Type Descriptor',
                    0);
            if ( v29 == TESDataHandler_g_PlayerRef )
            {
              if ( v30 )
              {
                TESActorBaseData_SetSharedPlayerFactionFlags(2);
              }
              else
              {
                v31 = OblivionDynamicCast(
                        v9,
                        0,
                        (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                        &TESFaction `RTTI Type Descriptor',
                        0);
                v32 = v31;
                if ( v31 )
                {
                  v35 = (int)v31;
                  ActorBaseForm = Actor_GetActorBaseForm((Actor *)TESDataHandler_g_PlayerRef, 0);
                  if ( TESActorBaseData_GetFactionRank(&ActorBaseForm[1].member.refID, v35, 1) != 0xFFFFFFFF )
                  {
                    v34 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)v32 + 0x40);
                    v32[0x34] |= 0x10u;
                    v34(v32, 4);
                  }
                }
              }
            }
          }
          else if ( v14 )
          {
            sub_605E80((unsigned int *)v14);
            FormHeapFree(v14);
          }
        }
        else
        {
          if ( v14 )
          {
            sub_605E80((unsigned int *)v14);
            FormHeapFree(v14);
          }
          if ( a5 )
          {
            v18 = (const char *)dword_B38EA8;
            v36 = (const char *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a5 + 0xD0))(a5, v16);
            Name = TESObjectREFR_GetName(this);
            _sprintf(Format, "%s %s %s", Name, v18, v36);
          }
          else
          {
            Format[0] = 0;
          }
          Interface_ConsolePrint(Format);
        }
        FormHeapFree(v42);
        return;
      }
    }
    else
    {
      v46 = 1;
      if ( v12 )
      {
        v13 = sub_6070B0(v12, 0, (int)a4, (int)this, 0, a7, (int)a8);
        goto LABEL_14;
      }
    }
    v13 = 0;
    goto LABEL_14;
  }
}
