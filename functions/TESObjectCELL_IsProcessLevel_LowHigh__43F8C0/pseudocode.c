bool __stdcall TESObjectCELL_IsProcessLevel_LowHigh(TESObjectCELL *a1, bool a2)
{
  if ( !a1 ) /*0x43f8c6*/
    return 0; /*0x43f8e7*/
  switch ( a1->members.cellProcessLevel ) /*0x43f8d4*/
  {
    case 2u: /*0x43f8d4*/
    case 3u: /*0x43f8d4*/
    case 4u: /*0x43f8d4*/
      if ( a2 ) /*0x43f8e0*/
        return 0; /*0x43f8e0*/
      break; /*0x43f8e0*/
    case 5u: /*0x43f8d4*/
    case 6u: /*0x43f8d4*/
      return 1;
    default:
      return 0;
  }
  return 1; /*0x43f8e4*/
}
