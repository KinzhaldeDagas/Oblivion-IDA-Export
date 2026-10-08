signed int __thiscall sub_485150(EntryData *this)
{
  signed int result; // eax

  switch ( this->type->member.type ) /*0x485166*/
  {
    case kFormType_Apparatus: /*0x485166*/
    case kFormType_Ingredient: /*0x485166*/
    case kFormType_AlchemyItem: /*0x485166*/
      result = 4; /*0x485179*/
      break; /*0x48517e*/
    case kFormType_Armor: /*0x485166*/
    case kFormType_Clothing: /*0x485166*/
      result = 2; /*0x485173*/
      break; /*0x485178*/
    case kFormType_Weapon: /*0x485166*/
    case kFormType_Ammo: /*0x485166*/
      result = 1; /*0x48516d*/
      break; /*0x485172*/
    default:
      result = 8; /*0x48517f*/
      break; /*0x48517f*/
  }
  return result; /*0x485172*/
}
