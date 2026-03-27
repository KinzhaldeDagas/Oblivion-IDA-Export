void __userpurge HideEquipment(
        TESObjectREFR *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
        char a6)
{
  TESObjectREFRVtbl *vtbl; // ecx
  EntryData *v8; // ebx
  EntryData *v9; // ebp
  ExtraDataList *****ContainerChanges; // edi
  int v11; // edx
  char v12; // al
  int v13; // eax
  bool v14; // zf
  bool v15; // zf
  char v16; // [esp+20h] [ebp-14h]
  char v17; // [esp+21h] [ebp-13h]
  char v18; // [esp+22h] [ebp-12h]
  bool v19; // [esp+23h] [ebp-11h]
  int **v20; // [esp+24h] [ebp-10h]
  char v21; // [esp+28h] [ebp-Ch]
  int **EquippedInstance; // [esp+2Ch] [ebp-8h]
  int v23; // [esp+30h] [ebp-4h]

  vtbl = a1[1].vtbl;
  if ( vtbl && !*(_BYTE *)(TESDataHandler + 0xCD4) )
  {
    v17 = 0;
    v8 = (EntryData *)(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent
                       + 0x3C))(
                        vtbl,
                        0,
                        a4,
                        a3,
                        a2);
    v9 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent
                       + 0x3E))(
                        a1[1].vtbl,
                        0);
    v23 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3B))(
            a1[1].vtbl,
            0);
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList);
    v19 = a1->vtbl->GetSleepState(a1) == kSitSleep_Sitting;
    EquippedInstance = 0;
    v20 = 0;
    if ( ContainerChanges )
    {
      EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0);
      v20 = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0);
    }
    v18 = 0;
    v16 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xC1))(a1[1].vtbl);
    if ( !v16 )
      v16 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xBF))(a1[1].vtbl);
    if ( !a6 && !v16 )
      v16 = InterfaceManager_IsMenuMode() != 0;
    v21 = 1;
    if ( !a5 || a6 )
      v21 = 0;
    if ( v23 )
    {
      v11 = *(_DWORD *)(v23 + 8);
      v12 = *(_BYTE *)(v11 + 0x90);
      if ( v12 == 1 || v12 > 2 && v12 <= 5 )
      {
        LOBYTE(v11) = 1;
        v18 = 1;
      }
      else
      {
        LOBYTE(v11) = 0;
        v18 = 0;
      }
    }
    else
    {
      LOBYTE(v11) = 0;
    }
    if ( a5 )
    {
      v13 = *(unsigned __int8 *)(a5 + 4);
      if ( v13 != 0x14 )
      {
        if ( v13 != 0x1A )
        {
          if ( v13 != 0x21 )
            goto LABEL_160;
          if ( v18 )
          {
            if ( v9 )
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
              {
                sub_4853B0(v9, 0, 0, 0);
                a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, 1);
                v17 = 1;
              }
            }
            if ( !v8 || !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
              goto LABEL_160;
            v14 = v16 == 0;
            goto LABEL_31;
          }
          if ( v16 || !v8 )
          {
            if ( !v23 )
              goto LABEL_160;
            if ( !v16 && v8 )
              goto LABEL_160;
            if ( v9 )
            {
              if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) && !a1->vtbl->IsDead(a1, 0) )
              {
                if ( EquippedInstance )
                {
                  if ( v9->extendData )
                    BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance);
                }
                EquipShield(a1, a4, a2, a3, (UInt32)v9->type);
                v17 = 1;
              }
            }
            if ( !v8 )
              goto LABEL_160;
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && v16 && v9 )
              goto LABEL_32;
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) || a1->vtbl->IsDead(a1, 0) )
              goto LABEL_160;
            if ( !v16 )
            {
LABEL_156:
              if ( v20 )
              {
                if ( v8->extendData )
                  BSSimpleList_PushFront(&v8->extendData->node.data, **v20);
              }
              EquipLight(a1, a4, a2, a3, (int *)v8->type);
              goto LABEL_160;
            }
            v15 = v9 == 0;
LABEL_155:
            if ( !v15 )
              goto LABEL_160;
            goto LABEL_156;
          }
          if ( v9 )
          {
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
            {
              sub_4853B0(v9, 0, 0, 0);
              a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
              v17 = 1;
            }
          }
LABEL_153:
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
            goto LABEL_160;
          v15 = !a1->vtbl->IsDead(a1, 0);
          goto LABEL_155;
        }
        if ( (_BYTE)v11 )
        {
          if ( !v16 )
            goto LABEL_58;
        }
        else
        {
          if ( !v16 )
            goto LABEL_58;
          if ( !v9 )
            goto LABEL_160;
          if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
          {
LABEL_58:
            if ( v9 )
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
              {
                if ( !v16 )
                {
                  sub_4853B0(v9, 0, 0, 0);
                  sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
                  v17 = 1;
                }
              }
            }
            goto LABEL_160;
          }
        }
        if ( !v8 )
          goto LABEL_160;
        v14 = (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) == 0;
LABEL_31:
        if ( !v14 )
        {
LABEL_32:
          sub_4853B0(v8, 0, 0, 0);
          UnequipLight(a1, a2, a3, a4);
        }
LABEL_160:
        if ( EquippedInstance )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)EquippedInstance, v11);
          FormHeapFree((unsigned int)EquippedInstance);
        }
        if ( v20 )
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v20, v11);
          FormHeapFree((unsigned int)v20);
        }
        if ( v17 )
          a1->vtbl[1].Unk_46(a1);
        return;
      }
      if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)(a5 + 0x64), 0xD, 0) )
        goto LABEL_160;
      if ( v16 )
      {
        if ( v9 && v23 )
        {
          if ( v8 )
          {
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
            {
              sub_4853B0(v8, 0, 0, 0);
              UnequipLight(a1, a2, a3, a4);
            }
          }
        }
        else if ( v8 )
        {
          if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !a1->vtbl->IsDead(a1, 0) )
          {
            if ( v20 )
            {
              if ( v8->extendData )
                BSSimpleList_PushFront(&v8->extendData->node.data, **v20);
            }
            EquipLight(a1, a4, a2, a3, (int *)v8->type);
          }
        }
      }
      else if ( v8 && v9 )
      {
LABEL_86:
        sub_4853B0(v9, 0, 0, 0);
        sub_4DC8F0(a1, a4, a2, a3, (int)v9, 0);
        v17 = 1;
        goto LABEL_160;
      }
      if ( v23 && !v18 || !v9 )
        goto LABEL_160;
      goto LABEL_86;
    }
    if ( (_BYTE)v11 )
    {
      if ( v9 )
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
        {
          sub_4853B0(v9, 0, 0, 0);
          a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
          v17 = 1;
        }
      }
      if ( v8 )
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
        {
          if ( v16 )
          {
LABEL_94:
            sub_4853B0(v8, 0, 0, 0);
            UnequipLight(a1, a2, a3, a4);
            goto LABEL_147;
          }
        }
        else if ( v16 )
        {
          goto LABEL_147;
        }
        if ( a1->vtbl->IsDead(a1, 0) )
          goto LABEL_147;
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
          goto LABEL_136;
LABEL_111:
        EquipLight(a1, a4, a2, a3, (int *)v8->type);
      }
    }
    else if ( v23 )
    {
      if ( v16 )
      {
        if ( !v9 || (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) || a1->vtbl->IsDead(a1, 0) )
        {
          if ( v8 && !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !v9 && !a1->vtbl->IsDead(a1, 0) )
          {
            if ( v20 )
            {
              if ( v8->extendData )
                BSSimpleList_PushFront(&v8->extendData->node.data, **v20);
            }
            goto LABEL_111;
          }
        }
        else
        {
          if ( EquippedInstance )
          {
            if ( v9->extendData )
              BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance);
          }
          EquipShield(a1, a4, a2, a3, (UInt32)v9->type);
          v17 = 1;
          if ( v8 && (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) )
            goto LABEL_94;
        }
      }
      else if ( v8 )
      {
        if ( v9 )
        {
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
          {
            sub_4853B0(v9, 0, 0, 0);
            a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
            v17 = 1;
          }
        }
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !a1->vtbl->IsDead(a1, 0) )
        {
LABEL_136:
          if ( v20 )
          {
            if ( v8->extendData )
              BSSimpleList_PushFront(&v8->extendData->node.data, **v20);
          }
          goto LABEL_111;
        }
      }
      else if ( v9 )
      {
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) && !a1->vtbl->IsDead(a1, 0) )
        {
          if ( EquippedInstance )
          {
            if ( v9->extendData )
              BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance);
          }
          EquipShield(a1, a4, a2, a3, (UInt32)v9->type);
          v17 = 1;
        }
      }
    }
    else
    {
      if ( v9 )
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
        {
          sub_4853B0(v9, 0, 0, 0);
          a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
          v17 = 1;
        }
      }
      if ( v8 )
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) || a1->vtbl->IsDead(a1, 0) )
        {
          if ( a1->vtbl->IsDead(a1, 0) )
            goto LABEL_147;
        }
        else if ( v20 )
        {
          if ( v8->extendData )
            BSSimpleList_PushFront(&v8->extendData->node.data, **v20);
        }
        goto LABEL_111;
      }
    }
LABEL_147:
    if ( !v19 )
      goto LABEL_160;
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) )
      goto LABEL_160;
    if ( v9 )
    {
      if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) )
      {
        sub_4853B0(v9, 0, 0, 0);
        a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21);
        v17 = 1;
      }
    }
    if ( !v8 )
      goto LABEL_160;
    goto LABEL_153;
  }
}
