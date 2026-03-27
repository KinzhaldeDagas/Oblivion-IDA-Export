void __cdecl sub_4A0760(int a1, int a2)
{
  unsigned int i; // edi
  int v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // eax

  if ( a1 )
  {
    if ( a2 )
    {
      for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; ++i )
      {
        v3 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i);
        if ( v3 )
        {
          v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
          if ( v4 )
          {
            sub_4A0760(v4, a2);
          }
          else
          {
            v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0xC))(v3);
            if ( v5 )
            {
              v6 = *(_DWORD *)(v5 + 0xB8);
              if ( v6 )
                *(_DWORD *)(v6 + 0x10) = a2;
            }
          }
        }
      }
    }
  }
}
