NiObject *__cdecl sub_550790(int a1)
{
  NiObject *result; // eax
  unsigned int v2; // edi
  int v3; // esi
  int v4; // ecx

  if ( !a1 ) /*0x550797*/
    return 0; /*0x550799*/
  v2 = *(unsigned __int16 *)(a1 + 0x14); /*0x55079e*/
  if ( !*(_WORD *)(a1 + 0x14) ) /*0x55079e*/
    return 0; /*0x5507a7*/
  v3 = 0; /*0x5507ac*/
  while ( 1 ) /*0x5507b2*/
  {
    v4 = *(_DWORD *)(a1 + 0x10); /*0x5507b2*/
    if ( *(_DWORD *)(v4 + 4 * (unsigned __int16)v3) ) /*0x5507b8*/
    {
      result = NiRTTI_Cast(&stru_B39D88, *(NiObject **)(v4 + 4 * (unsigned __int16)v3)); /*0x5507c5*/
      if ( result ) /*0x5507cf*/
        break; /*0x5507cf*/
    }
    if ( ++v3 >= v2 ) /*0x5507d6*/
      return 0; /*0x5507d8*/
  }
  return result; /*0x55079b*/
}
