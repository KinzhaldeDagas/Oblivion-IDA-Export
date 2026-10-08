// Verified actor movement path helper called by CombatController_UpdateMovementAndReachability and other movement callers. Finds a reachable PathGrid node near the actor, checks distance and line of sight, collects enabled linked-point positions into the actor's waypoint list, then updates the movement path. Owner class layout remains Unknown.
bool __thiscall ActorMovement_BuildPathGridWaypointList(void *this)
{
  bool result; // al
  const NiPoint3 *v3; // eax
  TESPathGridPoint *NearestReachablePointForActor; // eax
  TESPathGridPoint *v5; // ebp
  int v6; // edi
  NiPoint3 *Position; // esi
  float *v8; // eax
  MobileObject *v9; // esi
  NiPoint3 *v10; // eax
  BSSimpleList_VoidPtr *v11; // eax
  BSSimpleList_VoidPtr *v12; // edi
  _DWORD *v13; // eax
  BSSimpleList_VoidPtr *next; // ebp
  float *v15; // esi
  void *data; // edi
  NiPoint3 *v17; // eax
  double v18; // st7
  TESObjectREFR *v19; // [esp-4h] [ebp-3Ch]
  NiPoint3 *v20; // [esp+4h] [ebp-34h]
  float v21; // [esp+1Ch] [ebp-1Ch]
  BSSimpleList_VoidPtr *v22; // [esp+1Ch] [ebp-1Ch]
  float v23; // [esp+1Ch] [ebp-1Ch]
  float v24; // [esp+20h] [ebp-18h]
  float y; // [esp+20h] [ebp-18h]
  float v26; // [esp+24h] [ebp-14h]
  float v27; // [esp+24h] [ebp-14h]
  float v28; // [esp+24h] [ebp-14h]
  float x; // [esp+24h] [ebp-14h]
  float z; // [esp+28h] [ebp-10h]

  result = 0; /*0x61c709*/
  if ( *((_BYTE *)this + 0x115) ) /*0x61c70b*/
  {
    if ( *((_DWORD *)this + 0x46) ) /*0x61c717*/
      goto LABEL_29; /*0x61c717*/
    v19 = *((TESObjectREFR **)this + 0xF); /*0x61c733*/
    v3 = (const NiPoint3 *)((int (__fastcall *)(TESObjectREFR *))v19->vtbl->GetPos)(v19); /*0x61c734*/
    NearestReachablePointForActor = TESPathGrid_FindNearestReachablePointForActor(v3, v19, 1, 0); /*0x61c737*/
    v5 = NearestReachablePointForActor; /*0x61c73c*/
    if ( NearestReachablePointForActor ) /*0x61c743*/
    {
      v6 = *((_DWORD *)this + 0xF); /*0x61c749*/
      Position = PathGraphNode_GetPosition(NearestReachablePointForActor); /*0x61c753*/
      v8 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x174))(v6); /*0x61c75f*/
      v24 = *v8 - Position->x; /*0x61c765*/
      v21 = v8[1] - Position->y; /*0x61c76f*/
      v26 = v8[2] - Position->z; /*0x61c779*/
      v27 = v21 * v21 + v24 * v24 + v26 * v26; /*0x61c799*/
      v28 = sqrt(v27); /*0x61c7a6*/
      if ( v28 <= dbl_A2FC70 ) /*0x61c7b9*/
      {
        v9 = *((MobileObject **)this + 0xF); /*0x61c7bf*/
        v20 = PathGraphNode_GetPosition(v5); /*0x61c7c9*/
        v10 = (NiPoint3 *)v9->vtbl->super.GetPos((TESObjectREFR *)v9); /*0x61c7d4*/
        if ( sub_687C30(v9, v10, &v20->x) ) /*0x61c7d8*/
        {
          v11 = (BSSimpleList_VoidPtr *)FormHeapAlloc(8u); /*0x61c7ea*/
          if ( v11 ) /*0x61c7f6*/
          {
            v12 = v11; /*0x61c7f8*/
            v11->firstNode.data = 0; /*0x61c7fa*/
            v11->firstNode.next = 0; /*0x61c7fc*/
            v22 = v11; /*0x61c7ff*/
          }
          else
          {
            v22 = 0; /*0x61c805*/
            v12 = 0; /*0x61c809*/
          }
          sub_4E80B0((char *)v5, flt_A342A4, v12); /*0x61c818*/
          if ( v12 ) /*0x61c81f*/
          {
            if ( !BSSimpleList_IsEmpty(v12) ) /*0x61c827*/
            {
              v13 = (_DWORD *)FormHeapAlloc(8u); /*0x61c832*/
              if ( v13 ) /*0x61c83c*/
              {
                *v13 = 0; /*0x61c83e*/
                v13[1] = 0; /*0x61c840*/
              }
              else
              {
                v13 = 0; /*0x61c845*/
              }
              *((_DWORD *)this + 0x46) = v13; /*0x61c847*/
            }
            next = v12; /*0x61c84d*/
            do /*0x61c8f1*/
            {
              if ( !next->firstNode.next && !next->firstNode.data ) /*0x61c856*/
                break; /*0x61c85a*/
              if ( next->firstNode.data ) /*0x61c860*/
              {
                if ( !PathGraphNode_IsLinkedPointsDisabled(next->firstNode.data) ) /*0x61c86b*/
                {
                  v15 = (float *)FormHeapAlloc(0xCu); /*0x61c87b*/
                  if ( v15 ) /*0x61c88e*/
                  {
                    data = next->firstNode.data; /*0x61c890*/
                    x = PathGraphNode_GetPosition(next->firstNode.data)->x; /*0x61c89e*/
                    y = PathGraphNode_GetPosition(data)->y; /*0x61c8ac*/
                    v17 = PathGraphNode_GetPosition(data); /*0x61c8b0*/
                    v12 = v22; /*0x61c8b8*/
                    z = v17->z; /*0x61c8bc*/
                    *v15 = x; /*0x61c8c4*/
                    v15[1] = y; /*0x61c8ca*/
                    v15[2] = z; /*0x61c8d1*/
                  }
                  else
                  {
                    v15 = 0; /*0x61c8d6*/
                  }
                  BSSimpleList_PushFront(*((_DWORD **)this + 0x46), (int)v15); /*0x61c8e7*/
                }
              }
              next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x61c8ec*/
            }
            while ( next ); /*0x61c8f1*/
            BSSimpleList_Clear(v12); /*0x61c8f9*/
            FormHeapFree((unsigned int)v12); /*0x61c8ff*/
          }
        }
      }
    }
    if ( *((_DWORD *)this + 0x46) || (result = sub_5E1E90(*((void **)this + 0xF))) ) /*0x61c913*/
    {
LABEL_29:
      sub_6160B0((Actor **)this); /*0x61c938*/
      sub_619920((int)this, 0xB); /*0x61c941*/
      if ( sub_5E1E90(*((void **)this + 0xF)) ) /*0x61c949*/
        v18 = flt_A31E2C; /*0x61c952*/
      else
        v18 = *(float *)&dword_A46C30; /*0x61c95a*/
      v23 = v18; /*0x61c960*/
      *((float *)this + 0x35) = *((float *)this + 0x11); /*0x61c969*/
      *((float *)this + 0x36) = v23; /*0x61c973*/
      *((float *)this + 0x37) = kTerrainLODQuadRayDirectionZ; /*0x61c97f*/
      return 1; /*0x61c964*/
    }
    else
    {
      *((_BYTE *)this + 0x115) = 0; /*0x61c91c*/
    }
  }
  return result; /*0x61c922*/
}
