void __cdecl sub_897A20(int a1, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax

  if ( a1 ) /*0x897a27*/
  {
    v2 = sub_4A05E0(a1); /*0x897a2a*/
    if ( v2 ) /*0x897a34*/
      *(_WORD *)(v2 + 0xC) |= 0x40u; /*0x897a36*/
    if ( a2 ) /*0x897a40*/
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x897a4a*/
      v4 = v3; /*0x897a4c*/
      if ( v3 ) /*0x897a50*/
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6); /*0x897a52*/
        if ( *(_WORD *)(v3 + 0xB6) ) /*0x897a52*/
        {
          do /*0x897a88*/
          {
            if ( *(unsigned __int16 *)(v4 + 0xB6) > (unsigned int)--v5 ) /*0x897a6c*/
              v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v5); /*0x897a78*/
            else
              v6 = 0; /*0x897a6e*/
            sub_897A20(v6, 1); /*0x897a7e*/
          }
          while ( v5 ); /*0x897a88*/
        }
      }
    }
  }
}
