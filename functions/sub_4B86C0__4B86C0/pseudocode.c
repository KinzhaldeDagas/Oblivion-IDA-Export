// Verified Fallout corroboration for this Oblivion helper pair: Fallout's FindRandomTeleportTarget calls PlayerCharacter::GetLastSpaceForDoor before selecting among the door's RandomTeleports, avoids the previous index when possible, and calls SetLastSpaceForDoor with the selected index. Oblivion independently proves its helper pair operates on the same per-door remembered-space behavior; only this behavior is treated as shared.
TESChildCELL *__userpurge DoorTeleport_SelectRandomDestinationDoor@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectREFR *a5,
        _BYTE *a6)
{
  TESChildCELL *v7; // ebp
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *SpatialContainerAtPosition; // edi
  TESObjectREFR *v10; // eax
  TESObjectREFR *v11; // esi
  TeleportData *TeleportData; // eax
  TeleportData *v13; // eax
  TESObjectREFR *LinkedDoor; // eax
  int v15; // edx
  unsigned int v16; // esi
  _DWORD *v17; // eax
  TESForm **v18; // eax
  TESForm *v19; // ecx
  TESChildCELL *v20; // eax
  PlayerCharacter *v21; // ecx
  int v22; // edi
  unsigned int i; // edx
  int v24; // eax
  int *v25; // esi
  TESObjectCELL **v26; // eax
  TESObjectCELL *v27; // edx
  int v28; // esi
  TESObjectCELL *v29; // ecx
  TESChildCELL *v30; // eax
  TESWorldSpace *v31; // eax
  TESObjectCELL *v32; // eax
  TESObjectCELL *v33; // esi
  TESChildCELL *v35; // [esp+14h] [ebp-40h] BYREF
  int v36; // [esp+18h] [ebp-3Ch]
  unsigned int v37; // [esp+1Ch] [ebp-38h]
  unsigned int v38; // [esp+20h] [ebp-34h]
  int v39; // [esp+24h] [ebp-30h]
  unsigned int v40[4]; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v41[4]; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v42; // [esp+50h] [ebp-4h]
  TESWorldSpace *WorldSpace; // [esp+58h] [ebp+4h]
  unsigned int v44; // [esp+5Ch] [ebp+8h]

  v36 = a1; /*0x4b86e7*/
  v7 = 0; /*0x4b86f1*/
  v35 = 0; /*0x4b86f5*/
  if ( a5 ) /*0x4b86f9*/
  {
    WorldSpace = TESObjectREFR_GetWorldSpace(a5); /*0x4b8708*/
    if ( !WorldSpace ) /*0x4b870c*/
    {
      if ( Shared_GetDwordAtOffset40(a5) ) /*0x4b8710*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x4b871b*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x4b8722*/
          WorldSpace = (TESWorldSpace *)Shared_GetDwordAtOffset40(a5); /*0x4b8732*/
      }
    }
    SpatialContainerAtPosition = 0; /*0x4b873a*/
    if ( a6 ) /*0x4b873e*/
    {
      v10 = (TESObjectREFR *)sub_4D8E40(a6); /*0x4b8740*/
      v11 = v10; /*0x4b8745*/
      if ( v10 ) /*0x4b8749*/
      {
        if ( TESObjectREFR_GetTeleportData(v10) ) /*0x4b874d*/
        {
          TeleportData = TESObjectREFR_GetTeleportData(v11); /*0x4b8758*/
          if ( TeleportData_GetLinkedDoor(TeleportData) ) /*0x4b875f*/
          {
            v13 = TESObjectREFR_GetTeleportData(v11); /*0x4b876a*/
            LinkedDoor = TeleportData_GetLinkedDoor(v13); /*0x4b8771*/
            SpatialContainerAtPosition = TESObjectREFR_GetSpatialContainerAtPosition(LinkedDoor); /*0x4b877d*/
          }
        }
      }
    }
    if ( WorldSpace ) /*0x4b8783*/
    {
      NiTPointerMap<int,bool>::NiTPointerMap<int,bool>((NiTPointerMap<int,bool> *)v40, 0x25u); /*0x4b878f*/
      v15 = v36; /*0x4b8794*/
      v16 = 0; /*0x4b8798*/
      v17 = (_DWORD *)(v36 + 0x68); /*0x4b879a*/
      v42 = 0; /*0x4b879f*/
      v44 = 0; /*0x4b87a3*/
      v37 = 0; /*0x4b87a7*/
      if ( v36 != 0xFFFFFF98 ) /*0x4b87ab*/
      {
        do /*0x4b87bc*/
        {
          if ( *v17 ) /*0x4b87b0*/
            ++v16; /*0x4b87b4*/
          v17 = (_DWORD *)v17[1]; /*0x4b87b7*/
        }
        while ( v17 ); /*0x4b87bc*/
        v37 = v16; /*0x4b87be*/
      }
      if ( SpatialContainerAtPosition ) /*0x4b87c4*/
      {
        if ( SpatialContainerAtPosition != (TESForm *)WorldSpace ) /*0x4b87ca*/
        {
          v18 = (TESForm **)(v36 + 0x68); /*0x4b87cc*/
          if ( v36 != 0xFFFFFF98 ) /*0x4b87d1*/
          {
            do /*0x4b87d3*/
            {
              v19 = v18[1]; /*0x4b87d3*/
              if ( !v19 && !*v18 ) /*0x4b87da*/
                break; /*0x4b87da*/
              if ( *v18 == SpatialContainerAtPosition ) /*0x4b87e0*/
              {
                v44 = v16; /*0x4b87f5*/
                v20 = (TESChildCELL *)DoorTeleport_FindRandomDestinationDoor( /*0x4b87f9*/
                                        (TESObjectCELL *)SpatialContainerAtPosition,
                                        (unsigned __int8 *)WorldSpace,
                                        (TESObjectREFR **)&v35);// Verified call edge: DoorTeleport_SelectRandomDestinationDoor receives the matched listed space, current WorldSpace, and an output for an already-linked teleport door.
                v15 = v36; /*0x4b87fe*/
                v7 = v20; /*0x4b8805*/
                v35 = 0; /*0x4b8807*/
                break; /*0x4b8807*/
              }
              v18 = (TESForm **)v18[1]; /*0x4b87e2*/
            }
            while ( v19 ); /*0x4b87d3*/
          }
        }
      }
      v21 = reference; /*0x4b880b*/
      v22 = 0xFFFFFFFF; /*0x4b8811*/
      v38 = 0xFFFFFFFF; /*0x4b8815*/
      v39 = (unsigned __int8)PlayerCharacter_GetLastSpaceForDoor(v21, v15);// Verified cross-reference: reads the player's remembered last-space index for this source door before random destination selection; the selected space is compared against this value to avoid an immediate repeat when possible. /*0x4b8825*/
      if ( v44 >= v16 ) /*0x4b8829*/
      {
LABEL_50:
        if ( !v7 ) /*0x4b892b*/
        {
          if ( v35 ) /*0x4b8937*/
          {
            if ( (*(_BYTE *)(v36 + 0x64) & 1) != 0 ) /*0x4b8941*/
            {
              RemoveExtraTeleportFromDoorRef((TESObjectCELL **)v35); /*0x4b8944*/
              v31 = TESObjectREFR_GetWorldSpace((TESObjectREFR *)v35); /*0x4b8950*/
              if ( v31 ) /*0x4b8957*/
              {
                sub_4F2630((int)v31, a2, a3, a4); /*0x4b895b*/
              }
              else
              {
                v32 = (TESObjectCELL *)Shared_GetDwordAtOffset40(v35); /*0x4b8966*/
                v33 = v32; /*0x4b896b*/
                if ( v32 ) /*0x4b896f*/
                {
                  if ( TESObjectCELL_IsInterior(v32) ) /*0x4b8973*/
                  {
                    sub_4B8420(v41, 0x25u); /*0x4b8982*/
                    LOBYTE(v42) = 1; /*0x4b898e*/
                    sub_4CBE50(v33, a2, a3, a4, v41); /*0x4b8993*/
                    NiTMap_Clear(v41); /*0x4b899c*/
                    LOBYTE(v42) = 0; /*0x4b89a5*/
                    NiTPointerMap<TESObjectCELL *,bool>::~NiTPointerMap<TESObjectCELL *,bool>(v41); /*0x4b89a9*/
                  }
                }
              }
              v7 = v35; /*0x4b89ae*/
              v22 = v38; /*0x4b89b2*/
            }
          }
        }
      }
      else
      {
        while ( !v7 ) /*0x4b8837*/
        {
          ++v44; /*0x4b883d*/
          for ( i = Game_RandomLargeInteger(0) % v16; ; i = Game_RandomLargeInteger(0) % v37 ) /*0x4b884d*/
          {
            v22 = i; /*0x4b8853*/
            v24 = (*(int (__thiscall **)(unsigned int *, unsigned int))(v40[0] + 4))(v40, i); /*0x4b885d*/
            v25 = *(int **)(v40[2] + 4 * v24); /*0x4b8863*/
            if ( !v25 ) /*0x4b8868*/
              break; /*0x4b8868*/
            while ( !(*(unsigned __int8 (__thiscall **)(unsigned int *, int, int))(v40[0] + 8))(v40, v22, v25[1]) ) /*0x4b8884*/
            {
              v25 = (int *)*v25; /*0x4b8886*/
              if ( !v25 ) /*0x4b888a*/
                goto LABEL_34; /*0x4b888a*/
            }
            if ( !*((_BYTE *)v25 + 8) ) /*0x4b88ba*/
              break; /*0x4b88ba*/
          }
LABEL_34:
          v26 = (TESObjectCELL **)(v36 + 0x68); /*0x4b888c*/
          v27 = 0; /*0x4b8893*/
          v28 = 0; /*0x4b8895*/
          if ( v36 != 0xFFFFFF98 ) /*0x4b8899*/
          {
            do /*0x4b88a0*/
            {
              v29 = v26[1]; /*0x4b88a0*/
              if ( !v29 && !*v26 ) /*0x4b88a7*/
                break; /*0x4b88a7*/
              if ( v28 == v22 ) /*0x4b88ad*/
              {
                v27 = *v26; /*0x4b88d3*/
                break; /*0x4b88d3*/
              }
              v26 = (TESObjectCELL **)v26[1]; /*0x4b88af*/
              ++v28; /*0x4b88b1*/
            }
            while ( v29 ); /*0x4b88a0*/
          }
          v30 = (TESChildCELL *)DoorTeleport_FindRandomDestinationDoor( /*0x4b88d5*/
                                  v27,
                                  (unsigned __int8 *)WorldSpace,
                                  (TESObjectREFR **)&v35);// Verified call edge: DoorTeleport_SelectRandomDestinationDoor receives a randomly selected listed destination space and returns a random eligible destination door; caller tracks existing ExtraTeleport candidates and avoids a repeated space.
          v7 = v30; /*0x4b88ec*/
          if ( v35 ) /*0x4b88ee*/
          {
            if ( v38 == 0xFFFFFFFF ) /*0x4b88f5*/
              v38 = v22; /*0x4b88f7*/
          }
          if ( v30 ) /*0x4b88fd*/
          {
            if ( v22 == v39 ) /*0x4b8903*/
            {
              v35 = v30; /*0x4b8905*/
              v38 = v22; /*0x4b8909*/
              v7 = 0; /*0x4b890d*/
            }
          }
          NiTMap_SetAt(v40, v28, 1); /*0x4b8916*/
          if ( v44 >= v37 ) /*0x4b8923*/
            goto LABEL_50; /*0x4b8923*/
          v16 = v37; /*0x4b8831*/
        }
      }
      if ( v22 != 0xFFFFFFFF ) /*0x4b89b9*/
        PlayerCharacter_SetLastSpaceForDoor(reference, v36, v22);// Verified cross-reference: commits the chosen destination-space index to the PlayerCharacter per-door last-space map after candidate selection. /*0x4b89c7*/
      v42 = 0xFFFFFFFF; /*0x4b89d0*/
      NiTPointerMap<int,bool>::~NiTPointerMap<int,bool>(v40); /*0x4b89d8*/
    }
  }
  return v7; /*0x4b89df*/
}
