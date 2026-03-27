char __cdecl TESContainer_IsInventoryItemType(char a1)
{
  char result; // al

  switch ( a1 )
  {
    case kFormType_Apparatus:
    case kFormType_Armor:
    case kFormType_Book:
    case kFormType_Clothing:
    case kFormType_Ingredient:
    case kFormType_Light:
    case kFormType_Misc:
    case kFormType_Weapon:
    case kFormType_Ammo:
    case kFormType_SoulGem:
    case kFormType_Key:
    case kFormType_AlchemyItem:
    case kFormType_SigilStone:
    case kFormType_LeveledItem:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
