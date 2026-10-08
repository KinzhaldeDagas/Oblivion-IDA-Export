void __userpurge sub_44D340(
        _DWORD *a1@<ecx>,
        double a2@<st1>,
        double a3@<st0>,
        int a4,
        signed int a5,
        TESObjectREFR *a6)
{
  _DWORD *v6; // esi
  EntryData *EntryForForm; // eax
  EntryData *v8; // ebx
  void *extendData; // eax
  EntryData *v10; // eax
  ExtraDataList *v11; // edi
  signed __int16 ExtraCount; // ax
  signed int v13; // ebp
  TESObjectREFR *OriginalReference; // esi
  BaseExtraList *v15; // ebp
  ExtraContainerChanges_Data *ContainerChanges; // eax
  EntryData *v17; // eax
  tListVoid *v18; // eax
  ExtraDataList **v19; // ecx
  ExtraContainerChanges_Data *v20; // eax
  EntryData *v21; // eax
  tListVoid *v22; // eax
  ExtraDataList **v23; // ecx
  char v24; // [esp+4Eh] [ebp-Eh]
  char v25; // [esp+4Fh] [ebp-Dh]
  int *v26; // [esp+50h] [ebp-Ch]
  signed int v27; // [esp+54h] [ebp-8h]

  v6 = a1; /*0x44d34e*/
  EntryForForm = ContainerExtraData_GetEntryForForm( /*0x44d35d*/
                   (ExtraContainerChanges_Data *)a1[0x337],
                   *(TESForm **)(a4 + 8),
                   1,
                   0);
  v8 = EntryForForm; /*0x44d362*/
  if ( EntryForForm ) /*0x44d366*/
  {
    extendData = EntryForForm->extendData; /*0x44d36d*/
    v25 = 0; /*0x44d36f*/
    if ( a5 ) /*0x44d374*/
    {
      while ( 1 ) /*0x44d384*/
      {
        if ( extendData ) /*0x44d386*/
        {
          v11 = *(ExtraDataList **)extendData; /*0x44d3d3*/
          v26 = *((int **)extendData + 1); /*0x44d3da*/
          if ( *(_DWORD *)extendData ) /*0x44d3d3*/
          {
            ExtraCount = ExtraDataList_GetExtraCount(v11); /*0x44d3e6*/
            v13 = ExtraCount; /*0x44d3eb*/
            v27 = ExtraCount; /*0x44d3f0*/
            if ( ExtraCount > 0 ) /*0x44d3f4*/
            {
              OriginalReference = (TESObjectREFR *)ExtraDataList_GetOriginalReference(v11); /*0x44d401*/
              if ( a5 < v13 ) /*0x44d409*/
                v27 = a5; /*0x44d414*/
              else
                sub_4234B0(v11); /*0x44d40d*/
              if ( OriginalReference ) /*0x44d41a*/
              {
                if ( TESObjectREFR_GetContainer(OriginalReference) ) /*0x44d422*/
                {
                  v15 = 0; /*0x44d431*/
                  if ( (unsigned int)BaseExtraList_Count(v11) > 1 || ExtraDataList_GetExtraCount(v11) > 1 ) /*0x44d448*/
                    v15 = (BaseExtraList *)v11; /*0x44d44a*/
                  OriginalReference->vtbl->RemoveItem( /*0x44d472*/
                    OriginalReference,
                    v8->type,
                    v15,
                    v27,
                    0,
                    0,
                    (TESObjectREFR *)reference,
                    0,
                    0,
                    1,
                    0);
                  ContainerChanges = ExtraDataList_GetContainerChanges(&OriginalReference->member.baseExtraList); /*0x44d477*/
                  v24 = 1; /*0x44d47e*/
                  if ( ContainerChanges ) /*0x44d483*/
                  {
                    v17 = ContainerExtraData_GetEntryForForm(ContainerChanges, v8->type, 1, 0); /*0x44d48f*/
                    if ( v17 ) /*0x44d496*/
                    {
                      v18 = v17->extendData; /*0x44d498*/
                      if ( v18 ) /*0x44d49c*/
                      {
                        v19 = (ExtraDataList **)v18; /*0x44d49e*/
                        do /*0x44d4bd*/
                        {
                          if ( !*v19 ) /*0x44d4a0*/
                            break; /*0x44d4a4*/
                          if ( !v24 ) /*0x44d4ab*/
                            break; /*0x44d4ab*/
                          if ( *v19 == v11 ) /*0x44d4af*/
                            v24 = 0; /*0x44d4b1*/
                          else
                            v19 = (ExtraDataList **)v19[1]; /*0x44d4b8*/
                        }
                        while ( v19 ); /*0x44d4bd*/
                      }
                    }
                  }
                  v20 = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x44d4c8*/
                  if ( v20 ) /*0x44d4cf*/
                  {
                    v21 = ContainerExtraData_GetEntryForForm(v20, v8->type, 1, 0); /*0x44d4db*/
                    if ( v21 ) /*0x44d4e2*/
                    {
                      v22 = v21->extendData; /*0x44d4e4*/
                      if ( v22 ) /*0x44d4e8*/
                      {
                        v23 = (ExtraDataList **)v22; /*0x44d4ea*/
                        do /*0x44d50d*/
                        {
                          if ( !*v23 ) /*0x44d4f0*/
                            break; /*0x44d4f4*/
                          if ( !v24 ) /*0x44d4fb*/
                            goto LABEL_46; /*0x44d4fb*/
                          if ( *v23 == v11 ) /*0x44d4ff*/
                            v24 = 0; /*0x44d501*/
                          else
                            v23 = (ExtraDataList **)v23[1]; /*0x44d508*/
                        }
                        while ( v23 ); /*0x44d50d*/
                      }
                    }
                  }
                  if ( v24 /*0x44d531*/
                    && (unsigned int)BaseExtraList_Count(v11) < 2
                    && ExtraDataList_GetExtraCount(v11) <= 1
                    && !ExtraDataList_GetExtraScript(v11) )
                  {
                    BSSimpleList_Remove((int *)v8->extendData, (int)v11); /*0x44d53d*/
                    v26 = (int *)v8->extendData; /*0x44d544*/
                    goto LABEL_52; /*0x44d548*/
                  }
LABEL_46:
                  if ( ExtraDataList_GetExtraCount(v11) <= 1 || (unsigned int)BaseExtraList_Count(v11) >= 2 ) /*0x44d564*/
                  {
                    BaseExtraList_Count(v11); /*0x44d568*/
                    a5 -= v27; /*0x44d571*/
                    v6 = a1; /*0x44d575*/
                    goto LABEL_9; /*0x44d579*/
                  }
                }
                else
                {
                  ExtraDataList_RemoveOwner(&OriginalReference->member.baseExtraList.vtbl); /*0x44d583*/
                  sub_4234B0(&OriginalReference->member.baseExtraList); /*0x44d58a*/
                  ((void (__thiscall *)(PlayerCharacter *, TESObjectREFR *, signed int, _DWORD))reference->vtbl->super.Unk_B3)( /*0x44d5a5*/
                    reference,
                    OriginalReference,
                    v27,
                    0);
                  BSSimpleList_Remove((int *)v8->extendData, (int)v11); /*0x44d5aa*/
                  v26 = (int *)v8->extendData; /*0x44d5b3*/
                  if ( (unsigned int)BaseExtraList_Count(v11) < 2 /*0x44d5d0*/
                    && ExtraDataList_GetExtraCount(v11) <= 1
                    && !ExtraDataList_GetExtraScript(v11) )
                  {
LABEL_52:
                    (*(void (__thiscall **)(ExtraDataList *, int))v11->vtbl)(v11, 1); /*0x44d5d9*/
                  }
                }
                a5 -= v27; /*0x44d5e7*/
                v6 = a1; /*0x44d5eb*/
                goto LABEL_9; /*0x44d5ef*/
              }
              v6 = a1; /*0x44d5f4*/
            }
          }
          if ( !v26 ) /*0x44d5fd*/
            return; /*0x44d5fd*/
        }
        else
        {
          if ( v25 ) /*0x44d38c*/
            return; /*0x44d38c*/
          sub_448F40(v6, a2, a3, a6); /*0x44d395*/
          v25 = 1; /*0x44d3ac*/
          v10 = ContainerExtraData_GetEntryForForm((ExtraContainerChanges_Data *)v6[0x337], *(TESForm **)(a4 + 8), 1, 0); /*0x44d3b1*/
          v8 = v10; /*0x44d3b6*/
          if ( !v10 ) /*0x44d3ba*/
            return; /*0x44d3ba*/
          v26 = (int *)v10->extendData; /*0x44d3be*/
        }
LABEL_9:
        if ( !a5 ) /*0x44d3c7*/
          return; /*0x44d3c7*/
        extendData = v26; /*0x44d380*/
      }
    }
  }
}
