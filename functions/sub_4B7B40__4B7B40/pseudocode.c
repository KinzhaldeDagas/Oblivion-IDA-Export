// Verified: player transition helper for a reference using a linked door. Confirms the supplied TESObjectDOOR matches the reference's base form, obtains its TeleportData target, resolves/loads the destination cell when needed, then calls PlayerCharacter_ChangeCellAndPosition with linked destination position/rotation and handles arrival sound/cell cleanup. Called from TESObjectDOOR_Activate and a route-following script-command wrapper; that wrapper's exact command identity remains Unknown.
void __userpurge TESObjectDOOR_TransitionPlayerThroughLinkedDoor(
        TESForm *a1@<ecx>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st0>,
        double a8@<st6>,
        double a9@<st5>,
        TESObjectREFR *a10)
{
  int v10; // ebx
  TeleportData *TeleportData; // eax
  TeleportData *v12; // ebp
  TESObjectCELL *CellAtCellCoord; // esi
  TESWorldSpace *v14; // edi
  int v16; // edi
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v19; // eax
  TESWorldSpace *WorldSpace; // edi
  TESWorldSpace *v21; // eax
  int *v22; // edi
  char *Head; // eax
  TESObjectREFR *LinkedDoor; // eax
  int *sound; // ecx
  int *v26; // eax
  int *v27; // esi
  TESObjectCELL *v28; // eax
  TESWorldSpace *v29; // [esp+10h] [ebp-Ch]
  TESObjectCELL *v33; // [esp+18h] [ebp-4h]
  TESObjectREFR *v34; // [esp+20h] [ebp+4h]
  TESObjectREFR *v35; // [esp+20h] [ebp+4h]
  char IsInterior; // [esp+20h] [ebp+4h]

  v10 = (int)a1; /*0x4b7b4c*/
  if ( a10 ) /*0x4b7b53*/
  {
    if ( a10->vtbl->GetBaseForm(a10) == a1 ) /*0x4b7b67*/
    {
      TeleportData = TESObjectREFR_GetTeleportData(a10); /*0x4b7b6f*/
      v12 = TeleportData; /*0x4b7b74*/
      if ( TeleportData ) /*0x4b7b78*/
      {
        CellAtCellCoord = sub_42B460(&TeleportData->linkedDoor); /*0x4b7b87*/
        v14 = sub_42B470(&v12->linkedDoor); /*0x4b7b96*/
        v29 = v14; /*0x4b7b98*/
        if ( unk_B35B90 ) /*0x4b7b8e*/
          sub_4BE5A0((_DWORD *)unk_B35B90); /*0x4b7b9e*/
        if ( g_DistantLODLoaderTasksByCell ) /*0x4b7ba3*/
          sub_4BD980(g_DistantLODLoaderTasksByCell); /*0x4b7bad*/
        if ( CellAtCellCoord ) /*0x4b7bb4*/
          goto LABEL_13; /*0x4b7bb4*/
        if ( v14 ) /*0x4b7bb8*/
        {
          _EAX = EmbeddedList_GetHead((char *)v12); /*0x4b7bc0*/
          __asm /*0x4b7bc5*/
          {
            fld     dword ptr [eax]
            fstp    [esp+1Ch+var_8]
            fld     [esp+1Ch+var_8]
            fistp   [esp+1Ch+arg_0]
          }
          v16 = (int)v34 >> 0xC; /*0x4b7bd9*/
          _EAX = EmbeddedList_GetHead((char *)v12); /*0x4b7bdc*/
          __asm /*0x4b7be1*/
          {
            fld     dword ptr [eax+4]
            fstp    [esp+1Ch+var_8]
            fld     [esp+1Ch+var_8]
            fistp   [esp+1Ch+arg_0]
          }
          CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v29, v16, (int)v35 >> 0xC); /*0x4b7c02*/
          if ( CellAtCellCoord /*0x4b7c17*/
            || (CellAtCellCoord = (TESObjectCELL *)TESWorldSpace_LoadExteriorCellAtCoord(
                                                     v29,
                                                     a5,
                                                     a6,
                                                     a7,
                                                     v16,
                                                     (int)v35 >> 0xC)) != 0 )
          {
            v10 = (int)a1; /*0x4b7c1d*/
LABEL_13:
            DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4b7c21*/
            v33 = DwordAtOffset40; /*0x4b7c2e*/
            if ( DwordAtOffset40 ) /*0x4b7c32*/
              IsInterior = TESObjectCELL_IsInterior(DwordAtOffset40); /*0x4b7c3b*/
            else
              IsInterior = 0; /*0x4b7c41*/
            if ( Shared_GetDwordAtOffset40(reference) ) /*0x4b7c4c*/
            {
              v19 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4b7c5b*/
              WorldSpace = TESObjectCELL_GetWorldSpace(v19); /*0x4b7c67*/
            }
            else
            {
              WorldSpace = 0; /*0x4b7c6b*/
            }
            v21 = TESObjectCELL_GetWorldSpace(CellAtCellCoord); /*0x4b7c6f*/
            if ( WorldSpace ) /*0x4b7c76*/
            {
              if ( v21 ) /*0x4b7c7a*/
              {
                if ( WorldSpace != v21 && (*(_BYTE *)(v10 + 0x64) & 1) == 0 ) /*0x4b7c84*/
                  Sky_CreateOrGetGlobalObject()->weatherOverride = 0; /*0x4b7c8b*/
              }
            }
            v22 = (int *)sub_42B430((char *)v12); /*0x4b7c9b*/
            Head = EmbeddedList_GetHead((char *)v12); /*0x4b7c9d*/
            PlayerCharacter_ChangeCellAndPosition( /*0x4b7cd5*/
              (TESObjectREFR *)reference,
              a7,
              a4,
              a5,
              a6,
              a2,
              a3,
              a8,
              a9,
              *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))Head,
              *((NiAVObject *(__thiscall **)(NiAVObject *, const char *))Head + 1),
              *((void *(__thiscall **)(NiAVObject *))Head + 2),
              *v22,
              v22[1],
              v22[2],
              CellAtCellCoord,
              0);
            sub_4B7720(); /*0x4b7cdc*/
            if ( TESObjectCELL_IsInterior(CellAtCellCoord) ) /*0x4b7ce7*/
              sub_4CB040((TESObjectREFR **)CellAtCellCoord); /*0x4b7cf2*/
            if ( *(_DWORD *)(v10 + 0x5C) ) /*0x4b7cf7*/
            {
              if ( TeleportData_GetLinkedDoor(v12) ) /*0x4b7cff*/
              {
                LinkedDoor = TeleportData_GetLinkedDoor(v12); /*0x4b7d0a*/
                if ( LinkedDoor->vtbl->GetNiNode(LinkedDoor) ) /*0x4b7d19*/
                {
                  sound = (int *)MEMORY[0xB33398]->sound; /*0x4b7d25*/
                  if ( sound ) /*0x4b7d2a*/
                  {
                    v26 = OSGLobals_PlaySound(sound, *(void **)(*(_DWORD *)(v10 + 0x5C) + 0xC), 0x121, 0); /*0x4b7d3a*/
                    v27 = v26; /*0x4b7d3f*/
                    if ( v26 ) /*0x4b7d43*/
                    {
                      sub_6B7190(v26, 0); /*0x4b7d49*/
                      sub_6B73E0(v27); /*0x4b7d50*/
                      FormHeapFree((unsigned int)v27); /*0x4b7d56*/
                    }
                  }
                }
              }
            }
            v28 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x4b7d64*/
            if ( byte_B13230 ) /*0x4b7d69*/
            {
              if ( byte_B13228 ) /*0x4b7d72*/
              {
                if ( v33 ) /*0x4b7d80*/
                {
                  if ( v28 ) /*0x4b7d84*/
                  {
                    if ( IsInterior != TESObjectCELL_IsInterior(v28) ) /*0x4b7d91*/
                      g_TESSaveLoadGame->flags |= 0x8000u; /*0x4b7d98*/
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
