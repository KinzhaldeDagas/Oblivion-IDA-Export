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
  float v22; // [esp+2Ch] [ebp-148h]
  const char *v23; // [esp+30h] [ebp-144h]
  TESObject *v24; // [esp+48h] [ebp-12Ch] BYREF
  char ArgList[4]; // [esp+4Ch] [ebp-128h] BYREF
  BSStringT a3; // [esp+50h] [ebp-124h] BYREF
  double value; // [esp+58h] [ebp-11Ch] BYREF
  char v28[260]; // [esp+60h] [ebp-114h] BYREF
  unsigned int v29; // [esp+170h] [ebp-4h]

  a3.m_data = (char *)a11; /*0x51387c*/
  v24 = 0; /*0x513882*/
  *(_DWORD *)ArgList = 0; /*0x513886*/
  if ( Script_ExtractArgs(a1, a5, a11, a4, a7, a8, l, &v24, ArgList) ) /*0x51389f*/
  {
    if ( a4 ) /*0x5138b1*/
    {
      v11 = OblivionDynamicCast( /*0x5138cf*/
              v24,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESObject `RTTI Type Descriptor',
              &TESLevItem `RTTI Type Descriptor',
              0);
      if ( v11 ) /*0x5138d6*/
      {
        ContainerChanges = (TESObjectREFR **)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList); /*0x5138db*/
        if ( ContainerChanges ) /*0x5138e2*/
          v24 = (TESObject *)sub_487760(ContainerChanges, v11); /*0x5138ec*/
      }
      v13 = (Actor *)OblivionDynamicCast( /*0x513904*/
                       a4,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
      if ( v13 ) /*0x51390b*/
      {
        value = (double)*(int *)ArgList; /*0x513920*/
        GetItemCount_Eval(a4, (TESForm *)v24, 0, &value); /*0x513926*/
        if ( value < (double)*(int *)ArgList ) /*0x51393f*/
          *(_DWORD *)ArgList = Double_To_SInt32(ActorBaseForm); /*0x513946*/
        v14 = 0; /*0x513955*/
        if ( Actor_IsObjectEquipped((TESObjectREFR *)v13, (int)v24) ) /*0x513957*/
        {
          Actor_GetActorBaseForm(v13, 0); /*0x513963*/
          ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef(a4); /*0x513975*/
          if ( ContainerExtraDataForRef ) /*0x51397f*/
          {
            v16 = ExtraContainerChanges_SetEquipped(ContainerExtraDataForRef, (int)v24, 0); /*0x51398a*/
            v14 = (BaseExtraList *)v16; /*0x51398f*/
            if ( v16 ) /*0x513993*/
              ExtraDataList_SetCannotWear(v16, 0); /*0x513999*/
          }
        }
        if ( *(int *)ArgList > 0 ) /*0x5139a3*/
        {
          IsObjectEquipped = Actor_IsObjectEquipped((TESObjectREFR *)v13, (int)v24); /*0x5139b5*/
          if ( IsObjectEquipped ) /*0x5139b9*/
            st5_0 = MagicTarget_RemoveBoundObj( /*0x5139c5*/
                      (int)&v13->members.magicTarget,
                      (char)v14,
                      ActorBaseForm,
                      (TESBoundObject *)v24,
                      1);
          v13->vtbl->super.super.RemoveItem( /*0x5139e9*/
            (TESObjectREFR *)v13,
            (TESForm *)v24,
            v14,
            *(_DWORD *)ArgList,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          if ( v13 == (Actor *)reference ) /*0x5139f1*/
          {
            a3.m_data = 0; /*0x5139f7*/
            a3.m_dataLen = 0; /*0x5139fb*/
            a3.m_bufLen = 0; /*0x513a00*/
            v29 = 0; /*0x513a0a*/
            v23 = stru_B382B0.value; /*0x513a22*/
            if ( *(int *)ArgList <= 1 ) /*0x513a11*/
            {
              NameForForm = TESFullName_GetNameForForm((TESForm *)v24); /*0x513a53*/
              BSStringT_Static_Format(&a3, "%s %s", NameForForm, v23); /*0x513a66*/
            }
            else
            {
              v22 = flt_B37ED0[0xF2]; /*0x513a23*/
              v18 = TESFullName_GetNameForForm((TESForm *)v24); /*0x513a25*/
              BSStringT_Static_Format(&a3, "%i %s%s %s", *(_DWORD *)ArgList, v18, (const char *)LODWORD(v22), v23); /*0x513a3d*/
            }
            v20 = sub_4702D0(v24, (TESObjectREFR *)reference); /*0x513a7a*/
            _sprintf(v28, "%s\\%s", "Icons", v20); /*0x513a8f*/
            ItemUpDownSound = GetItemUpDownSound(v24, 0, 0); /*0x513aa4*/
            QueueUIMessage((char)v14, fConstant_2, a2, a3.m_data, fConstant_2, (int)v28, (int)ItemUpDownSound); /*0x513abe*/
            sub_57A3B0(st5_0, a2, 0); /*0x513ac4*/
            v29 = 0xFFFFFFFF; /*0x513ad0*/
            BSStringT_Clear((unsigned int *)&a3); /*0x513adb*/
          }
          else if ( IsObjectEquipped ) /*0x513ae4*/
          {
            if ( v13->members.super.process ) /*0x513ae6*/
            {
              if ( v13->vtbl->super.super.GetNiNode((TESObjectREFR *)v13) ) /*0x513af5*/
                v13->members.super.process->Unk_20(v13->members.super.process, (UInt32)v13, 0); /*0x513b08*/
            }
          }
        }
      }
      else
      {
        a4->vtbl->RemoveItem(a4, (TESForm *)v24, 0, *(_DWORD *)ArgList, 0, 0, 0, 0, 0, 1, 0); /*0x513b30*/
      }
    }
  }
}
