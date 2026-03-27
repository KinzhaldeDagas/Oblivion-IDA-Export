int __userpurge sub_6830B0@<eax>(double a1@<st2>, double a2@<st1>, TESObjectREFR *a3)
{
  TESObjectREFR *v3; // eax
  TESObjectREFR *v4; // ebx
  TESForm *v5; // eax
  char IsPersistent; // al
  TESObjectCELL *v7; // eax
  BSExtraDataVtbl *v8; // eax
  void (__thiscall **p_ChangeCell)(TESObjectREFR *); // edi
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // eax
  unsigned int *v11; // edi
  tListEntryData *objList; // eax
  ExtraContainerChanges_Data *v13; // eax
  unsigned int v14; // edx
  Sky *v15; // edi
  NiNode *nodeMoonsRoot; // eax
  int m_uiRefCount_low; // ecx
  bool v18; // zf
  _DWORD *v19; // ebp
  int *v20; // eax
  int v21; // ebx
  NiNode *Health; // eax
  TESObjectREFRVtbl *vtbl; // esi
  LowProcess *v24; // eax
  MiddleLowProcess *v25; // eax
  MiddleHighProcess *v26; // eax
  HighProcess *v27; // eax
  TESObjectCELL *ParentCell; // [esp-4h] [ebp-30h]
  int v30; // [esp+0h] [ebp-2Ch]
  int v31; // [esp+4h] [ebp-28h]
  int v32; // [esp+8h] [ebp-24h]
  int v33; // [esp+Ch] [ebp-20h]
  float *v34; // [esp+14h] [ebp-18h]
  unsigned int retaddr; // [esp+2Ch] [ebp+0h]

  if ( !a3
    || (v3 = sub_4DB260(a3->member.super.type, 0),
        (v4 = (TESObjectREFR *)OblivionDynamicCast(
                                 v3,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                                 &Actor `RTTI Type Descriptor',
                                 0)) == 0) )
  {
    JUMPOUT(0x6833EB);
  }
  v5 = a3->vtbl->GetBaseForm(a3);
  TESObjectREFR_SetBaseForm(v4, (int)v5);
  TESForm_MakeTemporary((TESForm *)v4);
  TESForm_SetFormID((TESForm *)v4, a3->member.super.refID, 1);
  IsPersistent = TESObjectREFR_IsPersistent_(a3);
  TESObjectREFR_SetPersistance((TESChildCELL *)v4, a1, a2, IsPersistent);
  TESObjectREFR_SetPosition(v4, a3->member.pos[0], a3->member.pos[1], a3->member.pos[2]);
  sub_4D89A0((int *)v4, LODWORD(a3->member.rot.x), LODWORD(a3->member.rot.y), LODWORD(a3->member.rot.z));
  if ( TESObjectREFR_GetParentCell(a3) && (v7 = TESObjectREFR_GetParentCell(a3), TESObjectCELL_IsInterior(v7))
    || (v8 = (BSExtraDataVtbl *)(*(int (__thiscall **)(TESChildCELLVtbl *))a3->member.childCell.GetChildCell)(&a3->member.childCell)) == 0 )
  {
    p_ChangeCell = (void (__thiscall **)(TESObjectREFR *))&v4->vtbl->ChangeCell;
    ParentCell = TESObjectREFR_GetParentCell(a3);
    (*p_ChangeCell)(v4);
  }
  else
  {
    sub_4247B0(&v4->member.baseExtraList, v8);
  }
  Actor_GetActorBaseForm((Actor *)a3, 0);
  ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a3);
  v11 = (unsigned int *)ContainerExtraDataForRef;
  if ( ContainerExtraDataForRef )
  {
    objList = ContainerExtraDataForRef->objList;
    if ( *(_DWORD *)(*v11 + 4) || objList->node.data )
    {
      Actor_GetActorBaseForm((Actor *)v4, 0);
      v13 = ContainerExtraData_GetContainerExtraDataForRef(v4);
      v14 = *v11;
      v34 = (float *)v13;
      retaddr = *v11;
      if ( *v11 )
      {
        while ( 1 )
        {
          v15 = *(Sky **)v14;
          if ( !*(_DWORD *)v14 )
            goto LABEL_23;
          nodeMoonsRoot = v15->nodeMoonsRoot;
          m_uiRefCount_low = LOBYTE(nodeMoonsRoot->members.super.super.super.m_uiRefCount);
          if ( m_uiRefCount_low != 0x1B )
            break;
          if ( nodeMoonsRoot != (NiNode *)TESDataHandler_g_Lockpick )
          {
            v18 = nodeMoonsRoot == (NiNode *)TESDataHandler_g_SkeletonKey;
LABEL_19:
            if ( !v18 )
              goto LABEL_23;
          }
          v19 = (_DWORD *)FormHeapAlloc(0xCu);
          v20 = 0;
          if ( v19 )
          {
            v21 = (int)v15->nodeMoonsRoot;
            Health = TESHealthForm_GetHealth(v15);
            v20 = ContainerEntryExtraData_constr(v19, v21, (int)Health);
          }
          ContainerExtraData_AddEntry(v34, v20, 1, (int)ParentCell, v30, v31, v32, v33);
          v14 = 0xFFFFFFFF;
LABEL_23:
          if ( !*(_DWORD *)(v14 + 4) )
            goto LABEL_24;
          v14 = *(_DWORD *)(v14 + 4);
        }
        v18 = m_uiRefCount_low == 0x27;
        goto LABEL_19;
      }
    }
  }
LABEL_24:
  vtbl = a3[1].vtbl;
  if ( !vtbl )
    JUMPOUT(0x6833E9);
  switch ( (*((int (__thiscall **)(_DWORD))vtbl->super.super.InitializeComponent + 2))(vtbl) )
  {
    case 0:
      v27 = (HighProcess *)FormHeapAlloc(0x2ECu);
      if ( v27 )
        HighProcess::HighProcess(v27);
      break;
    case 1:
      v26 = (MiddleHighProcess *)FormHeapAlloc(0x18Cu);
      if ( v26 )
        MiddleHighProcess::MiddleHighProcess(v26);
      break;
    case 2:
      v25 = (MiddleLowProcess *)FormHeapAlloc(0xA8u);
      if ( v25 )
        MiddleLowProcess::MiddleLowProcess(v25);
      break;
    case 3:
      v24 = (LowProcess *)FormHeapAlloc(0x90u);
      if ( v24 )
        LowProcess::LowProcess(v24);
      break;
    default:
      JUMPOUT(0x68339F);
  }
  return def_6832F4(a3);
}
