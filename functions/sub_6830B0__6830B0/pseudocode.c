int __stdcall sub_6830B0(TESObjectREFR *a1)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // ebx
  TESForm *v5; // eax
  char IsPersistent; // al
  TESObjectCELL *v7; // eax
  BSExtraDataVtbl *v8; // eax
  void (__thiscall **p_ChangeCell)(TESObjectREFR *, UInt32); // edi
  UInt32 DwordAtOffset40; // eax
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  ExtraContainerChanges_Data *v12; // edi
  tListEntryData *objList; // eax
  ExtraContainerChanges_Data *v14; // eax
  TESHealthForm **v15; // edx
  TESHealthForm *v16; // edi
  unsigned __int8 *vtbl; // eax
  int v18; // ecx
  bool v19; // zf
  _DWORD *v20; // ebp
  EntryData *v21; // eax
  int v22; // ebx
  unsigned int Health; // eax
  TESObjectREFRVtbl *v24; // esi
  LowProcess *v25; // eax
  HighProcess *v26; // eax
  MiddleLowProcess *v27; // eax
  MiddleHighProcess *v28; // eax
  HighProcess *v29; // eax
  TESObjectREFR *v31; // [esp+10h] [ebp-1Ch]
  ExtraContainerChanges_Data *v32; // [esp+14h] [ebp-18h]
  TESHealthForm **retaddr; // [esp+2Ch] [ebp+0h]

  if ( !a1 /*0x683110*/
    || (v3 = sub_4DB260(a1->member.super.type, 0),
        (v4 = (TESObjectREFR *)OblivionDynamicCast(
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0)) == 0) )
  {
    JUMPOUT(0x6833EB); /*0x6833eb*/
  }
  v5 = a1->vtbl->GetBaseForm(a1); /*0x683120*/
  TESObjectREFR_SetBaseForm(v4, v5); /*0x683125*/
  TESForm_MakeTemporary((TESForm *)v4); /*0x68312c*/
  TESForm_SetFormID((TESForm *)v4, a1->member.super.refID, 1); /*0x683139*/
  IsPersistent = TESObjectREFR_IsPersistent(a1); /*0x683140*/
  TESObjectREFR_SetPersistance((TESChildCELL *)v4, IsPersistent); /*0x683148*/
  TESObjectREFR_SetPosition(v4, a1->member.pos[0], a1->member.pos[1], a1->member.pos[2]); /*0x683165*/
  sub_4D89A0((int *)v4, LODWORD(a1->member.rot.x), LODWORD(a1->member.rot.y), LODWORD(a1->member.rot.z)); /*0x683182*/
  if ( Shared_GetDwordAtOffset40(a1) /*0x6831c8*/
    && (v7 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a1), TESObjectCELL_IsInterior(v7))
    || (v8 = (BSExtraDataVtbl *)(*(int (__thiscall **)(TESChildCELLVtbl *))a1->member.childCell.GetChildCell)(&a1->member.childCell)) == 0 )
  {
    p_ChangeCell = (void (__thiscall **)(TESObjectREFR *, UInt32))&v4->vtbl->ChangeCell; /*0x6831d9*/
    DwordAtOffset40 = Shared_GetDwordAtOffset40(a1); /*0x6831df*/
    (*p_ChangeCell)(v4, DwordAtOffset40); /*0x6831e9*/
  }
  else
  {
    sub_4247B0(&v4->member.baseExtraList, v8); /*0x6831ce*/
  }
  Actor_GetActorBaseForm((Actor *)a1, 0); /*0x6831ef*/
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1); /*0x683201*/
  v12 = ContainerExtraDataForRef; /*0x683206*/
  if ( ContainerExtraDataForRef ) /*0x68320d*/
  {
    objList = ContainerExtraDataForRef->objList; /*0x683213*/
    if ( v12->objList->node.next || objList->node.data ) /*0x68321b*/
    {
      Actor_GetActorBaseForm((Actor *)v4, 0); /*0x683228*/
      v14 = ContainerExtraData_GetContainerExtraDataForRef(v4); /*0x68323a*/
      v15 = (TESHealthForm **)v12->objList; /*0x68323f*/
      v32 = v14; /*0x683246*/
      retaddr = (TESHealthForm **)v12->objList; /*0x68324a*/
      if ( v12->objList ) /*0x68323f*/
      {
        while ( 1 ) /*0x68325a*/
        {
          v16 = *v15; /*0x68325a*/
          if ( !*v15 ) /*0x68325e*/
            goto LABEL_23; /*0x68325e*/
          vtbl = (unsigned __int8 *)v16[1].vtbl; /*0x683260*/
          v18 = vtbl[4]; /*0x683263*/
          if ( v18 != 0x1B ) /*0x68326a*/
            break; /*0x68326a*/
          if ( vtbl != (unsigned __int8 *)MEMORY[0xB35EC8] ) /*0x683277*/
          {
            v19 = vtbl == (unsigned __int8 *)MEMORY[0xB35ECC]; /*0x683279*/
LABEL_19:
            if ( !v19 ) /*0x68327f*/
              goto LABEL_23; /*0x68327f*/
          }
          v20 = (_DWORD *)FormHeapAlloc(0xCu); /*0x683281*/
          v21 = 0; /*0x683291*/
          if ( v20 ) /*0x683299*/
          {
            v22 = (int)v16[1].vtbl; /*0x68329b*/
            Health = TESHealthForm_GetHealth(v16); /*0x6832a0*/
            v21 = (EntryData *)ContainerEntryExtraData_constr(v20, v22, Health); /*0x6832a9*/
            v4 = v31; /*0x6832ae*/
          }
          ContainerExtraData_AddEntry(v32, v21, 1); /*0x6832c1*/
          v15 = retaddr; /*0x6832c6*/
LABEL_23:
          retaddr = (TESHealthForm **)v15[1]; /*0x6832ca*/
          if ( !retaddr ) /*0x6832d3*/
            goto LABEL_24; /*0x6832d3*/
          v15 = retaddr; /*0x683256*/
        }
        v19 = v18 == 0x27; /*0x68326c*/
        goto LABEL_19; /*0x68326f*/
      }
    }
  }
LABEL_24:
  v24 = a1[1].vtbl; /*0x6832d5*/
  if ( !v24 ) /*0x6832da*/
    JUMPOUT(0x6833E9); /*0x6833e9*/
  switch ( (*((int (__thiscall **)(_DWORD))v24->super.super.InitializeComponent + 2))(v24) ) /*0x6832f4*/
  {
    case 0: /*0x6832f4*/
      v29 = (HighProcess *)FormHeapAlloc(0x2ECu); /*0x683372*/
      retaddr = (TESHealthForm **)v29; /*0x68337a*/
      if ( !v29 ) /*0x683388*/
        goto LABEL_34; /*0x683388*/
      v26 = HighProcess::HighProcess(v29); /*0x68338c*/
      break; /*0x683391*/
    case 1: /*0x6832f4*/
      v28 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu); /*0x68334c*/
      retaddr = (TESHealthForm **)v28; /*0x683354*/
      if ( !v28 ) /*0x683362*/
        goto LABEL_34; /*0x683362*/
      v26 = (HighProcess *)MiddleHighProcess::MiddleHighProcess(v28); /*0x683366*/
      break; /*0x68336b*/
    case 2: /*0x6832f4*/
      v27 = (MiddleLowProcess *)FormHeapAlloc(0xA8u); /*0x683326*/
      retaddr = (TESHealthForm **)v27; /*0x68332e*/
      if ( !v27 ) /*0x68333c*/
        goto LABEL_34; /*0x68333c*/
      v26 = (HighProcess *)MiddleLowProcess::MiddleLowProcess(v27); /*0x683340*/
      break; /*0x683345*/
    case 3: /*0x6832f4*/
      v25 = (LowProcess *)FormHeapAlloc(0x90u); /*0x683300*/
      retaddr = (TESHealthForm **)v25; /*0x683308*/
      if ( v25 ) /*0x683316*/
        v26 = (HighProcess *)LowProcess::LowProcess(v25); /*0x68331a*/
      else
LABEL_34:
        v26 = 0; /*0x683393*/
      break; /*0x68331f*/
    default:
      JUMPOUT(0x68339F); /*0x68339f*/
  }
  return def_6832F4((int)v4, (int *)v26, v24, (int)a1);
}
