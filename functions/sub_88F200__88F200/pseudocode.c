int __cdecl sub_88F200(int a1)
{
  int v1; // edi
  int v2; // esi
  unsigned int v3; // eax
  int v4; // edx
  int v5; // esi
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // esi
  int i; // eax

  v1 = 0;
  if ( a1 )
  {
    v1 = sub_497420(a1);
    if ( !v1 )
    {
      v2 = *(_WORD *)(a1 + 0xB6) ? **(_DWORD **)(a1 + 0xB0) : 0;
      v1 = sub_497420(v2);
      if ( !v1 )
      {
        v3 = *(_WORD *)(v2 + 0xB8) != 1;
        if ( *(unsigned __int16 *)(v2 + 0xB6) > v3 )
        {
          v4 = *(_DWORD *)(v2 + 0xB0);
          v5 = *(_DWORD *)(v4 + 4 * v3);
          if ( v5 )
          {
            v1 = sub_497420(*(_DWORD *)(v4 + 4 * v3));
            if ( !v1 )
            {
              v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 8))(v5);
              v7 = v6;
              if ( v6 )
              {
                v8 = *(unsigned __int16 *)(v6 + 0xB6);
                v9 = 0;
                if ( *(_WORD *)(v7 + 0xB6) )
                {
                  if ( v8 )
                    goto LABEL_14;
                  for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) )
                  {
                    v1 = sub_497420(i);
                    if ( v1 )
                      break;
                    if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 )
                      break;
LABEL_14:
                    ;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v1;
}
