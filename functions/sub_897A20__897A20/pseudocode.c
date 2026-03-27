void __cdecl sub_897A20(int a1, char a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // esi
  int v6; // eax

  if ( a1 )
  {
    v2 = sub_4A05E0(a1);
    if ( v2 )
      *(_WORD *)(v2 + 0xC) |= 0x40u;
    if ( a2 )
    {
      v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
      v4 = v3;
      if ( v3 )
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6);
        if ( *(_WORD *)(v3 + 0xB6) )
        {
          do
          {
            if ( *(unsigned __int16 *)(v4 + 0xB6) > (unsigned int)--v5 )
              v6 = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v5);
            else
              v6 = 0;
            sub_897A20(v6, 1);
          }
          while ( v5 );
        }
      }
    }
  }
}
