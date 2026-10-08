char __cdecl TESContainer_IsInventoryItemType(char a1)
{
  char result; // al

  switch ( a1 ) /*0x469534*/
  {
    case kFormType_Apparatus: /*0x469534*/
    case kFormType_Armor: /*0x469534*/
    case kFormType_Book: /*0x469534*/
    case kFormType_Clothing: /*0x469534*/
    case kFormType_Ingredient: /*0x469534*/
    case kFormType_Light: /*0x469534*/
    case kFormType_Misc: /*0x469534*/
    case kFormType_Weapon: /*0x469534*/
    case kFormType_Ammo: /*0x469534*/
    case kFormType_SoulGem: /*0x469534*/
    case kFormType_Key: /*0x469534*/
    case kFormType_AlchemyItem: /*0x469534*/
    case kFormType_SigilStone: /*0x469534*/
    case kFormType_LeveledItem: /*0x469534*/
      result = 1; /*0x46953b*/
      break; /*0x46953d*/
    default:
      result = 0; /*0x46953e*/
      break; /*0x46953e*/
  }
  return result; /*0x46953d*/
}
