void __usercall Cmd_EquipItem(
        double st0_0@<st7>,
        double a2@<st6>,
        double st2_0@<st5>,
        double st3_0@<st4>,
        double a5@<st3>,
        double a6@<st2>,
        double a7@<st1>,
        double a8@<st0>,
        ParamInfo *a1,
        UInt8 *a10,
        TESObjectREFR *a4,
        TESObjectREFR *a12,
        Script *a13,
        ScriptEventList *l,
        int a15,
        UInt32 *a3)
{
  PlayerCharacter *v16; // eax
  PlayerCharacter *v17; // ebp
  ExtraContainerChanges_Data *ContainerChanges; // eax
  EntryData *EntryForForm; // eax
  tListVoid *i; // edi
  ExtraDataList *data; // esi
  const char *NameForForm; // eax
  double v23; // st7
  const char *v24; // eax
  const char *duration; // [esp+20h] [ebp-34h]
  int v26; // [esp+24h] [ebp-30h]
  int v27; // [esp+28h] [ebp-2Ch]
  int v28; // [esp+2Ch] [ebp-28h]
  int v29; // [esp+30h] [ebp-24h]
  int v30; // [esp+34h] [ebp-20h]
  UInt16 v31[2]; // [esp+38h] [ebp-1Ch] BYREF
  BSStringT string; // [esp+3Ch] [ebp-18h] BYREF
  int v33[3]; // [esp+44h] [ebp-10h] BYREF
  unsigned int v34; // [esp+50h] [ebp-4h]

  *(_DWORD *)v31 = 0; /*0x516306*/
  v33[0] = 0; /*0x51630a*/
  if ( Script_ExtractArgs(a1, a10, a3, a4, a12, a13, l, v31, v33) && a4 ) /*0x516330*/
  {
    v16 = (PlayerCharacter *)OblivionDynamicCast( /*0x516343*/
                               a4,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                               &Actor `RTTI Type Descriptor',
                               0);
    v17 = v16; /*0x51634f*/
    LOBYTE(string.m_data) = v33[0] > 0; /*0x516357*/
    if ( *(_DWORD *)v31 ) /*0x516360*/
    {
      if ( v16 ) /*0x516368*/
      {
        ContainerChanges = ExtraDataList_GetContainerChanges(&v16->super.super.super.super.baseExtraList); /*0x516371*/
        if ( ContainerChanges ) /*0x516378*/
        {
          EntryForForm = ContainerExtraData_GetEntryForForm(ContainerChanges, *(TESForm **)v31, 1, 0); /*0x516384*/
          if ( EntryForForm ) /*0x51638b*/
          {
            for ( i = EntryForForm->extendData; i; i = (tListVoid *)i->node.next ) /*0x51638d*/
            {
              data = (ExtraDataList *)i->node.data; /*0x516393*/
              if ( !i->node.data ) /*0x516393*/
                break; /*0x516393*/
              if ( ExtraDataList_HasWorn(data, 0) ) /*0x51639c*/
              {
                ExtraDataList_SetCannotWear(data, (char)string.m_data); /*0x51647b*/
                return; /*0x516480*/
              }
            }
          }
        }
        Actor_EquipItem( /*0x5163b0*/
          v17,
          (unsigned __int16 *)v17,
          a6,
          a7,
          st3_0,
          a8,
          st0_0,
          a5,
          st2_0,
          a2,
          *(TESForm **)v31,
          1,
          0,
          1,
          (int)string.m_data,
          v26,
          v27,
          v28,
          v29,
          v30,
          *(int *)v31,
          (int)string.m_data,
          *(int *)&string.m_dataLen,
          v33[0],
          v33[1],
          v33[2]);
        if ( v17 == reference ) /*0x5163cc*/
        {
          string.m_data = 0; /*0x5163d2*/
          *(_DWORD *)&string.m_dataLen = 0; /*0x5163d6*/
          duration = stru_B382B8.value; /*0x5163ea*/
          v34 = 0; /*0x5163ec*/
          NameForForm = TESFullName_GetNameForForm(*(TESForm **)v31); /*0x5163f0*/
          BSStringT_Static_Format(&string, "%s %s.", NameForForm, duration); /*0x516403*/
          v23 = kTerrainLODQuadRayDirectionZ; /*0x516408*/
          GameUI_QueueMessage(string.m_data, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x51641d*/
          HideEquipment((TESObjectREFR *)reference, a6, a7, v23, *(int *)v31, 0); /*0x516431*/
          sub_668CC0((Concurrency::details::SchedulerBase *)reference, (char)v17, a6, a7); /*0x51643c*/
          ((void (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))reference->super.super.super.process->Unk_10A)( /*0x516456*/
            reference->super.super.super.process,
            reference,
            1,
            0,
            0);
          sub_57A3B0(a6, a7, 0); /*0x516459*/
          v34 = 0xFFFFFFFF; /*0x516465*/
          BSStringT_Clear((unsigned int *)&string); /*0x51646d*/
        }
      }
    }
    else
    {
      v24 = (const char *)((int (__usercall *)@<eax>(Script *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))a13->super.vtbl->GetEditorName)( /*0x51648c*/
                            a13,
                            a8,
                            a7,
                            a6,
                            a5,
                            st3_0,
                            st2_0,
                            a2,
                            st0_0);
      PrintError("EquipItem in script '%s' failed to generate an item.", v24); /*0x516494*/
    }
  }
}
