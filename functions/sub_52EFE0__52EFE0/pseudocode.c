void __cdecl sub_52EFE0(int a1)
{
  unsigned int v1; // esi
  unsigned int i; // eax
  int v3; // ecx

  if ( a1 ) /*0x52efe6*/
  {
    v1 = *(_DWORD *)(a1 + 0xC); /*0x52efe9*/
    for ( i = 0; i < v1; ++i ) /*0x52eff0*/
    {
      v3 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4 * i); /*0x52eff5*/
      if ( v3 ) /*0x52effa*/
        *(_WORD *)(v3 + 0x20) = i; /*0x52effc*/
    }
  }
}
