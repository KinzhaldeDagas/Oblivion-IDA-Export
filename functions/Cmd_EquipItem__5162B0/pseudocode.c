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
  char *v16; // eax
  unsigned __int16 *v17; // ebp
  ExtraContainerChanges_Data *ContainerChanges; // eax
  int *v19; // eax
  int i; // edi
  ExtraDataList *v21; // esi
  const char *NameForForm; // eax
  double v23; // st7
  double v24; // st7
  const char *v25; // eax
  const char *duration; // [esp+20h] [ebp-34h]
  UInt16 v27[2]; // [esp+38h] [ebp-1Ch] BYREF
  BSStringT string; // [esp+3Ch] [ebp-18h] BYREF
  int v29; // [esp+44h] [ebp-10h] BYREF
  unsigned int v30; // [esp+50h] [ebp-4h]

  *(_DWORD *)v27 = 0;
  v29 = 0;
  if ( Script_ExtractArgs(a1, a10, a3, a4, a12, a13, l, v27, &v29) && a4 )
  {
    v16 = (char *)OblivionDynamicCast(
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v17 = (unsigned __int16 *)v16;
    LOBYTE(string.m_data) = v29 > 0;
    if ( *(_DWORD *)v27 )
    {
      if ( v16 )
      {
        ContainerChanges = ExtraDataList_GetContainerChanges((ExtraDataList *)(v16 + 0x44));
        if ( ContainerChanges )
        {
          ContainerExtraData_GetEntryForForm(ContainerChanges, *(int *)v27, 1, 0);
          if ( v19 )
          {
            for ( i = *v19; i; i = *(_DWORD *)(i + 4) )
            {
              v21 = *(ExtraDataList **)i;
              if ( !*(_DWORD *)i )
                break;
              if ( ExtraDataList_HasWorn(v21, 0) )
              {
                sub_41F370(v21, (char)string.m_data);
                return;
              }
            }
          }
        }
        Actor_EquipItem(
          (int)v17,
          v17,
          a6,
          a7,
          st3_0,
          a8,
          st0_0,
          a5,
          st2_0,
          a2,
          *(_BYTE **)v27,
          1,
          0,
          1,
          (char)string.m_data);
        if ( v17 == (unsigned __int16 *)TESDataHandler_g_PlayerRef )
        {
          string.m_data = 0;
          *(_DWORD *)&string.m_dataLen = 0;
          duration = (const char *)dword_B382B8;
          v30 = 0;
          NameForForm = TESFullName_GetNameForForm(*(TESForm **)v27);
          BSStringT_Static_Format(&string, "%s %s.", NameForForm, duration);
          v23 = flt_A30634;
          GameUI_QueueMessage(string.m_data, 0, 1u, flt_A30634);
          HideEquipment((TESObjectREFR *)TESDataHandler_g_PlayerRef, a6, a7, v23, *(int *)v27, 0);
          sub_668CC0((Concurrency::details::SchedulerBase *)TESDataHandler_g_PlayerRef, (char)v17, a6, a7, v23);
          v24 = ((double (__thiscall *)(LowProcess *, PlayerCharacter *, int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->super.super.super.process->Unk_10A)(
                  TESDataHandler_g_PlayerRef->super.super.super.process,
                  TESDataHandler_g_PlayerRef,
                  1,
                  0,
                  0);
          sub_57A3B0((char)v17, a6, a7, v24, 0);
          v30 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&string);
        }
      }
    }
    else
    {
      v25 = (const char *)((int (__usercall *)@<eax>(Script *@<ecx>, double@<st0>, double@<st1>, double@<st2>, double@<st3>, double@<st4>, double@<st5>, double@<st6>, double@<st7>))a13->super.vtbl->GetEditorName)(
                            a13,
                            a8,
                            a7,
                            a6,
                            a5,
                            st3_0,
                            st2_0,
                            a2,
                            st0_0);
      PrintError("EquipItem in script '%s' failed to generate an item.", v25);
    }
  }
}
