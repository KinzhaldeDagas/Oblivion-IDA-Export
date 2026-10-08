// Verified actor package movement helper. Finds a reachable PathGrid point for the requested destination; if it has outgoing connections, selects the first linked node and chooses a randomized intermediate position along that edge. Handles empty/unavailable PathGrids by falling back to terrain height or the actor's current position. Multiple HighProcess package-action callers establish the steering-position role.
float *__thiscall Actor_ChoosePathGridSteeringPosition(
        TESObjectREFR *this,
        float *arg0,
        NiPoint3 a2,
        TESObjectCELL *a4,
        float a5,
        float a3,
        bool pathMode)
{
  TESObjectCELL *v7; // esi
  TESPathGridPoint *NearestReachablePointForActor; // eax
  TESPathGridPoint *v10; // esi
  BSSimpleList_VoidPtr *Connections; // eax
  void *data; // edi
  NiPoint3 *Position; // eax
  TESObjectREFRVtbl *v14; // edx
  NiPoint3 *v15; // eax
  float v16; // edi
  float v17; // ebx
  float v18; // ebp
  NiPoint3 *v19; // eax
  double v20; // st7
  float x; // esi
  float y; // edx
  float z; // ecx
  NiPoint3 *v24; // eax
  double v25; // st7
  TESObjectREFRVtbl *vtbl; // edx
  float *v27; // eax
  double v29; // [esp+10h] [ebp-18h] BYREF
  float v30; // [esp+18h] [ebp-10h]
  float v31; // [esp+1Ch] [ebp-Ch]
  float v32; // [esp+20h] [ebp-8h]
  float v33; // [esp+24h] [ebp-4h]

  v7 = a4; /*0x5e2e26*/
  if ( !a4 ) /*0x5e2e2f*/
    goto LABEL_21; /*0x5e2e2f*/
  if ( !sub_4AF170(a4) ) /*0x5e2e3e*/
  {
    if ( !TESObjectCELL_IsInterior(v7) ) /*0x5e302d*/
    {
      GetTerrainHeight(MEMORY[0xB333A0], &a2.x, &a3); /*0x5e3046*/
      a3 = a3 + dbl_A46970; /*0x5e305a*/
      if ( LOBYTE(a5) || a2.z < (double)a3 ) /*0x5e306f*/
        a2.z = a3; /*0x5e3071*/
    }
LABEL_21:
    x = a2.x; /*0x5e3079*/
    y = a2.y; /*0x5e307d*/
    z = a2.z; /*0x5e3081*/
    goto LABEL_22; /*0x5e3081*/
  }
  NearestReachablePointForActor = TESPathGrid_FindNearestReachablePointForActor(&a2, this, pathMode, 0); /*0x5e2e51*/
  v10 = NearestReachablePointForActor; /*0x5e2e56*/
  if ( !NearestReachablePointForActor ) /*0x5e2e5d*/
    goto LABEL_16; /*0x5e2e5d*/
  Connections = PathGraphNode_GetConnections(NearestReachablePointForActor); /*0x5e2e65*/
  if ( !Connections || !Connections->firstNode.next && !Connections->firstNode.data ) /*0x5e2e78*/
  {
    if ( !LOBYTE(a3) /*0x5e2ff0*/
      || (v25 = PathGraphNode_GetPosition(v10)->z, vtbl = this->vtbl, v29 = v25, vtbl->GetPos(this)[2] == v25) )
    {
      a2 = *PathGraphNode_GetPosition(v10); /*0x5e2ffb*/
    }
    goto LABEL_16; /*0x5e2ffb*/
  }
  data = Connections->firstNode.data; /*0x5e2e81*/
  if ( !Connections->firstNode.data /*0x5e2ed0*/
    || LOBYTE(a3)
    && (Position = PathGraphNode_GetPosition(Connections->firstNode.data),
        v14 = this->vtbl,
        v29 = Position->z,
        a3 = v29 - v14->GetPos(this)[2],
        a3 = fabs(a3),
        a3 >= (double)flt_A6B324) )
  {
LABEL_16:
    v27 = this->vtbl->GetPos(this); /*0x5e300d*/
    x = *v27; /*0x5e3019*/
    a2.x = *v27; /*0x5e301b*/
    y = v27[1]; /*0x5e301f*/
    a2.y = y; /*0x5e3022*/
    z = v27[2]; /*0x5e3026*/
    goto LABEL_22; /*0x5e3029*/
  }
  v15 = PathGraphNode_GetPosition(data); /*0x5e2ed8*/
  v16 = v15->x; /*0x5e2edd*/
  v17 = v15->y; /*0x5e2edf*/
  v18 = v15->z; /*0x5e2ee2*/
  v31 = v15->x; /*0x5e2ee7*/
  v32 = v17; /*0x5e2eeb*/
  v33 = v18; /*0x5e2eef*/
  v19 = PathGraphNode_GetPosition(v10); /*0x5e2ef3*/
  *(float *)&v29 = v31 - v19->x; /*0x5e2f02*/
  *((float *)&v29 + 1) = v17 - v19->y; /*0x5e2f0d*/
  v30 = v18 - v19->z; /*0x5e2f18*/
  a5 = Vector3_NormalizeInPlace((float *)&v29); /*0x5e2f23*/
  LODWORD(a3) = Game_RandomLargeInteger(0) % 0x3E8; /*0x5e2f37*/
  a3 = (double)SLODWORD(a3) / dbl_A2FC70 * a5; /*0x5e2f4f*/
  v20 = a3; /*0x5e2f5b*/
  if ( a3 <= (double)a5 ) /*0x5e2f60*/
  {
    v31 = *(float *)&v29 * v20; /*0x5e2f77*/
    v32 = *((float *)&v29 + 1) * v20; /*0x5e2f81*/
    v33 = v20 * v30; /*0x5e2f89*/
    v24 = PathGraphNode_GetPosition(v10); /*0x5e2f8d*/
    *(float *)&v29 = v24->x + v31; /*0x5e2f98*/
    x = *(float *)&v29; /*0x5e2f9c*/
    *((float *)&v29 + 1) = v24->y + v32; /*0x5e2fa7*/
    y = *((float *)&v29 + 1); /*0x5e2fab*/
    v30 = v24->z + v33; /*0x5e2fb6*/
    z = v30; /*0x5e2fba*/
  }
  else
  {
    x = v16; /*0x5e2f64*/
    y = v17; /*0x5e2f66*/
    z = v18; /*0x5e2f68*/
  }
LABEL_22:
  *arg0 = x; /*0x5e3085*/
  arg0[1] = y; /*0x5e308e*/
  arg0[2] = z; /*0x5e3091*/
  return arg0; /*0x5e3089*/
}
