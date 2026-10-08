int __thiscall TESRace_GetBodyModel__(void *this, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  void *v5; // esi

  if ( a3 == 0xF ) /*0x52be87*/
    return sub_52BDB0((int)this, a2); /*0x52bf12*/
  v3 = a3 - 2; /*0x52be8e*/
  if ( (unsigned int)(a3 - 2) > 4 ) /*0x52be94*/
    v3 = 0xFFFFFFFF; /*0x52be96*/
  if ( a2 > 1 || v3 > 4 ) /*0x52bea6*/
    return 0; /*0x52bf07*/
  if ( OB_CompactString_Length_010201A0((void *)(0x18 * (a2 + v3 + 4 * a2) + 0xB36380)) ) /*0x52beba*/
    return 0x18 * (a2 + v3 + 4 * a2) + 0xB36380; /*0x52bec3*/
  if ( a2 ) /*0x52bece*/
    v5 = (void *)(0x18 * v3 + 0xB36380); /*0x52bed8*/
  else
    v5 = (void *)(0x18 * v3 + 0xB363F8); /*0x52bee4*/
  if ( OB_CompactString_Length_010201A0(v5) ) /*0x52beed*/
    return (int)v5; /*0x52bef8*/
  else
    return 0; /*0x52bf00*/
}
