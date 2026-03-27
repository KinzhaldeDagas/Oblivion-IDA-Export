void __cdecl sub_7165B0(_DWORD *a1, int a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  _DWORD *i; // eax

  if ( a1 )
  {
    if ( a2 )
    {
      v2 = a1[2];
      if ( v2 )
        (*(void (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a2 + 0x50))(a2, v2, a1);
      v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
      v4 = v3;
      if ( v3 )
      {
        v5 = *(unsigned __int16 *)(v3 + 0xB6);
        v6 = 0;
        if ( *(_WORD *)(v4 + 0xB6) )
        {
          if ( v5 )
            goto LABEL_9;
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) )
          {
            sub_7165B0(i, a2);
            if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 )
              break;
LABEL_9:
            ;
          }
        }
      }
    }
  }
}
