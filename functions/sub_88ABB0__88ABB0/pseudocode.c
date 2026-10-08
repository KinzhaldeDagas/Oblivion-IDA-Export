int __cdecl sub_88ABB0(int a1)
{
  int result; // eax
  int v2; // esi
  NiRTTI *v3; // eax
  char v4; // al
  int v5; // esi
  int v6; // eax

  result = a1; /*0x88abb0*/
  v2 = *(_DWORD *)(a1 + 0x10); /*0x88abb5*/
  if ( v2 )
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 4))(*(_DWORD *)(a1 + 0x10)); /*0x88abc3*/
    if ( v3 ) /*0x88abc7*/
    {
      while ( v3 != &stru_BA7D84 ) /*0x88abd5*/
      {
        v3 = v3->parent; /*0x88abd7*/
        if ( !v3 ) /*0x88abdc*/
          goto LABEL_5; /*0x88abdc*/
      }
      v4 = 1; /*0x88ac10*/
    }
    else
    {
LABEL_5:
      v4 = 0; /*0x88abde*/
    }
    result = v4 != 0 ? v2 : 0;
    v5 = result; /*0x88abe6*/
    if ( result ) /*0x88abe8*/
    {
      v6 = *(_DWORD *)(result + 8); /*0x88abea*/
      if ( !v6 ) /*0x88abef*/
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x9C))(v5, 6); /*0x88abef*/
      result = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v6 + 0x50) + 8))(*(_DWORD *)(v6 + 0x50)); /*0x88abf9*/
      if ( result == 7 ) /*0x88abfe*/
        return (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x9C))(v5, 6); /*0x88ac0c*/
    }
  }
  return result; /*0x88ac0e*/
}
