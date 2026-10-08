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

  vtbl = a1[1].vtbl; /*0x5e7236*/
  if ( vtbl && !*(_BYTE *)(g_TESDataHandler + 0xCD4) ) /*0x5e7246*/
  {
    v17 = 0; /*0x5e7260*/
    v8 = (EntryData *)(*((int (__usercall **)@<eax>(TESObjectREFRVtbl *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))vtbl->super.super.InitializeComponent /*0x5e726c*/
                       + 0x3C))(
                        vtbl,
                        0,
                        a4,
                        a3,
                        a2);
    v9 = (EntryData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent /*0x5e727d*/
                       + 0x3E))(
                        a1[1].vtbl,
                        0);
    v23 = (*((int (__thiscall **)(TESObjectREFRVtbl *, _DWORD))a1[1].vtbl->super.super.InitializeComponent + 0x3B))( /*0x5e728c*/
            a1[1].vtbl,
            0);
    ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&a1->member.baseExtraList); /*0x5e7297*/
    v19 = a1->vtbl->GetSleepState(a1) == kSitSleep_Sitting; /*0x5e72ad*/
    EquippedInstance = 0; /*0x5e72b6*/
    v20 = 0; /*0x5e72ba*/
    if ( ContainerChanges ) /*0x5e72be*/
    {
      EquippedInstance = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xD, 0); /*0x5e72d0*/
      v20 = (int **)ContainerExtraData_GetEquippedInstance(ContainerChanges, 0xE, 0); /*0x5e72d9*/
    }
    v18 = 0; /*0x5e72e8*/
    v16 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xC1))(a1[1].vtbl); /*0x5e72f1*/
    if ( !v16 ) /*0x5e72f5*/
      v16 = (*((int (__thiscall **)(TESObjectREFRVtbl *))a1[1].vtbl->super.super.InitializeComponent + 0xBF))(a1[1].vtbl); /*0x5e7304*/
    if ( !a6 && !v16 ) /*0x5e7314*/
      v16 = InterfaceManager_IsMenuMode() != 0; /*0x5e731f*/
    v21 = 1; /*0x5e732a*/
    if ( !a5 || a6 ) /*0x5e7336*/
      v21 = 0; /*0x5e7338*/
    if ( v23 ) /*0x5e7343*/
    {
      v11 = *(_DWORD *)(v23 + 8); /*0x5e7345*/
      v12 = *(_BYTE *)(v11 + 0x90); /*0x5e7348*/
      if ( v12 == 1 || v12 > 2 && v12 <= 5 ) /*0x5e7358*/
      {
        LOBYTE(v11) = 1; /*0x5e7362*/
        v18 = 1; /*0x5e7364*/
      }
      else
      {
        LOBYTE(v11) = 0; /*0x5e735a*/
        v18 = 0; /*0x5e735c*/
      }
    }
    else
    {
      LOBYTE(v11) = 0; /*0x5e736a*/
    }
    if ( a5 ) /*0x5e7370*/
    {
      v13 = *(unsigned __int8 *)(a5 + 4); /*0x5e7376*/
      if ( v13 != 0x14 ) /*0x5e737d*/
      {
        if ( v13 != 0x1A ) /*0x5e7386*/
        {
          if ( v13 != 0x21 ) /*0x5e738f*/
            goto LABEL_160; /*0x5e738f*/
          if ( v18 ) /*0x5e739a*/
          {
            if ( v9 ) /*0x5e739e*/
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e73a4*/
              {
                sub_4853B0(v9, 0, 0, 0); /*0x5e73b5*/
                a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, 1); /*0x5e73be*/
                v17 = 1; /*0x5e73c3*/
              }
            }
            if ( !v8 || !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e73d4*/
              goto LABEL_160; /*0x5e73db*/
            v14 = v16 == 0; /*0x5e73e1*/
            goto LABEL_31; /*0x5e73e1*/
          }
          if ( v16 || !v8 ) /*0x5e740e*/
          {
            if ( !v23 ) /*0x5e744e*/
              goto LABEL_160; /*0x5e744e*/
            if ( !v16 && v8 ) /*0x5e745d*/
              goto LABEL_160; /*0x5e745d*/
            if ( v9 ) /*0x5e7465*/
            {
              if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) && !a1->vtbl->IsDead(a1, 0) ) /*0x5e7480*/
              {
                if ( EquippedInstance ) /*0x5e748c*/
                {
                  if ( v9->extendData ) /*0x5e748e*/
                    BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance); /*0x5e749a*/
                }
                EquipShield(a1, a4, a2, a3, (UInt32)v9->type); /*0x5e74a5*/
                v17 = 1; /*0x5e74aa*/
              }
            }
            if ( !v8 ) /*0x5e74b1*/
              goto LABEL_160; /*0x5e74b1*/
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && v16 && v9 ) /*0x5e74cd*/
              goto LABEL_32; /*0x5e74cd*/
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) || a1->vtbl->IsDead(a1, 0) ) /*0x5e7505*/
              goto LABEL_160; /*0x5e7509*/
            if ( !v16 ) /*0x5e7513*/
            {
LABEL_156:
              if ( v20 ) /*0x5e79e5*/
              {
                if ( v8->extendData ) /*0x5e79e7*/
                  BSSimpleList_PushFront(&v8->extendData->node.data, **v20); /*0x5e79f2*/
              }
              EquipLight(a1, a4, a2, a3, (int *)v8->type); /*0x5e79fd*/
              goto LABEL_160; /*0x5e79fd*/
            }
            v15 = v9 == 0; /*0x5e7519*/
LABEL_155:
            if ( !v15 ) /*0x5e79dd*/
              goto LABEL_160; /*0x5e79dd*/
            goto LABEL_156; /*0x5e79dd*/
          }
          if ( v9 ) /*0x5e7412*/
          {
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e741c*/
            {
              sub_4853B0(v9, 0, 0, 0); /*0x5e7431*/
              a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e743d*/
              v17 = 1; /*0x5e7442*/
            }
          }
LABEL_153:
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e79c4*/
            goto LABEL_160; /*0x5e79cb*/
          v15 = !a1->vtbl->IsDead(a1, 0); /*0x5e79db*/
          goto LABEL_155; /*0x5e79db*/
        }
        if ( (_BYTE)v11 ) /*0x5e7522*/
        {
          if ( !v16 ) /*0x5e7529*/
            goto LABEL_58; /*0x5e7529*/
        }
        else
        {
          if ( !v16 ) /*0x5e7577*/
            goto LABEL_58; /*0x5e7577*/
          if ( !v9 ) /*0x5e757b*/
            goto LABEL_160; /*0x5e757b*/
          if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e7585*/
          {
LABEL_58:
            if ( v9 ) /*0x5e752d*/
            {
              if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e7537*/
              {
                if ( !v16 ) /*0x5e7549*/
                {
                  sub_4853B0(v9, 0, 0, 0); /*0x5e7557*/
                  sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e7563*/
                  v17 = 1; /*0x5e7568*/
                }
              }
            }
            goto LABEL_160; /*0x5e756d*/
          }
        }
        if ( !v8 ) /*0x5e7590*/
          goto LABEL_160; /*0x5e7590*/
        v14 = (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) == 0; /*0x5e759f*/
LABEL_31:
        if ( !v14 ) /*0x5e73e6*/
        {
LABEL_32:
          sub_4853B0(v8, 0, 0, 0); /*0x5e73ec*/
          UnequipLight(a1, a2, a3, a4); /*0x5e73fb*/
        }
LABEL_160:
        if ( EquippedInstance ) /*0x5e7a08*/
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)EquippedInstance, v11); /*0x5e7a0c*/
          FormHeapFree((unsigned int)EquippedInstance); /*0x5e7a12*/
        }
        if ( v20 ) /*0x5e7a1f*/
        {
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)v20, v11); /*0x5e7a27*/
          FormHeapFree((unsigned int)v20); /*0x5e7a2d*/
        }
        if ( v17 ) /*0x5e7a3d*/
          a1->vtbl[1].Unk_46(a1); /*0x5e7a49*/
        return; /*0x5e7a49*/
      }
      if ( !TESBipedModelForm_CoversSlot((unsigned __int16 *)(a5 + 0x64), 0xD, 0) ) /*0x5e75b4*/
        goto LABEL_160; /*0x5e75b4*/
      if ( v16 ) /*0x5e75bf*/
      {
        if ( v9 && v23 ) /*0x5e75c7*/
        {
          if ( v8 ) /*0x5e75cb*/
          {
            if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e75d1*/
            {
              sub_4853B0(v8, 0, 0, 0); /*0x5e75e2*/
              UnequipLight(a1, a2, a3, a4); /*0x5e75e9*/
            }
          }
        }
        else if ( v8 ) /*0x5e75f2*/
        {
          if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !a1->vtbl->IsDead(a1, 0) ) /*0x5e760d*/
          {
            if ( v20 ) /*0x5e7618*/
            {
              if ( v8->extendData ) /*0x5e761a*/
                BSSimpleList_PushFront(&v8->extendData->node.data, **v20); /*0x5e7629*/
            }
            EquipLight(a1, a4, a2, a3, (int *)v8->type); /*0x5e7634*/
          }
        }
      }
      else if ( v8 && v9 ) /*0x5e7641*/
      {
LABEL_86:
        sub_4853B0(v9, 0, 0, 0); /*0x5e765a*/
        sub_4DC8F0(a1, a4, a2, a3, (int)v9, 0); /*0x5e766b*/
        v17 = 1; /*0x5e7670*/
        goto LABEL_160; /*0x5e7675*/
      }
      if ( v23 && !v18 || !v9 ) /*0x5e7654*/
        goto LABEL_160; /*0x5e7654*/
      goto LABEL_86; /*0x5e7654*/
    }
    if ( (_BYTE)v11 ) /*0x5e767c*/
    {
      if ( v9 ) /*0x5e7684*/
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e768a*/
        {
          sub_4853B0(v9, 0, 0, 0); /*0x5e769b*/
          a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e76a7*/
          v17 = 1; /*0x5e76ac*/
        }
      }
      if ( v8 ) /*0x5e76b3*/
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e76bd*/
        {
          if ( v16 ) /*0x5e76cb*/
          {
LABEL_94:
            sub_4853B0(v8, 0, 0, 0); /*0x5e76cd*/
            UnequipLight(a1, a2, a3, a4); /*0x5e76dc*/
            goto LABEL_147; /*0x5e76e1*/
          }
        }
        else if ( v16 ) /*0x5e76eb*/
        {
          goto LABEL_147; /*0x5e76eb*/
        }
        if ( a1->vtbl->IsDead(a1, 0) ) /*0x5e76fd*/
          goto LABEL_147; /*0x5e7701*/
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e770b*/
          goto LABEL_136; /*0x5e7712*/
LABEL_111:
        EquipLight(a1, a4, a2, a3, (int *)v8->type); /*0x5e77b5*/
      }
    }
    else if ( v23 ) /*0x5e771f*/
    {
      if ( v16 ) /*0x5e77ca*/
      {
        if ( !v9 || (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) || a1->vtbl->IsDead(a1, 0) ) /*0x5e77ed*/
        {
          if ( v8 && !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !v9 && !a1->vtbl->IsDead(a1, 0) ) /*0x5e787a*/
          {
            if ( v20 ) /*0x5e788a*/
            {
              if ( v8->extendData ) /*0x5e788c*/
                BSSimpleList_PushFront(&v8->extendData->node.data, **v20); /*0x5e7897*/
            }
            goto LABEL_111; /*0x5e7897*/
          }
        }
        else
        {
          if ( EquippedInstance ) /*0x5e77f9*/
          {
            if ( v9->extendData ) /*0x5e77fb*/
              BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance); /*0x5e7807*/
          }
          EquipShield(a1, a4, a2, a3, (UInt32)v9->type); /*0x5e7812*/
          v17 = 1; /*0x5e7819*/
          if ( v8 && (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) ) /*0x5e7828*/
            goto LABEL_94; /*0x5e782f*/
        }
      }
      else if ( v8 ) /*0x5e78ae*/
      {
        if ( v9 ) /*0x5e78b2*/
        {
          if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e78b8*/
          {
            sub_4853B0(v9, 0, 0, 0); /*0x5e78c9*/
            a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e78d5*/
            v17 = 1; /*0x5e78da*/
          }
        }
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) && !a1->vtbl->IsDead(a1, 0) ) /*0x5e78fc*/
        {
LABEL_136:
          if ( v20 ) /*0x5e7908*/
          {
            if ( v8->extendData ) /*0x5e790a*/
              BSSimpleList_PushFront(&v8->extendData->node.data, **v20); /*0x5e7915*/
          }
          goto LABEL_111; /*0x5e7915*/
        }
      }
      else if ( v9 ) /*0x5e7929*/
      {
        if ( !(unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) && !a1->vtbl->IsDead(a1, 0) ) /*0x5e7944*/
        {
          if ( EquippedInstance ) /*0x5e7950*/
          {
            if ( v9->extendData ) /*0x5e7952*/
              BSSimpleList_PushFront(&v9->extendData->node.data, **EquippedInstance); /*0x5e795e*/
          }
          EquipShield(a1, a4, a2, a3, (UInt32)v9->type); /*0x5e7969*/
          v17 = 1; /*0x5e796e*/
        }
      }
    }
    else
    {
      if ( v9 ) /*0x5e7727*/
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e772c*/
        {
          sub_4853B0(v9, 0, 0, 0); /*0x5e773a*/
          a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e7746*/
          v17 = 1; /*0x5e774b*/
        }
      }
      if ( v8 ) /*0x5e7752*/
      {
        if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v8, 0) || a1->vtbl->IsDead(a1, 0) ) /*0x5e7771*/
        {
          if ( a1->vtbl->IsDead(a1, 0) ) /*0x5e77ab*/
            goto LABEL_147; /*0x5e77af*/
        }
        else if ( v20 ) /*0x5e777d*/
        {
          if ( v8->extendData ) /*0x5e777f*/
            BSSimpleList_PushFront(&v8->extendData->node.data, **v20); /*0x5e778a*/
        }
        goto LABEL_111; /*0x5e778a*/
      }
    }
LABEL_147:
    if ( !v19 ) /*0x5e7978*/
      goto LABEL_160; /*0x5e7978*/
    if ( ((int (__thiscall *)(TESObjectREFR *))a1->vtbl[2].super.Unk_0C)(a1) ) /*0x5e7988*/
      goto LABEL_160; /*0x5e7988*/
    if ( v9 ) /*0x5e7990*/
    {
      if ( (unsigned __int8)ContainerEntryExtraData_HasWorn(v9, 0) ) /*0x5e7995*/
      {
        sub_4853B0(v9, 0, 0, 0); /*0x5e79a6*/
        a4 = sub_4DC8F0(a1, a4, a2, a3, (int)v9, v21); /*0x5e79b2*/
        v17 = 1; /*0x5e79b7*/
      }
    }
    if ( !v8 ) /*0x5e79be*/
      goto LABEL_160; /*0x5e79be*/
    goto LABEL_153; /*0x5e79be*/
  }
}
