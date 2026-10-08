int sub_5E7BE0()
{
  int result; // eax
  int *i; // edi
  int v2; // esi
  int v3; // ecx

  result = ExtraDataList_GetFollowerExtra(); /*0x5e7be3*/
  if ( result ) /*0x5e7bea*/
  {
    for ( i = *(int **)(result + 0xC); i; i = (int *)i[1] ) /*0x5e7bf2*/
    {
      v2 = *i; /*0x5e7bf5*/
      if ( !*i ) /*0x5e7bf5*/
        break; /*0x5e7bf9*/
      v3 = *(_DWORD *)(v2 + 0x58); /*0x5e7bfb*/
      if ( v3 ) /*0x5e7c00*/
      {
        result = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x184))(v3); /*0x5e7c0a*/
        if ( result ) /*0x5e7c0e*/
        {
          if ( *(_BYTE *)(result + 0x20) == 7 ) /*0x5e7c14*/
            result = (*(int (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v2 + 0x58) + 0x17C))( /*0x5e7c23*/
                       *(_DWORD *)(v2 + 0x58),
                       0);
        }
      }
    }
  }
  return result; /*0x5e7c2e*/
}
