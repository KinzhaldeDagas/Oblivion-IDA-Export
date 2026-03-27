int sub_5E7BE0()
{
  int result; // eax
  int *i; // edi
  int v2; // esi
  int v3; // ecx

  result = GetExtraDataFollower();
  if ( result )
  {
    for ( i = *(int **)(result + 0xC); i; i = (int *)i[1] )
    {
      v2 = *i;
      if ( !*i )
        break;
      v3 = *(_DWORD *)(v2 + 0x58);
      if ( v3 )
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x184))(v3);
        if ( result )
        {
          if ( *(_BYTE *)(result + 0x20) == 7 )
            result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 0x58) + 0x17C))(
                       *(_DWORD *)(v2 + 0x58),
                       0);
        }
      }
    }
  }
  return result;
}
