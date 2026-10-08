signed __int16 __cdecl sub_4DA760(int a1)
{
  unsigned int v1; // edi
  __int16 v2; // bp
  int v3; // ecx
  __int16 v4; // kr00_2

  if ( !a1 || (*(_BYTE *)(a1 + 8) & 8) == 0 ) /*0x4da77a*/
    return 2; /*0x4da7df*/
  v1 = 0; /*0x4da77d*/
  if ( !*(_WORD *)(a1 + 0x46) ) /*0x4da77f*/
    return 2; /*0x4da7d6*/
  v2 = 2; /*0x4da786*/
  do /*0x4da7cb*/
  {
    v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0x40) + 4 * v1); /*0x4da793*/
    if ( v3 ) /*0x4da798*/
    {
      if ( *(_DWORD *)(v3 + 0x44) ) /*0x4da79a*/
      {
        v4 = strlen(*(const char **)(v3 + 8)); /*0x4da7a3*/
        v2 += v4 + BSAnimGroupSequence_GetSaveStateSize() + 1; /*0x4da7bf*/
      }
    }
    ++v1; /*0x4da7c6*/
  }
  while ( v1 < *(unsigned __int16 *)(a1 + 0x46) ); /*0x4da7cb*/
  return v2; /*0x4da7d3*/
}
