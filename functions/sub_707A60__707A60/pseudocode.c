char __stdcall sub_707A60(int a1, int a2)
{
  char result; // al
  int v3; // esi
  int v4; // ebx
  int v5; // edi

  result = a1; /*0x707a60*/
  v3 = *(_DWORD *)(a1 + 8); /*0x707a65*/
  if ( v3 ) /*0x707a6a*/
  {
    v4 = a2; /*0x707a6d*/
    do /*0x707a99*/
    {
      v5 = *(_DWORD *)(v3 + 8); /*0x707a72*/
      v3 = *(_DWORD *)(v3 + 4); /*0x707a78*/
      result = sub_4D6760(*(_DWORD **)(v4 + 4), v5, &a1); /*0x707a84*/
      if ( !result ) /*0x707a8b*/
        result = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, v4); /*0x707a95*/
    }
    while ( v3 ); /*0x707a99*/
  }
  return result; /*0x707a9d*/
}
