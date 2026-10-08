void __usercall Cmd_UnequipItem(
        char bp0@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a6,
        TESObjectREFR *a4,
        TESObjectREFR *a8,
        Script *a9,
        ScriptEventList *l,
        int a11,
        UInt32 *a3)
{
  ExtraDataList *v12; // ebx
  Actor *v13; // eax
  Actor *v14; // edi
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v16; // eax
  ExtraDataList *v17; // esi
  const char *NameForForm; // eax
  double v19; // st7
  ExtraContainerChanges_Data *v20; // eax
  unsigned int *v21; // eax
  unsigned int *v22; // esi
  ExtraDataList **v23; // eax
  char *v24; // eax
  _DWORD *v25; // eax
  char *v26; // eax
  const char *durationa; // [esp+0h] [ebp-34h]
  char duration; // [esp+0h] [ebp-34h]
  UInt16 v29[2]; // [esp+14h] [ebp-20h] BYREF
  int v30; // [esp+18h] [ebp-1Ch]
  int v31; // [esp+1Ch] [ebp-18h] BYREF
  BSStringT string; // [esp+20h] [ebp-14h] BYREF
  int v33; // [esp+30h] [ebp-4h]

  v12 = 0; /*0x516512*/
  *(_DWORD *)v29 = 0; /*0x516515*/
  v31 = 0; /*0x516519*/
  if ( Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v29, &v31) && a4 ) /*0x51653e*/
  {
    v13 = (Actor *)OblivionDynamicCast( /*0x516551*/
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v14 = v13; /*0x51655d*/
    LOBYTE(v30) = v31 > 0; /*0x516565*/
    if ( *(_DWORD *)v29 ) /*0x51656e*/
    {
      if ( v13 ) /*0x516576*/
      {
        Actor_GetActorBaseForm(v13, 0); /*0x51657f*/
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a4); /*0x516591*/
        if ( ContainerExtraDataForRef ) /*0x51659b*/
        {
          v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, *(int *)v29, 0); /*0x5165a9*/
          v17 = v16; /*0x5165ae*/
          if ( v16 ) /*0x5165b2*/
          {
            ExtraDataList_SetCannotWear(v16, 0); /*0x5165bb*/
            Actor_UnequipItem(v14, st7_0, a2, st6_0, v29[0], 1, v17, 0, v30, 0); /*0x5165d1*/
            if ( v14 == (Actor *)reference ) /*0x5165dc*/
            {
              string.m_data = 0; /*0x5165e2*/
              string.m_dataLen = 0; /*0x5165e6*/
              string.m_bufLen = 0; /*0x5165eb*/
              durationa = stru_B382C0.value; /*0x5165fa*/
              v33 = 0; /*0x5165fc*/
              NameForForm = TESFullName_GetNameForForm(*(TESForm **)v29); /*0x516600*/
              BSStringT_Static_Format(&string, "%s %s.", NameForForm, durationa); /*0x516613*/
              v19 = kTerrainLODQuadRayDirectionZ; /*0x516618*/
              GameUI_QueueMessage(string.m_data, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x51662d*/
              HideEquipment((TESObjectREFR *)reference, a2, st6_0, v19, *(int *)v29, 0); /*0x516641*/
              sub_668CC0((Concurrency::details::SchedulerBase *)reference, bp0, a2, st6_0); /*0x51664c*/
              ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))reference->super.super.super.process->Unk_10A)( /*0x516666*/
                reference->super.super.super.process,
                reference,
                1,
                0,
                0);
              sub_57A3B0(a2, st6_0, 0); /*0x516669*/
              v33 = 0xFFFFFFFF; /*0x516675*/
              BSStringT_Clear((unsigned int *)&string); /*0x51667d*/
            }
          }
        }
      }
    }
    else
    {
      Actor_GetActorBaseForm(v13, 0); /*0x51669a*/
      v20 = ContainerExtraData_GetContainerExtraDataForRef(a4); /*0x5166ac*/
      if ( v20 ) /*0x5166b6*/
      {
        v21 = sub_487D20(v20, *(TESForm **)v29, 0); /*0x5166c4*/
        v22 = v21; /*0x5166c9*/
        if ( v21 ) /*0x5166cd*/
        {
          v23 = (ExtraDataList **)*v21; /*0x5166d3*/
          if ( *v22 ) /*0x5166d3*/
          {
            if ( *v23 ) /*0x5166d9*/
            {
              ExtraDataList_SetCannotWear(*v23, v30); /*0x5166e4*/
              return; /*0x5166fd*/
            }
            v24 = (char *)FormHeapAlloc(0x14u); /*0x516700*/
            string.m_data = v24; /*0x516708*/
            v33 = 1; /*0x51670e*/
            if ( v24 ) /*0x516716*/
              v12 = (ExtraDataList *)ExtraDataList_constr(v24); /*0x51671f*/
            duration = v30; /*0x516725*/
          }
          else
          {
            v25 = (_DWORD *)FormHeapAlloc(8u); /*0x51672a*/
            if ( v25 ) /*0x516734*/
            {
              *v25 = 0; /*0x516736*/
              v25[1] = 0; /*0x516738*/
            }
            else
            {
              v25 = 0; /*0x51673d*/
            }
            *v22 = (unsigned int)v25; /*0x516741*/
            v26 = (char *)FormHeapAlloc(0x14u); /*0x516743*/
            string.m_data = v26; /*0x51674b*/
            v33 = 2; /*0x516751*/
            if ( v26 ) /*0x516759*/
              v12 = (ExtraDataList *)ExtraDataList_constr(v26); /*0x516762*/
            duration = v30; /*0x516768*/
          }
          v33 = 0xFFFFFFFF; /*0x51676b*/
          ExtraDataList_SetCannotWear(v12, duration); /*0x516773*/
          BSSimpleList_PushFront((_DWORD *)*v22, (int)v12); /*0x51677b*/
        }
      }
    }
  }
}
