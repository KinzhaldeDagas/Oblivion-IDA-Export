// Classify owner/base form into retail shadow category 0..6: unresolved, architecture, furniture, actors, items, misc, other.
OblivionShadowCasterCategory __cdecl ClassifyShadowCasterCategory(void *owner)
{
  PlayerCharacter *v1; // eax
  OblivionShadowCasterCategory result; // eax

  if ( !owner ) /*0x4e0cf9*/
    return OBL_SHADOW_CATEGORY_UNRESOLVED; /*0x4e0cf9*/
  v1 = sub_4DC270((int)owner); /*0x4e0cfc*/
  if ( !v1 ) /*0x4e0d06*/
    return OBL_SHADOW_CATEGORY_UNRESOLVED; /*0x4e0d58*/
  switch ( v1->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v1)->member.type ) /*0x4e0d27*/
  {
    case kFormType_Activator: /*0x4e0d27*/
    case kFormType_Door: /*0x4e0d27*/
    case kFormType_Stat: /*0x4e0d27*/
      result = OBL_SHADOW_CATEGORY_ARCHITECTURE; /*0x4e0d2e*/
      break; /*0x4e0d34*/
    case kFormType_Armor: /*0x4e0d27*/
    case kFormType_Clothing: /*0x4e0d27*/
    case kFormType_Weapon: /*0x4e0d27*/
    case kFormType_Ammo: /*0x4e0d27*/
      result = OBL_SHADOW_CATEGORY_ITEMS; /*0x4e0d43*/
      break; /*0x4e0d49*/
    case kFormType_Container: /*0x4e0d27*/
    case kFormType_Furniture: /*0x4e0d27*/
      result = OBL_SHADOW_CATEGORY_FURNITURE; /*0x4e0d35*/
      break; /*0x4e0d3b*/
    case kFormType_Ingredient: /*0x4e0d27*/
    case kFormType_Misc: /*0x4e0d27*/
    case kFormType_Key: /*0x4e0d27*/
      result = OBL_SHADOW_CATEGORY_MISC; /*0x4e0d4a*/
      break; /*0x4e0d50*/
    case kFormType_NPC: /*0x4e0d27*/
    case kFormType_Creature: /*0x4e0d27*/
      result = OBL_SHADOW_CATEGORY_ACTORS; /*0x4e0d3c*/
      break; /*0x4e0d42*/
    default:
      result = OBL_SHADOW_CATEGORY_OTHER; /*0x4e0d51*/
      break; /*0x4e0d57*/
  }
  return result; /*0x4e0d33*/
}
