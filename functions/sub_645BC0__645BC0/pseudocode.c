char __userpurge sub_645BC0@<al>(TESForm **a1@<ecx>, double a2@<st1>, double a3@<st0>, Actor *a4, char a5)
{
  TESForm *v7; // eax
  TESForm *v8; // ebp
  _DWORD *v11; // eax
  int v12; // eax
  double v13; // st7
  char v14; // al
  TESForm *v15; // ebx
  _DWORD *v16; // ebp
  TESObjectCELL *ParentCell; // eax
  TESForm *v18; // ebx
  double GameHour; // st5
  double v20; // st7
  TESObjectREFR *v21; // eax
  int ProcessLevel; // eax
  TESObjectREFR *v23; // ebp
  TESObjectCELL *v24; // eax
  int v25; // eax
  TESForm *v26; // eax
  int v27; // ebx
  int data; // ebp
  TESForm *v29; // eax
  PlayerCharacter *v30; // ecx
  bool IsSleeping; // al
  TESForm *v32; // eax
  PlayerCharacter *v33; // eax
  TESWorldSpace *v34; // [esp+20h] [ebp-30h]
  int v35; // [esp+24h] [ebp-2Ch]
  TESWorldSpace *WorldSpace; // [esp+28h] [ebp-28h]
  float v37; // [esp+28h] [ebp-28h]
  int v38; // [esp+28h] [ebp-28h]
  TESForm *v39; // [esp+3Ch] [ebp-14h]
  float v40; // [esp+40h] [ebp-10h]
  float v41; // [esp+44h] [ebp-Ch]
  int v42; // [esp+48h] [ebp-8h]
  float v43; // [esp+54h] [ebp+4h]
  float v44; // [esp+54h] [ebp+4h]
  float v45; // [esp+54h] [ebp+4h]
  float v46; // [esp+54h] [ebp+4h]
  TESObjectREFR *v47; // [esp+54h] [ebp+4h]
  char v48; // [esp+58h] [ebp+8h]

  v7 = a1[0xB];
  v8 = a1[2];
  v39 = v8;
  if ( !v7 || (v7->member.flags & 0x20) != 0 )
    ((void (__thiscall *)(TESForm **, Actor *))(*a1)[0x39].vtbl)(a1, a4);
  if ( !a1[0xB] )
  {
    if ( !a5 )
      return 0;
LABEL_6:
    ((void (__thiscall *)(TESForm **, Actor *, int))(*a1)[0x10].member.flags)(a1, a4, 2);
    return 0;
  }
  if ( !TargetData::GetTargetType((TargetData *)v8[1].member.modlist.data) )
    a1[0xE] = 0;
  v11 = (_DWORD *)sub_566D00((char **)v8, (int)a4);
  if ( v11
    && sub_4D74B0(v11)
    && (((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].SetQuestItem)(a1[0xB]) == TESDataHandler_g_XMarkerHeading
     || (TESForm *)((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].SetQuestItem)(a1[0xB]) == TESDataHandler_g_XMarker) )
  {
    return 1;
  }
  if ( LOBYTE(v8[1].member.flags) == 9 )
  {
    sub_566DB0(v8);
    v13 = (double)v12;
    if ( v12 < 0 )
      v13 = v13 + flt_A2FC78;
    v43 = v13 + dbl_A3DDE0;
    a3 = sub_566DC0((TESPackage *)v8, v43, a2, a4, 0, v43);
    if ( !v14 )
      ((void (__thiscall *)(TESForm **, Actor *, unsigned int))(*a1)[0x10].member.flags)(a1, a4, 0xFFFFFFFE);
  }
  if ( !a1[0xD] )
  {
    v15 = *a1;
    v16 = (_DWORD *)((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].Unk_26)(a1[0xB]);
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]);
    ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
    if ( !(*(unsigned __int8 (__thiscall **)(TESForm **, Actor *, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))&v15[0x29].member.type)(
            a1,
            a4,
            *v16,
            v16[1],
            v16[2],
            ParentCell,
            WorldSpace) )
      return 0;
    v8 = v39;
  }
  v18 = TESForm_LookupByFormID(0x3Au);
  GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
  v44 = a3;
  if ( sub_6599B0((TESChildCELL *)a4) > v44 )
    v44 = v44 + dbl_A2F920;
  v41 = v44 - sub_6599B0((TESChildCELL *)a4);
  v40 = *(float *)&v18[1].member.refID;
  v20 = sub_5677B0((TESPackage *)a1[2], v40, (TESObjectREFR *)a4, 2);
  v21 = (TESObjectREFR *)a1[0xB];
  v45 = GameHour;
  if ( v21 )
  {
    GameHour = TesObjectREF_GetDistance((TESObjectREFR *)a4, v21, 0);
    if ( v45 < GameHour )
    {
      ProcessLevel = Actor::GetProcessLevel(a4);
      v37 = v45;
      v23 = (TESObjectREFR *)a1[0xB];
      v18 = *a1;
      v42 = ProcessLevel;
      v46 = dbl_A2F938 / v40 * v41;
      GameHour = v46;
      v34 = TESObjectREFR_GetWorldSpace(v23);
      v24 = TESObjectREFR_GetParentCell((TESObjectREFR *)a1[0xB]);
      v25 = ((int (__thiscall *)(TESObjectREFR *, TESObjectCELL *, TESWorldSpace *, _DWORD, _DWORD))v23->vtbl->GetPos)(
              v23,
              v24,
              v34,
              LODWORD(v46),
              LODWORD(v37));
      ((void (__thiscall *)(TESForm **, Actor *, int))v18[0x2B].member.modlist.data)(a1, a4, v25);
      if ( Actor::GetProcessLevel(a4) != v42 )
        return 1;
      v8 = v39;
    }
  }
  if ( !sub_5687D0((TESPackage *)v8, (int)v18, v20, (TESObjectREFR *)a4) )
    return 0;
  v47 = (TESObjectREFR *)a1[0xB];
  if ( a5 )
  {
    v26 = a1[0x11];
    v27 = 0;
    data = 1;
    v48 = 0;
    if ( v26 )
    {
      if ( !v26->vtbl
        || (*((unsigned __int8 (__thiscall **)(TESFormVtbl *, _DWORD))v26->vtbl->super.InitializeComponent + 0x66))(
             v26->vtbl,
             0)
        || !Actor_IsNPC((Actor *)a1[0x11]->vtbl) )
      {
        v29 = a1[0x11];
        data = (int)v29->member.modlist.data;
        v27 = *(_DWORD *)&v29->member.type;
        a1[0xE] = (TESForm *)((char *)a1[0xE] - data);
        if ( (*((unsigned __int8 (__thiscall **)(TESFormVtbl *, _DWORD))v29->vtbl->super.InitializeComponent + 0x66))(
               v29->vtbl,
               0) )
        {
          v48 = 1;
        }
      }
      if ( (int)a1[0xE] <= 0 )
        ((void (__thiscall *)(TESForm **, Actor *, int))(*a1)[0x10].member.flags)(a1, a4, 2);
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) || v48 )
    {
      v38 = data;
      v35 = v27;
      goto LABEL_53;
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) )
      goto LABEL_60;
    v30 = TESDataHandler_g_PlayerRef;
    if ( a1[0xB] == (TESForm *)TESDataHandler_g_PlayerRef )
    {
      IsSleeping = PlayerCharacter::IsSleeping_(v30);
      v30 = TESDataHandler_g_PlayerRef;
      if ( IsSleeping && !v30->isMovingToNewSpace )
      {
        v30->isSleeping = 0;
        v30->HoursToSleep = 0;
        return 0;
      }
    }
    v32 = a1[0x11];
    if ( !v32 )
    {
      if ( a1[0xB] != (TESForm *)v30 )
        goto LABEL_6;
      goto LABEL_60;
    }
    if ( (int)v32->member.refID > 0 )
    {
      ((void (__thiscall *)(TESForm **, Actor *, TESForm *, _DWORD, _DWORD, int, _DWORD, int, _DWORD, _DWORD, int))(*a1)[0x17].vtbl)(
        a1,
        a4,
        a1[0xB],
        0,
        0,
        1,
        0,
        1,
        0,
        0,
        1);
      goto LABEL_60;
    }
    if ( v32->member.flags )
    {
      v38 = data;
      v35 = *(_DWORD *)&v32->member.type;
LABEL_53:
      ActivateRef((TESObjectREFR *)a1[0xB], GameHour, a2, v20, (TESObjectREFR *)a4, 1, v35, v38);
      if ( a1[0x11] )
        FormHeapFree((unsigned int)a1[0x11]);
      a1[0x11] = 0;
      a1[0xB] = 0;
    }
LABEL_60:
    if ( v47 )
      RunScripts(v47, GameHour, a2, v20);
    return 1;
  }
  if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) )
  {
    ActivateRef((TESObjectREFR *)a1[0xB], GameHour, a2, v20, (TESObjectREFR *)a4, 0, 0, 1);
    goto LABEL_60;
  }
  if ( LOBYTE(v8[1].member.flags) == 2 )
  {
    ((void (__thiscall *)(LowProcess *, Actor *, int))a4->members.super.process->Unk_61)(
      a4->members.super.process,
      a4,
      2);
    goto LABEL_60;
  }
  if ( a1[0xB] != (TESForm *)TESDataHandler_g_PlayerRef )
    return 1;
  if ( !PlayerCharacter::IsSleeping_(TESDataHandler_g_PlayerRef) )
    return 1;
  v33 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef->isMovingToNewSpace )
    return 1;
  v33->HoursToSleep = 0;
  v33->isSleeping = 1;
  return 0;
}
