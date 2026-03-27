void __cdecl sub_6D43E0(int a1, int a2)
{
  int v2; // eax

  if ( *(_DWORD *)(a1 + 0xD8) < 0xA010068u )
  {
    if ( a2 )
    {
      v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2);
      if ( v2 )
      {
        while ( (char *)v2 != dword_B3F584 )
        {
          v2 = *(_DWORD *)(v2 + 4);
          if ( !v2 )
            return;
        }
        sub_6D42D0(a1, a2);
      }
    }
  }
}
