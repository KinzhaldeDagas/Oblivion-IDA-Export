void __usercall Cmd_RemoveItem(
        double st5_0@<st2>,
        double a2@<st1>,
        double ActorBaseForm@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a11)
{
  void *v11; // esi
  TESObjectREFR **ContainerChanges; // eax
  Actor *v13; // esi
  BaseExtraList *v14; // ebp
  int ***ContainerExtraDataForRef; // eax
  ExtraDataList *v16; // eax
  char IsObjectEquipped; // bl
  const char *v18; // eax
  const char *NameForForm; // eax
  CHAR *v20; // eax
  const char *ItemUpDownSound; // eax
  double v22; // st7
  const char *v23; // [esp+2Ch] [ebp-148h]
  const char *v24; // [esp+30h] [ebp-144h]
  TESObject *v25; // [esp+48h] [ebp-12Ch] BYREF
  char ArgList[4]; // [esp+4Ch] [ebp-128h] BYREF
  BSStringT a3; // [esp+50h] [ebp-124h] BYREF
  double v28; // [esp+58h] [ebp-11Ch] BYREF
  char v29[260]; // [esp+60h] [ebp-114h] BYREF
  unsigned int v30; // [esp+170h] [ebp-4h]

  a3.m_data = (char *)a11;
  v25 = 0;
  *(_DWORD *)ArgList = 0;
  if ( Script_ExtractArgs(a1, a5, a11, a4, a7, a8, l, &v25, ArgList) )
  {
    if ( a4 )
    {
      v11 = OblivionDynamicCast(
              v25,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      if ( v11 )
      {
        ContainerChanges = (TESObjectREFR **)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
        if ( ContainerChanges )
          v25 = (TESObject *)sub_487760(ContainerChanges, v11);
      }
      v13 = (Actor *)OblivionDynamicCast(
                       a4,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
      if ( v13 )
      {
        v28 = (double)*(int *)ArgList;
        Cmd_GetItemCount(a4, (TESForm *)v25, 0, &v28);
        if ( v28 < (double)*(int *)ArgList )
          *(_DWORD *)ArgList = Double_To_SInt32(ActorBaseForm);
        v14 = 0;
        if ( Actor_IsObjectEquipped((TESObjectREFR *)v13, (int)v25) )
        {
          Actor_GetActorBaseForm(v13, 0);
          ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a4);
          if ( ContainerExtraDataForRef )
          {
            v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v25, 0);
            v14 = (BaseExtraList *)v16;
            if ( v16 )
              sub_41F370(v16, 0);
          }
        }
        if ( *(int *)ArgList > 0 )
        {
          IsObjectEquipped = Actor_IsObjectEquipped((TESObjectREFR *)v13, (int)v25);
          if ( IsObjectEquipped )
            MagicTarget_RemoveBoundObj(v25, 1);
          v13->vtbl->super.super.RemoveItem(
            (TESObjectREFR *)v13,
            (TESForm *)v25,
            v14,
            *(_DWORD *)ArgList,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          if ( v13 == (Actor *)TESDataHandler_g_PlayerRef )
          {
            a3.m_data = 0;
            a3.m_dataLen = 0;
            a3.m_bufLen = 0;
            v30 = 0;
            v24 = (const char *)dword_B382B0;
            if ( *(int *)ArgList <= 1 )
            {
              NameForForm = TESFullName_GetNameForForm((TESForm *)v25);
              BSStringT_Static_Format(&a3, "%s %s", NameForForm, v24);
            }
            else
            {
              v23 = (const char *)sPlural;
              v18 = TESFullName_GetNameForForm((TESForm *)v25);
              BSStringT_Static_Format(&a3, "%i %s%s %s", *(_DWORD *)ArgList, v18, v23, v24);
            }
            v20 = sub_4702D0(v25, (TESObjectREFR *)TESDataHandler_g_PlayerRef);
            _sprintf(v29, "%s\\%s", "Icons", v20);
            ItemUpDownSound = GetItemUpDownSound(v25, 0, 0);
            v22 = fConstant_2;
            QueueUIMessage((char)v14, st5_0, v22, (int)a3.m_data, fConstant_2, (int)v29, (int)ItemUpDownSound);
            sub_57A3B0((char)v14, st5_0, a2, v22, 0);
            v30 = 0xFFFFFFFF;
            BSStringT_Clear((unsigned int *)&a3);
          }
          else if ( IsObjectEquipped )
          {
            if ( v13->members.super.process )
            {
              if ( v13->vtbl->super.super.GetNiNode((TESObjectREFR *)v13) )
                v13->members.super.process->Unk_20(v13->members.super.process, (UInt32)v13, 0);
            }
          }
        }
      }
      else
      {
        a4->vtbl->RemoveItem(a4, (TESForm *)v25, 0, *(_DWORD *)ArgList, 0, 0, 0, 0, 0, 1, 0);
      }
    }
  }
}
