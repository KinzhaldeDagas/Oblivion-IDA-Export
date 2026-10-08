signed int __usercall sub_7472B0@<eax>(int a1@<eax>)
{
  signed int result; // eax

  sub_746110(a1 + 0x8C, *(_DWORD *)(a1 + 0xB14), (_WORD *)a1); /*0x7472c0*/
  sub_746110(a1 + 0x980, *(_DWORD *)(a1 + 0xB20), (_WORD *)a1); /*0x7472d2*/
  sub_7470B0((_DWORD *)a1, (int *)(a1 + 0xB28)); /*0x7472de*/
  result = 0x12; /*0x7472e6*/
  while ( !*(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FC[result] + 0xA76) ) /*0x747300*/
  {
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FB[result] + 0xA76) ) /*0x747309*/
    {
      --result; /*0x74734c*/
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11; /*0x747353*/
      return result; /*0x74735a*/
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849FA[result] + 0xA76) ) /*0x74731b*/
    {
      result -= 2; /*0x74735b*/
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11; /*0x747362*/
      return result; /*0x747369*/
    }
    if ( *(_WORD *)(a1 + 4 * (unsigned __int8)byte_A849F9[result] + 0xA76) ) /*0x74732d*/
    {
      result -= 3; /*0x74736a*/
      break; /*0x74736a*/
    }
    result -= 4; /*0x747338*/
    if ( result < 3 ) /*0x74733e*/
    {
      *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11; /*0x747344*/
      return result; /*0x74734b*/
    }
  }
  *(_DWORD *)(a1 + 0x16A0) += 3 * result + 0x11; /*0x74736d*/
  return result; /*0x74734a*/
}
