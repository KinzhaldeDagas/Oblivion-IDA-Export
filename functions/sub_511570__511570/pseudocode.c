char __usercall sub_511570@<al>(
        double st6_0@<st1>,
        double a2@<st0>,
        int a3,
        int a4,
        TESChildCELL *a5,
        int a6,
        int a7,
        int a8,
        double *refID)
{
  double *v10; // ebp
  TESForm *ActorBaseForm; // ebx
  TESForm *v12; // eax
  TESForm *v13; // esi
  UInt32 BaseCalcAVi; // eax
  __int16 v15; // ax
  __int16 v16; // ax
  float *v17; // eax
  TESObjectREFR *v18; // eax
  TESObjectREFR *v19; // ebx
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList *****v21; // eax
  _DWORD *EquippedInstance; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v24; // edi
  void (__thiscall **v25)(TESObjectREFRVtbl *, _DWORD *, int); // esi
  int v26; // eax
  TESObjectCELL *ParentCell; // [esp-18h] [ebp-1Ch]
  TESWorldSpace *WorldSpace; // [esp-14h] [ebp-18h]

  v10 = refID;
  *refID = 0.0;
  if ( a5 )
  {
    if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x64))(a5) )
    {
      ActorBaseForm = Actor_GetActorBaseForm((Actor *)a5, 0);
      v12 = ActorBaseForm ? TESForm_CreateDynamic(ActorBaseForm->member.type) : 0;
      v13 = (TESForm *)OblivionDynamicCast(
                         v12,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESActorBase `RTTI Type Descriptor',
                         0);
      if ( v13 )
      {
        ((void (__usercall *)(TESForm *@<ecx>, TESForm *, double@<st0>, double@<st1>))v13->vtbl->CopyFrom)(
          v13,
          ActorBaseForm,
          a2,
          st6_0);
        if ( a5 == (TESChildCELL *)TESDataHandler_g_PlayerRef )
        {
          BaseCalcAVi = Actor_GetBaseCalcAVi(8);
          TESActorBase_SetHealth(v13, BaseCalcAVi);
          v15 = Actor_GetBaseCalcAVi(0xA);
          TESActorBaseData_SetFatigue(&v13[1].member.refID, v15);
          v16 = Actor_GetBaseCalcAVi(9);
          TESActorBaseData_SetMagicka(&v13[1].member.refID, v16);
        }
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5);
        ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a5);
        v17 = (float *)(*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x5D))(a5);
        TESDataHandler_PlaceObjectRef(0.0, st6_0, (int)v13, (int)v17, (int)&a5[8], ParentCell, (int)WorldSpace, 0);
        v19 = v18;
        if ( v18 )
        {
          refID = (double *)v18->member.super.refID;
          sub_4F9FB0(&refID, v10);
          TESDataHandler_AddForm((TESWorldSpace **)TESDataHandler, 0.0, st6_0, a2, (unsigned __int8 *)v13);
          SaveLoad_AddCreatedObj((char *)SaveLoad_CurrentSavegame, (int)v13);
          ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)&a5[0x11]);
          if ( ContainerChanges )
            sub_48DA00(ContainerChanges, 0.0, st6_0, a2, (int)a5, v19);
          v21 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v19->member.baseExtraList);
          if ( v21 )
          {
            EquippedInstance = ContainerExtraData_GetEquippedInstance(v21, 9, 0);
            if ( EquippedInstance )
            {
              vtbl = v19[1].vtbl;
              if ( vtbl )
              {
                if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))(
                        vtbl,
                        1) )
                {
                  v24 = v19[1].vtbl;
                  v25 = (void (__thiscall **)(TESObjectREFRVtbl *, _DWORD *, int))((char *)v24->super.super.InitializeComponent
                                                                                 + 0x104);
                  v26 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v19->vtbl->GetNiNode)(
                          v19,
                          a2,
                          st6_0);
                  (*v25)(v24, EquippedInstance, v26);
                  return 1;
                }
              }
            }
          }
        }
        else
        {
          v13->vtbl->Destroy(v13, 1);
        }
      }
    }
  }
  return 1;
}
