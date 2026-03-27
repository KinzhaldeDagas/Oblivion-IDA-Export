void __cdecl sub_481660(_BYTE *a1)
{
  int v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  _BYTE *i; // eax

  if ( a1 )
  {
    v1 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 4))(a1);
    if ( v1 )
    {
      while ( (char *)v1 != dword_B40864 )
      {
        v1 = *(_DWORD *)(v1 + 4);
        if ( !v1 )
          goto LABEL_5;
      }
      a1[0xEC] = 1;
    }
    else
    {
LABEL_5:
      v2 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a1 + 8))(a1);
      v3 = v2;
      if ( v2 )
      {
        v4 = *(unsigned __int16 *)(v2 + 0xB6);
        v5 = 0;
        if ( *(_WORD *)(v3 + 0xB6) )
        {
          if ( v4 )
            goto LABEL_10;
          for ( i = 0; ; i = *(_BYTE **)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) )
          {
            sub_481660(i);
            if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 )
              break;
LABEL_10:
            ;
          }
        }
      }
    }
  }
}
