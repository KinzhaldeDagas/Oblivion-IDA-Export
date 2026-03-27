signed int __thiscall sub_485150(EntryData *this)
{
  signed int result; // eax

  switch ( this->type->member.type )
  {
    case kFormType_Apparatus:
    case kFormType_Ingredient:
    case kFormType_AlchemyItem:
      result = 4;
      break;
    case kFormType_Armor:
    case kFormType_Clothing:
      result = 2;
      break;
    case kFormType_Weapon:
    case kFormType_Ammo:
      result = 1;
      break;
    default:
      result = 8;
      break;
  }
  return result;
}
