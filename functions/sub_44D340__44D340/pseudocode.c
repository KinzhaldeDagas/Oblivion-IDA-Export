void __userpurge sub_44D340(
        _DWORD *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        signed int a5,
        TESObjectREFR *a6)
{
  _DWORD *v7; // esi
  ExtraDataList ***v8; // eax
  ExtraDataList ***v9; // ebx
  ExtraDataList **v10; // eax
  ExtraDataList ***v11; // eax
  ExtraDataList *v12; // edi
  signed __int16 ExtraCount; // ax
  signed int v14; // ebp
  TESObjectREFR *v15; // esi
  BaseExtraList *v16; // ebp
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList ***v18; // eax
  ExtraDataList **v19; // eax
  ExtraDataList **v20; // ecx
  ExtraContainerChanges_Data *v21; // eax
  ExtraDataList ***v22; // eax
  ExtraDataList **v23; // eax
  ExtraDataList **v24; // ecx
  char v25; // [esp+4Eh] [ebp-Eh]
  char v26; // [esp+4Fh] [ebp-Dh]
  ExtraDataList **v27; // [esp+50h] [ebp-Ch]
  signed int v28; // [esp+54h] [ebp-8h]

  v7 = a1;
  ContainerExtraData_GetEntryForForm((_DWORD **)a1[0x337], *(_DWORD *)(a4 + 8));
  v9 = v8;
  if ( v8 )
  {
    v10 = *v8;
    v26 = 0;
    if ( a5 )
    {
      while ( 1 )
      {
        if ( v10 )
        {
          v12 = *v10;
          v27 = (ExtraDataList **)v10[1];
          if ( *v10 )
          {
            ExtraCount = ExtraDataList_GetExtraCount(v12);
            v14 = ExtraCount;
            v28 = ExtraCount;
            if ( ExtraCount > 0 )
            {
              v15 = (TESObjectREFR *)sub_41E790(v12);
              if ( a5 < v14 )
                v28 = a5;
              else
                sub_4234B0(v12);
              if ( v15 )
              {
                if ( TESObjectREFR_GetContainer(v15) )
                {
                  v16 = 0;
                  if ( (unsigned int)BaseExtraList_Count(v12) > 1 || ExtraDataList_GetExtraCount(v12) > 1 )
                    v16 = (BaseExtraList *)v12;
                  v15->vtbl->RemoveItem(
                    v15,
                    (TESForm *)v9[2],
                    v16,
                    v28,
                    0,
                    0,
                    (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                    0,
                    0,
                    1,
                    0);
                  ContainerChanges = ExtraDataList_GetContainerChanges(&v15->member.baseExtraList);
                  v25 = 1;
                  if ( ContainerChanges )
                  {
                    ContainerExtraData_GetEntryForForm(ContainerChanges, (int)v9[2]);
                    if ( v18 )
                    {
                      v19 = *v18;
                      if ( v19 )
                      {
                        v20 = v19;
                        do
                        {
                          if ( !*v20 )
                            break;
                          if ( !v25 )
                            break;
                          if ( *v20 == v12 )
                            v25 = 0;
                          else
                            v20 = (ExtraDataList **)v20[1];
                        }
                        while ( v20 );
                      }
                    }
                  }
                  v21 = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
                  if ( v21 )
                  {
                    ContainerExtraData_GetEntryForForm(v21, (int)v9[2]);
                    if ( v22 )
                    {
                      v23 = *v22;
                      if ( v23 )
                      {
                        v24 = v23;
                        do
                        {
                          if ( !*v24 )
                            break;
                          if ( !v25 )
                            goto LABEL_46;
                          if ( *v24 == v12 )
                            v25 = 0;
                          else
                            v24 = (ExtraDataList **)v24[1];
                        }
                        while ( v24 );
                      }
                    }
                  }
                  if ( v25
                    && (unsigned int)BaseExtraList_Count(v12) < 2
                    && ExtraDataList_GetExtraCount(v12) <= 1
                    && !ExtraDataList_GetExtraScript(v12) )
                  {
                    BSSimpleList_Remove(*v9, (int)v12);
                    v27 = *v9;
                    goto LABEL_52;
                  }
LABEL_46:
                  if ( ExtraDataList_GetExtraCount(v12) <= 1 || (unsigned int)BaseExtraList_Count(v12) >= 2 )
                  {
                    BaseExtraList_Count(v12);
                    a5 -= v28;
                    v7 = a1;
                    goto LABEL_9;
                  }
                }
                else
                {
                  ExtraDataList_RemoveOwner(&v15->member.baseExtraList.vtbl);
                  sub_4234B0(&v15->member.baseExtraList);
                  ((void (__thiscall *)(PlayerCharacter *, TESObjectREFR *, signed int, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_B3)(
                    TESDataHandler_g_PlayerRef,
                    v15,
                    v28,
                    0);
                  BSSimpleList_Remove(*v9, (int)v12);
                  v27 = *v9;
                  if ( (unsigned int)BaseExtraList_Count(v12) < 2
                    && ExtraDataList_GetExtraCount(v12) <= 1
                    && !ExtraDataList_GetExtraScript(v12) )
                  {
LABEL_52:
                    (*(void (__thiscall **)(ExtraDataList *, int))v12->vtbl)(v12, 1);
                  }
                }
                a5 -= v28;
                v7 = a1;
                goto LABEL_9;
              }
              v7 = a1;
            }
          }
          if ( !v27 )
            return;
        }
        else
        {
          if ( v26 )
            return;
          sub_448F40(v7, a2, a3, a6);
          v26 = 1;
          ContainerExtraData_GetEntryForForm((_DWORD **)v7[0x337], *(_DWORD *)(a4 + 8));
          v9 = v11;
          if ( !v11 )
            return;
          v27 = *v11;
        }
LABEL_9:
        if ( !a5 )
          return;
        v10 = v27;
      }
    }
  }
}
