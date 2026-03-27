char __cdecl sub_4808A0(int a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int i; // eax

  if ( !a1 )
    return 0;
  v2 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 4))(a1);
  if ( v2 )
  {
    while ( (char *)v2 != dword_B40864 )
    {
      v2 = *(_DWORD *)(v2 + 4);
      if ( !v2 )
        goto LABEL_6;
    }
    return 1;
  }
  else
  {
LABEL_6:
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v4 = v3;
    if ( v3 && (v5 = *(unsigned __int16 *)(v3 + 0xB6), v6 = 0, *(_WORD *)(v4 + 0xB6)) )
    {
      if ( v5 )
        goto LABEL_11;
      for ( i = 0; !sub_4808A0(i); i = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) )
      {
        if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 )
          return 0;
LABEL_11:
        ;
      }
      return 1;
    }
    else
    {
      return 0;
    }
  }
}
