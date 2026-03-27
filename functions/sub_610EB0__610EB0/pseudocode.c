void __userpurge sub_610EB0(TESObjectREFR *this@<ecx>, double a2@<st2>, double a3@<st1>, TESObjectREFR *a4)
{
  TESObjectREFR *v5; // esi
  PlayerCharacter *v7; // edi
  _DWORD *v8; // eax
  _DWORD *v9; // edi
  _DWORD *v10; // ebx
  TESClass *BaseClass; // eax
  TESForm *ActorBaseForm; // esi
  char *v13; // esi
  int v14; // esi
  TESObjectREFR *v15; // ecx
  char v16; // al
  char v17; // al
  int v18; // eax
  signed int v19; // eax
  char v20; // al
  int v21; // eax
  int v22; // ebx
  char *v23; // eax
  char *v24; // eax
  char *v25; // eax
  char *v26; // [esp+Ch] [ebp-29Ch]
  char *Name; // [esp+10h] [ebp-298h]
  char *v28; // [esp+10h] [ebp-298h]
  char *v29; // [esp+10h] [ebp-298h]
  bool v30; // [esp+14h] [ebp-294h]
  int v31; // [esp+28h] [ebp-280h]
  float v32; // [esp+28h] [ebp-280h]
  _DWORD *v33; // [esp+2Ch] [ebp-27Ch]
  float v34; // [esp+30h] [ebp-278h]
  _DWORD *v35; // [esp+34h] [ebp-274h]
  TESObjectREFR *v36; // [esp+3Ch] [ebp-26Ch]
  char Format[300]; // [esp+40h] [ebp-268h] BYREF
  char v38[300]; // [esp+16Ch] [ebp-13Ch] BYREF
  unsigned int v39; // [esp+2A4h] [ebp-4h]

  v5 = a4;
  v7 = (PlayerCharacter *)OblivionDynamicCast(
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
  v36 = (TESObjectREFR *)v7;
  if ( ((Actor::GetRaceIfNPC((Actor *)this)->isPlayable & 1) != 0 || sub_5E6C60((Actor *)this))
    && (PlayerCharacter_IsPlayerInCombat(TESDataHandler_g_PlayerRef, 0)
     || v7 != TESDataHandler_g_PlayerRef
     || !PlayerCharacter::IsJailed(TESDataHandler_g_PlayerRef))
    && !v7->vtbl->super.IsTresspassing((Actor *)v7)
    && Actor_IsNPC((Actor *)v7)
    && (Actor::GetRaceIfNPC((Actor *)v7)->isPlayable & 1) != 0
    && !sub_5E6C60((Actor *)v7)
    && (!sub_5E8A90(this) || !sub_5E8A90(v7))
    && (v7 == TESDataHandler_g_PlayerRef
     || v7->vtbl->super.GetActorValue((Actor *)v7, kActorVal_Sneak) != 0x64
     || !Actor_IsSneaking(v7)) )
  {
    v8 = (_DWORD *)FormHeapAlloc(0x30u);
    v39 = 0;
    if ( v8 )
      v9 = sub_6070B0(v8, 4u, (int)this, (int)a4, 0, 0, 0);
    else
      v9 = 0;
    v39 = 0xFFFFFFFF;
    v10 = sub_67A290((int)&ActorProcessManager_ptr, a2, a3, (int)v9);
    v33 = v10;
    v35 = v10;
    if ( v9 )
    {
      if ( sub_5E32D0((void *)v9[3]) && !*((_BYTE *)v9 + 0x11) )
      {
        if ( ((int (__thiscall *)(TESObjectREFR *, int))this->vtbl[1].Unk_37)(this, 0x24) >= 0x64
          || (BaseClass = (TESClass *)Actor_GetBaseClass((Actor *)this), TESClass::IsGuardClass(BaseClass)) )
        {
          ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 1);
          if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)&ActorBaseForm[2].member.refID) )
            ActorBaseForm = Actor_GetActorBaseForm((Actor *)this, 0);
          v13 = (char *)OblivionDynamicCast(
                          ActorBaseForm,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESActorBase `RTTI Type Descriptor',
                          &TESNPC `RTTI Type Descriptor',
                          0);
          v32 = sub_606140((int)v9);
          *(float *)&v31 = sub_5234A0(v13) * v32;
          (*(void (__stdcall **)(int))(*(_DWORD *)v9[3] + 0x254))(v31);
          v5 = a4;
          *((_BYTE *)v9 + 0x11) = 1;
        }
      }
    }
    if ( v10 )
    {
      do
      {
        v14 = *v10;
        if ( !*v10 )
          break;
        v15 = (TESObjectREFR *)v9[2];
        LOBYTE(v31) = 0;
        if ( (TESObjectREFR *)v14 == v15 || TESObjectREFR_GetOwner(v15) == (BSExtraDataVtbl *)v14 )
          LOBYTE(v31) = 1;
        sub_4DB760(this);
        if ( v16 )
        {
          sub_4DB760((TESObjectREFR *)v14);
          if ( !v17 )
            continue;
        }
        sub_605F60(v9, v14, v31);
        v34 = (float)v18;
        (*(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v14 + 0x374))(v14, v9[3], LODWORD(v34));
        if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x198))(v14, 0)
          || (v19 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v14 + 0x224))(v14, v9[3]), !sub_605E20(v19, v14)) )
        {
          dword_B361C4 = (int)this->vtbl->GetBaseForm(this);
          *(_DWORD *)(v14 + 0xE4) = v9[3];
          v22 = TESTopic::GEtTopic(2, 0xC);
          if ( v9[3] && sub_5EA050((TESObjectREFR *)v14, (TESObjectREFR *)v9[3], v30) )
            (*(void (__thiscall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*(_DWORD *)v14 + 0x32C))(
              v14,
              v9[3],
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
          v10 = v33;
          dword_B361C4 = 0;
        }
        else
        {
          sub_4DB760(this);
          if ( !v20 )
          {
            dword_B361C4 = (int)this->vtbl->GetBaseForm(this);
            *(_DWORD *)(v14 + 0xE4) = v9[3];
            v21 = TESTopic::GEtTopic(2, 9);
            (*(void (__thiscall **)(_DWORD, int, int, _DWORD, _DWORD, int))(**(_DWORD **)(v14 + 0x58) + 0x1A4))(
              *(_DWORD *)(v14 + 0x58),
              v14,
              v21,
              0,
              0,
              1);
            sub_605F00(v9, (int)this);
            dword_B361C4 = 0;
          }
          (*(void (__thiscall **)(int, _DWORD *, _DWORD, int, _DWORD))(*(_DWORD *)v14 + 0x310))(v14, v9, 0, 1, 0);
        }
        Name = TESObjectREFR_GetName((TESObjectREFR *)v14);
        v26 = TESObjectREFR_GetName(this);
        v23 = TESObjectREFR_GetName(v36);
        _sprintf(Format, "%s been Murdered by %s and sent to  %s ", v23, v26, Name);
        sub_40FEC0(Format);
        v33 = (_DWORD *)v10[1];
        v10 = v33;
      }
      while ( v33 );
      BSSimpleList_Clear(v35);
      FormHeapFree((unsigned int)v35);
      if ( sub_605F30(v9) )
      {
        sub_675B30(&ActorProcessManager_ptr, v9);
      }
      else
      {
        if ( v9 )
        {
          sub_605E80(v9);
          FormHeapFree((unsigned int)v9);
        }
        v28 = TESObjectREFR_GetName(a4);
        v24 = TESObjectREFR_GetName(this);
        _sprintf(Format, "%s  murdering %s no one cared", v24, v28);
        Interface_ConsolePrint(Format);
      }
    }
    else
    {
      if ( v9 )
      {
        sub_605E80(v9);
        FormHeapFree((unsigned int)v9);
      }
      v29 = TESObjectREFR_GetName(v5);
      v25 = TESObjectREFR_GetName(this);
      _sprintf(v38, "%s got away with murdering %s", v25, v29);
      Interface_ConsolePrint(v38);
    }
    FormHeapFree((unsigned int)v10);
  }
}
