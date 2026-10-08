// Verified actor-specific path-node cost: apply fPathPreferredPointBonus to preferred nodes for non-creature actors; use point bit 0x10 as an underwater-result cache and bit 0x08 as the node's below-water state; account for swim/movement restrictions and fPathNPCWadingPenalty. It is called by TESConnectedPoint_ComputeActorAwareEdgeCost.
float __thiscall TESObjectREFR_GetPathGraphMovementCost(TESObjectREFR *this, TESConnectedPoint *point)
{
  bool IsBelowWaterFlagSet; // bl
  int *Position; // eax
  TESObjectCELL *v6; // ecx
  bool v7; // zf
  TESObjectCELL *DwordAtOffset40; // eax
  int v9; // eax
  TESWorldSpace *WorldSpace; // eax
  TESActorBase *v11; // ebx
  TESForm *v12; // esi
  float v15; // [esp+1Ch] [ebp-10h]
  int v18; // [esp+20h] [ebp-Ch] BYREF
  float v19; // [esp+24h] [ebp-8h]
  int v20; // [esp+28h] [ebp-4h]
  bool pointa; // [esp+30h] [ebp+4h]

  v15 = 1.0; /*0x5ec1fa*/
  if ( !point ) /*0x5ec203*/
    return v15; /*0x5ec203*/
  if ( PathGraphNode_IsPreferred(point) && this->vtbl->GetBaseForm(this)->member.type != kFormType_Creature ) /*0x5ec224*/
    v15 = 1.0 - g_fPathPreferredPointBonus; /*0x5ec230*/
  pointa = 0; /*0x5ec237*/
  IsBelowWaterFlagSet = 0; /*0x5ec23c*/
  if ( GraphNode_IsFlag01Set(point) || GraphNode_IsFlag02Set(point) ) /*0x5ec24d*/
  {
    pointa = PathGraphNode_IsUnderwaterCacheSet(point); /*0x5ec32e*/
    IsBelowWaterFlagSet = GraphNode_IsBelowWaterFlagSet(point); /*0x5ec337*/
  }
  else
  {
    if ( GraphNode_IsBelowWaterFlagSet(point) ) /*0x5ec25c*/
    {
      IsBelowWaterFlagSet = 1; /*0x5ec26b*/
      Position = (int *)PathGraphNode_GetPosition(point); /*0x5ec26d*/
      v18 = *Position; /*0x5ec274*/
      v6 = (TESObjectCELL *)unk_B3B784; /*0x5ec27b*/
      v7 = unk_B3B784 == 0; /*0x5ec281*/
      v19 = *((float *)Position + 1); /*0x5ec283*/
      v20 = Position[2]; /*0x5ec28a*/
      if ( v7 || !TESObjectCELL_IsInterior(v6) && !sub_4CC540(unk_B3B784, (float *)&v18) ) /*0x5ec2a4*/
      {
        DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x5ec2af*/
        if ( TESObjectCELL_IsInterior(DwordAtOffset40) ) /*0x5ec2b6*/
        {
          v9 = Shared_GetDwordAtOffset40(this); /*0x5ec2c1*/
        }
        else
        {
          WorldSpace = TESObjectREFR_GetWorldSpace(this); /*0x5ec2ca*/
          v9 = (int)sub_44A270((TESWorldSpace **)g_TESDataHandler, *(float *)&v18, v19, WorldSpace, 0); /*0x5ec2e8*/
        }
        unk_B3B784 = v9; /*0x5ec2ed*/
      }
      if ( Actor_IsUnderwater__(this, (int)&v18, (ExtraDataList *)unk_B3B784, flt_A6E688) ) /*0x5ec30a*/
        pointa = 1; /*0x5ec313*/
    }
    PathGraphNode_SetUnderwaterCache(point, pointa); /*0x5ec31e*/
  }
  if ( !pointa ) /*0x5ec340*/
  {
    if ( sub_5E1E90(this) ) /*0x5ec3bf*/
      v15 = g_fPathInvalidMovementTypePenalty + v15; /*0x5ec3d2*/
    if ( IsBelowWaterFlagSet && !sub_5E3400((Actor *)this) ) /*0x5ec3dc*/
      return g_fPathNPCWadingPenalty + v15; /*0x5ec3ef*/
    return v15; /*0x5ec3ef*/
  }
  v11 = 0; /*0x5ec34a*/
  v12 = this->vtbl->GetBaseForm(this); /*0x5ec34e*/
  if ( v12 ) /*0x5ec352*/
  {
    if ( this->vtbl->IsActor(this) ) /*0x5ec35e*/
      v11 = (TESActorBase *)v12; /*0x5ec364*/
  }
  if ( TESActorBase_CanSwim(v11) ) /*0x5ec368*/
  {
    if ( !sub_5EA640(this) && !sub_5E3400((Actor *)this) ) /*0x5ec397*/
      return *GameSetting_GetSafeFloatPointer(unk_B3A418) + v15; /*0x5ec3bc*/
    return v15; /*0x5ec3f4*/
  }
  return g_fPathInvalidMovementTypePenalty + v15; /*0x5ec384*/
}
