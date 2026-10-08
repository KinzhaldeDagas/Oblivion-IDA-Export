char __userpurge sub_645BC0@<al>(
        TESForm **a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        double a4@<st2>,
        Actor *a5,
        char a6)
{
  TESForm *v7; // eax
  TESForm *v8; // ebp
  _DWORD *v11; // eax
  int v12; // eax
  double v13; // st7
  char v14; // al
  TESForm *v15; // ebx
  _DWORD *v16; // ebp
  UInt32 DwordAtOffset40; // eax
  TESForm *v18; // ebx
  double GameHour; // st5
  double v20; // st7
  TESObjectREFR *v21; // eax
  int ProcessLevel; // eax
  TESObjectREFR *v23; // ebp
  UInt32 v24; // eax
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

  v7 = a1[0xB]; /*0x645bc8*/
  v8 = a1[2]; /*0x645bcd*/
  v39 = v8; /*0x645bd5*/
  if ( !v7 || (v7->member.flags & 0x20) != 0 ) /*0x645be3*/
    ((void (__thiscall *)(TESForm **, Actor *))(*a1)[0x39].vtbl)(a1, a5); /*0x645bee*/
  if ( !a1[0xB] ) /*0x645bf0*/
  {
    if ( !a6 ) /*0x645bfb*/
      return 0; /*0x645c15*/
LABEL_6:
    ((void (__thiscall *)(TESForm **, Actor *, int))(*a1)[0x10].member.flags)(a1, a5, 2); /*0x645bfd*/
    return 0; /*0x645c0a*/
  }
  if ( !TargetData::GetTargetType((TargetData *)v8[1].member.modlist.data) ) /*0x645c1b*/
    a1[0xE] = 0; /*0x645c24*/
  v11 = (_DWORD *)sub_566D00((char **)v8, (int)a5); /*0x645c2a*/
  if ( v11 /*0x645c6a*/
    && sub_4D74B0(v11)
    && (((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].SetQuestItem)(a1[0xB]) == MEMORY[0xB35EB0]
     || (TESForm *)((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].SetQuestItem)(a1[0xB]) == MEMORY[0xB35EAC]) )
  {
    return 1; /*0x645c6a*/
  }
  if ( LOBYTE(v8[1].member.flags) == 9 ) /*0x645c74*/
  {
    sub_566DB0(v8); /*0x645c78*/
    v13 = (double)v12; /*0x645c83*/
    if ( v12 < 0 ) /*0x645c87*/
      v13 = v13 + flt_A2FC78; /*0x645c89*/
    v43 = v13 + dbl_A3DDE0; /*0x645c98*/
    a3 = sub_566DC0((TESPackage *)v8, v43, a2, a4, a5, 0, v43); /*0x645ca6*/
    if ( !v14 ) /*0x645cad*/
      ((void (__thiscall *)(TESForm **, Actor *, unsigned int))(*a1)[0x10].member.flags)(a1, a5, 0xFFFFFFFE); /*0x645cbc*/
  }
  if ( !a1[0xD] ) /*0x645cbe*/
  {
    v15 = *a1; /*0x645ccf*/
    v16 = (_DWORD *)((int (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].Unk_26)(a1[0xB]); /*0x645cd6*/
    WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a1[0xB]); /*0x645ce0*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(a1[0xB]); /*0x645ce1*/
    if ( !(*(unsigned __int8 (__thiscall **)(TESForm **, Actor *, _DWORD, _DWORD, _DWORD, UInt32, TESWorldSpace *))&v15[0x29].member.type)( /*0x645d0a*/
            a1,
            a5,
            *v16,
            v16[1],
            v16[2],
            DwordAtOffset40,
            WorldSpace) )
      return 0; /*0x645d0a*/
    v8 = v39; /*0x645d10*/
  }
  v18 = TESForm_LookupByFormID(0x3Au); /*0x645d23*/
  GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x645d25*/
  v44 = a3; /*0x645d2a*/
  if ( sub_6599B0((TESChildCELL *)a5) > v44 ) /*0x645d46*/
    v44 = v44 + dbl_A2F920; /*0x645d52*/
  v41 = v44 - sub_6599B0((TESChildCELL *)a5); /*0x645d6f*/
  v40 = *(float *)&v18[1].member.refID; /*0x645d76*/
  v20 = sub_5677B0((TESPackage *)a1[2], v40, (TESObjectREFR *)a5, 2); /*0x645d7a*/
  v21 = (TESObjectREFR *)a1[0xB]; /*0x645d7f*/
  v45 = GameHour; /*0x645d82*/
  if ( v21 ) /*0x645d88*/
  {
    GameHour = TesObjectREF_GetDistance((TESObjectREFR *)a5, v21, 0); /*0x645d93*/
    if ( v45 < GameHour ) /*0x645da3*/
    {
      ProcessLevel = Actor::GetProcessLevel(a5); /*0x645da7*/
      v37 = v45; /*0x645db3*/
      v23 = (TESObjectREFR *)a1[0xB]; /*0x645db7*/
      v18 = *a1; /*0x645dbe*/
      v42 = ProcessLevel; /*0x645dc8*/
      v46 = dbl_A2F938 / v40 * v41; /*0x645dd0*/
      GameHour = v46; /*0x645dd4*/
      v34 = TESObjectREFR_GetWorldSpace(v23); /*0x645de3*/
      v24 = Shared_GetDwordAtOffset40(a1[0xB]); /*0x645de4*/
      v25 = ((int (__thiscall *)(TESObjectREFR *, UInt32, TESWorldSpace *, _DWORD, _DWORD))v23->vtbl->GetPos)( /*0x645df5*/
              v23,
              v24,
              v34,
              LODWORD(v46),
              LODWORD(v37));
      ((void (__thiscall *)(TESForm **, Actor *, int))v18[0x2B].member.modlist.data)(a1, a5, v25); /*0x645e01*/
      if ( Actor::GetProcessLevel(a5) != v42 ) /*0x645e0e*/
        return 1; /*0x645fdb*/
      v8 = v39; /*0x645e14*/
    }
  }
  if ( !sub_5687D0((TESPackage *)v8, (int)v18, v20, (TESObjectREFR *)a5) ) /*0x645e22*/
    return 0; /*0x645e22*/
  v47 = (TESObjectREFR *)a1[0xB]; /*0x645e30*/
  if ( a6 ) /*0x645e34*/
  {
    v26 = a1[0x11]; /*0x645e3a*/
    v27 = 0; /*0x645e3d*/
    data = 1; /*0x645e41*/
    v48 = 0; /*0x645e46*/
    if ( v26 ) /*0x645e4a*/
    {
      if ( !v26->vtbl /*0x645e68*/
        || (*((unsigned __int8 (__thiscall **)(TESFormVtbl *, _DWORD))v26->vtbl->super.InitializeComponent + 0x66))(
             v26->vtbl,
             0)
        || !Actor_IsNPC((Actor *)a1[0x11]->vtbl) )
      {
        v29 = a1[0x11]; /*0x645e71*/
        data = (int)v29->member.modlist.data; /*0x645e74*/
        v27 = *(_DWORD *)&v29->member.type; /*0x645e77*/
        a1[0xE] = (TESForm *)((char *)a1[0xE] - data); /*0x645e7a*/
        if ( (*((unsigned __int8 (__thiscall **)(TESFormVtbl *, _DWORD))v29->vtbl->super.InitializeComponent + 0x66))( /*0x645e8b*/
               v29->vtbl,
               0) )
        {
          v48 = 1; /*0x645e91*/
        }
      }
      if ( (int)a1[0xE] <= 0 ) /*0x645e9a*/
        ((void (__thiscall *)(TESForm **, Actor *, int))(*a1)[0x10].member.flags)(a1, a5, 2); /*0x645ea9*/
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) || v48 ) /*0x645ec5*/
    {
      v38 = data; /*0x645f69*/
      v35 = v27; /*0x645f6a*/
      goto LABEL_53; /*0x645f6a*/
    }
    if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) ) /*0x645eda*/
      goto LABEL_60; /*0x645eda*/
    v30 = reference; /*0x645ee0*/
    if ( a1[0xB] == (TESForm *)reference ) /*0x645ee9*/
    {
      IsSleeping = PlayerCharacter::IsSleeping_(v30); /*0x645eeb*/
      v30 = reference; /*0x645ef2*/
      if ( IsSleeping && !v30->isMovingToNewSpace ) /*0x645efa*/
      {
        v30->isSleeping = 0; /*0x645f05*/
        v30->HoursToSleep = 0; /*0x645f0c*/
        return 0; /*0x645f1f*/
      }
    }
    v32 = a1[0x11]; /*0x645f22*/
    if ( !v32 ) /*0x645f27*/
    {
      if ( a1[0xB] != (TESForm *)v30 ) /*0x645f62*/
        goto LABEL_6; /*0x645f62*/
      goto LABEL_60; /*0x645f62*/
    }
    if ( (int)v32->member.refID > 0 ) /*0x645f2d*/
    {
      ((void (__thiscall *)(TESForm **, Actor *, TESForm *, _DWORD, _DWORD, int, _DWORD, int, _DWORD, _DWORD, int))(*a1)[0x17].vtbl)( /*0x645f4e*/
        a1,
        a5,
        a1[0xB],
        0,
        0,
        1,
        0,
        1,
        0,
        0,
        1);
      goto LABEL_60; /*0x645f50*/
    }
    if ( v32->member.flags ) /*0x645f52*/
    {
      v38 = data; /*0x645f5b*/
      v35 = *(_DWORD *)&v32->member.type; /*0x645f5c*/
LABEL_53:
      ActivateRef((TESObjectREFR *)a1[0xB], GameHour, a2, v20, (TESObjectREFR *)a5, 1, v35, v38); /*0x645f6b*/
      if ( a1[0x11] ) /*0x645f76*/
        FormHeapFree((unsigned int)a1[0x11]); /*0x645f80*/
      a1[0x11] = 0; /*0x645f88*/
      a1[0xB] = 0; /*0x645f8b*/
    }
LABEL_60:
    if ( v47 ) /*0x645fcb*/
      RunScripts(v47, GameHour, a2, v20); /*0x645fcd*/
    return 1; /*0x645fcd*/
  }
  if ( !((unsigned __int8 (__thiscall *)(TESForm *))a1[0xB]->vtbl[1].CopyFrom)(a1[0xB]) ) /*0x645f98*/
  {
    ActivateRef((TESObjectREFR *)a1[0xB], GameHour, a2, v20, (TESObjectREFR *)a5, 0, 0, 1); /*0x645fa8*/
    goto LABEL_60; /*0x645fad*/
  }
  if ( LOBYTE(v8[1].member.flags) == 2 ) /*0x645fb3*/
  {
    ((void (__thiscall *)(LowProcess *, Actor *, int))a5->members.super.process->Unk_61)( /*0x645fc3*/
      a5->members.super.process,
      a5,
      2);
    goto LABEL_60; /*0x645fc3*/
  }
  if ( a1[0xB] != (TESForm *)reference ) /*0x645fe7*/
    return 1; /*0x645fe7*/
  if ( !PlayerCharacter::IsSleeping_(reference) ) /*0x645fe9*/
    return 1; /*0x645fe9*/
  v33 = reference; /*0x645ff2*/
  if ( reference->isMovingToNewSpace ) /*0x645ff7*/
    return 1; /*0x645ffe*/
  v33->HoursToSleep = 0; /*0x646003*/
  v33->isSleeping = 1; /*0x64600d*/
  return 0; /*0x645c0e*/
}
