void __cdecl sub_4F78B0(Actor *a1, int a2, int a3, double *a4)
{
  *a4 = 0.0; /*0x4f78b7*/
  if ( a1 ) /*0x4f78c0*/
  {
    if ( a1->vtbl->super.super.IsActor((TESObjectREFR *)a1) ) /*0x4f78d0*/
    {
      if ( a1->members.super.process ) /*0x4f78da*/
      {
        if ( Actor::GetCurrentPackage(a1) ) /*0x4f78e6*/
        {
          switch ( Actor::GetCurrentPackage(a1)->members.type ) /*0x4f7907*/
          {
            case kPackageType_Find: /*0x4f7907*/
            case kPackageType_Follow: /*0x4f7907*/
            case kPackageType_Escort: /*0x4f7907*/
            case kPackageType_Eat: /*0x4f7907*/
            case kPackageType_Sleep: /*0x4f7907*/
            case kPackageType_Wander: /*0x4f7907*/
            case kPackageType_Travel: /*0x4f7907*/
            case kPackageType_Accompany: /*0x4f7907*/
            case kPackageType_UseItemAt: /*0x4f7907*/
            case kPackageType_Ambush: /*0x4f7907*/
            case kPackageType_FleeNotCombat: /*0x4f7907*/
            case kPackageType_CastMagic: /*0x4f7907*/
            case kPackageType_Combat: /*0x4f7907*/
            case kPackageType_CombatLow: /*0x4f7907*/
            case kPackageType_Activate: /*0x4f7907*/
            case kPackageType_Alarm: /*0x4f7907*/
            case kPackageType_Flee: /*0x4f7907*/
            case kPackageType_Trespass: /*0x4f7907*/
            case kPackageType_Dialogue: /*0x4f7907*/
            case kPackageType_Spectator: /*0x4f7907*/
            case kPackageType_ReactToDead: /*0x4f7907*/
            case kPackageType_GetUp: /*0x4f7907*/
            case kPackageType_MountHorse: /*0x4f7907*/
            case kPackageType_DismountHorse: /*0x4f7907*/
            case kPackageType_DoNothing: /*0x4f7907*/
            case kPackageType_CastTargetSpell: /*0x4f7907*/
            case kPackageType_CastTouchSpell: /*0x4f7907*/
            case kPackageType_VampireFeed: /*0x4f7907*/
            case kPackageType_Surface: /*0x4f7907*/
            case kPackageType_SearchForAttacker: /*0x4f7907*/
            case kPackageType_ClearMountPosition: /*0x4f7907*/
            case kPackageType_SummonCreatureDefend: /*0x4f7907*/
            case kPackageType_MovementBlocked: /*0x4f7907*/
              JUMPOUT(0x4F7A47); /*0x4f7a47*/
            default:
              JUMPOUT(0x4F7A41); /*0x4f7a41*/
          }
        }
      }
    }
  }
  JUMPOUT(0x4F7A49); /*0x4f7a49*/
}
