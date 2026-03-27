void __usercall sub_662590(TESObjectREFR *a1@<ecx>, int a2@<edi>)
{
  ExtraDataList ***v3; // eax
  signed __int16 ExtraCount; // ax
  TESObjectREFRVtbl *vtbl; // ecx
  int v6; // edi
  BaseExtraList *v7; // edi
  int v8; // eax
  ExtraDataList ***v9; // eax
  _DWORD *v10; // eax
  ExtraContainerChanges_Data *ContainerExtraDataForRef; // ebp
  int v12; // eax
  UInt32 ItemCount; // ebx
  int v14; // eax
  int v15; // eax

  if ( !g_GodMode )
  {
    v3 = (ExtraDataList ***)(*((int (__thiscall **)(TESObjectREFRVtbl *, int, int))a1[1].vtbl->super.super.InitializeComponent
                             + 0x3D))(
                              a1[1].vtbl,
                              1,
                              a2);
    ExtraCount = ExtraDataList_GetExtraCount(**v3);
    vtbl = a1[1].vtbl;
    v6 = ExtraCount - 1;
    if ( v6 >= 1 )
    {
      v9 = (ExtraDataList ***)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent
                               + 0x3D))(
                                vtbl,
                                1);
      ExtraDataList_SetExtraCount(**v9, v6);
      v10 = (_DWORD *)(*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(a1[1].vtbl);
      sub_60D020(v10, 1);
      if ( TESObjectREFR_GetContainer(a1) )
      {
        ContainerExtraDataForRef = ContainerExtraData_GetContainerExtraDataForRef(a1);
        if ( ContainerExtraDataForRef )
        {
          v12 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(
                  a1[1].vtbl,
                  1);
          ItemCount = ContainerExtraData_GetItemCount(ContainerExtraDataForRef, *(TESForm **)(v12 + 8));
          if ( ItemCount != v6 + 1 )
          {
            v14 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(
                    a1[1].vtbl,
                    1);
            sub_487350(ContainerExtraDataForRef, *(_DWORD *)(v14 + 8), v6 - ItemCount + 1);
          }
        }
      }
      v15 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(
              a1[1].vtbl,
              1);
      a1->vtbl->RemoveItem(a1, *(TESForm **)(v15 + 8), 0, 1, 0, 0, 0, 0, 0, 1, 0);
    }
    else
    {
      v7 = **(BaseExtraList ***)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent
                                 + 0x3D))(
                                  vtbl,
                                  1);
      v8 = (*((int (__thiscall **)(TESObjectREFRVtbl *, int))a1[1].vtbl->super.super.InitializeComponent + 0x3D))(
             a1[1].vtbl,
             1);
      a1->vtbl->RemoveItem(a1, *(TESForm **)(v8 + 8), v7, 1, 0, 0, 0, 0, 0, 1, 0);
      sub_5C1900();
      (*((void (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x43))(
        a1[1].vtbl,
        0);
    }
  }
}
