void __cdecl sub_4A0760(int a1, int a2)
{
  unsigned int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( a1 ) /*0x4a0767*/
  {
    if ( a2 ) /*0x4a0770*/
    {
      for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i ) /*0x4a0772*/
      {
        v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i); /*0x4a078b*/
        if ( v3 ) /*0x4a0790*/
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3); /*0x4a0799*/
          if ( v4 ) /*0x4a079d*/
          {
            sub_4A0760(v4, a2); /*0x4a07a1*/
          }
          else
          {
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3); /*0x4a07b2*/
            if ( v5 ) /*0x4a07b6*/
            {
              v6 = *(_DWORD *)(v5 + 0xB8); /*0x4a07b8*/
              if ( v6 ) /*0x4a07c0*/
                *(_DWORD *)(v6 + 0x10) = a2; /*0x4a07c2*/
            }
          }
        }
      }
    }
  }
}
