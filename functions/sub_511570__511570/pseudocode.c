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
  double *v9; // ebp
  TESForm *ActorBaseForm; // ebx
  void *v11; // eax
  TESForm *v12; // esi
  UInt32 BaseCalcAVi; // eax
  __int16 v14; // ax
  __int16 v15; // ax
  int v16; // eax
  TESObjectREFR *v17; // eax
  TESObjectREFR *v18; // ebx
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList *****v20; // eax
  _DWORD *EquippedInstance; // ebp
  TESObjectREFRVtbl *vtbl; // ecx
  TESObjectREFRVtbl *v23; // edi
  void (__thiscall **v24)(TESObjectREFRVtbl *, _DWORD *, int); // esi
  int v25; // eax
  TESObjectCELL *DwordAtOffset40; // [esp-18h] [ebp-1Ch]
  TESWorldSpace *WorldSpace; // [esp-14h] [ebp-18h]

  v9 = refID; /*0x511573*/
  *refID = 0.0; /*0x511577*/
  if ( a5 )
  {
    if ( (*((unsigned __int8 (__thiscall **)(TESChildCELL *))a5->vtbl + 0x64))(a5) )
    {
      ActorBaseForm = Actor_GetActorBaseForm((Actor *)a5, 0); /*0x5115a5*/
      v11 = ActorBaseForm ? TESForm_CreateDynamic(ActorBaseForm->member.type) : 0;
      v12 = (TESForm *)OblivionDynamicCast( /*0x5115d1*/
                         v11,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESActorBase `RTTI Type Descriptor',
                         0);
      if ( v12 ) /*0x5115d8*/
      {
        ((void (__usercall *)(TESForm *@<ecx>, TESForm *, double@<st0>, double@<st1>))v12->vtbl->CopyFrom)( /*0x5115e9*/
          v12,
          ActorBaseForm,
          a2,
          st6_0);
        if ( a5 == (TESChildCELL *)reference ) /*0x5115f3*/
        {
          BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, (int)ActorBaseForm, (int)a5, (int)v12, 8); /*0x5115f7*/
          TESActorBase_SetHealth(v12, BaseCalcAVi); /*0x5115ff*/
          v14 = Actor_GetBaseCalcAVi((int *)reference, (int)&v12[1].member.refID, (int)a5, (int)v12, 0xA); /*0x51160f*/
          TESActorBaseData_SetFatigue(&v12[1].member.refID, v14); /*0x511617*/
          v15 = Actor_GetBaseCalcAVi((int *)reference, (int)&v12[1].member.refID, (int)a5, (int)v12, 9); /*0x511624*/
          TESActorBaseData_SetMagicka(&v12[1].member.refID, v15); /*0x51162c*/
        }
        WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)a5); /*0x51163a*/
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x511644*/
        v16 = (*((int (__thiscall **)(TESChildCELL *))a5->vtbl + 0x5D))(a5); /*0x511651*/
        TESDataHandler_PlaceObjectRef(0.0, st6_0, a2, v12, v16, (int)&a5[8], DwordAtOffset40, WorldSpace, 0); /*0x51165b*/
        v18 = v17; /*0x511660*/
        if ( v17 ) /*0x511664*/
        {
          refID = (double *)v17->member.super.refID; /*0x511673*/
          sub_4F9FB0(&refID, v9); /*0x511677*/
          TESDataHandler_AddForm(g_TESDataHandler, 0.0, st6_0, a2, v12); /*0x511686*/
          SaveLoad_AddCreatedObj((char *)g_TESSaveLoadGame, (int)v12); /*0x511692*/
          ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)&a5[0x11]); /*0x51169a*/
          if ( ContainerChanges ) /*0x5116a1*/
            sub_48DA00(ContainerChanges, 0.0, st6_0, a2, (EntryData *)a5, v18); /*0x5116a7*/
          v20 = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v18->member.baseExtraList); /*0x5116af*/
          if ( v20 ) /*0x5116b6*/
          {
            EquippedInstance = ContainerExtraData_GetEquippedInstance(v20, 9, 0); /*0x5116c3*/
            if ( EquippedInstance ) /*0x5116c7*/
            {
              vtbl = v18[1].vtbl; /*0x5116c9*/
              if ( vtbl ) /*0x5116ce*/
              {
                if ( !(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent + 0x3B))( /*0x5116da*/
                        vtbl,
                        1) )
                {
                  v23 = v18[1].vtbl; /*0x5116e0*/
                  v24 = (void (__thiscall **)(TESObjectREFRVtbl *, _DWORD *, int))((char *)v23->super.super.InitializeComponent /*0x5116ef*/
                                                                                 + 0x104);
                  v25 = ((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>, double@<st1>))v18->vtbl->GetNiNode)( /*0x5116f5*/
                          v18,
                          a2,
                          st6_0);
                  (*v24)(v23, EquippedInstance, v25); /*0x5116fd*/
                  return 1; /*0x511705*/
                }
              }
            }
          }
        }
        else
        {
          v12->vtbl->Destroy(v12, 1); /*0x51170f*/
        }
      }
    }
  }
  return 1; /*0x511704*/
}
