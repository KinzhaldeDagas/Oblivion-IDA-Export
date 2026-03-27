void __cdecl sub_8A5720(int a1)
{
  int v1; // eax
  int *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // esi
  int i; // eax

  if ( a1 )
  {
    v1 = sub_47FAC0(a1);
    if ( v1 )
    {
      v2 = *(int **)(v1 + 0x10);
      if ( v2 )
        sub_8A5600(v2);
    }
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v4 = v3;
    if ( v3 )
    {
      v5 = *(unsigned __int16 *)(v3 + 0xB6);
      v6 = 0;
      if ( *(_WORD *)(v4 + 0xB6) )
      {
        if ( v5 )
          goto LABEL_9;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v4 + 0xB0) + 4 * v6) )
        {
          sub_8A5720(i);
          if ( *(unsigned __int16 *)(v4 + 0xB6) <= (unsigned int)++v6 )
            break;
LABEL_9:
          ;
        }
      }
    }
  }
}
