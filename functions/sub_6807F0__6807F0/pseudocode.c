// Verified Oblivion route costs: after the access-policy check, a successful TESObjectDOOR_CheckActorAccess with mustLockpickOut=1 adds fPathMustLockpickPenalty (plus zero-valued dbl_A2FC68); a failed check adds fPathImpassableDoorPenalty. Separately, if either endpoint has minimal-use flag and ignore-min-use is false, adds fPathMinimalUseDoorPenalty. Fallout's search uses fixed 409600 penalties for its policy/minimal-use branches, so the numeric behavior differs.
double __thiscall TravelPath_ComputeDoorTransitionPenalty(
        TravelPathSpaceDoorLink *doorLink,
        TESObjectREFR *sourceRefContext)
{
  bool IgnoreLocks; // al
  TESObjectREFR *v4; // edi
  TESObjectREFR *referenceA; // eax
  TESObjectREFR *v6; // ecx
  double v7; // st7
  TESObjectDOOR *v8; // ebp
  TESObjectDOOR *v9; // edi
  float v11; // [esp+8h] [ebp-4h]

  v11 = 0.0; /*0x6807f5*/
  IgnoreLocks = TravelPath_GetIgnoreLocks(); /*0x6807fb*/
  v4 = sourceRefContext; /*0x680802*/
  if ( !IgnoreLocks ) /*0x680806*/
  {
    if ( sourceRefContext ) /*0x68080a*/
    {
      referenceA = doorLink->referenceA; /*0x68080c*/
      if ( referenceA ) /*0x680811*/
      {
        if ( !TESObjectDOOR_CheckActorAccessPolicy(referenceA, (Actor *)sourceRefContext, 0, 1u) ) /*0x680819*/
        {
          v6 = doorLink->referenceA; /*0x680825*/
          LOBYTE(sourceRefContext) = 0; /*0x680828*/
          if ( TESObjectDOOR_CheckActorAccess(v6, (Actor *)v4, (UInt8 *)&sourceRefContext) ) /*0x680833*/
          {
            if ( !(_BYTE)sourceRefContext ) /*0x680852*/
              goto LABEL_10; /*0x680852*/
            v7 = *GameSetting_GetSafeFloatPointer(&fPathMustLockpickPenalty.value) + dbl_A2FC68; /*0x680860*/
          }
          else
          {
            v7 = *GameSetting_GetSafeFloatPointer(&fPathImpassableDoorPenalty.value); /*0x680849*/
          }
          v11 = v7; /*0x680866*/
        }
      }
    }
  }
LABEL_10:
  if ( !TravelPath_GetIgnoreMinUse() ) /*0x68086a*/
  {
    if ( v4 ) /*0x680879*/
    {
      if ( doorLink->referenceA ) /*0x68087f*/
      {
        if ( doorLink->referenceB ) /*0x680889*/
        {
          if ( v4 == (TESObjectREFR *)reference /*0x6808a7*/
            || !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))v4->vtbl[1].GetSleepState)(v4, 1) )
          {
            v8 = 0; /*0x6808b9*/
            if ( doorLink->referenceA->vtbl->GetBaseForm(doorLink->referenceA)->member.type == kFormType_Door ) /*0x6808c1*/
              v8 = (TESObjectDOOR *)doorLink->referenceA->vtbl->GetBaseForm(doorLink->referenceA); /*0x6808d0*/
            v9 = 0; /*0x6808dd*/
            if ( doorLink->referenceB->vtbl->GetBaseForm(doorLink->referenceB)->member.type == kFormType_Door ) /*0x6808e5*/
              v9 = (TESObjectDOOR *)doorLink->referenceB->vtbl->GetBaseForm(doorLink->referenceB); /*0x6808f4*/
            if ( TESObjectDOOR_HasMinUseFlag(v8) || TESObjectDOOR_HasMinUseFlag(v9) ) /*0x680904*/
              return (float)(fPathMinimalUseDoorPenalty.value + v11); /*0x680917*/
          }
        }
      }
    }
  }
  return v11; /*0x68091f*/
}
