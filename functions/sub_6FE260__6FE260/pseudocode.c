char __thiscall sub_6FE260(unsigned __int16 *this, int a2, int a3)
{
  int v3; // esi
  int v5; // eax
  NiRTTI *v6; // eax
  char v7; // al
  int v8; // eax
  _DWORD *v9; // ecx
  int v10; // eax
  int v12; // [esp+8h] [ebp-4h] BYREF

  v3 = a3; /*0x6fe262*/
  if ( a3 )
  {
    v6 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a3 + 4))(a3); /*0x6fe278*/
    if ( v6 ) /*0x6fe27c*/
    {
      while ( v6 != &stru_B3FA80 ) /*0x6fe285*/
      {
        v6 = v6->parent; /*0x6fe287*/
        if ( !v6 ) /*0x6fe28c*/
          goto LABEL_6; /*0x6fe28c*/
      }
      v7 = 1; /*0x6fe2e9*/
    }
    else
    {
LABEL_6:
      v7 = 0; /*0x6fe28e*/
    }
    v5 = v7 != 0 ? v3 : 0;
  }
  else
  {
    v5 = 0; /*0x6fe26d*/
  }
  v12 = v5; /*0x6fe298*/
  if ( !v5 ) /*0x6fe29c*/
    return 0; /*0x6fe29c*/
  v8 = *(_DWORD *)(v5 + 0x1C); /*0x6fe29e*/
  if ( !v8 ) /*0x6fe2a3*/
    return 0; /*0x6fe2a3*/
  v9 = *(_DWORD **)(a2 + 0x488); /*0x6fe2a9*/
  v10 = *(_DWORD *)(v8 + 8); /*0x6fe2b1*/
  a3 = 0; /*0x6fe2b4*/
  if ( !v9 ) /*0x6fe2bc*/
    return 0; /*0x6fe2bc*/
  if ( !v10 ) /*0x6fe2c0*/
    return 0; /*0x6fe2c0*/
  NiTMap_GetAt(v9, v10, &a3); /*0x6fe2c8*/
  if ( !a3 ) /*0x6fe2d2*/
    return 0; /*0x6fe2ee*/
  NiTArray_Add(this + 4, &v12); /*0x6fe2dc*/
  return 1; /*0x6fe2e1*/
}
