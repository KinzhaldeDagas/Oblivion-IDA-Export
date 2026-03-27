void __cdecl sub_8A5580(int a1, int a2)
{
  int v2; // eax
  int *v3; // ecx
  int v4; // eax
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int i; // eax

  if ( a1 )
  {
    v2 = sub_47FAC0(a1);
    if ( v2 )
    {
      v3 = *(int **)(v2 + 0x10);
      if ( v3 )
      {
        if ( (_BYTE)a2 )
          sub_8A4BA0(v3);
        else
          sub_8A53E0(v3);
      }
    }
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v5 = v4;
    if ( v4 )
    {
      v6 = *(unsigned __int16 *)(v4 + 0xB6);
      v7 = 0;
      if ( *(_WORD *)(v5 + 0xB6) )
      {
        if ( v6 )
          goto LABEL_11;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v7) )
        {
          sub_8A5580(i, a2);
          if ( *(unsigned __int16 *)(v5 + 0xB6) <= (unsigned int)++v7 )
            break;
LABEL_11:
          ;
        }
      }
    }
  }
}
