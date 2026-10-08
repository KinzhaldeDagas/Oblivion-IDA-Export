int __stdcall sub_48F6A0(int a1)
{
  int result; // eax

  if ( (MEMORY[0xB33E90][0x5B0] & 1) == 0 ) /*0x48f6aa*/
  {
    *(_DWORD *)&MEMORY[0xB33E90][0x5B0] |= 1u; /*0x48f6ac*/
    *(_DWORD *)&MEMORY[0xB33E90][0x5A8] = 0; /*0x48f6b8*/
    *(_WORD *)&MEMORY[0xB33E90][0x5AC] = 0; /*0x48f6be*/
    *(_WORD *)&MEMORY[0xB33E90][0x5AE] = 0; /*0x48f6c5*/
    atexit(sub_A18950); /*0x48f6cc*/
  }
  FormHeapFree(*(_DWORD *)&MEMORY[0xB33E90][0x5A8]); /*0x48f6da*/
  result = 0; /*0x48f6e3*/
  *(_DWORD *)&MEMORY[0xB33E90][0x5A8] = 0; /*0x48f6eb*/
  *(_WORD *)&MEMORY[0xB33E90][0x5AE] = 0; /*0x48f6f0*/
  *(_WORD *)&MEMORY[0xB33E90][0x5AC] = 0; /*0x48f6f7*/
  switch ( a1 ) /*0x48f6fe*/
  {
    case 1: /*0x48f6fe*/
      BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x5A8], "%s\\icon_small_item_pickup.dds", "Icons"); /*0x48f70f*/
      return *(_DWORD *)&MEMORY[0xB33E90][0x5A8]; /*0x48f714*/
    case 2: /*0x48f6fe*/
      BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x5A8], "%s\\icon_enchanted_item.dds", "Icons"); /*0x48f734*/
      return *(_DWORD *)&MEMORY[0xB33E90][0x5A8]; /*0x48f739*/
    case 4: /*0x48f6fe*/
      BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x5A8], "%s\\icon_poisoned_weapon.dds", "Icons"); /*0x48f759*/
      return *(_DWORD *)&MEMORY[0xB33E90][0x5A8]; /*0x48f75e*/
    case 8: /*0x48f6fe*/
      BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x5A8], "%s\\icon_broken_item.dds", "Icons"); /*0x48f77e*/
      return *(_DWORD *)&MEMORY[0xB33E90][0x5A8]; /*0x48f783*/
    default:
      if ( a1 > 0 ) /*0x48f791*/
      {
        BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x5A8], "%s\\icon_image_set_%d.dds", "Icons", a1); /*0x48f7a3*/
        return *(_DWORD *)&MEMORY[0xB33E90][0x5A8]; /*0x48f7a8*/
      }
      break;
  }
  return result; /*0x48f71c*/
}
