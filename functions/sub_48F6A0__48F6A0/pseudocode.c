int __stdcall sub_48F6A0(int a1)
{
  int result; // eax

  if ( (dword_B34440 & 1) == 0 )
  {
    dword_B34440 |= 1u;
    dword_B34438 = 0;
    word_B3443C = 0;
    word_B3443E = 0;
    atexit(sub_A18950);
  }
  FormHeapFree(dword_B34438);
  result = 0;
  dword_B34438 = 0;
  word_B3443E = 0;
  word_B3443C = 0;
  switch ( a1 )
  {
    case 1:
      BSStringT_Static_Format((BSStringT *)&dword_B34438, "%s\\icon_small_item_pickup.dds", "Icons");
      return dword_B34438;
    case 2:
      BSStringT_Static_Format((BSStringT *)&dword_B34438, "%s\\icon_enchanted_item.dds", "Icons");
      return dword_B34438;
    case 4:
      BSStringT_Static_Format((BSStringT *)&dword_B34438, "%s\\icon_poisoned_weapon.dds", "Icons");
      return dword_B34438;
    case 8:
      BSStringT_Static_Format((BSStringT *)&dword_B34438, "%s\\icon_broken_item.dds", "Icons");
      return dword_B34438;
    default:
      if ( a1 > 0 )
      {
        BSStringT_Static_Format((BSStringT *)&dword_B34438, "%s\\icon_image_set_%d.dds", "Icons", a1);
        return dword_B34438;
      }
      break;
  }
  return result;
}
