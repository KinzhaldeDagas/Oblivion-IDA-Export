bool __stdcall TESObjectCELL_IsProcessLevel_LowHigh(TESObjectCELL *a1, bool a2)
{
  if ( !a1 )
    return 0;
  switch ( a1->members.cellProcessLevel )
  {
    case 2u:
    case 3u:
    case 4u:
      if ( a2 )
        return 0;
      break;
    case 5u:
    case 6u:
      return 1;
    default:
      return 0;
  }
  return 1;
}
