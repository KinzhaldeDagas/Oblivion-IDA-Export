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
  PlayerCharacter *v14; // edi
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v16; // eax
  ExtraDataList *v17; // esi
  const char *NameForForm; // eax
  double v19; // st7
  double v20; // st7
  ExtraContainerChanges_Data *v21; // eax
  unsigned int *v22; // eax
  unsigned int *v23; // esi
  ExtraDataList **v24; // eax
  char *v25; // eax
  _DWORD *v26; // eax
  char *v27; // eax
  const char *durationa; // [esp+0h] [ebp-34h]
  char duration; // [esp+0h] [ebp-34h]
  UInt16 v30[2]; // [esp+14h] [ebp-20h] BYREF
  int v31; // [esp+18h] [ebp-1Ch]
  int v32; // [esp+1Ch] [ebp-18h] BYREF
  BSStringT string; // [esp+20h] [ebp-14h] BYREF
  int v34; // [esp+30h] [ebp-4h]

  v12 = 0;
  *(_DWORD *)v30 = 0;
  v32 = 0;
  if ( Script_ExtractArgs(a1, a6, a3, a4, a8, a9, l, v30, &v32) && a4 )
  {
    v13 = (Actor *)OblivionDynamicCast(
                     a4,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                     &Actor `RTTI Type Descriptor',
                     0);
    v14 = (PlayerCharacter *)v13;
    LOBYTE(v31) = v32 > 0;
    if ( *(_DWORD *)v30 )
    {
      if ( v13 )
      {
        Actor_GetActorBaseForm(v13, 0);
        ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a4);
        if ( ContainerExtraDataForRef )
        {
          v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, *(int *)v30, 0);
          v17 = v16;
          if ( v16 )
          {
            sub_41F370(v16, 0);
            Actor_UnequipItem((int)v14, st7_0, a2, st6_0, *(int *)v30, 1, v17, 0, v31, 0);
            if ( v14 == TESDataHandler_g_PlayerRef )
            {
              string.m_data = 0;
              string.m_dataLen = 0;
              string.m_bufLen = 0;
              durationa = (const char *)dword_B382C0;
              v34 = 0;
              NameForForm = TESFullName_GetNameForForm(*(TESForm **)v30);
              BSStringT_Static_Format(&string, "%s %s.", NameForForm, durationa);
              v19 = flt_A30634;
              GameUI_QueueMessage(string.m_data, 0, 1u, flt_A30634);
              HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a2, st6_0, v19, *(int *)v30, 0);
              sub_668CC0((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef, bp0, a2, st6_0, v19);
              v20 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_10A)(
                      TESDataHandler_g_PlayerRef->super.super.super.process,
                      TESDataHandler_g_PlayerRef,
                      1,
                      0,
                      0);
              sub_57A3B0(bp0, a2, st6_0, v20, 0);
              v34 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&string);
            }
          }
        }
      }
    }
    else
    {
      Actor_GetActorBaseForm(v13, 0);
      v21 = ContainerExtraData_GetContainerExtraDataForRef(a4);
      if ( v21 )
      {
        v22 = sub_487D20(v21, *(TESForm **)v30, 0);
        v23 = v22;
        if ( v22 )
        {
          v24 = (ExtraDataList **)*v22;
          if ( *v23 )
          {
            if ( *v24 )
            {
              sub_41F370(*v24, v31);
              return;
            }
            v25 = (char *)FormHeapAlloc(0x14u);
            string.m_data = v25;
            v34 = 1;
            if ( v25 )
              v12 = (ExtraDataList *)ExtraDataList_constr(v25);
            duration = v31;
          }
          else
          {
            v26 = (_DWORD *)FormHeapAlloc(8u);
            if ( v26 )
            {
              *v26 = 0;
              v26[1] = 0;
            }
            else
            {
              v26 = 0;
            }
            *v23 = (unsigned int)v26;
            v27 = (char *)FormHeapAlloc(0x14u);
            string.m_data = v27;
            v34 = 2;
            if ( v27 )
              v12 = (ExtraDataList *)ExtraDataList_constr(v27);
            duration = v31;
          }
          v34 = 0xFFFFFFFF;
          sub_41F370(v12, duration);
          BSSimpleList_PushFront((_DWORD *)*v23, (int)v12);
        }
      }
    }
  }
}
