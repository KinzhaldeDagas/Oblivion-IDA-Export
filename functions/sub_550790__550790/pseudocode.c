NiObject *__cdecl sub_550790(int a1)
{
  NiObject *result; // eax
  unsigned int v2; // edi
  int v3; // esi
  int v4; // ecx

  if ( !a1 )
    return 0;
  v2 = *(unsigned __int16 *)(a1 + 0x14);
  if ( !*(_WORD *)(a1 + 0x14) )
    return 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 0x10);
    if ( *(_DWORD *)(v4 + 4 * (unsigned __int16)v3) )
    {
      result = NiRTTI_Cast(&stru_B39D88, *(NiObject **)(v4 + 4 * (unsigned __int16)v3));
      if ( result )
        break;
    }
    if ( ++v3 >= v2 )
      return 0;
  }
  return result;
}
