// Verified control flow: returns 2 for form-type bytes {0x13,0x14,0x15,0x16,0x19,0x1B,0x21,0x22,0x26,0x27,0x28,0x2A}, 3 for {0x23,0x24}, otherwise 1. Probable semantic name TESForm_GetLODMult is supported by the direct queued-tree argument use and Fallout's named TES::GetLODMult; individual type-group meanings are not decoded here.
int __cdecl TESForm_GetLODMult(TESForm *form)
{
  int result; // eax

  switch ( form->member.type ) /*0x4a2a47*/
  {
    case kFormType_Apparatus: /*0x4a2a47*/
    case kFormType_Armor: /*0x4a2a47*/
    case kFormType_Book: /*0x4a2a47*/
    case kFormType_Clothing: /*0x4a2a47*/
    case kFormType_Ingredient: /*0x4a2a47*/
    case kFormType_Misc: /*0x4a2a47*/
    case kFormType_Weapon: /*0x4a2a47*/
    case kFormType_Ammo: /*0x4a2a47*/
    case kFormType_SoulGem: /*0x4a2a47*/
    case kFormType_Key: /*0x4a2a47*/
    case kFormType_AlchemyItem: /*0x4a2a47*/
    case kFormType_SigilStone: /*0x4a2a47*/
      result = 2; /*0x4a2a54*/
      break; /*0x4a2a59*/
    case kFormType_NPC: /*0x4a2a47*/
    case kFormType_Creature: /*0x4a2a47*/
      result = 3; /*0x4a2a4e*/
      break; /*0x4a2a53*/
    default:
      result = 1; /*0x4a2a5a*/
      break; /*0x4a2a5a*/
  }
  return result; /*0x4a2a53*/
}
