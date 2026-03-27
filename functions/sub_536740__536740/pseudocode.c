void __cdecl sub_536740(int a1)
{
  unsigned int i; // esi

  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 0xA8) )
      sub_435CE0((NiAVObject *)a1, 0);
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) )
    {
      for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; sub_536740(*(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i++)) )
        ;
    }
  }
}
