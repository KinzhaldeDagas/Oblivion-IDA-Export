// Verified behavior: this script-style wrapper extracts a reference and boolean; true sets a target flag, and when the player's current cell owner matches that reference it temporarily enables TravelPath ignore-locks/minimal-use settings, builds a TravelPath from the player to exterior WorldSpace FormID 0x3C at the origin, restores the settings, finds a route reference, and if it has a linked door calls TESObjectDOOR_TransitionPlayerThroughLinkedDoor. False clears the target flag. Candidate command-dispatch role is supported by Script_ExtractArgs/ParamInfo signature; exact command identity remains Unknown because no Oblivion registration entry, command name, or xref was found.
void __usercall sub_50BB70(
        double st0_0@<st7>,
        double a2@<st4>,
        double st4_0@<st3>,
        double st5_0@<st2>,
        double a5@<st1>,
        double a6@<st6>,
        double a7@<st5>,
        ParamInfo *a1,
        UInt8 *a9,
        TESObjectREFR *a4,
        TESObjectREFR *a11,
        Script *a12,
        ScriptEventList *l,
        int a14,
        UInt32 *a3)
{
  int *v15; // ecx
  ExtraDataList *DwordAtOffset40; // eax
  int v17; // eax
  TESForm *v18; // eax
  TESWorldSpace *v19; // esi
  double v20; // st7
  TESObjectREFR *v21; // edx
  TESObjectREFR *v22; // eax
  TeleportData *TeleportData; // eax
  TeleportData *v24; // esi
  TESObjectREFR *LinkedDoor; // esi
  TESForm *v26; // eax
  TESForm *v27; // eax
  int v28; // edx
  UInt16 v29[2]; // [esp+8h] [ebp-3Ch] BYREF
  int v30; // [esp+Ch] [ebp-38h] BYREF
  int v31; // [esp+10h] [ebp-34h]
  float v32; // [esp+14h] [ebp-30h]
  NiPoint3 destinationPosition; // [esp+18h] [ebp-2Ch] BYREF
  TravelPath v34; // [esp+24h] [ebp-20h] BYREF
  unsigned int v35; // [esp+40h] [ebp-4h]

  *(_DWORD *)v29 = 0; /*0x50bbc1*/
  v30 = 0; /*0x50bbc9*/
  if ( Script_ExtractArgs(a1, a9, a3, a4, a11, a12, l, v29, &v30) ) /*0x50bbd1*/
  {
    v15 = *(int **)v29; /*0x50bbf9*/
    if ( v30 ) /*0x50bbfb*/
    {
      *(_BYTE *)(*(_DWORD *)v29 + 0x34) |= 8u; /*0x50bc01*/
      (*(void (__thiscall **)(int *, int))(*v15 + 0x40))(v15, 4); /*0x50bc0a*/
      DwordAtOffset40 = (ExtraDataList *)Shared_GetDwordAtOffset40(reference); /*0x50bc12*/
      if ( DwordAtOffset40 ) /*0x50bc19*/
      {
        TESObjectCELL_GetOwner(DwordAtOffset40); /*0x50bc21*/
        if ( v17 == *(_DWORD *)v29 ) /*0x50bc2a*/
        {
          sub_675D50((ActorProcessManager *)&qword_B3BB2C[0x75], reference, 0); /*0x50bc3d*/
          LOBYTE(v31) = TravelPath_GetIgnoreLocks(); /*0x50bc49*/
          TravelPath_SetIgnoreLocks(1); /*0x50bc4d*/
          LOBYTE(v32) = TravelPath_GetIgnoreMinUse(); /*0x50bc59*/
          TravelPath_SetIgnoreMinUse(1); /*0x50bc5d*/
          v18 = TESForm_LookupByFormID(0x3Cu); /*0x50bc75*/
          v19 = (TESWorldSpace *)OblivionDynamicCast( /*0x50bc8a*/
                                   v18,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          PathLow_ctor((float *)&v34.vtable); /*0x50bc8c*/
          v20 = flt_A32048; /*0x50bc91*/
          v21 = (TESObjectREFR *)reference; /*0x50bc97*/
          destinationPosition.x = v20; /*0x50bc9d*/
          destinationPosition.y = v20; /*0x50bca2*/
          destinationPosition.z = v20; /*0x50bca8*/
          v35 = 0; /*0x50bcb6*/
          TravelPath_BuildToDestination(&v34, v21, &destinationPosition, 0, v19); /*0x50bcbe*/
          TravelPath_SetIgnoreLocks(v31); /*0x50bcc8*/
          TravelPath_SetIgnoreMinUse(SLOBYTE(v32)); /*0x50bcd2*/
          v22 = (TESObjectREFR *)TravelPath_FindReferenceForWorldspace((char *)&v34, 0, 0); /*0x50bce2*/
          if ( v22 ) /*0x50bce9*/
          {
            TeleportData = TESObjectREFR_GetTeleportData(v22); /*0x50bced*/
            v24 = TeleportData; /*0x50bcf2*/
            if ( TeleportData ) /*0x50bcf6*/
            {
              if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x50bcfa*/
              {
                LinkedDoor = TeleportData_GetLinkedDoor(v24); /*0x50bd0c*/
                v26 = LinkedDoor->vtbl->GetBaseForm(LinkedDoor); /*0x50bd24*/
                v27 = (TESForm *)OblivionDynamicCast( /*0x50bd27*/
                                   v26,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                   &TESObjectDOOR `RTTI Type Descriptor',
                                   0);
                if ( v27 ) /*0x50bd31*/
                  TESObjectDOOR_TransitionPlayerThroughLinkedDoor( /*0x50bd36*/
                    v27,
                    st0_0,
                    a2,
                    st4_0,
                    st5_0,
                    a5,
                    v20,
                    a6,
                    a7,
                    LinkedDoor);                // Verified call edge: after TravelPath_BuildToDestination/TravelPath_FindReferenceForWorldspace finds a route reference and its linked door base form, the wrapper calls TESObjectDOOR_TransitionPlayerThroughLinkedDoor with that linked door and reference. The script command's identity remains Unknown.
              }
            }
          }
          v35 = 0xFFFFFFFF; /*0x50bd3f*/
          PathLow_dtor((int *)&v34); /*0x50bd47*/
        }
      }
    }
    else
    {
      v28 = **(_DWORD **)v29; /*0x50bd5f*/
      *(_BYTE *)(*(_DWORD *)v29 + 0x34) &= ~8u; /*0x50bd61*/
      (*(void (__thiscall **)(int *, int))(v28 + 0x40))(v15, 4); /*0x50bd68*/
    }
  }
}
