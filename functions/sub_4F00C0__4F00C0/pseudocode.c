char __cdecl sub_4F00C0(TESObjectREFR *a1)
{
  char v1; // bl

  v1 = 0;
  if ( a1 )
  {
    switch ( a1->vtbl->GetBaseForm(a1)->member.type )
    {
      case kFormType_Sound:
      case kFormType_Activator:
      case kFormType_Container:
      case kFormType_Door:
      case kFormType_Stat:
      case kFormType_Tree:
      case kFormType_Flora:
      case kFormType_Furniture:
      case kFormType_LeveledCreature:
      case kFormType_SubSpace:
        v1 = 1;
        break;
      default:
        return v1;
    }
  }
  return v1;
}
