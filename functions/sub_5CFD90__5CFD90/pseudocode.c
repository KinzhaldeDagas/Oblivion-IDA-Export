void __userpurge sub_5CFD90(
        NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *> *a1@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        double a6@<st7>,
        double a7@<st6>,
        double a8@<st5>,
        double a9@<st4>,
        signed int a10,
        Tile *a11)
{
  TESForm *v12; // eax
  int v13; // edx
  EntryData *InventoryEntryOfItem; // ebp
  int v15; // esi
  Tile *v16; // edi
  Tile *v17; // ebx
  Tile *v18; // edi
  InterfaceManager *Singleton; // eax
  double v20; // st4
  int ExtraCount; // ebx
  ExtraDataList *v22; // esi
  ExtraContainerChanges_Data *ContainerChanges; // edi
  unsigned __int16 *v24; // eax
  _DWORD *v25; // eax
  TESForm *type; // eax
  int **EntryForForm; // ebp
  ExtraDataList *v28; // edi
  double Charge; // st7
  UInt32 v30; // eax
  int *i; // edi
  ExtraDataList *v32; // ebx
  int v33; // edx
  BaseExtraList *v34; // eax
  TESForm *v35; // edx
  int v36; // eax
  unsigned __int16 *v37; // eax
  int v38; // eax
  int v39; // esi
  char *v40; // ecx
  const char *value; // [esp+18h] [ebp-170h]
  float v42; // [esp+1Ch] [ebp-16Ch]
  float a2; // [esp+20h] [ebp-168h]
  float a2a; // [esp+20h] [ebp-168h]
  const char *a2b; // [esp+20h] [ebp-168h]
  ExtraDataList ***v46; // [esp+38h] [ebp-150h]
  float v47; // [esp+3Ch] [ebp-14Ch]
  float v48; // [esp+3Ch] [ebp-14Ch]
  int v49; // [esp+40h] [ebp-148h]
  int v50; // [esp+40h] [ebp-148h]
  char v52[300]; // [esp+4Ch] [ebp-13Ch] BYREF
  unsigned int v53; // [esp+184h] [ebp-4h]

  if ( a10 == 3 ) /*0x5cfde6*/
  {
    sub_57DE50(2); /*0x5cfdea*/
    sub_5CE9B0(bp0, a4, a5, a6, a7, a8, a9); /*0x5cfdf2*/
    return; /*0x5cfdf7*/
  }
  if ( a10 >= 0x33 ) /*0x5cfdff*/
  {
    Tile_GetFloat(a11, 0xFB9); /*0x5cfe0c*/
    v12 = (TESForm *)Double_To_SInt32(a5); /*0x5cfe11*/
    InventoryEntryOfItem = GetInventoryEntryOfItem((TESObjectREFR *)reference, v12, 0); /*0x5cfe22*/
    v46 = (ExtraDataList ***)InventoryEntryOfItem; /*0x5cfe26*/
    if ( InventoryEntryOfItem ) /*0x5cfe2a*/
    {
      v15 = *(_DWORD *)(*((_DWORD *)a1 + 0xE) + 0x38); /*0x5cfe33*/
      v16 = 0; /*0x5cfe36*/
      v17 = 0; /*0x5cfe38*/
      if ( v15 ) /*0x5cfe3c*/
      {
        do /*0x5cfe72*/
        {
          if ( v16 == a11 ) /*0x5cfe46*/
            break; /*0x5cfe46*/
          if ( v16 ) /*0x5cfe4a*/
          {
            if ( Tile_GetFloat(v16, 0xFA1) != fConstant_1 ) /*0x5cfe63*/
              v17 = v16; /*0x5cfe65*/
          }
          v16 = *(Tile **)(v15 + 8); /*0x5cfe67*/
          v15 = *(_DWORD *)(v15 + 4); /*0x5cfe6d*/
        }
        while ( v15 ); /*0x5cfe72*/
        if ( v16 ) /*0x5cfe76*/
        {
          if ( !v15 ) /*0x5cfe7e*/
          {
            v18 = v17; /*0x5cfec5*/
LABEL_19:
            if ( v18 ) /*0x5cfec9*/
            {
              InterfaceManager_GetSingleton(0, 1); /*0x5cfecf*/
              Singleton = InterfaceManager_GetSingleton(0, 1); /*0x5cfed8*/
              v20 = (double)(int)++Singleton->unk08C; /*0x5cfee4*/
              if ( (int)Singleton->unk08C < 0 ) /*0x5cfef7*/
                v20 = v20 + flt_A2FC78; /*0x5cfef9*/
              a2 = v20; /*0x5cff02*/
              Tile_SetFloat(v18, 0xFF0u, a2); /*0x5cff0c*/
            }
            goto LABEL_23; /*0x5cff0c*/
          }
          do /*0x5cfea4*/
          {
            v18 = *(Tile **)(v15 + 8); /*0x5cfe80*/
            v15 = *(_DWORD *)(v15 + 4); /*0x5cfe86*/
          }
          while ( v15 && Tile_GetFloat(v18, 0xFA1) == fConstant_1 ); /*0x5cfea4*/
          if ( v18 && Tile_GetFloat(v18, 0xFA1) != fConstant_1 ) /*0x5cfec1*/
            goto LABEL_19; /*0x5cfec1*/
        }
      }
LABEL_23:
      if ( !*((_DWORD *)a1 + 0x11) ) /*0x5cff19*/
      {
        if ( *((_DWORD *)a1 + 0x12) ) /*0x5d0176*/
        {
          v37 = (unsigned __int16 *)OblivionDynamicCast( /*0x5d0192*/
                                      InventoryEntryOfItem->type,
                                      0,
                                      (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                      &TESEnchantableForm `RTTI Type Descriptor',
                                      0);
          v50 = 0x7FFFFFFF; /*0x5d019c*/
          if ( v37 ) /*0x5d01a4*/
            v50 = v37[4]; /*0x5d01aa*/
          a2a = EquippedEntryData_GetCharge(InventoryEntryOfItem); /*0x5d01b8*/
          v42 = (float)v50; /*0x5d01c0*/
          sub_5483E0(v42, a2a); /*0x5d01c3*/
          v39 = v38; /*0x5d01c8*/
          if ( v38 <= 1 ) /*0x5d01d0*/
            v39 = 1; /*0x5d01d2*/
          if ( sub_5E4420((Actor *)reference) < v39 ) /*0x5d01e4*/
          {
            ShowUIMessageBox(v40, a3, a4, a5, (char *)MEMORY[0xB38DB0].value, 0, 1, (char *)MEMORY[0xB38CF0].value, 0); /*0x5d024b*/
          }
          else
          {
            a2b = stru_B38D20.value; /*0x5d01f5*/
            value = stru_B38858.value; /*0x5d01f7*/
            dword_B3B704[1] = (int)a11; /*0x5d01f8*/
            dword_B3B704[2] = v39; /*0x5d0208*/
            _sprintf(v52, "%s %d %s?", value, v39, a2b); /*0x5d020e*/
            ShowUIMessageBox( /*0x5d022e*/
              v52,
              a3,
              a4,
              a5,
              v52,
              (int)sub_5CF9B0,
              1,
              (char *)MEMORY[0xB38CF8].value,
              (char)MEMORY[0xB38D00].value);
          }
          sub_65DD20(reference); /*0x5d0259*/
        }
        goto LABEL_68; /*0x5d0259*/
      }
      ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)InventoryEntryOfItem->extendData->node.data); /*0x5cff32*/
      v22 = 0; /*0x5cff3a*/
      ContainerChanges = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5cff47*/
      v24 = (unsigned __int16 *)OblivionDynamicCast( /*0x5cff4e*/
                                  InventoryEntryOfItem->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESEnchantableForm `RTTI Type Descriptor',
                                  0);
      v49 = 0x7FFFFFFF; /*0x5cff58*/
      if ( v24 ) /*0x5cff60*/
        v49 = v24[4]; /*0x5cff69*/
      v25 = (_DWORD *)FormHeapAlloc(0x14u); /*0x5cff6f*/
      v53 = 0; /*0x5cff7d*/
      if ( v25 ) /*0x5cff84*/
        v22 = (ExtraDataList *)ExtraDataList_constr(v25); /*0x5cff8d*/
      type = InventoryEntryOfItem->type; /*0x5cff8f*/
      v53 = 0xFFFFFFFF; /*0x5cff99*/
      EntryForForm = (int **)ContainerExtraData_GetEntryForForm(ContainerChanges, type, 1, 0); /*0x5cffa9*/
      v28 = **v46; /*0x5cffb1*/
      if ( ExtraDataList_GetExtraCount(v28) == 1 ) /*0x5cffbe*/
      {
        if ( v22 ) /*0x5cffc2*/
          (*(void (__thiscall **)(ExtraDataList *, int))v22->vtbl)(v22, 1); /*0x5cffcc*/
        v22 = v28; /*0x5cffce*/
      }
      else
      {
        BaseExtraList_Copy(v22, **v46); /*0x5cffdd*/
        ExtraDataList_SetExtraCount(v22, 1); /*0x5cffe6*/
      }
      if ( ExtraDataList_GetExtraCount(v28) > 1 ) /*0x5cfff6*/
        ExtraDataList_SetExtraCount(v28, ExtraCount - 1); /*0x5cfffe*/
      v47 = EquippedEntryData_GetCharge((EntryData *)v46) + (double)*((int *)a1 + 0x13); /*0x5d0016*/
      ExtraDataList_SetCharge(v22, (BSExtraDataVtbl *)LODWORD(v47)); /*0x5d0021*/
      v48 = (float)v49; /*0x5d002c*/
      Charge = ExtraDataList_GetCharge(v22); /*0x5d0030*/
      if ( v48 > Charge ) /*0x5d0040*/
      {
        InterfaceManager_GetSingleton(0, 1); /*0x5d006e*/
        v30 = sub_5966F0(1); /*0x5d0075*/
        sub_57D300(a11, (Tile *)0xFF0, v30); /*0x5d0087*/
      }
      else
      {
        BaseExtraList_RemoveExtraByType(v22, 0x2Eu); /*0x5d0046*/
        if ( !v22->members.m_data ) /*0x5d004b*/
        {
          if ( v22 == v28 ) /*0x5d0053*/
            BSSimpleList_Remove(*EntryForForm, (int)v28); /*0x5d0059*/
          (*(void (__thiscall **)(ExtraDataList *, int))v22->vtbl)(v22, 1); /*0x5d0066*/
LABEL_48:
          v33 = *((_DWORD *)a1 + 0x11); /*0x5d00c2*/
          v34 = 0; /*0x5d00cb*/
          if ( *(_DWORD *)v33 ) /*0x5d00c9*/
            v34 = **(BaseExtraList ***)v33; /*0x5d00d1*/
          v35 = *(TESForm **)(v33 + 8); /*0x5d00d3*/
          if ( v35 == (TESForm *)MEMORY[0xB35EE4] ) /*0x5d00dc*/
          {
            if ( v34 ) /*0x5d011e*/
              sub_41F650(v34); /*0x5d0122*/
          }
          else
          {
            reference->vtbl->super.super.super.RemoveItem((TESObjectREFR *)reference, v35, v34, 1, 0, 0, 0, 0, 0, 1, 0); /*0x5d00fe*/
            PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x5d0100*/
          }
          sub_65DD20(reference); /*0x5d012d*/
          sub_57DE50(0x18); /*0x5d0134*/
          if ( Tile_GetFloat((_DWORD *)*((_DWORD *)a1 + 1), 0xFB4) <= fConstant_1 ) /*0x5d0154*/
            sub_5CE9B0((char)EntryForForm, v48, Charge, a6, a7, a8, a9); /*0x5d0168*/
          else
            NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>::NiTPointerListBase<DFALL<RechargeItemAndIndex *>,RechargeItemAndIndex *>( /*0x5d015a*/
              a1,
              Charge,
              0);
          InventoryEntryOfItem = (EntryData *)v46; /*0x5d015f*/
LABEL_68:
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v13); /*0x5d025e*/
          FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x5d0266*/
          return; /*0x5d0266*/
        }
      }
      if ( v22 && v22 != v28 ) /*0x5d0092*/
      {
        for ( i = *EntryForForm; i; i = (int *)i[1] ) /*0x5d0094*/
        {
          v32 = (ExtraDataList *)*i; /*0x5d00a0*/
          if ( !*i ) /*0x5d00a0*/
            break; /*0x5d00a0*/
          if ( !ExtraDataList_CompareList(v32, v22) ) /*0x5d00b0*/
          {
            LOWORD(v36) = ExtraDataList_GetExtraCount(v32) + 1; /*0x5d010e*/
            ExtraDataList_SetExtraCount(v32, v36); /*0x5d0115*/
            goto LABEL_48; /*0x5d011a*/
          }
        }
        BSSimpleList_PushFront(*EntryForForm, (int)v22); /*0x5d00b9*/
      }
      goto LABEL_48; /*0x5d00bd*/
    }
  }
}
