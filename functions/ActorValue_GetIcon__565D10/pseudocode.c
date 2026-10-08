int __cdecl ActorValue_GetIcon(unsigned int a1)
{
  int v1; // eax

  if ( a1 <= 0x20 && (v1 = *(_DWORD *)(4 * a1 + 0xB12880)) != 0 ) /*0x565d22*/
    return *(_DWORD *)v1; /*0x565d24*/
  else
    return 0; /*0x565d27*/
}
