signed int __cdecl sub_4E0CF0(int a1)
{
  PlayerCharacter *v1; // eax
  signed int result; // eax

  if ( !a1 )
    return 0;
  v1 = sub_4DC270(a1);
  if ( !v1 )
    return 0;
  switch ( v1->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v1)->member.type )
  {
    case kFormType_Activator:
    case kFormType_Door:
    case kFormType_Stat:
      result = 1;
      break;
    case kFormType_Armor:
    case kFormType_Clothing:
    case kFormType_Weapon:
    case kFormType_Ammo:
      result = 4;
      break;
    case kFormType_Container:
    case kFormType_Furniture:
      result = 2;
      break;
    case kFormType_Ingredient:
    case kFormType_Misc:
    case kFormType_Key:
      result = 5;
      break;
    case kFormType_NPC:
    case kFormType_Creature:
      result = 3;
      break;
    default:
      result = 6;
      break;
  }
  return result;
}
